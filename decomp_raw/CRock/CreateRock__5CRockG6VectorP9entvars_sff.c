// CreateRock__5CRockG6VectorP9entvars_sff @0x129520 size=509
typedef struct st_529520_2 {
    unsigned int field_0;
} st_529520_2;

typedef struct st_529520_0 {
    unsigned int field_0;
    char padding_4[28];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[216];
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[4];
    unsigned int field_114;
    char padding_118[128];
    unsigned int field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_529520_0;

typedef struct st_529520_5 {
    char padding_0[520];
    unsigned int field_208;
} st_529520_5;

typedef struct st_529520_3 {
    struct st_529520_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_529520_1 *field_60;
    char padding_64[620];
    unsigned int field_2d0;
    char padding_2d4[8];
    unsigned int field_2dc;
    unsigned int field_2e0;
} st_529520_3;

typedef struct st_529520_1 {
    char padding_0[8];
    struct st_529520_2 *field_8;
} st_529520_1;

typedef struct st_529520_4 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_529520_4;

extern char RotateThink__5CRock;
extern st_529520_2 *g_engfuncs.pfnSetModel;
extern st_529520_2 *g_engfuncs.pfnRandomLong;
extern st_529520_2 *g_engfuncs.pfnRandomFloat;
extern st_529520_4 *gpGlobals;

st_529520_3 * CreateRock__5CRockG6VectorP9entvars_sff(float *a0, st_529520_5 *a1, float a2, float a3)
{
    st_529520_3 *v8;  // edi
    unsigned int v9;  // eax
    double v10;  // mm7
    double v11;  // mm7
    double v0;  // [bp-0x64]
    float v1;  // [bp-0x58]
    float v2;  // [bp-0x54]
    float v3;  // [bp-0x50]
    float v4;  // [bp-0x4c]
    float v5;  // [bp-0x24]
    float v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]

    v8 = GetClassPtr__H1Z5CRock_PX01_PX01(0);
    v8->field_60->field_8(v8);
    v8->field_0->field_108 = 5;
    v8->field_0->field_10c = 0;
    g_engfuncs.pfnSetModel(v8->field_0->field_208, "models/rocks.mdl");
    g_engfuncs.pfnRandomFloat(0.5f, 1.5f);
    *(float *)&v8->field_0->padding_118[44] = 0.5f;
    v9 = g_engfuncs.pfnRandomLong(0, 6);
    v8->field_0->field_114 = v9;
    v8->field_0->field_0 = -1 * gpGlobals->field_98 + 5938505;
    v8->field_0->field_198 = a1->field_208;
    *(float *)&v8->field_0->padding_19c[0x44] = 5.0f;
    v8->field_2d0 = 80;
    v1 = (float)(3.141592653589793 * a2 + 3.141592653589793 * a2);
    v0 = v1 + v1;
    sin(*(unsigned int *)&v0);
    v10 = v0 * 15.0;
    v5 = (float)v10;
    cos(*(unsigned int *)&v0, *(unsigned int *)((void*)&v0 + 4));
    v6 = (float)(v10 * 15.0);
    v7 = 0;
    v2 = *a0 + v5;
    v3 = a0[1] + v6;
    v4 = a0[2] + v7;
    UTIL_SetOrigin(v8->field_0, &v2);
    cos(*(unsigned int *)&v0, *(unsigned int *)((void*)&v0 + 4));
    v11 = v4 * 30.0;
    v8->field_0->field_20 = (float)v11;
    sin(*(unsigned int *)&v0, *(unsigned int *)((void*)&v0 + 4));
    v8->field_0->field_24 = (float)(-v11 * 30.0);
    v8->field_0->field_28 = a3;
    *(float *)&v8->field_2dc = v1;
    *(float *)&v8->field_2e0 = gpGlobals->field_0;
    v8->field_14 = 0;
    v8->field_18 = 0;
    v8->field_c = 0xffff0000;
    v8->field_10 = &RotateThink__5CRock;
    *(float *)&v8->field_0->field_104 = gpGlobals->field_0;
    return v8;
}

