////////////////////////////////////////////////////////////////////////
//      ___                         ___       __  __  __              //
//     / _ | _______ ___  ___ _____/ _ )___ _/ /_/ /_/ /__ ___        //
//    / __ |/ __/ -_) _ \/ _ `/___/ _  / _ `/ __/ __/ / -_|_-<        //
//   /_/ |_/_/  \__/_//_/\_,_/   /____/\_,_/\__/\__/_/\__/___/.com    //
//                                                                    //
//         Developed by Natureknight Patrick and Scott.               //
//                                                                    //
////////////////////////////////////////////////////////////////////////

#ifndef CLICK_AND_PLAYNPC_H
#define CLICK_AND_PLAYNPC_H

enum Enchants
{
	ENCHANT_WEP_BERSERKING              = 3789,
    ENCHANT_WEP_BLADE_WARD              = 3869,
    ENCHANT_WEP_BLOOD_DRAINING          = 3870,
    ENCHANT_WEP_ACCURACY                = 3788,
    ENCHANT_WEP_AGILITY_1H              = 1103,
    ENCHANT_WEP_SPIRIT                  = 3844,
    ENCHANT_WEP_BATTLEMASTER            = 2675,
    ENCHANT_WEP_BLACK_MAGIC             = 3790,
    ENCHANT_WEP_ICEBREAKER              = 3239,
    ENCHANT_WEP_LIFEWARD                = 3241,
    ENCHANT_WEP_MIGHTY_SPELL_POWER      = 3834, // One-hand
    ENCHANT_WEP_EXECUTIONER             = 3225,
    ENCHANT_WEP_POTENCY                 = 3833,
    ENCHANT_WEP_TITANGUARD              = 3851,
    ENCHANT_2WEP_MASSACRE               = 3827,
	ENCHANT_2WEP_SCOURGEBANE			= 3247,
	ENCHANT_2WEP_GIANT_SLAYER			= 3251,
	ENCHANT_2WEP_GREATER_SPELL_POWER    = 3854,
	ENCHANT_2WEP_AGILITY	            = 2670,
	ENCHANT_2WEP_MONGOOSE               = 2673,

    ENCHANT_SHIELD_DEFENSE              = 1952,
    ENCHANT_SHIELD_INTELLECT            = 1128,
    ENCHANT_SHIELD_RESILIENCE           = 3229,
	ENCHANT_SHIELD_BLOCK				= 2655,
	ENCHANT_SHIELD_STAMINA				= 1071,
	ENCHANT_SHIELD_TOUGHSHIELD			= 2653,
    ENCHANT_SHIELD_TITANIUM_PLATING     = 3849,

    ENCHANT_HEAD_BLISSFUL_MENDING       = 3819,
    ENCHANT_HEAD_BURNING_MYSTERIES      = 3820,
    ENCHANT_HEAD_DOMINANCE              = 3796,
    ENCHANT_HEAD_SAVAGE_GLADIATOR       = 3842,
    ENCHANT_HEAD_STALWART_PROTECTOR     = 3818,
    ENCHANT_HEAD_TORMENT                = 3817,
    ENCHANT_HEAD_TRIUMPH                = 3795,
	ENCHANT_HEAD_ECLIPSED_MOON			= 3815,
	ENCHANT_HEAD_FLAME_SOUL				= 3816,
	ENCHANT_HEAD_FLEEING_SHADOW			= 3814,
	ENCHANT_HEAD_FROSTY_SOUL			= 3812,
	ENCHANT_HEAD_TOXIC_WARDING			= 3813,
    
    ENCHANT_SHOULDER_MASTERS_AXE        = 3835,
    ENCHANT_SHOULDER_MASTERS_CRAG       = 3836,
    ENCHANT_SHOULDER_MASTERS_PINNACLE   = 3837,
    ENCHANT_SHOULDER_MASTERS_STORM      = 3838,
    ENCHANT_SHOULDER_GREATER_AXE        = 3808,
    ENCHANT_SHOULDER_GREATER_CRAG       = 3809,
    ENCHANT_SHOULDER_GREATER_GLADIATOR  = 3852,
    ENCHANT_SHOULDER_GREATER_PINNACLE   = 3811,
    ENCHANT_SHOULDER_GREATER_STORM      = 3810,
    ENCHANT_SHOULDER_DOMINANCE          = 3794,
    ENCHANT_SHOULDER_TRIUMPH            = 3793,

