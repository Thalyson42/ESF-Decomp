// ChaseThink__18CKameTorpedoAttack @0xca080 size=1007
typedef struct st_4ca080_4 {
    char padding_0[140];
    struct st_4ca080_5 *field_8c;
} st_4ca080_4;

typedef struct st_4ca080_8 {
    struct st_4ca080_7 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4ca080_8;

typedef struct st_4ca080_7 {
    char padding_0[260];
    unsigned int field_104;
} st_4ca080_7;

typedef struct st_4ca080_13 {
    char padding_0[376];
    unsigned int field_178;
} st_4ca080_13;

typedef struct st_4ca080_14 {
    char padding_0[400];
    unsigned int field_190;
} st_4ca080_14;

typedef struct st_4ca080_12 {
    char padding_0[408];
    unsigned int field_198;
} st_4ca080_12;

typedef struct st_4ca080_5 {
    unsigned int field_0;
} st_4ca080_5;

typedef struct st_4ca080_3 {
    char padding_0[428];
    unsigned int field_1ac;
} st_4ca080_3;

typedef struct st_4ca080_1 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
} st_4ca080_1;

typedef struct st_4ca080_0 {
    struct st_4ca080_1 *field_0;
    char padding_4[676];
    float field_2a8;
} st_4ca080_0;

typedef struct st_4ca080_2 {
    char padding_0[32];
    char field_20;
    char padding_21[47];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
} st_4ca080_2;

typedef struct st_4ca080_6 {
    struct st_4ca080_3 *field_0;
    char padding_4[92];
    struct st_4ca080_4 *field_60;
} st_4ca080_6;

typedef struct st_4ca080_10 {
    char padding_0[32];
    struct st_4ca080_5 *field_20;
} st_4ca080_10;

typedef struct st_4ca080_9 {
    float field_0;
    char padding_4[140];
    int field_90;
} st_4ca080_9;

typedef struct st_4ca080_11 {
    char padding_0[68];
    struct st_4ca080_10 *field_44;
} st_4ca080_11;

extern char NormalThink__12CMagicAttack;
extern st_4ca080_11 *g_pGameRules;
extern st_4ca080_9 *gpGlobals;

