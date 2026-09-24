-- ============================================================
-- Gilneas stagecoach: align with TC 4.3.4 (world_434 reference)
--
-- STEP 1 (this file): fix the spell click (ride)
--
-- Reference (world_434) spellclick setup for the rideables:
--   44928: npcflag=0, spell 72767, cast_flags=1, user_type=0
--   38755: npcflag=0, spell 72767, cast_flags=1, user_type=0
-- The core adds UNIT_NPC_FLAG_SPELLCLICK at runtime (Vehicle.cpp:52-54)
-- for creatures with usable seats, so the DB npcflag must be 0.
--
-- Note: 38755 currently carries the quest-reward spell 95679; this
-- replaces it with the ride spell (matches the reference). Quest 24438
-- reward delivery must be reworked separately.
--
-- Backup: backup_43336_44928_stagecoach_original_escort.sql
-- ============================================================

-- 44928 (carriage): GOSSIP(0x1) -> 0, spell 46598 -> 72767, cast_flags 0 -> 1
UPDATE creature_template SET npcflag = 0 WHERE entry = 44928;
DELETE FROM npc_spellclick_spells WHERE npc_entry = 44928;
INSERT INTO npc_spellclick_spells (npc_entry, spell_id, cast_flags, user_type) VALUES (44928, 72767, 1, 0);

-- 38755 (harness): SPELLCLICK(0x1000000) -> 0, spell 95679 -> 72767, cast_flags -> 1
UPDATE creature_template SET npcflag = 0 WHERE entry = 38755;
DELETE FROM npc_spellclick_spells WHERE npc_entry = 38755;
INSERT INTO npc_spellclick_spells (npc_entry, spell_id, cast_flags, user_type) VALUES (38755, 72767, 1, 0);

-- ============================================================
-- STEP 2 (next, after spell click verified): remove the moving escort
-- DELETE FROM script_waypoint WHERE entry = 43336;
-- UPDATE creature_template SET ScriptName = '' WHERE entry IN (43336, 44928);
-- ============================================================
