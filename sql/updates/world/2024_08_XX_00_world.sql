-- The Mission (29548) Pandria part
DELETE FROM `phase_area` WHERE `AreaId`=5853 AND `PhaseId`=1685;
INSERT INTO `phase_area` (`AreaId`, `PhaseId`, `Comment`) 
VALUES (5853, 1685, 'Cosmetic - Jade Forest - Paw\'don Village - Doors Closed');

-- gameboject
SET @OGUID:=4000077;
DELETE FROM `gameobject` WHERE `guid` BETWEEN @OGUID+0 AND @OGUID+29;
INSERT INTO `gameobject` (`guid`, `id`, `map`, `zoneId`, `areaId`, `spawnMask`, `PhaseId`, `PhaseGroup`, `position_x`, `position_y`, `position_z`, `orientation`, `rotation0`, `rotation1`, `rotation2`, `rotation3`, `spawntimesecs`, `animprogress`, `state`, `VerifiedBuild`) VALUES
(@OGUID+0, 213763, 870, 5785, 5853, 1, 1685, 0, -596.3819580078125, -1330.095458984375, 2.430555582046508789, 2.059484481811523437, 0, 0, 0.857166290283203125, 0.515039741992950439, 120, 255, 1, 55939), -- Campfire (Area: Garrosh'ar Point - Difficulty: 0) CreateObject1
(@OGUID+1, 213762, 870, 5785, 5853, 1, 1685, 0, -753.0711669921875, -1370.5816650390625, 3.567708253860473632, 2.408554315567016601, 0, 0, 0.933580398559570312, 0.358368009328842163, 120, 255, 1, 55939), -- Campfire (Area: Garrosh'ar Point - Difficulty: 0) CreateObject1
(@OGUID+2, 213764, 870, 5785, 5853, 1, 1685, 0, -857.8663330078125, -1431.1805419921875, 1.7537384033203125, 1.230455756187438964, 0, 0, 0.577144622802734375, 0.816641986370086669, 120, 255, 1, 55939), -- Campfire (Area: Garrosh'ar Point - Difficulty: 0) CreateObject1
(@OGUID+3, 212174, 870, 5785, 6533, 1, 1685, 0, -728.00518798828125, -1334.310791015625, 0, 3.141592741012573242, 0, 0, -1, 0, 120, 255, 1, 55939), -- Reef Octopus Swarm (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+4, 215638, 870, 5785, 6533, 1, 1685, 0, -688.1632080078125, -1501.74658203125, 131.4707489013671875, 6.034336566925048828, -0.05271816253662109, -0.12563133239746093, -0.12777042388916015, 0.982401251792907714, 120, 255, 1, 55939), -- Orc Blade (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+5, 212174, 870, 5785, 6533, 1, 1685, 0, -689.74481201171875, -1472.5103759765625, 0, 3.141592741012573242, 0, 0, -1, 0, 120, 255, 1, 55939), -- Reef Octopus Swarm (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+6, 215185, 870, 5785, 6533, 1, 1685, 0, -569.05902099609375, -1594.4757080078125, 14.36010646820068359, 1.749078631401062011, 0, 0, 0.767248153686523437, 0.641350388526916503, 120, 255, 1, 55939), -- Spring (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+7, 215187, 870, 5785, 6533, 1, 1685, 0, -568.875, -1591.96875, 14.44148635864257812, 2.285418987274169921, -0.5648360252380371, -0.21050739288330078, 0.791736602783203125, 0.098995335400104522, 120, 255, 1, 55939), -- Nut (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+8, 215638, 870, 5785, 6533, 1, 1685, 0, -643.029541015625, -1503.6353759765625, 140.172393798828125, 1.918493270874023437, -0.54618644714355468, -0.80658817291259765, 0.133848190307617187, 0.182155415415763854, 120, 255, 1, 55939), -- Orc Blade (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+9, 212169, 870, 5785, 6533, 1, 1685, 0, -824.19793701171875, -1582.0504150390625, 0, 3.141592741012573242, 0, 0, -1, 0, 120, 255, 1, 55939), -- Giant Mantis Shrimp Swarm (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+10, 215133, 870, 5785, 6533, 1, 1685, 0, -504.072906494140625, -1493.80908203125, 23.78573799133300781, 2.967084884643554687, 0, 0, 0.996195793151855468, 0.08714316040277481, 120, 255, 1, 55939), -- Applebloom Cider (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+11, 215185, 870, 5785, 6533, 1, 1685, 0, -568.1180419921875, -1592.3541259765625, 14.45248603820800781, 3.315586090087890625, 0.037325859069824218, -0.81508636474609375, -0.56985950469970703, 0.097474195063114166, 120, 255, 1, 55939), -- Spring (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+12, 215133, 870, 5785, 6533, 1, 1685, 0, -550.15972900390625, -1466.5103759765625, 3.721319437026977539, 2.364506721496582031, 0.416350841522216796, 0.494716644287109375, 0.751502037048339843, 0.13096591830253601, 120, 255, 1, 55939), -- Applebloom Cider (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+13, 212174, 870, 5785, 6533, 1, 1685, 0, -782.4149169921875, -1423.84033203125, 0, 3.141592741012573242, 0, 0, -1, 0, 120, 255, 1, 55939), -- Reef Octopus Swarm (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+14, 212169, 870, 5785, 6533, 1, 1685, 0, -810.560791015625, -1565.0103759765625, 0, 3.141592741012573242, 0, 0, -1, 0, 120, 255, 1, 55939), -- Giant Mantis Shrimp Swarm (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+15, 209353, 870, 5785, 6533, 1, 1685, 0, -755.62152099609375, -1397.4166259765625, 4.55926513671875, 0, 0, 0, 0, 1, 120, 255, 1, 55939), -- Rain Poppy (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+16, 215187, 870, 5785, 6533, 1, 1685, 0, -569.14581298828125, -1593.0086669921875, 14.44627857208251953, 4.897857666015625, -0.05547046661376953, 0.600230216979980468, -0.30259037017822265, 0.738299250602722167, 120, 255, 1, 55939), -- Nut (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+17, 215638, 870, 5785, 6533, 1, 1685, 0, -728.248291015625, -1477.9271240234375, 150.952667236328125, 5.97043466567993164, -0.14748144149780273, 0.303347587585449218, -0.09023380279541015, 0.937063157558441162, 120, 255, 1, 55939), -- Orc Blade (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+18, 212174, 870, 5785, 6533, 1, 1685, 0, -712.68927001953125, -1500.4097900390625, 0, 3.141592741012573242, 0, 0, -1, 0, 120, 255, 1, 55939), -- Reef Octopus Swarm (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+19, 215187, 870, 5785, 6533, 1, 1685, 0, -567.279541015625, -1592.8802490234375, 14.40350246429443359, 3.651848793029785156, 0.305171489715576171, 0.519830703735351562, -0.67652320861816406, 0.423039853572845458, 120, 255, 1, 55939), -- Nut (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+20, 215835, 870, 5785, 6533, 1, 1685, 0, -703.18927001953125, -1366.7413330078125, 2.530099153518676757, 1.208128571510314941, 0, 0, 0.567992210388183593, 0.823033928871154785, 120, 255, 0, 55939), -- Alliance Gunship Portal Effects (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+21, 200296, 870, 5785, 6533, 1, 1685, 0, -629.359375, -1482.4375, 133.246917724609375, 0, 0, 0, 0, 1, 120, 255, 1, 55939), -- Washing Tub (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+22, 215638, 870, 5785, 6533, 1, 1685, 0, -660.25177001953125, -1466.345458984375, 131.4305267333984375, 5.97043466567993164, -0.14748144149780273, 0.303347587585449218, -0.09023380279541015, 0.937063157558441162, 120, 255, 1, 55939), -- Orc Blade (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+23, 215834, 870, 5785, 6533, 1, 1685, 0, -703.170166015625, -1366.8211669921875, 2.538779497146606445, 1.208128571510314941, 0, 0, 0.567992210388183593, 0.823033928871154785, 120, 255, 1, 55939), -- Gunship Portal (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+24, 212169, 870, 5785, 6533, 1, 1685, 0, -700.123291015625, -1290.0399169921875, 0, 3.141592741012573242, 0, 0, -1, 0, 120, 255, 1, 55939), -- Giant Mantis Shrimp Swarm (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+25, 212174, 870, 5785, 6533, 1, 1685, 0, -740.65802001953125, -1427.5208740234375, 0, 3.141592741012573242, 0, 0, -1, 0, 120, 255, 1, 55939), -- Reef Octopus Swarm (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+26, 215133, 870, 5785, 6533, 1, 1685, 0, -531.3507080078125, -1426.1944580078125, 2.171048879623413085, 5.000845909118652343, -0.09763956069946289, -0.17023372650146484, -0.58274173736572265, 0.788605749607086181, 120, 255, 1, 55939), -- Applebloom Cider (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+27, 215133, 870, 5785, 6533, 1, 1685, 0, -472.723968505859375, -1497.107666015625, 19.85261726379394531, 5.012874603271484375, 0, 0, -0.59330272674560546, 0.804979443550109863, 120, 255, 1, 55939), -- Applebloom Cider (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+28, 212169, 870, 5785, 6533, 1, 1685, 0, -843.9757080078125, -1615.7708740234375, 0, 3.141592741012573242, 0, 0, -1, 0, 120, 255, 1, 55939), -- Giant Mantis Shrimp Swarm (Area: The Skyfire - Difficulty: 0) CreateObject1
(@OGUID+29, 212169, 870, 5785, 6533, 1, 1685, 0, -909.9149169921875, -1467.0208740234375, 0, 3.141592741012573242, 0, 0, -1, 0, 120, 255, 1, 55939); -- Giant Mantis Shrimp Swarm (Area: The Skyfire - Difficulty: 0) CreateObject1
DELETE FROM `gameobject_addon` WHERE `guid` BETWEEN @OGUID+0 AND @OGUID+29;

-- 54618
-- 55370
-- 62167
-- 65840
-- 66480
-- creature_template_addon
DELETE FROM `creature_template_addon` WHERE `entry` IN (64866 /*64866 (Corporal Rasmussen) - -Unknown-, -Unknown-*/, 64864 /*64864 (Airman Clifton)*/, 54617 /*54617 (Rell Nightwind)*/, 54618 /*54618 (Nimm Codejack)*/, 66509 /*66509 (Amber Kearnen)*/, 66299 /*66299 (Gyrocopter Turret) - Ride Vehicle Hardcoded*/, 66297 /*66297 (Skyfire Gyrocopter) - Gyrocopter Anim Set, Ground*/, 55370 /*55370 (General Purpose Bunny ZTO) - Cosmetic - Burning Tent*/, 64863 /*64863 (Sky Mage Harlan) - Cosmetic - Water Channel*/, 64860 /*64860 (Captain Kerwin)*/, 64861 /*64861 (Captain Day)*/, 66292 /*66292 (Sky Admiral Rogers) - -Unknown-, -Unknown-*/, 64858 /*64858 (Airman Hicks)*/, 64859 /*64859 (Sky Captain Callanan)*/, 65840 /*65840 (Strongarm Airman) - Ride Vehicle Hardcoded*/, 66480 /*66480 (Skyfire Engineer)*/, 66473 /*66473 (Skyfire Gyrocopter) - Self Stun Forever*/, 66559 /*66559 (Ship 2 Explosives)*/, 66530 /*66530 (Ship 1 Explosives)*/, 66382 /*66382 (Gyrocopter Facing Bunny)*/, 66399 /*66399 (Garrosh'ar Peon)*/, 66889 /*66889 (Skyfire Gyrocopter) - Ride Vehicle Hardcoded*/, 66397 /*66397 (Garrosh'ar Shredder)*/, 62167 /*62167 (General Purpose Bunny ZTO) - Cosmetic - Burning Tent*/, 66435 /*66435 (Garrosh'ar Explosive Barrel)*/, 66434 /*66434 (Garrosh'ar Cannon)*/, 66398 /*66398 (Garrosh'ar Grunt)*/, 66890 /*66890 (Skyfire Gyrocopter Master)*/);
INSERT INTO `creature_template_addon` (`entry`, `PathId`, `mount`, `StandState`, `AnimTier`, `VisFlags`, `SheathState`, `PvpFlags`, `emote`, `aiAnimKit`, `movementAnimKit`, `meleeAnimKit`, `visibilityDistanceType`, `auras`) VALUES
(64866, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, '421177 421175'), -- 64866 (Corporal Rasmussen) - -Unknown-, -Unknown-
(64864, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, ''), -- 64864 (Airman Clifton)
(54617, 0, 0, 8, 0, 0, 1, 0, 0, 0, 0, 0, 0, ''), -- 54617 (Rell Nightwind)
(54618, 0, 0, 8, 0, 0, 1, 0, 0, 0, 0, 0, 0, ''), -- 54618 (Nimm Codejack)
(66509, 0, 0, 8, 0, 0, 1, 0, 0, 0, 0, 0, 0, ''), -- 66509 (Amber Kearnen)
(66299, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '46598'), -- 66299 (Gyrocopter Turret) - Ride Vehicle Hardcoded
(66297, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '131025'), -- 66297 (Skyfire Gyrocopter) - Gyrocopter Anim Set, Ground
(55370, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, '106246'), -- 55370 (General Purpose Bunny ZTO) - Cosmetic - Burning Tent
(64863, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, '83810'), -- 64863 (Sky Mage Harlan) - Cosmetic - Water Channel
(64860, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, ''), -- 64860 (Captain Kerwin)
(64861, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, ''), -- 64861 (Captain Day)
(66292, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '421177 421175'), -- 66292 (Sky Admiral Rogers) - -Unknown-, -Unknown-
(64858, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, ''), -- 64858 (Airman Hicks)
(64859, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, ''), -- 64859 (Sky Captain Callanan)
(65840, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '46598'), -- 65840 (Strongarm Airman) - Ride Vehicle Hardcoded
(66480, 0, 0, 3, 0, 0, 1, 0, 0, 0, 0, 0, 0, ''), -- 66480 (Skyfire Engineer)
(66473, 0, 0, 0, 3, 0, 1, 0, 0, 1267, 0, 0, 0, '81312'), -- 66473 (Skyfire Gyrocopter) - Self Stun Forever
(66559, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, ''), -- 66559 (Ship 2 Explosives)
(66530, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, ''), -- 66530 (Ship 1 Explosives)
(66382, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, ''), -- 66382 (Gyrocopter Facing Bunny)
(66399, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 66399 (Garrosh'ar Peon)
(66889, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 4, '46598'), -- 66889 (Skyfire Gyrocopter) - Ride Vehicle Hardcoded
(66397, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 66397 (Garrosh'ar Shredder)
(62167, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '106246'), -- 62167 (General Purpose Bunny ZTO) - Cosmetic - Burning Tent
(66435, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 66435 (Garrosh'ar Explosive Barrel)
(66434, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 66434 (Garrosh'ar Cannon)
(66398, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 66398 (Garrosh'ar Grunt)
(66890, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 4, ''); -- 66890 (Skyfire Gyrocopter Master)

-- creature_template_addon
DELETE FROM `creature_template_addon` WHERE `entry` IN (64866 /*64866 (Corporal Rasmussen) - -Unknown-, -Unknown-*/, 64864 /*64864 (Airman Clifton)*/, 54617 /*54617 (Rell Nightwind)*/, 54618 /*54618 (Nimm Codejack)*/, 66509 /*66509 (Amber Kearnen)*/, 66299 /*66299 (Gyrocopter Turret) - Ride Vehicle Hardcoded*/, 66297 /*66297 (Skyfire Gyrocopter) - Gyrocopter Anim Set, Ground*/, 55370 /*55370 (General Purpose Bunny ZTO) - Cosmetic - Burning Tent*/, 64863 /*64863 (Sky Mage Harlan) - Cosmetic - Water Channel*/, 64860 /*64860 (Captain Kerwin)*/, 64861 /*64861 (Captain Day)*/, 66292 /*66292 (Sky Admiral Rogers) - -Unknown-, -Unknown-*/, 64858 /*64858 (Airman Hicks)*/, 64859 /*64859 (Sky Captain Callanan)*/, 65840 /*65840 (Strongarm Airman) - Ride Vehicle Hardcoded*/, 66480 /*66480 (Skyfire Engineer)*/, 66473 /*66473 (Skyfire Gyrocopter) - Self Stun Forever*/, 66559 /*66559 (Ship 2 Explosives)*/, 66530 /*66530 (Ship 1 Explosives)*/, 66382 /*66382 (Gyrocopter Facing Bunny)*/, 66399 /*66399 (Garrosh'ar Peon)*/, 66889 /*66889 (Skyfire Gyrocopter) - Ride Vehicle Hardcoded*/, 66397 /*66397 (Garrosh'ar Shredder)*/, 62167 /*62167 (General Purpose Bunny ZTO) - Cosmetic - Burning Tent*/, 66435 /*66435 (Garrosh'ar Explosive Barrel)*/, 66434 /*66434 (Garrosh'ar Cannon)*/, 66398 /*66398 (Garrosh'ar Grunt)*/, 66890 /*66890 (Skyfire Gyrocopter Master)*/);
INSERT INTO `creature_template_addon` (`entry`, `PathId`, `mount`, `StandState`, `AnimTier`, `VisFlags`, `SheathState`, `PvpFlags`, `emote`, `aiAnimKit`, `movementAnimKit`, `meleeAnimKit`, `visibilityDistanceType`, `auras`) VALUES
(64866, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, '421177 421175'), -- 64866 (Corporal Rasmussen) - -Unknown-, -Unknown-
(64864, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, ''), -- 64864 (Airman Clifton)
(54617, 0, 0, 8, 0, 0, 1, 0, 0, 0, 0, 0, 0, ''), -- 54617 (Rell Nightwind)
(54618, 0, 0, 8, 0, 0, 1, 0, 0, 0, 0, 0, 0, ''), -- 54618 (Nimm Codejack)
(66509, 0, 0, 8, 0, 0, 1, 0, 0, 0, 0, 0, 0, ''), -- 66509 (Amber Kearnen)
(66299, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '46598'), -- 66299 (Gyrocopter Turret) - Ride Vehicle Hardcoded
(66297, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '131025'), -- 66297 (Skyfire Gyrocopter) - Gyrocopter Anim Set, Ground
(55370, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, '106246'), -- 55370 (General Purpose Bunny ZTO) - Cosmetic - Burning Tent
(64863, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, '83810'), -- 64863 (Sky Mage Harlan) - Cosmetic - Water Channel
(64860, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, ''), -- 64860 (Captain Kerwin)
(64861, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, ''), -- 64861 (Captain Day)
(66292, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '421177 421175'), -- 66292 (Sky Admiral Rogers) - -Unknown-, -Unknown-
(64858, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, ''), -- 64858 (Airman Hicks)
(64859, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, ''), -- 64859 (Sky Captain Callanan)
(65840, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '46598'), -- 65840 (Strongarm Airman) - Ride Vehicle Hardcoded
(66480, 0, 0, 3, 0, 0, 1, 0, 0, 0, 0, 0, 0, ''), -- 66480 (Skyfire Engineer)
(66473, 0, 0, 0, 3, 0, 1, 0, 0, 1267, 0, 0, 0, '81312'), -- 66473 (Skyfire Gyrocopter) - Self Stun Forever
(66559, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, ''), -- 66559 (Ship 2 Explosives)
(66530, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, ''), -- 66530 (Ship 1 Explosives)
(66382, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, ''), -- 66382 (Gyrocopter Facing Bunny)
(66399, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 66399 (Garrosh'ar Peon)
(66889, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 4, '46598'), -- 66889 (Skyfire Gyrocopter) - Ride Vehicle Hardcoded
(66397, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 66397 (Garrosh'ar Shredder)
(62167, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '106246'), -- 62167 (General Purpose Bunny ZTO) - Cosmetic - Burning Tent
(66435, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 66435 (Garrosh'ar Explosive Barrel)
(66434, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 66434 (Garrosh'ar Cannon)
(66398, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 66398 (Garrosh'ar Grunt)
(66890, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 4, ''); -- 66890 (Skyfire Gyrocopter Master)

UPDATE `creature_template_addon` SET `auras`='132221' WHERE `entry`=40789; -- 40789 (Generic Controller Bunny (CSA)) - FX_Uni_Zeppelin_Propeller_Blades_Loop

UPDATE `gameobject_template_addon` SET `faction`=1732, `flags`=32 WHERE `entry`=215834; -- Gunship Portal
UPDATE `gameobject_template_addon` SET `faction`=1375, `flags`=32 WHERE `entry`=215835; -- Alliance Gunship Portal Effects
UPDATE `gameobject_template_addon` SET `flags`=4 WHERE `entry`=215133; -- Applebloom Cider
