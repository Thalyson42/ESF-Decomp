// TaskThink__14CDrainEntsTask @0x1526c0 size=1581
typedef struct st_5526c0_7 {
    char padding_0[8];
    struct st_5526c0_6 *field_8;
    struct st_5526c0_8 *field_c;
} st_5526c0_7;

typedef struct st_5526c0_11 {
    char padding_0[160];
    struct st_5526c0_12 *field_a0;
} st_5526c0_11;

typedef struct st_5526c0_16 {
    struct st_5526c0_12 *field_0;
    char padding_4[12];
    char field_10;
} st_5526c0_16;

typedef struct st_5526c0_4 {
    char padding_0[8];
    struct st_5526c0_3 *field_8;
    char padding_c[12];
    float field_18;
} st_5526c0_4;

typedef struct st_5526c0_6 {
    char padding_0[2996];
    float field_bb4;
} st_5526c0_6;

typedef struct st_5526c0_2 {
    struct st_5526c0_0 *field_0;
} st_5526c0_2;

typedef struct st_5526c0_12 {
    unsigned int field_0;
} st_5526c0_12;

typedef struct st_5526c0_8 {
    char padding_0[456];
    unsigned int field_1c8;
    char padding_1cc[16];
    unsigned int field_1dc;
} st_5526c0_8;

typedef struct st_5526c0_9 {
    char padding_0[556];
    unsigned int field_22c;
} st_5526c0_9;

typedef struct st_5526c0_20 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[388];
    struct st_5526c0_9 *field_190;
    char padding_194[16];
    unsigned int field_1a4;
    char padding_1a8[88];
    unsigned int field_200;
    char padding_204[84];
    unsigned int field_258;
} st_5526c0_20;

typedef struct st_5526c0_10 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[388];
    struct st_5526c0_9 *field_198;
    char padding_19c[16];
    unsigned int field_1ac;
    char padding_1b0[88];
    unsigned int field_208;
    char padding_20c[84];
    float field_260;
} st_5526c0_10;

typedef struct st_5526c0_0 {
    char padding_0[608];
    float field_260;
} st_5526c0_0;

typedef struct st_5526c0_18 {
    char padding_0[4];
    unsigned int field_4;
} st_5526c0_18;

typedef struct st_5526c0_3 {
    char padding_0[892];
    unsigned int field_37c;
} st_5526c0_3;

typedef struct st_5526c0_13 {
    struct st_5526c0_10 *field_0;
    char padding_4[92];
    struct st_5526c0_11 *field_60;
} st_5526c0_13;

typedef struct st_5526c0_17 {
    char padding_0[8];
    unsigned int field_8;
} st_5526c0_17;

typedef struct st_5526c0_14 {
    char padding_0[8];
    struct st_5526c0_13 *field_8;
} st_5526c0_14;

typedef struct st_5526c0_1 {
    char padding_0[4];
    unsigned int field_4;
    struct st_5526c0_2 *field_8;
} st_5526c0_1;

typedef struct st_5526c0_19 {
    struct st_5526c0_16 *field_0;
    struct st_5526c0_17 *field_4;
    struct st_5526c0_18 *field_8;
} st_5526c0_19;

typedef struct st_5526c0_5 {
    float field_0;
} st_5526c0_5;

extern unsigned int g_teamplay;
extern st_5526c0_12 *g_engfuncs.pfnEmitSound;
extern st_5526c0_5 *gpGlobals;

