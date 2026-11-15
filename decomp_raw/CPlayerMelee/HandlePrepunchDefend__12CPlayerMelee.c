// HandlePrepunchDefend__12CPlayerMelee @0x109740 size=815
typedef struct st_509740_4 {
    char padding_0[20];
    struct st_509740_5 *field_14;
    char padding_18[4];
    struct st_509740_5 *field_1c;
} st_509740_4;

typedef struct st_509740_5 {
    struct st_509740_2 *field_0;
} st_509740_5;

typedef struct st_509740_2 {
    char padding_0[8];
    char field_8;
    char padding_9[639];
    unsigned int field_288;
    unsigned int field_28c;
    unsigned int field_290;
} st_509740_2;

typedef struct st_509740_1 {
    float field_0;
} st_509740_1;

typedef struct st_509740_0 {
    unsigned int field_0;
} st_509740_0;

extern float melee_prepunch_driftspeed+12;
extern st_509740_0 *g_engfuncs.pfnIndexOfEdict;
extern st_509740_1 *gpGlobals;

int HandlePrepunchDefend__12CPlayerMelee(float idx)
{
    st_509740_2 **v22;  // ecx
    double v23;  // mm5
    double v32;  // mm7
    unsigned int v33;  // eax, Other Possible Types: float
    double v24;  // mm5
    unsigned int *v25;  // edx
    st_509740_2 *v26;  // edx
    int v27;  // eax
    st_509740_4 *v29;  // esi
    double v30;  // mm7
    double v31;  // mm6
    int v0;  // [bp-0xd0], Other Possible Types: unsigned int
    char *v1;  // [bp-0xc0]
    st_509740_2 *v2;  // [bp-0x90]
    int v3;  // [bp-0x8c]
    unsigned short v4;  // [bp-0x88]
    unsigned short v5;  // [bp-0x86]
    float v6;  // [bp-0x80], Other Possible Types: unsigned int
    unsigned int v7;  // [bp-0x7c], Other Possible Types: float
    float v8;  // [bp-0x78], Other Possible Types: unsigned int
    float v9;  // [bp-0x74], Other Possible Types: unsigned int
    float v10;  // [bp-0x70]
    char v11;  // [bp-0x6c], Other Possible Types: unsigned int
    unsigned int v12;  // [bp-0x68]
    float v13;  // [bp-0x64]
    float v14;  // [bp-0x60]
    float v15;  // [bp-0x5c]
    char v16;  // [bp-0x44]
    float v17;  // [bp-0x34]
    char v18;  // [bp-0x20], Other Possible Types: unsigned int
    unsigned int v19;  // [bp-0x1c]
    unsigned int v20;  // [bp-0x18]

    if (!*(int *)(*(unsigned int *)&idx + 208))
    {
        v22 = *(int *)(*(unsigned int *)&idx + 292);
        v23 = 5.5 * *(float *)(*(unsigned int *)&idx + 272);
        v33 = (float)v23;
        v24 = 5.5 * *(float *)(*(unsigned int *)&idx + 276);
        v6 = (float)v24;
        v7 = (float)(5.5 * *(float *)(*(unsigned int *)&idx + 280));
        v25 = &*v22->field_8;
        v13 = (float)(v23 + *(float *)&*v22->field_8);
        v14 = (float)(v24 + *(float *)&v25[1]);
        v15 = *(float *)&v25[2] + v7;
        UTIL_TraceHull(&*v22->field_8, &v13, 1, 1, *(int *)&*v22->padding_9[0x1ff], &v16);
        if (1.0 > v17)
        {
            *(unsigned int *)(*(unsigned int *)&idx + 208) = 1;
            v26 = *(int *)*(int *)(*(unsigned int *)&idx + 292);
            *(unsigned int *)&v33 = 0;
            v6 = 0;
            v7 = 0;
            *(float *)&v26->field_288 = v33;
            v26->field_28c = v6;
            v26->field_290 = v7;
            UTIL_VecToAngles(&v33, &v18);
            v5 = __fnstcw();
            v4 = v5 | 0xc00;
            v3 = (int)v33;
            v27 = v3;
            if (v27 < 0)
                v27 = -v27;
            if (v27 <= 45)
            {
                v33 = v18;
                v6 = v19;
                v7 = v20;
                *(unsigned int *)&v7 = -v7;
                UTIL_VecToAngles(&v11, &v33);
                v8 = v11;
                v9 = v12;
                v10 = v13;
                v1 = &v11;
                v0 = *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 300) + 520);
                UTIL_Model_MeleeStruggle_Anglefix(g_engfuncs.pfnIndexOfEdict(v0));
            }
            if (!*(int *)(*(unsigned int *)&idx + 212) && !*(int *)(*(unsigned int *)&idx + 216))
            {
                *(unsigned short *)&v0 = 1;
                CPlayerMelee::AddAnimation(idx, v0, *(float *)gpGlobals, 1, "wall_autopunched");
            }
        }
        else
        {
            v2 = *(int *)*(int *)(*(unsigned int *)&idx + 292);
            v29 = *(unsigned int *)&idx + 272;
            v30 = *(float *)(*(unsigned int *)&idx + 272) * *(float *)(*(unsigned int *)&idx + 272) + *(float *)(*(unsigned int *)&idx + 276) * *(float *)(*(unsigned int *)&idx + 276) + *(float *)(*(unsigned int *)&idx + 280) * *(float *)(*(unsigned int *)&idx + 280);
            v31 = sqrt(v30);
            if (isnan(v31))
                sqrt(*(unsigned int *)&v30);
            else
                v30 = v31;
            v14 = (float)v30;
            if (v14 == 0.0f)
            {
                v8 = 0.0f;
                v9 = 0.0f;
                v10 = 1.0;
            }
            else
            {
                v32 = 1.0 / v14;
                v8 = (float)(v32 * *(float *)&v29->padding_0[0]);
                v9 = (float)(v32 * *(float *)&v29->padding_0[4]);
                v10 = (float)(v32 * *(float *)&v29->padding_0[8]);
            }
            v33 = melee_prepunch_driftspeed+12 * v8;
            v6 = melee_prepunch_driftspeed+12 * v9;
            v7 = melee_prepunch_driftspeed+12 * v10;
LABEL_509a41:
            *(float *)&v2->field_288 = v33;
            *(float *)&v2->field_28c = v6;
            *(float *)&v2->field_290 = v7;
        }
    }
    else
    {
        v2 = *(int *)*(int *)(*(unsigned int *)&idx + 292);
        v33 = 0;
        v6 = 0;
        v7 = 0;
        goto LABEL_509a41;
    }
    return CPlayerMelee::CheckStunTime(idx);
}

