// StopFollowing__12CTalkMonsteri @0x127140 size=330
typedef struct st_527140_3 {
    char padding_0[160];
    struct st_527140_1 *field_a0;
} st_527140_3;

typedef struct st_527140_0 {
    char padding_0[360];
    struct st_527140_1 *field_168;
} st_527140_0;

typedef struct st_527140_1 {
    unsigned int field_0;
} st_527140_1;

typedef struct st_527140_5 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[108];
    unsigned int field_74;
    char padding_78[140];
    unsigned int field_104;
    char padding_108[48];
    char field_138;
    char padding_139[127];
    unsigned int field_1b8;
    char padding_1bc[68];
    unsigned int field_200;
    unsigned int field_204;
} st_527140_5;

typedef struct st_527140_2 {
    char padding_0[96];
    struct st_527140_0 *field_60;
    char padding_64[164];
    char field_108;
    char padding_109[7];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[108];
    unsigned int field_184;
    char padding_188[140];
    unsigned int field_214;
    char padding_218[48];
    char field_248;
    char padding_249[127];
    unsigned int field_2c8;
    char padding_2cc[68];
    unsigned int field_310;
    unsigned int field_314;
} st_527140_2;

typedef struct st_527140_4 {
    char padding_0[96];
    struct st_527140_3 *field_60;
} st_527140_4;

extern st_527140_1 *g_engfuncs.pfnRandomFloat;

unsigned int StopFollowing__12CTalkMonsteri(st_527140_2 *a0, unsigned int a1)
{
    st_527140_5 *v5;  // esi
    unsigned int v6;  // eax
    st_527140_4 *v7;  // edx
    unsigned int v8;  // eax
    unsigned int v9;  // edx
    unsigned int v10;  // eax
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    float v3;  // [bp-0x2c]
    unsigned int v4;  // [bp-0x8]

    v4 = 0;
    v5 = &a0->field_110;
    v6 = EHANDLE::__opi(v5);
    if (v6)
    {
        v7 = EHANDLE::__rf(v5);
        v8 = v7->field_60->field_a0(v7);
        v6 = _INSERT(v8, 0, v8 != 0);
        v4 = v8 != 0;
    }
    if (!v4)
        return v6;
    if (!(a0->field_248 & 1))
    {
        v3 = 2.0f;
        v2 = 0x3f800000;
        strncpy(&v0, "333@", 4);
        g_engfuncs.pfnRandomFloat(v0, 3.200000047683716f);
        strncpy(&v1, "333@", 4);
        a0->field_60->field_168(a0, a0->field_2c8, v1);
        v9 = a0->field_114;
        a0->field_310 = a0->field_110;
        a0->field_314 = v9;
    }
    if (a0->field_214 == 1)
        CBaseMonster::RouteClear(a0);
    EHANDLE::__as(&a0->field_110, 0);
    if (a1)
        CBaseMonster::ClearSchedule(a0);
    v10 = EHANDLE::__opi(&a0->field_108);
    if (!v10)
        return v10;
    a0->field_184 = 2;
    return v10;
}