int TaskThink__14CDrainEntsTask(float idx)
{
    st_5526c0_1 *v19;  // edx
    unsigned int v20;  // eax
    st_5526c0_20 *v29;  // edx
    unsigned int idx1;  // edx
    float v31;  // 112
    float v32;  // 112
    float v33;  // 112
    double v34;  // mm7
    double v35;  // mm6
    st_5526c0_20 *v36;  // edx
    st_5526c0_19 *iter;  // esi
    st_5526c0_16 *v38;  // edi
    st_5526c0_4 *v21;  // edx
    st_5526c0_17 *v39;  // esi
    st_5526c0_19 **v40;  // ecx
    st_5526c0_19 *v41;  // edx
    st_5526c0_17 *v42;  // eax
    st_5526c0_18 *v43;  // eax
    st_5526c0_18 *v44;  // ecx
    unsigned int index;  // edx
    st_5526c0_7 *v22;  // ecx
    st_5526c0_13 *v23;  // edi
    st_5526c0_19 *v24;  // esi
    st_5526c0_19 *v25;  // esi
    st_5526c0_14 *v27;  // edx
    st_5526c0_13 *v28;  // esi
    double v0;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xb0]
    float v2;  // [bp-0xa8], Other Possible Types: int
    char *v3;  // [bp-0x7c]
    char v4;  // [bp-0x76]
    char v5;  // [bp-0x75]
    float v6;  // [bp-0x68]
    float v7;  // [bp-0x54]
    float v8;  // [bp-0x50]
    float v9;  // [bp-0x4c]
    float v10;  // [bp-0x28], Other Possible Types: int
    float v11;  // [bp-0x24], Other Possible Types: int, unsigned int
    unsigned int v12;  // [bp-0x20], Other Possible Types: unsigned short
    unsigned short v13;  // [bp-0x1e]
    unsigned int v14;  // [bp-0x1c]
    unsigned int v15;  // [bp-0x18]
    unsigned int v16;  // [bp-0x14]
    unsigned int v17;  // [bp-0x10]

    v19 = (st_5526c0_1 *)idx;
    v13 = __fnstcw();
    v12 = v13 | 0xc00;
    *(int *)&v11 = (int)*(float *)(*(int *)v19->field_8 + 608);
    v10 = v11;
    v20 = _INSERT(v10, 0, 0);
    if (v10 < 150.0f)
    {
        v19->field_4 = 2;
        return v20;
    }
    v21 = (st_5526c0_4 *)idx;
    if (v21->field_18 >= *(float *)gpGlobals && !v21->field_8->field_37c)
    {
        v10 = CBasePlayer::GetMaxSpeed(v21->field_8);
        if (*(float *)&v10 != 0.0f)
        {
            v5 = 0;
            CBot::ResetMoveSpeed(*(int *)(*(unsigned int *)&idx + 8));
            if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 804))
            {
                *(unsigned short *)&v2 = 0;
                CBot::ToggleTurbo(*(int *)(*(unsigned int *)&idx + 8), v2);
                return v20;
            }
            v22 = (st_5526c0_7 *)idx;
            v22->field_c->field_1c8 = 0;
            v22->field_c->field_1dc = 19;
            *(float *)&v22->field_c->padding_1cc[0] = 25.0f;
            *(float *)&v22->field_c->padding_1cc[4] = 255.0f;
            *(float *)&v22->field_c->padding_1cc[8] = 255.0f;
            *(float *)&v22->field_c->padding_1cc[12] = 255.0f;
            v4 = 0;
            if (v22->field_8->field_bb4 <= *(float *)gpGlobals)
            {
                v22->field_8->field_bb4 = (float)(0.1 + *(float *)gpGlobals);
                v4 = 1;
            }
            v23 = NULL;
            v24 = *(int *)*(int *)(*(unsigned int *)&idx + 28);
            if (*(int *)*(int *)(*(unsigned int *)&idx + 28))
            {
                do
                {
                    v25 = v24;
                    v25->field_0->field_10 = 0;
                    v24 = v25->field_4;
                } while (v25->field_4);
            }
            v3 = &v11;
            while (1)
            {
                do
                {
                    v2 = 800.0f;
                    v23 = UTIL_FindEntityInSphere(v23, CONCAT(*(int *)(*(unsigned int *)&idx + 12) + 0x88, v23) >> 32, v2);
                    if (!v23 || !(v27 = (st_5526c0_14 *)idx, v13 = __fnstcw(), v12 = v13 | 0xc00, v11 = (int)v27->field_8->field_0->field_260, v11 > 19))
                    {
                        if (v5)
                        {
                            if (*(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3004) <= *(float *)gpGlobals)
                            {
                                g_engfuncs.pfnEmitSound(*(int *)(*(unsigned int *)&idx + 12), 1, "weapons/basicbeam_chargeoriginal.wav", 0x3f800000, 1061997773, 1061997773 >> 32, 100);
                                *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3004) = (float)(0.3 + *(float *)gpGlobals);
                            }
                        }
                        else
                        {
                            if (*(float *)gpGlobals + 1.0 < *(float *)(*(unsigned int *)&idx + 24))
                                *(float *)(*(unsigned int *)&idx + 24) = (float)(0.9 + *(float *)gpGlobals);
                        }
                        iter = *(int *)*(int *)(*(unsigned int *)&idx + 28);
                        while (iter)
                        {
                            v38 = iter->field_0;
                            if (!v38->field_10)
                            {
                                v39 = iter->field_4;
                                v40 = *(int *)(*(unsigned int *)&idx + 28);
                                v41 = iter;
                                if (v41)
                                {
                                    if (*v40 == v41)
                                    {
                                        if (v41 == v40[1])
                                            v40[1] = v41->field_4;
                                        v42 = *v40->field_4;
                                        *v40 = v42;
                                        if (v42)
                                            v42->field_8 = 0;
                                        v41->field_4 = NULL;
                                    }
                                    else
                                    {
                                        if (v41 == v40[1])
                                        {
                                            v43 = v41->field_8;
                                            v40[1] = v43;
                                            v43->field_4 = 0;
                                        }
                                        else
                                        {
                                            v44 = v41->field_8;
                                            if (!v44)
                                                goto LABEL_552c92;
                                            v41->field_4->field_8 = v44;
                                            v44->field_4 = v41->field_4;
                                        }
                                        v41->field_4 = NULL;
                                        v41->field_8 = NULL;
                                    }
                                    __builtin_delete(v41);
                                }
LABEL_552c92:
                                iter = v39;
                                if (v38)
                                {
                                    if (!(char)IsNull(v38->field_0))
                                    {
                                        index = *(int *)v38->field_0;
                                        *(int *)(index + 32) = *(int *)&v38->padding_4[0];
                                        *(int *)(index + 36) = *(int *)&v38->padding_4[4];
                                        *(int *)(index + 40) = *(int *)&v38->padding_4[8];
                                    }
                                    __builtin_delete(v38);
                                    iter = v39;
                                }
                            }
                            else
                            {
                                iter = iter->field_4;
                            }
                        }
                        return v20;
                    }
                } while ((v28 = NULL, v23 == v27->field_8 || (char)IsNull(v23) || !v23->field_60->field_a0(v23) && (!(char)IsAttack(v23->field_0->field_208) || (char)IsOtherAttack(v23->field_0->field_208))));
                if (v23->field_60->field_a0(v23))
                {
                    v29 = &v23->field_0->field_8;
                    *(float *)&v11 = *(float *)&v23->field_0->field_8;
                    *(float *)&v12 = *(float *)&v29->field_4;
                    *(float *)&v14 = *(float *)&v29->field_8;
                    idx1 = *(int *)*(int *)(*(unsigned int *)&idx + 8) + 8;
                    v31 = *(float *)&v11 - *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 8);
                    v7 = v31;
                    v32 = *(float *)&v12 - *(float *)(idx1 + 4);
                    v8 = v32;
                    v33 = *(float *)&v14 - *(float *)(idx1 + 8);
                    v9 = v33;
                    v34 = v31 * v31 + v32 * v32 + v33 * v33;
                    v35 = sqrt(v34);
                    if (isnan(v35))
                    {
                        v0 = v34;
                        sqrt(*(unsigned int *)&v0);
                    }
                    else
                    {
                        v34 = v35;
                    }
                    v6 = (float)v34;
                    if (v6 < 350.0f)
                        break;
                    v28 = v23;
                    *(unsigned short *)&v2 = 1;
                    v1 = _INSERT(v0, 4, 1);
                    v0 = _INSERT(v1, 0, v23);
                    if (!(char)UTIL_IsValidPlayer(v0, *(unsigned int *)((void*)&v0 + 4), v2))
                        continue;
                }
                if ((!g_teamplay || (!v28 || v28->field_0->field_1ac != *(int *)(*(int *)(*(unsigned int *)&idx + 12) + 556)) && ((char)IsNull(v23->field_0->field_198) || v23->field_0->field_198->field_22c != *(int *)(*(int *)(*(unsigned int *)&idx + 12) + 556))) && (!v28 || (char)CBot::CanAttackPlayer(*(int *)(*(unsigned int *)&idx + 8), v28)) && (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 96) + 228))(*(int *)(*(unsigned int *)&idx + 8), &v23->field_0->field_8))
                {
                    if (!v5)
                        v5 = 1;
                    if (v4)
                    {
                        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 96) + 208))(v3, *(int *)(*(unsigned int *)&idx + 8));
                        v36 = &v23->field_0->field_8;
                        *(float *)&v15 = *(float *)&v23->field_0->field_8;
                        *(float *)&v16 = *(float *)&v36->field_4;
                        *(float *)&v17 = *(float *)&v36->field_8;
                        UTIL_DrawBeamToAll(v3, &v15, 20, 8, 125, 0xff, 0xff, 250, 5);
                    }
                    if (v28)
                        CDrainEntsTask::DrainPlayer(idx, v28);
                    else
                        CDrainEntsTask::DrainAttack(idx, v23);
                    *(float *)(*(unsigned int *)&idx + 24) = (float)(*(float *)(*(unsigned int *)&idx + 24) + 0.20000000298023224);
                }
            }
        }
    }
    *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
    return v20;
}

