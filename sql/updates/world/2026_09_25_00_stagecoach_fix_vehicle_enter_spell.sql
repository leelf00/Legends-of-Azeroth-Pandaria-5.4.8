-- ============================================================
-- Gilneas stagecoach: fix vehicle-enter spellclick
--
-- 5.4.8 DBC (SpellEffect.dbc keyed by EffectSpellId, not RowId):
--   72767 = Summon Carriage (Effect 28 SUMMON), not a vehicle-enter aura
--   72764 = Ride Vehicle
--           EffectIndex 0: Effect 6 APPLY_AURA, Aura 236 CONTROL_VEHICLE
--
-- Unit::HandleSpellClick requires CONTROL_VEHICLE when seatId > -1.
-- Replace the invalid 72767 seat-click spell with 72764.
-- ============================================================

DELETE FROM npc_spellclick_spells
WHERE npc_entry IN (38755, 44928)
  AND spell_id IN (72767, 72764);

INSERT INTO npc_spellclick_spells (npc_entry, spell_id, cast_flags, user_type) VALUES
    (38755, 72764, 1, 0),
    (44928, 72764, 1, 0);
