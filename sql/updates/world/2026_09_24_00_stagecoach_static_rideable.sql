-- ============================================================
-- Gilneas stagecoach: moving escort -> 4.3.4-style static rideable
--
-- Converts the stagecoach (quest 24438 "Exodus") from a C++ EscortAI
-- moving escort into a static click-to-ride vehicle, matching TC 4.3.4.
--
-- How the static rideable works after this change:
--   * The ride spellclick (46598 "Ride Vehicle Hardcoded") is ALREADY
--     present on 43336 and 44928, so clicking the carriage/harness
--     makes the player ride it (no C++ needed).
--   * The 33-point escort path is removed, so nothing moves it.
--   * The C++ escort AIs are disabled by clearing ScriptName below.
--
-- Companion C++ (zone_gilneas.cpp): the escort AIs
--   npc_stagecoach_carriage_exodus / npc_stagecoach_harnessAI /
--   npc_ogre_ambusher_exodusAI become dead code once ScriptName is
--   cleared. They can be deleted from the source as a follow-up.
--
-- Backup: backup_43336_44928_stagecoach_original_escort.sql
-- ============================================================

-- 1) Drop the 33-point escort path (43336 no longer moves)
DELETE FROM script_waypoint WHERE entry = 43336;

-- 2) Disable the C++ escort AIs (no gossip-summon, no escort movement)
UPDATE creature_template SET ScriptName = '' WHERE entry IN (43336, 44928);

-- 3) (Optional, full 4.3.4 alignment) Make the persistent harness 38755
--    rideable too, like TC 4.3.4. It currently carries the quest-reward
--    spellclick 95679. WARNING: this removes the click-to-claim on 38755;
--    quest 24438's reward must be reworked separately. Uncomment to apply.
-- DELETE FROM npc_spellclick_spells WHERE npc_entry = 38755 AND spell_id = 95679;
-- INSERT INTO npc_spellclick_spells (npc_entry, spell_id, cast_flags, user_type) VALUES (38755, 46598, 0, 0);
