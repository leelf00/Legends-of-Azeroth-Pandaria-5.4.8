-- ============================================================
-- Gilneas stagecoach: align with TC 4.3.4 (world_434 reference)
-- Remove the moving C++ escort -> static rideable vehicles
--
-- Target = world_434 behavior, adjusted for 5.4.8 DBC:
--   38755: VehicleId=970, no ScriptName, spellclick 72764 (cf=1)
--   43336: VehicleId=0,   no ScriptName, no spellclick
--   43338: VehicleId=0,   no ScriptName
--   44928: VehicleId=959, no ScriptName, spellclick 72764 (cf=1)
--   no script_waypoint, no smart_scripts
--
-- Already matching:
--   STEP 1 applied: 38755/44928 spellclick existed
--   2026_09_25_00 applied: 38755/44928 spellclick corrected 72767 -> 72764
--
-- This file closes the remaining diffs:
--   * 43336: VehicleId 958 -> 0, clear ScriptName (EscortAI)
--   * 44928: clear ScriptName (carriage C++)
--   * delete the 33-point escort path (entry 43336)
--   * delete 43336's dead summon-harness spellclick (46598)
--
-- Backup: backup_43336_44928_stagecoach_original_escort.sql
-- Applied to world_548 on 2026-09-25.
-- ============================================================

-- 1. 43336: non-vehicle, disable EscortAI
UPDATE creature_template SET VehicleId = 0, ScriptName = '' WHERE entry = 43336;

-- 2. 44928: disable carriage C++ (keep VehicleId=959)
UPDATE creature_template SET ScriptName = '' WHERE entry = 44928;

-- 3. Remove the 33-point escort path (the auto-move source)
DELETE FROM script_waypoint WHERE entry = 43336;

-- 4. Remove 43336's dead summon-harness spellclick (46598)
DELETE FROM npc_spellclick_spells WHERE npc_entry = 43336;
