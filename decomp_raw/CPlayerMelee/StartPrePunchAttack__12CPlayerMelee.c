// StartPrePunchAttack__12CPlayerMelee @0x108870 size=914
typedef struct st_508870_4 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_508870_4;

typedef struct st_508870_3 {
    char padding_0[136];
    unsigned int field_88;
    unsigned int field_8c;
    char padding_90[64];
    unsigned int field_d0;
    char padding_d4[8];
    unsigned int field_dc;
} st_508870_3;

typedef struct st_508870_5 {
    char padding_0[272];
    float field_110;
    float field_114;
    float field_118;
    char padding_11c[8];
    struct st_508870_0 *field_124;
    struct st_508870_6 *field_128;
} st_508870_5;

typedef struct st_508870_2 {
    char padding_0[144];
    unsigned int field_90;
    unsigned int field_94;
    char padding_98[32];
    unsigned int field_b8;
    char padding_bc[32];
    unsigned int field_dc;
    char padding_e0[80];
    struct st_508870_3 *field_130;
} st_508870_2;

typedef struct st_508870_6 {
    struct st_508870_4 *field_0;
} st_508870_6;

typedef struct st_508870_0 {
    unsigned int field_0;
} st_508870_0;

typedef struct st_508870_1 {
    float field_0;
    char padding_4[36];
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
} st_508870_1;

extern st_508870_0 *g_engfuncs.pfnIndexOfEdict;
extern st_508870_1 *gpGlobals;

int StartPrePunchAttack__12CPlayerMelee(float idx)
{
    unsigned int *v21;  // edx
    double v29;  // mm5
    double v30;  // mm5
    unsigned int *v31;  // edx
    st_508870_1 *v22;  // eax
    st_508870_2 *v23;  // ecx
    unsigned int v24;  // ecx
    unsigned int *v25;  // ecx
    unsigned int *v26;  // edx
    st_508870_5 *v27;  // ecx
    double v28;  // mm5
    char *v0;  // [bp-0x8c]
    unsigned int v1;  // [bp-0x78], Other Possible Types: int
    float v2;  // [bp-0x74]
    int v3;  // [bp-0x70]
    int v4;  // [bp-0x6c]
    unsigned int v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x64]
    float v7;  // [bp-0x44]
    float v8;  // [bp-0x40]
    float v9;  // [bp-0x3c]
    unsigned int v10;  // [bp-0x24]
    float v11;  // [bp-0x24]
    unsigned int v12;  // [bp-0x20]
    float v13;  // [bp-0x20]
    unsigned int v14;  // [bp-0x1c]
    float v15;  // [bp-0x1c]
    float v16;  // [bp-0x18]
    float v17;  // [bp-0x14]
    float v18;  // [bp-0x10]

    v6 = 9;
    v5 = g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 520));
    v1 = *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520);
    UTIL_Model_Connect(g_engfuncs.pfnIndexOfEdict(v1));
    CPlayerMelee::SetAtkBehindAndBlocking(*(int *)(*(unsigned int *)&idx + 304));
    *(unsigned short *)&v1 = 1;
    CPlayerMelee::AddAnimation(idx, v1, gpGlobals->field_0, 1, "ref_autopunch");
    v21 = *(int *)(*(unsigned int *)&idx + 304);
    if (*(int *)(*(int *)(*(unsigned int *)&idx + 304) + 216))
    {
        v4 = "ref_autopunch_hit_back";
        v3 = 1;
        v22 = gpGlobals;
        goto LABEL_508968;
    }
    else
    {
        v21 = *(int *)(*(unsigned int *)&idx + 304);
        if (*(int *)(*(int *)(*(unsigned int *)&idx + 304) + 212))
        {
            v4 = "ref_autopunch_block";
            v3 = 1;
            v22 = gpGlobals;
LABEL_508968:
            v2 = v22->field_0;
            *(unsigned short *)&v1 = 1;
        }
        else
        {
            v4 = "ref_autopunch_hit";
            v3 = 1;
            v2 = gpGlobals->field_0;
            *(unsigned short *)&v1 = 1;
            v21 = *(int *)(*(unsigned int *)&idx + 304);
        }
    }
    CPlayerMelee::AddAnimation(v21, v1, v2, v3, v4);
    v23 = (st_508870_2 *)idx;
    *(float *)&v23->field_90 = gpGlobals->field_0;
    v23->field_94 = 0;
    v23->field_b8 = 0;
    v23->field_dc = 0;
    v23->field_130->field_d0 = 0;
    v23->field_130->field_88 = 0;
    v23->field_130->field_8c = 0;
    v23->field_130->field_dc = 0;
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v24 = 0;
    if (*(float *)(*(unsigned int *)&idx + 272) == 0.0f && *(float *)(*(unsigned int *)&idx + 276) == 0.0f)
        v24 = *(float *)(*(unsigned int *)&idx + 280) == 0.0f;
    if (v24)
    {
        UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 116);
        v25 = (unsigned int *)idx;
        v25[0x44] = gpGlobals->field_28;
        v25[69] = gpGlobals->field_2c;
        v25[70] = gpGlobals->field_30;
    }
    v26 = *(int *)(*(unsigned int *)&idx + 304);
    v26[0x44] = *(int *)(*(unsigned int *)&idx + 272);
    v27 = (st_508870_5 *)idx;
    *(float *)&v26[69] = v27->field_114;
    *(float *)&v26[70] = v27->field_118;
    v28 = -v27->field_110;
    v11 = (float)v28;
    v13 = -v27->field_114;
    v15 = -v27->field_118;
    v29 = v28 * 11.0;
    v7 = (float)v29;
    v30 = 11.0 * v13;
    v8 = (float)v30;
    v9 = (float)(11.0 * v15);
    v31 = *(int *)v27->field_128 + 8;
    v16 = (float)(v29 + *(float *)(*(int *)v27->field_128 + 8));
    v17 = (float)(v30 + *(float *)&v31[1]);
    v18 = *(float *)&v31[2] + v9;
    UTIL_SetOrigin(*(int *)v27->field_124, &v16);
    UTIL_VecToAngles(&v16, &v11);
    v0 = &v16;
    UTIL_Model_MeleeStruggle_Anglefix(g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
    return EMIT_SOUND_DYN(CPlayerMelee::GetSoundEdict(idx), 4, "weapons/prepunch1.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

