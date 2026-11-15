// InitChargeSprite__18CSpecialBeamCannon @0x11fc10 size=306
typedef struct st_51fc10_0 {
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
} st_51fc10_0;

typedef struct st_51fc10_4 {
    struct st_51fc10_1 *field_0;
} st_51fc10_4;

typedef struct st_51fc10_3 {
    char padding_0[128];
    struct st_51fc10_4 *field_80;
    char padding_84[336];
    struct st_51fc10_4 *field_1d4;
} st_51fc10_3;

typedef struct st_51fc10_1 {
    char padding_0[520];
    unsigned int field_208;
} st_51fc10_1;

typedef struct st_51fc10_5 {
    unsigned int field_0;
} st_51fc10_5;

extern st_51fc10_5 *g_engfuncs.pfnIndexOfEdict;

int InitChargeSprite__18CSpecialBeamCannon(st_51fc10_3 *a0)
{
    st_51fc10_0 **v1;  // esi
    st_51fc10_3 *v2;  // eax
    unsigned int v3;  // edi
    unsigned int v4;  // eax
    st_51fc10_0 **v5;  // edx
    double v6;  // mm7
    st_51fc10_3 *v7;  // edx
    int v0;  // [bp-0x24]

    v1 = CSprite::SpriteCreate("sprites/sbccharge.spr", *(int *)a0->field_80 + 8, 1);
    v2 = a0;
    v2->field_1d4 = v1;
    v3 = *(int *)(*(int *)v2->field_80 + 520);
    if (v3)
    {
        v4 = g_engfuncs.pfnIndexOfEdict(v3);
        *v1->field_110 = v4;
        *v1->field_114 = 1;
        *v1->field_194 = v3;
        *v1->field_108 = 12;
    }
    v5 = a0->field_1d4;
    *v5->field_148 = 5;
    v0 = 0xff;
    v6 = (double)v0;
    *(float *)&*v5->field_150 = (float)v6;
    *(float *)&*v5->field_154 = (float)v6;
    *(float *)&*v5->field_158 = (float)v6;
    v0 = 254;
    *(float *)&*v5->field_14c = (float)v0;
    *v5->field_15c = 19;
    v7 = a0;
    *(float *)(*(int *)v7->field_1d4 + 324) = 0.20000000298023224f;
    *(float *)(*(int *)v7->field_1d4 + 312) = 10.0f;
    return CSprite::TurnOff(v7->field_1d4);
}

