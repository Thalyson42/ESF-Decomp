// Spawn__9CShenlong @0x117de0 size=487
typedef struct st_517de0_1 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[4];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[48];
    unsigned int field_148;
    unsigned int field_14c;
    char padding_150[12];
    unsigned int field_15c;
    char padding_160[52];
    unsigned int field_194;
} st_517de0_1;

typedef struct st_517de0_2 {
    struct st_517de0_1 *field_0;
} st_517de0_2;

typedef struct st_517de0_0 {
    unsigned int field_0;
} st_517de0_0;

extern st_517de0_0 *g_engfuncs.pfnSetModel;
extern st_517de0_0 *g_engfuncs.pfnIndexOfEdict;

unsigned int Spawn__9CShenlong(float a0)
{
    st_517de0_1 **v10;  // ecx
    st_517de0_2 **v11;  // edx
    unsigned int v12;  // edi
    st_517de0_1 **v13;  // esi
    unsigned int v14;  // eax
    st_517de0_2 **v15;  // edx
    unsigned int v16;  // eax
    int v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x4c]
    int v2;  // [bp-0x48]
    float v3;  // [bp-0x44]
    float v4;  // [bp-0x40]
    unsigned int v5;  // [bp-0x3c]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]

    (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 12))(a0);
    g_engfuncs.pfnSetModel(*(int *)(*(int *)a0 + 520), "models/shenlong.mdl");
    *(unsigned int *)(*(int *)a0 + 264) = 13;
    *(unsigned int *)(*(int *)a0 + 268) = 1;
    v6 = 128.0f;
    v7 = 128.0f;
    v8 = 500.0f;
    v3 = -128.0f;
    v4 = -128.0f;
    v5 = 0;
    UTIL_SetSize(*(int *)a0, &v3, &v6);
    memset(*(int *)a0 + 296, 0, 12);
    CBaseAnimating::ResetSequenceInfo(a0);
    v2 = 0;
    v1 = *(unsigned int *)&a0 + 680;
    do
    {
        v10 = CSprite::SpriteCreate("sprites/shens_eyes.spr", *(int *)a0 + 8, 0);
        v11 = v2 * 4;
        *(st_517de0_1 ***)((char *)v11 + v1) = v10;
        *v10->field_148 = 5;
        *(float *)&*v10->padding_150[0] = 255.0f;
        *(float *)&*v10->padding_150[4] = 255.0f;
        *(float *)&*v10->padding_150[8] = 255.0f;
        *v10->field_14c = 0;
        *v10->field_15c = 0;
        v12 = *(int *)(*(int *)a0 + 520);
        v13 = *(int *)((char *)v11 + v1);
        v0 = v2 + 1;
        if (v12)
        {
            v14 = g_engfuncs.pfnIndexOfEdict(v12);
            *v13->field_110 = v14;
            *v13->field_114 = v0;
            *v13->field_194 = v12;
            *v13->field_108 = 12;
        }
    } while ((v15 = v2 * 4, *(unsigned int *)(*(int *)*(int *)((char *)v15 + v1) + 332) = 0, v16 = CSprite::TurnOff(*(int *)((char *)v15 + v1)), v2 += 1, v2 <= 1));
    return CSprite::TurnOff(*(int *)((char *)v15 + v1));
}

