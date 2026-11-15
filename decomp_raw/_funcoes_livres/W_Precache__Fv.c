// W_Precache__Fv @0x137870 size=1081
typedef struct st_537870_0 {
    unsigned int field_0;
} st_537870_0;

extern unsigned int g_pModelNameLaser;
extern unsigned int giAmmoIndex;
extern st_537870_0 *g_engfuncs;
extern st_537870_0 *g_engfuncs.pfnPrecacheSound;
extern unsigned short g_sModelIndexLaser;
extern unsigned short g_sModelIndexLaserDot;
extern unsigned short g_sModelIndexFireball;
extern unsigned short g_sModelIndexSmoke;
extern unsigned short g_sModelIndexWExplosion;
extern unsigned short g_sModelIndexBubbles;
extern unsigned short g_sModelIndexBloodDrop;
extern unsigned short g_sModelIndexBloodSpray;
extern int _15CBasePlayerItem.AmmoInfoArray;
extern int _15CBasePlayerItem.ItemInfoArray;

int W_Precache__Fv(void)
{
    memset@GLIBC_2.0(&_15CBasePlayerItem.ItemInfoArray, 0, 0xb00);
    memset@GLIBC_2.0(&_15CBasePlayerItem.AmmoInfoArray, 0, 0x100);
    giAmmoIndex = 0;
    UTIL_PrecacheOtherWeapon("weapon_melee");
    UTIL_PrecacheOtherWeapon("weapon_kiblast");
    UTIL_PrecacheOtherWeapon("weapon_genericbeam");
    UTIL_PrecacheOtherWeapon("weapon_destructodisc");
    UTIL_PrecacheOtherWeapon("weapon_gallitgun");
    UTIL_PrecacheOtherWeapon("weapon_kamehameha");
    UTIL_PrecacheOtherWeapon("weapon_solarflare");
    UTIL_PrecacheOtherWeapon("weapon_eyelaser");
    UTIL_PrecacheOtherWeapon("weapon_fingerlaser");
    UTIL_PrecacheOtherWeapon("weapon_friezadisc");
    UTIL_PrecacheOtherWeapon("weapon_specialbeamcannon");
    UTIL_PrecacheOtherWeapon("weapon_spiritbomb");
    UTIL_PrecacheOtherWeapon("weapon_bigbang");
    UTIL_PrecacheOtherWeapon("weapon_finishingbuster");
    UTIL_PrecacheOtherWeapon("weapon_finalflash");
    UTIL_PrecacheOtherWeapon("weapon_masenko");
    UTIL_PrecacheOtherWeapon("weapon_powerbeam");
    UTIL_PrecacheOtherWeapon("weapon_deathball");
    UTIL_PrecacheOtherWeapon("weapon_burningattack");
    UTIL_PrecacheOtherWeapon("weapon_scatterbeam");
    UTIL_PrecacheOtherWeapon("weapon_candy");
    UTIL_PrecacheOtherWeapon("weapon_scattershot");
    UTIL_PrecacheOtherWeapon("weapon_mouthblast");
    UTIL_PrecacheOtherWeapon("weapon_sensu");
    UTIL_PrecacheOtherWeapon("weapon_dragonball");
    UTIL_PrecacheOtherWeapon("weapon_shieldattack");
    UTIL_PrecacheOtherWeapon("weapon_regeneration");
    UTIL_PrecacheOtherWeapon("weapon_renzoku");
    UTIL_PrecacheOtherWeapon("weapon_bodypart");
    UTIL_PrecacheOtherWeapon("weapon_sword");
    UTIL_PrecacheOtherWeapon("weapon_kametorpedo");
    UTIL_PrecacheOtherWeapon("weapon_telekinesis");
    UTIL_PrecacheOtherWeapon("weapon_flamethrower");
    UTIL_PrecacheOther("aura");
    UTIL_PrecacheOther("magicattack");
    UTIL_PrecacheOther("explodingattack");
    UTIL_PrecacheOther("dragonball");
    UTIL_PrecacheOther("shenlong");
    UTIL_PrecacheOther("item_sensubeanbag");
    UTIL_PrecacheOther("candy");
    g_sModelIndexFireball = g_engfuncs("sprites/zerogxplode.spr");
    g_sModelIndexWExplosion = g_engfuncs("sprites/WXplo1.spr");
    g_sModelIndexSmoke = g_engfuncs("sprites/steam1.spr");
    g_sModelIndexBubbles = g_engfuncs("sprites/bubble.spr");
    g_sModelIndexBloodSpray = g_engfuncs("sprites/bloodspray.spr");
    g_sModelIndexBloodDrop = g_engfuncs("sprites/blood.spr");
    g_sModelIndexLaser = g_engfuncs(g_pModelNameLaser);
    g_sModelIndexLaserDot = g_engfuncs("sprites/laserdot.spr");
    g_engfuncs("models/grenade.mdl");
    g_engfuncs("sprites/explode1.spr");
    g_engfuncs.pfnPrecacheSound("weapons/debris1.wav");
    g_engfuncs.pfnPrecacheSound("weapons/debris2.wav");
    g_engfuncs.pfnPrecacheSound("weapons/debris3.wav");
    g_engfuncs.pfnPrecacheSound("weapons/bullet_hit1.wav");
    g_engfuncs.pfnPrecacheSound("weapons/bullet_hit2.wav");
    return g_engfuncs.pfnPrecacheSound("items/weapondrop1.wav");
}

