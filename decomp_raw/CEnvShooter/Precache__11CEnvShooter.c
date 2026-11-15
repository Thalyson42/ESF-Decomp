// Precache__11CEnvShooter @0xb4c20 size=83
typedef struct st_4b4c20_0 {
    char padding_0[184];
    unsigned int field_b8;
} st_4b4c20_0;

typedef struct st_4b4c20_1 {
    struct st_4b4c20_0 *field_0;
    char padding_4[112];
    int field_74;
    unsigned int field_78;
} st_4b4c20_1;

typedef struct st_4b4c20_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4b4c20_2;

typedef struct st_4b4c20_3 {
    unsigned int field_0;
} st_4b4c20_3;

extern st_4b4c20_3 *g_engfuncs;
extern st_4b4c20_2 *gpGlobals;

int Precache__11CEnvShooter(st_4b4c20_1 *a0)
{
    a0->field_78 = g_engfuncs(a0->field_0->field_b8 + gpGlobals->field_98);
    return sub_48d5e0(a0->field_74);
}

