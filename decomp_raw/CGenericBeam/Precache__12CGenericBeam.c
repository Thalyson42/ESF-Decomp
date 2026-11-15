// Precache__12CGenericBeam @0xc5680 size=722
typedef struct st_4c5680_0 {
    unsigned int field_0;
} st_4c5680_0;

extern st_4c5680_0 *g_engfuncs;
extern st_4c5680_0 *g_6167c4;

int Precache__12CGenericBeam(unsigned short *a0)
{
    unsigned short v0[8];  // [bp-0x3c]
    unsigned short v1[8];  // [bp-0x2c]

    a0[270] = g_engfuncs("sprites/blueattacka.spr");
    a0[271] = g_engfuncs("sprites/greenattacka.spr");
    a0[272] = g_engfuncs("sprites/purpleattacka.spr");
    a0[273] = g_engfuncs("sprites/redattacka.spr");
    a0[274] = g_engfuncs("sprites/yellowattacka.spr");
    a0[275] = g_engfuncs("sprites/blueattackb.spr");
    a0[276] = g_engfuncs("sprites/greenattackb.spr");
    a0[277] = g_engfuncs("sprites/purpleattackb.spr");
    a0[278] = g_engfuncs("sprites/redattackb.spr");
    a0[279] = g_engfuncs("sprites/yellowattackb.spr");
    a0[280] = g_engfuncs("sprites/blueattackastart.spr");
    a0[281] = g_engfuncs("sprites/greenattackastart.spr");
    a0[282] = g_engfuncs("sprites/purpleattackastart.spr");
    a0[283] = g_engfuncs("sprites/redattackastart.spr");
    v1 = (unsigned short (16 bits)[8])"sprites/yellowattackastart.spr";
    a0[284] = g_engfuncs(v1);
    v0 = (unsigned short (16 bits)[8])"sprites/blueattackbstart.spr";
    a0[285] = g_engfuncs(v0);
    wcsncpy(v1, L"<Z", 2);
    a0[286] = g_engfuncs(v1);
    wcsncpy(v0, L"`Z", 2);
    a0[287] = g_engfuncs(v0);
    a0[288] = g_engfuncs("sprites/redattackbstart.spr");
    a0[289] = g_engfuncs("sprites/yellowattackbstart.spr");
    a0[265] = g_engfuncs("sprites/bluetrail.spr");
    a0[266] = g_engfuncs("sprites/greentrail.spr");
    a0[267] = g_engfuncs("sprites/purpletrail.spr");
    a0[268] = g_engfuncs("sprites/redtrail.spr");
    a0[269] = g_engfuncs("sprites/yellowtrail.spr");
    g_engfuncs("sprites/bluecharge.spr");
    g_engfuncs("sprites/greencharge.spr");
    g_engfuncs("sprites/purplecharge.spr");
    g_engfuncs("sprites/redcharge.spr");
    g_engfuncs("sprites/yellowcharge.spr");
    g_6167c4("weapons/basicbeam_charge.wav");
    g_6167c4("weapons/basicbeam_fire.wav");
    return sub_488bb0(a0);
}

