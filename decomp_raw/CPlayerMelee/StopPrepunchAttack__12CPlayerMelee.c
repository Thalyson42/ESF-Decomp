// StopPrepunchAttack__12CPlayerMelee @0x108c10 size=765
typedef struct st_508c10_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[4];
    struct st_508c10_3 *field_14;
    struct st_508c10_4 *field_18;
    char padding_1c[4];
    unsigned int field_20;
} st_508c10_2;

typedef struct st_508c10_4 {
    unsigned int field_0;
} st_508c10_4;

typedef struct st_508c10_3 {
    struct st_508c10_1 *field_0;
} st_508c10_3;

typedef struct st_508c10_1 {
    char padding_0[648];
    unsigned int field_288;
    unsigned int field_28c;
    unsigned int field_290;
} st_508c10_1;

typedef struct st_508c10_0 {
    float field_0;
} st_508c10_0;

extern st_508c10_0 *gpGlobals;

float StopPrepunchAttack__12CPlayerMelee(float idx)
{
    st_508c10_2 *v13;  // edi
    double v14;  // mm7
    unsigned int *v23;  // edx
    unsigned int v24;  // 128
    float v25;  // 128
    float v26;  // mm7
    double v15;  // mm6
    double v16;  // mm7
    unsigned int index;  // edx
    unsigned int *v18;  // edx
    unsigned int *v19;  // ecx
    double v20;  // mm5
    double v21;  // mm5
    unsigned int v22;  // edx
    float v0;  // [bp-0x44]
    unsigned int v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    unsigned int v3;  // [bp-0x40]
    float v4;  // [bp-0x3c]
    unsigned int v5;  // [bp-0x3c]
    float v6;  // [bp-0x38]
    float v7;  // [bp-0x34]
    float v8;  // [bp-0x30]
    float v9;  // [bp-0x24]
    float v10;  // [bp-0x20]
    float v11;  // [bp-0x1c]

    if (*(int *)(*(unsigned int *)&idx + 284) == 1)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 184) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 0x88) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 140) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 144) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 284) = 0;
        CPlayerMelee::RemoveAllAnims(idx);
        EMIT_SOUND_DYN(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 520), 4, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        *(unsigned int *)(*(unsigned int *)&idx + 280) = 0;
        v13 = *(unsigned int *)&idx + 272;
        v14 = *(float *)(*(unsigned int *)&idx + 272) * *(float *)(*(unsigned int *)&idx + 272) + *(float *)(*(unsigned int *)&idx + 276) * *(float *)(*(unsigned int *)&idx + 276) + 0.0;
        v15 = sqrt(v14);
        if (isnan(v15))
            sqrt(*(unsigned int *)&v14);
        else
            v14 = v15;
        v6 = (float)v14;
        if (v6 == 0.0f)
        {
            v9 = 0.0f;
            v10 = 0.0f;
            v11 = 1.0;
        }
        else
        {
            v16 = 1.0 / v6;
            v9 = (float)(v16 * *(float *)&v13->padding_0[0]);
            v10 = (float)(v16 * *(float *)&v13->padding_0[4]);
            v11 = (float)(v16 * *(float *)&v13->field_8);
        }
        *(float *)(*(unsigned int *)&idx + 272) = v9;
        *(float *)(*(unsigned int *)&idx + 276) = v10;
        *(float *)(*(unsigned int *)&idx + 280) = v11;
        index = *(int *)(*(unsigned int *)&idx + 304);
        *(float *)(index + 272) = v9;
        *(int *)(index + 276) = *(int *)(*(unsigned int *)&idx + 276);
        *(int *)(index + 280) = *(int *)(*(unsigned int *)&idx + 280);
        v18 = *(int *)*(int *)(*(unsigned int *)&idx + 292);
        v1 = 0;
        v3 = 0;
        v5 = 0;
        v18[162] = v1;
        v18[163] = v3;
        v18[164] = v5;
        v19 = *(int *)*(int *)(*(unsigned int *)&idx + 292);
        v20 = 11.0 * *(float *)(*(unsigned int *)&idx + 272);
        v6 = (float)v20;
        v21 = 11.0 * *(float *)(*(unsigned int *)&idx + 276);
        v7 = (float)v21;
        v8 = (float)(11.0 * *(float *)(*(unsigned int *)&idx + 280));
        v22 = *(int *)*(int *)(*(unsigned int *)&idx + 296) + 8;
        v0 = (float)(v20 + *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 8));
        v2 = (float)(v21 + *(float *)(v22 + 4));
        v4 = *(float *)(v22 + 8) + v8;
        *(float *)&v19[2] = v0;
        *(float *)&v19[3] = v2;
        *(float *)&v19[4] = v4;
        UTIL_SetOrigin(*(int *)*(int *)(*(unsigned int *)&idx + 292), *(int *)*(int *)(*(unsigned int *)&idx + 292) + 8);
        CPlayerMelee::StopPrepunchAttack(*(int *)(*(unsigned int *)&idx + 304));
        return v4;
    }
    else if (*(int *)(*(unsigned int *)&idx + 284) == 2)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 284) = 0;
        CPlayerMelee::RemoveAllAnims(idx);
        v23 = *(int *)*(int *)(*(unsigned int *)&idx + 292);
        v1 = 0;
        v3 = 0;
        v5 = 0;
        v23[162] = v1;
        v23[163] = v3;
        v23[164] = v5;
        if (!*(int *)(*(unsigned int *)&idx + 220))
        {
            v24 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 0x88);
            if (__int_as_float(v24) != 0.0)
            {
                CPlayerMelee::SetActiveStunTime(idx, v24);
                return __int_as_float(v24);
            }
            else if (!*(int *)(*(unsigned int *)&idx + 220))
            {
                return __int_as_float(v24);
            }
        }
        v25 = *(float *)(*(unsigned int *)&idx + 0x88) - *(float *)gpGlobals;
        CPlayerMelee::SetTotalStunTime(idx, v25);
        return v25;
    }
    else
    {
        return v26;
    }
}

