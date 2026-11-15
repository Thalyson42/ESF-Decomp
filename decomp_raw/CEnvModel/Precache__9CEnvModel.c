// Precache__9CEnvModel @0xb90c0 size=91
typedef struct st_4b90c0_0 {
    char padding_0[184];
    unsigned int field_b8;
} st_4b90c0_0;

typedef struct st_4b90c0_1 {
    struct st_4b90c0_0 *field_0;
    char padding_4[700];
    unsigned short field_2c0;
} st_4b90c0_1;

typedef struct st_4b90c0_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4b90c0_2;

typedef struct st_4b90c0_3 {
    unsigned int field_0;
} st_4b90c0_3;

extern st_4b90c0_3 *g_engfuncs;
extern st_4b90c0_2 *gpGlobals;

unsigned int Precache__9CEnvModel(st_4b90c0_1 *a0)
{
    unsigned int v0;  // eax

    g_engfuncs(a0->field_0->field_b8 + gpGlobals->field_98);
    v0 = g_engfuncs("models/rockgibs.mdl");
    a0->field_2c0 = v0;
    return v0;
}