double ChaseThink__18CKameTorpedoAttack(float idx)
{
    unsigned int index;  // esi
    st_4ca080_14 *v20;  // edx
    float *v29;  // edx
    unsigned int *v30;  // eax
    double v31;  // mm5
    double v32;  // mm5
    st_4ca080_12 *v33;  // edi
    st_4ca080_13 *v34;  // esi
    double v35;  // mm7
    double v36;  // mm6
    double v37;  // mm7
    st_4ca080_0 *v38;  // edx
    float v21;  // 112
    float v39;  // 128
    st_4ca080_2 *v40;  // esi
    st_4ca080_12 *node;  // eax
    st_4ca080_8 *v43;  // ecx
    float v44;  // 128
    int iter;  // edi
    st_4ca080_6 *v46;  // esi
    double v47;  // mm7
    float v22;  // 112
    float v23;  // 112
    double v24;  // mm7
    double v25;  // mm6
    double v26;  // mm7
    st_4ca080_0 *v27;  // edx
    float v28;  // 128
    st_4ca080_3 *v0;  // [bp-0x98]
    float v1;  // [bp-0x84]
    float v2;  // [bp-0x80]
    float v3;  // [bp-0x7c]
    float v4;  // [bp-0x78]
    float v5;  // [bp-0x74]
    float v6;  // [bp-0x70]
    float v7;  // [bp-0x6c]
    float v8;  // [bp-0x68]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    float v12;  // [bp-0x44]
    float v13;  // [bp-0x40]
    float v14;  // [bp-0x3c]
    float v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]

    if (!*(int *)(*(unsigned int *)&idx + 732))
    {
        v0 = NULL;
        node = *(int *)idx;
        if (node->field_198)
        {
            node = node->field_198;
            if (!node)
            {
                v43 = (st_4ca080_8 *)idx;
                v43->field_c = _INSERT(node, 0, 0) | 0xffff0000;
                v43->field_10 = &NormalThink__12CMagicAttack;
                v44 = gpGlobals->field_0;
                *(float *)&v43->field_0->field_104 = v44;
                return v44;
            }
            node = &node->padding_0[128];
            v0 = node;
        }
        if (!v0)
        {
            v43 = (st_4ca080_8 *)idx;
            v43->field_c = _INSERT(node, 0, 0) | 0xffff0000;
            v43->field_10 = &NormalThink__12CMagicAttack;
            v44 = gpGlobals->field_0;
            *(float *)&v43->field_0->field_104 = v44;
            return v44;
        }
        iter = 1;
        while (iter <= gpGlobals->field_90)
        {
            v46 = UTIL_PlayerByIndex(iter);
            if (v46)
            {
                if (v46->field_60->field_8c(v46))
                {
                    if (v46->field_0 != v0)
                    {
                        if (v46->field_0->field_1ac != v0->field_1ac || !g_pGameRules->field_44->field_20(g_pGameRules))
                        {
                            if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 280))(idx, v46))
                            {
                                *(st_4ca080_6 **)(*(unsigned int *)&idx + 732) = v46;
                                iter += 1;
                            }
                            else
                            {
                                iter += 1;
                            }
                        }
                        else
                        {
                            iter += 1;
                        }
                    }
                    else
                    {
                        iter += 1;
                    }
                }
                else
                {
                    iter += 1;
                }
            }
            else
            {
                iter += 1;
            }
        }
    }
    else if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 280))(idx, *(int *)(*(unsigned int *)&idx + 732)))
    {
        index = *(int *)*(int *)(*(unsigned int *)&idx + 732) + 8;
        v20 = *(int *)idx + 8;
        v21 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 732) + 8) - *(float *)(*(int *)idx + 8);
        v15 = v21;
        v22 = *(float *)(index + 4) - *(float *)&v20->padding_0[4];
        v16 = v22;
        v23 = *(float *)(index + 8) - *(float *)&v20->padding_0[8];
        v17 = v23;
        v24 = v21 * v21 + v22 * v22 + v23 * v23;
        v25 = sqrt(v24);
        if (isnan(v25))
            sqrt(*(unsigned int *)&v24);
        else
            v24 = v25;
        v4 = (float)v24;
        if (v4 == 0.0f)
        {
            v9 = 0.0f;
            v10 = 0.0f;
            v11 = 1.0;
        }
        else
        {
            v26 = 1.0 / v4;
            v9 = (float)(v26 * v15);
            v10 = (float)(v26 * v16);
            v11 = (float)(v26 * v17);
        }
        v27 = (st_4ca080_0 *)idx;
        v28 = v27->field_2a8;
        v12 = v28 * v9;
        v13 = v28 * v10;
        v14 = v28 * v11;
        v15 = v12;
        v16 = v13;
        v17 = v14;
        v29 = v27->field_0;
        v30 = v29 + 8;
        v4 = (float)(0.6000000238418579 * v29[8]);
        v5 = (float)(0.6000000238418579 * *(float *)&v30[1]);
        v6 = (float)(0.6000000238418579 * *(float *)&v30[2]);
        v31 = 0.4000000059604645 * v15;
        v7 = (float)v31;
        v32 = 0.4000000059604645 * v16;
        v8 = (float)v32;
        v9 = (float)(0.4000000059604645 * v17);
        v1 = (float)(v31 + v4);
        v2 = (float)(v32 + v5);
        v3 = v6 + v9;
        v29[8] = v1;
        v29[9] = v2;
        v29[10] = v3;
        v33 = *(int *)idx;
        v34 = &v33->padding_0[32];
        v35 = *(float *)&v33->padding_0[32] * *(float *)&v33->padding_0[32] + *(float *)&v34->padding_0[4] * *(float *)&v34->padding_0[4] + *(float *)&v34->padding_0[8] * *(float *)&v34->padding_0[8];
        v36 = sqrt(v35);
        if (isnan(v36))
            sqrt(*(unsigned int *)&v35);
        else
            v35 = v36;
        v10 = (float)v35;
        if (v10 == 0.0f)
        {
            v4 = 0.0f;
            v5 = 0.0f;
            v6 = 1.0;
        }
        else
        {
            v37 = 1.0 / v10;
            v4 = (float)(v37 * *(float *)&v34->padding_0[0]);
            v5 = (float)(v37 * *(float *)&v34->padding_0[4]);
            v6 = (float)(v37 * *(float *)&v34->padding_0[8]);
        }
        v38 = (st_4ca080_0 *)idx;
        v39 = v38->field_2a8;
        v1 = v39 * v4;
        v2 = v39 * v5;
        v3 = v39 * v6;
        *(float *)&v33->padding_0[32] = v1;
        *(float *)&v33->padding_0[36] = v2;
        *(float *)&v33->padding_0[40] = v3;
        v40 = v38->field_0;
        UTIL_VecToAngles(&v1, &v40->field_20);
        *(float *)&v40->field_50 = v1;
        *(float *)&v40->field_54 = v2;
        *(float *)&v40->field_58 = v3;
    }
    else
    {
        *(unsigned int **)(*(unsigned int *)&idx + 732) = NULL;
    }
    CMagicAttack::DrawBubbles(idx);
    v47 = 0.1 + gpGlobals->field_0;
    *(float *)(*(int *)idx + 260) = (float)v47;
    return v47;
}

