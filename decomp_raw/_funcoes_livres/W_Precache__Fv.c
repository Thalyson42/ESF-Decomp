// W_Precache__Fv @0x137870 size=1081
typedef struct st_537870_0 {
    unsigned int field_0;
} st_537870_0;

extern unsigned int g_pModelNameLaser;
extern unsigned int giAmmoIndex;
extern st_537870_0 *g_engfuncs;
extern st_537870_0 *g_6167c4;
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
    sub_48d0e0(&_15CBasePlayerItem.ItemInfoArray, 0, 0xb00);
    sub_48d0e0(&_15CBasePlayerItem.AmmoInfoArray, 0, 0x100);
    giAmmoIndex = 0;
    sub_488950("weapon_melee");
    sub_488950("weapon_kiblast");
    sub_488950("weapon_genericbeam");
    sub_488950("weapon_destructodisc");
    sub_488950("weapon_gallitgun");
    sub_488950("weapon_kamehameha");
    sub_488950("weapon_solarflare");
    sub_488950("weapon_eyelaser");
    sub_488950("weapon_fingerlaser");
    sub_488950("weapon_friezadisc");
    sub_488950("weapon_specialbeamcannon");
    sub_488950("weapon_spiritbomb");
    sub_488950("weapon_bigbang");
    sub_488950("weapon_finishingbuster");
    sub_488950("weapon_finalflash");
    sub_488950("weapon_masenko");
    sub_488950("weapon_powerbeam");
    sub_488950("weapon_deathball");
    sub_488950("weapon_burningattack");
    sub_488950("weapon_scatterbeam");
    sub_488950("weapon_candy");
    sub_488950("weapon_scattershot");
    sub_488950("weapon_mouthblast");
    sub_488950("weapon_sensu");
    sub_488950("weapon_dragonball");
    sub_488950("weapon_shieldattack");
    sub_488950("weapon_regeneration");
    sub_488950("weapon_renzoku");
    sub_488950("weapon_bodypart");
    sub_488950("weapon_sword");
    sub_488950("weapon_kametorpedo");
    sub_488950("weapon_telekinesis");
    sub_488950("weapon_flamethrower");
    sub_488de0("aura");
    sub_488de0("magicattack");
    sub_488de0("explodingattack");
    sub_488de0("dragonball");
    sub_488de0("shenlong");
    sub_488de0("item_sensubeanbag");
    sub_488de0("candy");
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
    g_6167c4("weapons/debris1.wav");
    g_6167c4("weapons/debris2.wav");
    g_6167c4("weapons/debris3.wav");
    g_6167c4("weapons/bullet_hit1.wav");
    g_6167c4("weapons/bullet_hit2.wav");
    return g_6167c4("items/weapondrop1.wav");
}

