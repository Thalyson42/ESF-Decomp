// Restore__11CBaseEntityR8CRestore @0x9d3f0 size=283
typedef struct st_49d3f0_0 {
    char padding_0[180];
    unsigned int field_b4;
    unsigned int field_b8;
    char padding_bc[32];
    unsigned int field_dc;
    unsigned int field_e0;
    unsigned int field_e4;
    unsigned int field_e8;
    unsigned int field_ec;
    unsigned int field_f0;
    char padding_f4[276];
    unsigned int field_208;
} st_49d3f0_0;

typedef struct st_49d3f0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_49d3f0_1;

typedef struct st_49d3f0_2 {
    unsigned int field_0;
} st_49d3f0_2;

extern int _11CBaseEntity.m_SaveData;
extern st_49d3f0_2 *g_engfuncs;
extern st_49d3f0_2 *g_6167c8;
extern st_49d3f0_1 *gpGlobals;

unsigned int Restore__11CBaseEntityR8CRestore(st_49d3f0_0 **a0, int a1)
{
    unsigned int *v7;  // ecx
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    unsigned int v3;  // [bp-0x3c]
    unsigned int v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]

    v0 = sub_4896a0(a1, "ENTVARS", *a0);
    if (v0)
        v0 = sub_48a980(a1, "BASE", a0, &_11CBaseEntity.m_SaveData, 5);
    v7 = *a0;
    if (!v7[45])
        return v0;
    if (!v7[46])
        return v0;
    v4 = v7[55];
    v5 = v7[56];
    v6 = v7[57];
    v1 = v7[58];
    v2 = v7[59];
    v3 = v7[60];
    g_engfuncs(v7[46] + gpGlobals->field_98);
    g_6167c8(*a0->field_208, *a0->field_b8 + gpGlobals->field_98);
    sub_48a0d0(*a0, &v4, &v1);
    return v0;
}

