// Precache__10CGallitGun @0xc4010 size=276
typedef struct st_4c4010_0 {
    unsigned int field_0;
} st_4c4010_0;

extern st_4c4010_0 *g_engfuncs;
extern st_4c4010_0 *g_6167c4;

int Precache__10CGallitGun(unsigned short *a0)
{
    a0[103] = g_engfuncs("sprites/gallitguna.spr");
    a0[104] = g_engfuncs("sprites/gallitgunb.spr");
    a0[105] = g_engfuncs("sprites/gallitgunastart.spr");
    a0[106] = g_engfuncs("sprites/gallitgunbstart.spr");
    g_engfuncs("sprites/ggunaura.spr");
    g_6167c4("cell/gallitgun.wav");
    g_6167c4("cell2/gallitgun.wav");
    g_6167c4("vegeta/gallitgun.wav");
    g_6167c4("cell/gallitgunfire.wav");
    g_6167c4("cell2/gallitgunfire.wav");
    g_6167c4("vegeta/gallitgunfire.wav");
    a0[0x66] = g_engfuncs("sprites/gallitguntrail.spr");
    return sub_488bb0(a0);
}

