-- ============================================================
-- Gilneas stagecoach: idempotent final state for static rideable
--
-- This file can be applied directly to a DB that still has the
-- original moving-escort state. It does NOT use 72767.
--
-- Final state:
--   38755 Stagecoach Harness   VehicleId=970, spellclick 72764
--   43336 Stagecoach Harness   VehicleId=0, no spellclick, no waypoints
--   43338 Stagecoach Horse     VehicleId=0, decorative
--   44928 Stagecoach Carriage  VehicleId=959, spellclick 72764
--
-- 72764 = Ride Vehicle (SPELL_AURA_CONTROL_VEHICLE in 5.4.8 DBC)
-- 72767 = Summon Carriage (Effect 28 SUMMON, not valid for seat click)
-- ============================================================

-- ---------- creature_template ----------

UPDATE creature_template
SET npcflag = 0,
    unit_flags = 0,
    unit_flags2 = 2048,
    VehicleId = 970,
    ScriptName = ''
WHERE entry = 38755;

UPDATE creature_template
SET npcflag = 0,
    unit_flags = 0,
    unit_flags2 = 268437504,
    VehicleId = 0,
    ScriptName = ''
WHERE entry = 43336;

UPDATE creature_template
SET npcflag = 0,
    unit_flags = 0,
    unit_flags2 = 268437504,
    VehicleId = 0,
    ScriptName = ''
WHERE entry = 43338;

UPDATE creature_template
SET npcflag = 0,
    unit_flags = 0,
    unit_flags2 = 2048,
    VehicleId = 959,
    ScriptName = ''
WHERE entry = 44928;

-- ---------- npc_spellclick_spells ----------

DELETE FROM npc_spellclick_spells
WHERE npc_entry IN (38755, 43336, 43338, 44928);

INSERT INTO npc_spellclick_spells (npc_entry, spell_id, cast_flags, user_type) VALUES
    (38755, 72764, 1, 0),
    (44928, 72764, 1, 0);

-- ---------- remove moving escort path ----------

DELETE FROM script_waypoint WHERE entry = 43336;

-- 43336 is no longer a vehicle, so its template accessories are dead
-- and would otherwise log "no data in npc_spellclick_spells" at load.
DELETE FROM vehicle_template_accessory WHERE entry = 43336;
