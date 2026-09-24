-- ============================================================
-- Gilneas stagecoach: STEP 2 - remove the moving escort
-- (align with TC 4.3.4: static rideable, no escort path)
--
-- Prereq: STEP 1 (spell click) already applied on world_548:
--   44928, 38755 -> spell 72767, cast_flags=1, npcflag=0
--
-- What this does:
--   * Deletes the 33-point escort path (entry 43336) = the auto-move source
--   * Clears ScriptName on 43336 (EscortAI) + 44928 (carriage C++) so the
--     C++ AIs are disabled (dead once static; TC 4.3.4 has no C++ here)
--   * Removes the now-dead summon-harness (43336) spellclick to match ref
--
-- Backup: backup_43336_44928_stagecoach_original_escort.sql
-- ============================================================

-- 1. Remove the 33-point escort path (the auto-move source)
DELETE FROM script_waypoint WHERE entry = 43336;

-- 2. Disable the C++ escort + carriage AIs
UPDATE creature_template SET ScriptName = '' WHERE entry IN (43336, 44928);

-- 3. Remove the dead summon-harness spellclick (43336 no longer summoned)
DELETE FROM npc_spellclick_spells WHERE npc_entry = 43336;