    ENCHANT_CLOAK_DARKGLOW_EMBROIDERY   = 3728,
    ENCHANT_CLOAK_SWORDGUARD_EMBROIDERY = 3730,
    ENCHANT_CLOAK_LIGHTWEAVE_EMBROIDERY = 3722,
    ENCHANT_CLOAK_SPRINGY_ARACHNOWEAVE  = 3859,
    ENCHANT_CLOAK_WISDOM                = 3296,
    ENCHANT_CLOAK_TITANWEAVE            = 1951,
    ENCHANT_CLOAK_SPELL_PIERCING        = 3243,
    ENCHANT_CLOAK_SHADOW_ARMOR          = 3256,
    ENCHANT_CLOAK_MIGHTY_ARMOR          = 3294,
    ENCHANT_CLOAK_MAJOR_AGILITY         = 1099,
    ENCHANT_CLOAK_GREATER_SPEED         = 3831,

	ENCHANT_LEG_EARTHEN					= 3853,
	ENCHANT_LEG_FROSTHIDE				= 3822,
	ENCHANT_LEG_ICESCALE				= 3823,
	ENCHANT_LEG_BRILLIANT_SPELLTHREAD	= 3719,
	ENCHANT_LEG_SAPPHIRE_SPELLTHREAD	= 3721,

	ENCHANT_BELT_SOCKET_BELT            = 3729,

	ENCHANT_GLOVES_GREATER_BLASTING		= 3249,
	ENCHANT_GLOVES_ARMSMAN				= 3253,
	ENCHANT_GLOVES_CRUSHER				= 1603,
	ENCHANT_GLOVES_AGILITY				= 3222,
	ENCHANT_GLOVES_PRECISION			= 3234,
	ENCHANT_GLOVES_EXPERTISE			= 3231,
    ENCHANT_GLOVES_EXCEPTIONAL_SPELLPOWER  = 3246,

	ENCHANT_BRACERS_MAJOR_STAMINA		= 3850,
	ENCHANT_BRACERS_SUPERIOR_SP			= 2332,
	ENCHANT_BRACERS_GREATER_ASSUALT		= 3845,
	ENCHANT_BRACERS_MAJOR_SPIRT			= 1147,
	ENCHANT_BRACERS_EXPERTISE			= 3231,
	ENCHANT_BRACERS_GREATER_STATS		= 2661,
	ENCHANT_BRACERS_INTELLECT			= 1119,
	ENCHANT_BRACERS_FURL_ARCANE			= 3763,
	ENCHANT_BRACERS_FURL_FIRE			= 3759,
	ENCHANT_BRACERS_FURL_FROST			= 3760,
	ENCHANT_BRACERS_FURL_NATURE			= 3762,
	ENCHANT_BRACERS_FURL_SHADOW			= 3761,
	ENCHANT_BRACERS_FURL_ATTACK			= 3756,
	ENCHANT_BRACERS_FURL_STAMINA		= 3757,
	ENCHANT_BRACERS_FURL_SPELLPOWER		= 3758,

	ENCHANT_CHEST_POWERFUL_STATS		= 3832,
	ENCHANT_CHEST_SUPER_HEALTH			= 3297,
	ENCHANT_CHEST_GREATER_MAINA_REST	= 2381,
	ENCHANT_CHEST_EXCEPTIONAL_RESIL		= 3245,
	ENCHANT_CHEST_GREATER_DEFENSE		= 1953,

	ENCHANT_BOOTS_GREATER_ASSULT		= 1597,
	ENCHANT_BOOTS_TUSKARS_VITLIATY		= 3232,
	ENCHANT_BOOTS_SUPERIOR_AGILITY		= 983,
	ENCHANT_BOOTS_GREATER_SPIRIT		= 1147,
	ENCHANT_BOOTS_GREATER_VITALITY		= 3244,
	ENCHANT_BOOTS_ICEWALKER				= 3826,
	ENCHANT_BOOTS_GREATER_FORTITUDE		= 1075,
	ENCHANT_BOOTS_NITRO_BOOTS			= 3606,

	ENCHANT_RING_ASSULT					= 3839,
	ENCHANT_RING_GREATER_SP				= 3840,
	ENCHANT_RING_STAMINA				= 3791
};

enum socketGems
{
	META_25SP_10STUN_REDUCED            = 3639,
	META_21INTELLECT_RESTORE_MANA       = 3627,
	META_21AGIL_3PERCENT_DMG            = 3628,

	GREEN_TEN_RESIL_TEN_SPIRIT          = 3581,
	GREEN_10HASTE_13SPELLPEN            = 3590,
	GREEN_10RESILIENCE_5MP5             = 3586,
	GREEN_10HASTE_5MP5                  = 3587,

	ORANGE_12SPELL_10_HASTE             = 3563,
	ORANGE_12SPELL_10HITRATING          = 3560,
	ORANGE_12SPELL_10_RESIL             = 3561,
	ORANGE_10STRENGTH_10RESIL           = 3552,

	YELLOW_20HASTE_RATING               = 3531,
	YELLOW_20RESILIENCE                 = 3530,

	RED_20STRENGTH                      = 3518,

	PURPLE_12SPELLPOWER_5MP5            = 3546,

	PRISMATIC_10_ALL_STATS              = 3879
};

#endif