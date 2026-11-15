// InitChargeSprite__10CDeathBall @0xa9240 size=304
typedef struct st_4a9240_1 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[4];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[48];
    unsigned int field_148;
    float field_14c;
    float field_150;
    float field_154;
    float field_158;
    unsigned int field_15c;
    char padding_160[52];
    unsigned int field_194;
} st_4a9240_1;

typedef struct st_4a9240_4 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[4];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[48];
    unsigned int field_148;
    unsigned int field_14c;
    unsigned int field_150;
    unsigned int field_154;
    unsigned int field_158;
    unsigned int field_15c;
    char padding_160[52];
    unsigned int field_194;
} st_4a9240_4;

typedef struct st_4a9240_3 {
    struct st_4a9240_0 *field_0;
} st_4a9240_3;

typedef struct st_4a9240_2 {
    char padding_0[128];
    struct st_4a9240_3 *field_80;
    char padding_84[336];
    struct st_4a9240_3 *field_1d4;
} st_4a9240_2;

typedef struct st_4a9240_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4a9240_0;

typedef struct st_4a9240_5 {
    unsigned int field_0;
} st_4a9240_5;

extern st_4a9240_5 *g_engfuncs.pfnIndexOfEdict;

unsigned int * InitChargeSprite__10CDeathBall(st_4a9240_2 *a0)
{
    st_4a9240_4 **v1;  // eax
    unsigned int v2;  // edi
    st_4a9240_1 **v3;  // esi
    unsigned int v4;  // eax
    st_4a9240_1 **v5;  // edx
    double v6;  // mm7
    st_4a9240_1 *v7;  // eax
    int v0;  // [bp-0x24]

    v1 = CSprite::SpriteCreate("sprites/deathball.spr", *(int *)a0->field_80 + 8, 1);
    a0->field_1d4 = v1;
    CSprite::TurnOff(v1);
    *(float *)(*(int *)a0->field_1d4 + 324) = 9.999999747378752e-06f;
    v2 = *(int *)(*(int *)a0->field_80 + 520);
    v3 = a0->field_1d4;
    if (v2)
    {
        v4 = g_engfuncs.pfnIndexOfEdict(v2);
        *v3->field_110 = v4;
        *v3->field_114 = 3;
        *v3->field_194 = v2;
        *v3->field_108 = 12;
    }
    v5 = a0->field_1d4;
    *v5->field_148 = 5;
    v0 = 0xff;
    v6 = (double)v0;
    *v5->field_150 = (float)v6;
    *v5->field_154 = (float)v6;
    *v5->field_158 = (float)v6;
    v0 = 254;
    *v5->field_14c = (float)v0;
    *v5->field_15c = 19;
    v7 = *(int *)a0->field_1d4;
    *(float *)&v7->padding_118[32] = 10.0f;
    return v7;
}

