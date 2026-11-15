// Spawn__4CGibPCc @0xa5670 size=315
typedef struct st_4a5670_0 {
    unsigned int field_0;
    char padding_4[256];
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[56];
    unsigned int field_148;
    char padding_14c[16];
    unsigned int field_15c;
    char padding_160[168];
    unsigned int field_208;
} st_4a5670_0;

typedef struct st_4a5670_1 {
    struct st_4a5670_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[656];
    unsigned int field_2ac;
    unsigned int field_2b0;
} st_4a5670_1;

typedef struct st_4a5670_2 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4a5670_2;

typedef struct st_4a5670_3 {
    unsigned int field_0;
} st_4a5670_3;

extern char WaitTillLand__4CGib;
extern char BounceGibTouch__4CGibP11CBaseEntity;
extern char g_59c3a8;
extern st_4a5670_3 *g_engfuncs.pfnSetModel;
extern st_4a5670_2 *gpGlobals;

unsigned int Spawn__4CGibPCc(st_4a5670_1 *a0, unsigned int a1)
{
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    unsigned int v0;  // [bp-0x44]
    unsigned int v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    unsigned int v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]

    a0->field_0->field_108 = 10;
    *(float *)&a0->field_0->padding_110[16] = 0.550000011920929f;
    *(float *)&a0->field_0->padding_14c[0] = 255.0f;
    a0->field_0->field_148 = 0;
    a0->field_0->field_15c = 0;
    a0->field_0->field_10c = 3;
    a0->field_0->field_0 = &(&g_59c3a8)[-1 * gpGlobals->field_98];
    g_engfuncs.pfnSetModel(a0->field_0->field_208, a1);
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    UTIL_SetSize(a0->field_0, &v0, &v3);
    a0->field_0->field_104 = (float)(gpGlobals->field_0 + 4.0);
    *(float *)&a0[1].field_0 = 25.0f;
    v6 = _INSERT(gpGlobals, 0, 0);
    v7 = v6 | 0xffff0000;
    a0->field_c = v7;
    a0->field_10 = &WaitTillLand__4CGib;
    v8 = _INSERT(v7, 0, 0);
    a0->field_14 = v8 | 0xffff0000;
    a0->field_18 = &BounceGibTouch__4CGibP11CBaseEntity;
    a0->field_2b0 = 9;
    a0->field_2ac = 5;
    return v8 | 0xffff0000;
}

