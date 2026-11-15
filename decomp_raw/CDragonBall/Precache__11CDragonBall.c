// Precache__11CDragonBall @0xadeb0 size=198
typedef struct st_4adeb0_1 {
    char padding_0[112];
    unsigned short field_70;
} st_4adeb0_1;

typedef struct st_4adeb0_0 {
    unsigned int field_0;
} st_4adeb0_0;

extern st_4adeb0_0 *g_engfuncs;
extern st_4adeb0_0 *g_6167c4;

int Precache__11CDragonBall(st_4adeb0_1 *a0)
{
    g_engfuncs("models/db1.mdl");
    g_engfuncs("models/db2.mdl");
    g_engfuncs("models/db3.mdl");
    g_engfuncs("models/db4.mdl");
    g_engfuncs("models/db5.mdl");
    g_engfuncs("models/db6.mdl");
    g_engfuncs("models/db7.mdl");
    a0->field_70 = g_engfuncs("sprites/dragonballtrail.spr");
    g_6167c4("weapons/db_glowing.wav");
    return g_6167c4("weapons/db_flying.wav");
}

