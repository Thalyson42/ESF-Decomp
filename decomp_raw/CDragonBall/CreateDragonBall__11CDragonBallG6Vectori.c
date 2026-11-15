// CreateDragonBall__11CDragonBallG6Vectori @0xadf80 size=425
typedef struct st_4adf80_1 {
    unsigned int field_0;
} st_4adf80_1;

typedef struct st_4adf80_3 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[388];
    unsigned int field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_4adf80_3;

typedef struct st_4adf80_2 {
    struct st_4adf80_3 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_4adf80_0 *field_60;
    char padding_64[8];
    int field_6c;
} st_4adf80_2;

typedef struct st_4adf80_0 {
    char padding_0[8];
    struct st_4adf80_1 *field_8;
} st_4adf80_0;

typedef struct st_4adf80_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4adf80_4;

extern char PickupTouch__11CDragonBallP11CBaseEntity;
extern st_4adf80_1 *g_6167c8;
extern st_4adf80_1 *g_616828;
extern st_4adf80_1 *g_6168b4;
extern st_4adf80_4 *gpGlobals;

st_4adf80_2 * CreateDragonBall__11CDragonBallG6Vectori(int a0, int a1)
{
    st_4adf80_2 *v9;  // edi
    float v0;  // [bp-0x188]
    float v1;  // [bp-0x180]
    float v2;  // [bp-0x144]
    float v3;  // [bp-0x140]
    unsigned int v4;  // [bp-0x13c]
    unsigned int v5;  // [bp-0x124]
    unsigned int v6;  // [bp-0x120]
    float v7;  // [bp-0x11c]
    char v8;  // [bp-0x104]

    if ((unsigned int)(a1 - 1) > 6)
    {
        g_6168b4(1, "Attempting to create Dragonball with invalid nr\n");
    }
    else
    {
        v9 = sub_489e30(0);
        v9->field_60->field_8(v9);
        sub_48d990(&v8, "models/db%d.mdl", a1);
        g_6167c8(v9->field_0->field_208, &v8);
        v5 = 0x3f800000;
        v6 = 0x3f800000;
        v7 = 2.0f;
        v2 = -1.0f;
        v3 = -1.0f;
        v4 = 0;
        sub_48a0d0(v9->field_0, &v2, &v5);
        v9->field_0->field_198 = 0;
        v9->field_14 = _INSERT(sub_48db50(v9->field_0, a0), 0, 0) | 0xffff0000;
        v9->field_18 = &PickupTouch__11CDragonBallP11CBaseEntity;
        v9->field_6c = a1;
        if (g_616828(v9->field_0->field_208))
            return v9;
        v1 = *(float *)&v9->field_0->field_10;
        v0 = *(float *)&v9->field_0->field_c;
        g_6168b4(4, "Item %s fell out of level at %f,%f,%f", v9->field_0->field_0 + gpGlobals->field_98, (unsigned int)(*(float *)&v9->field_0->field_8 >> 0));
        sub_48cc00(v9);
    }
    return NULL;
}

