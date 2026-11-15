// ShootHealthBeam__4CBotP11CBasePlayer @0x154910 size=290
typedef struct st_554910_4 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_554910_4;

typedef struct st_554910_1 {
    char padding_0[208];
    struct st_554910_2 *field_d0;
} st_554910_1;

typedef struct st_554910_3 {
    struct st_554910_0 *field_0;
    char padding_4[92];
    struct st_554910_1 *field_60;
    char padding_64[2896];
    float field_bb4;
    float field_bb8;
} st_554910_3;

typedef struct st_554910_2 {
    unsigned int field_0;
} st_554910_2;

typedef struct st_554910_0 {
    char padding_0[352];
    float field_160;
    char padding_164[252];
    unsigned int field_260;
} st_554910_0;

extern st_554910_2 *gpGlobals;

unsigned int ShootHealthBeam__4CBotP11CBasePlayer(st_554910_3 *a0, st_554910_4 **a1)
{
    unsigned int *v6;  // edx
    unsigned int v7;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned short v1;  // [bp-0x20]
    unsigned short v2;  // [bp-0x1e]
    float v3;  // [bp-0x18]
    float v4;  // [bp-0x14]
    float v5;  // [bp-0x10]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)*(float *)&a0->field_0->field_260;
    if ((int)v0 <= 109)
        return v7;
    if (a0->field_bb8 < *(float *)gpGlobals)
    {
        a0->field_bb8 = (float)(0.1 + *(float *)gpGlobals);
        CBasePlayer::UseKi(a0, 110);
        a0->field_0->field_160 = (float)(a0->field_0->field_160 + 2.0);
        UTIL_DamagePlayer(a0, a1, "Super bot laser", 2.0f);
    }
    if (a0->field_bb4 > *(float *)gpGlobals)
        return v7;
    a0->field_60->field_d0(&v0, a0);
    v6 = &*a1->field_8;
    v3 = *a1->field_8;
    v4 = *(float *)&v6[1];
    v5 = *(float *)&v6[2];
    v7 = UTIL_DrawBeamToAll(&v0, &v3, 40, 20, 125, 0xff, 0xff, 250, 0);
    return v7;
}

