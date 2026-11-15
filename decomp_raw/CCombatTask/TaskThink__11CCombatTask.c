// TaskThink__11CCombatTask @0x14ab40 size=3583
typedef struct st_54ab40_22 {
    char padding_0[12];
    unsigned short field_c;
} st_54ab40_22;

typedef struct st_54ab40_7 {
    char padding_0[8];
    struct st_54ab40_5 *field_8;
    struct st_54ab40_6 *field_c;
} st_54ab40_7;

typedef struct st_54ab40_13 {
    char padding_0[4];
    unsigned int field_4;
    struct st_54ab40_11 *field_8;
    struct st_54ab40_12 *field_c;
} st_54ab40_13;

typedef struct st_54ab40_17 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_54ab40_17;

typedef struct st_54ab40_5 {
    char padding_0[1888];
    unsigned int field_760;
} st_54ab40_5;

typedef struct st_54ab40_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    int field_10;
} st_54ab40_0;

typedef struct st_54ab40_15 {
    char padding_0[8];
    struct st_54ab40_8 *field_8;
    char padding_c[4];
    struct st_54ab40_16 *field_10;
} st_54ab40_15;

typedef struct st_54ab40_9 {
    unsigned short field_0;
} st_54ab40_9;

typedef struct st_54ab40_8 {
    char padding_0[2564];
    struct st_54ab40_9 *field_a04;
} st_54ab40_8;

typedef struct st_54ab40_14 {
    char padding_0[264];
    unsigned int field_108;
} st_54ab40_14;

typedef struct st_54ab40_2 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[364];
    struct st_54ab40_3 *field_198;
} st_54ab40_2;

typedef struct st_54ab40_16 {
    struct st_54ab40_14 *field_0;
} st_54ab40_16;

typedef struct st_54ab40_23 {
    unsigned int field_0;
    char padding_4[888];
    unsigned int field_37c;
    char padding_380[1664];
    struct st_54ab40_20 *field_a00;
    struct st_54ab40_21 *field_a04;
    char padding_a08[356];
    unsigned int field_b6c;
    char padding_b70[4];
    unsigned int field_b74;
    char padding_b78[44];
    unsigned short field_ba4;
    char padding_ba6[2];
    struct st_54ab40_22 *field_ba8;
    char padding_bac[1212];
    unsigned int field_1068;
} st_54ab40_23;

typedef struct st_54ab40_11 {
    char padding_0[4200];
    unsigned int field_1068;
} st_54ab40_11;

typedef struct st_54ab40_6 {
    char padding_0[512];
    char field_200;
} st_54ab40_6;

typedef struct st_54ab40_12 {
    char padding_0[513];
    char field_201;
} st_54ab40_12;

typedef struct st_54ab40_21 {
    char padding_0[38];
    unsigned short field_26;
    char padding_28[12];
    unsigned int field_34;
} st_54ab40_21;

typedef struct st_54ab40_20 {
    char padding_0[62];
    char field_3e;
} st_54ab40_20;

typedef struct st_54ab40_3 {
    char padding_0[136];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
    char padding_94[504];
    unsigned int field_28c;
} st_54ab40_3;

typedef struct st_54ab40_10 {
    char padding_0[8];
    struct st_54ab40_8 *field_8;
} st_54ab40_10;

typedef struct st_54ab40_19 {
    struct st_54ab40_18 *field_0;
    struct st_54ab40_19 *field_4;
    struct st_54ab40_19 *field_8;
} st_54ab40_19;

typedef struct st_54ab40_18 {
    struct st_54ab40_18 *field_0;
    unsigned int field_4;
    unsigned int field_8;
} st_54ab40_18;

typedef struct st_54ab40_1 {
    float field_0;
} st_54ab40_1;

typedef struct st_54ab40_4 {
    unsigned int field_0;
} st_54ab40_4;

extern unsigned int FindSelection__t12TMultiChoice1ZiPQ2t12TMultiChoice1Zi12SMultiChoicei;
extern st_54ab40_17 BotWeaponInfoTable;
extern st_54ab40_4 *g_engfuncs.pfnCVarGetFloat;
extern st_54ab40_4 *g_engfuncs.pfnRandomLong;
extern st_54ab40_4 *g_engfuncs.pfnRandomFloat;
extern st_54ab40_1 *gpGlobals;
extern char BotManager+3399;

double TaskThink__11CCombatTask(float idx)
{
    double v40;  // mm7
    unsigned int *v41;  // edx
    double v50;  // 128
    double v51;  // mm0
    st_54ab40_7 *v52;  // ecx
    st_54ab40_23 *v53;  // edx
    unsigned int v54;  // eax
    int v55;  // edi
    st_54ab40_10 *v57;  // ecx
    st_54ab40_2 **v58;  // esi
    st_54ab40_2 *v59;  // edx
    unsigned int index;  // edx
    double v60;  // mm6
    double v61;  // mm5
    st_54ab40_13 *v62;  // edx
    st_54ab40_15 *v63;  // edx
    double v64;  // mm6
    st_54ab40_19 **v66;  // eax
    unsigned int v67;  // eax
    unsigned int v68;  // eax
    int v69;  // esi
    float v43;  // 112
    st_54ab40_18 *v70;  // eax
    st_54ab40_19 **v71;  // edi
    st_54ab40_19 *v72;  // esi
    st_54ab40_19 *v73;  // esi
    st_54ab40_19 *v74;  // eax
    st_54ab40_19 *v76;  // esi
    st_54ab40_19 *v77;  // esi
    st_54ab40_19 *v78;  // esi
    st_54ab40_18 *v79;  // eax
    float v44;  // 112
    st_54ab40_19 **v80;  // edx
    st_54ab40_18 *v81;  // esi
    st_54ab40_19 *v82;  // ecx
    st_54ab40_19 *v83;  // eax
    st_54ab40_18 *v84;  // eax
    st_54ab40_19 **v85;  // edi
    st_54ab40_19 *iter;  // esi
    st_54ab40_19 *v87;  // eax
    st_54ab40_19 **v88;  // edx
    st_54ab40_18 *v89;  // esi
    float v45;  // 112
    st_54ab40_19 *v90;  // ecx
    st_54ab40_19 *v91;  // eax
    st_54ab40_18 *v92;  // eax
    st_54ab40_19 **v93;  // edi
    st_54ab40_19 *node;  // esi
    st_54ab40_19 *v95;  // eax
    st_54ab40_19 **v96;  // edx
    st_54ab40_18 *v97;  // esi
    st_54ab40_19 *v98;  // ecx
    st_54ab40_19 *v99;  // eax
    double v46;  // mm7
    st_54ab40_18 *v100;  // eax
    st_54ab40_19 **v101;  // edi
    st_54ab40_19 *iter1;  // esi
    st_54ab40_19 *v103;  // eax
    double v47;  // mm6
    unsigned int *v48;  // edx
    st_54ab40_0 *v49;  // edx
    float v0;  // [bp-0xec]
    st_54ab40_18 *v1;  // [bp-0xe8], Other Possible Types: int, unsigned int
    int v2;  // [bp-0xe4]
    st_54ab40_18 **v3;  // [bp-0xc8]
    unsigned int v4;  // [bp-0xc4]
    unsigned int *v5;  // [bp-0xc0]
    unsigned int v6;  // [bp-0xbc]
    char *v7;  // [bp-0xb8]
    char v8;  // [bp-0xb1]
    st_54ab40_19 *v9;  // [bp-0xb0]
    char v10;  // [bp-0xa9]
    st_54ab40_18 *v11;  // [bp-0xa8]
    unsigned short v12;  // [bp-0xa4]
    char v13;  // [bp-0xa1]
    st_54ab40_17 *v14;  // [bp-0xa0]
    int idx1;  // [bp-0x9c]
    float v16;  // [bp-0x98]
    char v17;  // [bp-0x92]
    char v18;  // [bp-0x91]
    float v19;  // [bp-0x90]
    unsigned int v20;  // [bp-0x8c]
    unsigned short v21;  // [bp-0x86]
    st_54ab40_18 *v22;  // [bp-0x84]
    st_54ab40_19 **v23;  // [bp-0x80], Other Possible Types: unsigned int
    unsigned short v24;  // [bp-0x6a]
    int v25;  // [bp-0x68]
    unsigned int v26;  // [bp-0x64]
    unsigned int v27;  // [bp-0x60]
    unsigned int v28;  // [bp-0x5c]
    int v29;  // [bp-0x58]
    unsigned short v30;  // [bp-0x54]
    unsigned short v31;  // [bp-0x52]
    float v32;  // [bp-0x4c]
    float v33;  // [bp-0x44]
    float v34;  // [bp-0x40]
    float v35;  // [bp-0x3c]
    unsigned int v36;  // [bp-0x24]
    unsigned int v37;  // [bp-0x20]
    unsigned int v38;  // [bp-0x1c]

    if (!*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2924))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
        return v40;
    }
    CBot::BotCombatMovement(*(int *)(*(unsigned int *)&idx + 8));
    v41 = *(int *)*(int *)(*(unsigned int *)&idx + 16) + 8;
    *(float *)&v36 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 16) + 8);
    *(float *)&v37 = *(float *)&v41[1];
    *(float *)&v38 = *(float *)&v41[2];
    index = *(int *)*(int *)(*(unsigned int *)&idx + 8) + 8;
    v43 = *(float *)&v36 - *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 8);
    v33 = v43;
    v44 = *(float *)&v37 - *(float *)(index + 4);
    v34 = v44;
    v45 = *(float *)&v38 - *(float *)(index + 8);
    v35 = v45;
    v46 = v43 * v43 + v44 * v44 + v45 * v45;
    v47 = sqrt(v46);
    if (isnan(v47))
        sqrt(*(unsigned int *)&v46);
    else
        v46 = v47;
    v19 = (float)v46;
    v18 = 1;
    v48 = *(int *)(*(unsigned int *)&idx + 12) + 0x88;
    *(float *)&v26 = *(float *)(*(int *)(*(unsigned int *)&idx + 12) + 0x88);
    *(float *)&v27 = *(float *)&v48[1];
    *(float *)&v28 = *(float *)&v48[2];
    if (!(char)EntIsInFieldOfView(*(int *)(*(unsigned int *)&idx + 8), *(int *)(*(unsigned int *)&idx + 16)))
    {
        v49 = (st_54ab40_0 *)idx;
        v1 = v49->field_8;
        if (!(char)EntIsInFieldOfView(v49->field_10, v1))
        {
            CBot::ResetMoveSpeed(*(int *)(*(unsigned int *)&idx + 8));
            return *(float *)&v48[2];
        }
    }
    if (*(char *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 0xa00) + 62) && v19 < 800.0f)
    {
        *(unsigned short *)&v1 = 1;
        CBot::ToggleTurbo(*(int *)(*(unsigned int *)&idx + 8), v1);
    }
    v50 = *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 2932);
    if (v50 > *(float *)gpGlobals)
    {
        return v50;
    }
    else if (BotManager+3399)
    {
        g_engfuncs.pfnCVarGetFloat("mp_ceasefire");
        if (v51 == 1.0)
        {
            return 1.0;
        }
        else if (CBasePlayer::HasWeapons(*(int *)(*(unsigned int *)&idx + 8)))
        {
            v52 = (st_54ab40_7 *)idx;
            if (v52->field_8->field_760)
                v52->field_c->field_200 = v52->field_c->field_200 | 1;
            v53 = *(int *)(*(unsigned int *)&idx + 8);
            if ((short)v53->field_ba4 > 0)
            {
                v47 = *(float *)(v53->field_0 + 352);
                v31 = __fnstcw();
                v30 = v31 | 0xc00;
                v29 = (int)v47;
                if (v29 <= 69)
                {
                    v47 = *(float *)(v53->field_0 + 608);
                    v31 = __fnstcw();
                    v30 = v31 | 0xc00;
                    v29 = (int)v47;
                    if (v29 > 150)
                    {
                        v25 = CBasePlayer::GetMaxSpeed(v53);
                        v47 = (double)v25;
                        if (0.0 < v47 && !*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 892))
                        {
                            v54 = g_engfuncs.pfnRandomLong(1, 100);
                            if ((int)v54 <= *(short *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2984) + 12))
                            {
                                *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 8) + 4200) = 32;
                                *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
                                return 1.0;
                            }
                        }
                    }
                }
            }
            v55 = 1;
            if (*(int *)(*(int *)(*(unsigned int *)&idx + 12) + 652) == 7)
                v55 = 2;
            v17 = 0;
            CCombatTask::GetMinDistForAttackById(idx, v55);
            if ((isunordered(v47, v19) ? 0x44 : v47 == v19 ? 63 : v47 < v19 ? 0 : 0xff) < 64)
            {
                CCombatTask::GetMaxDistForAttackById(idx, v55);
                if (v47 >= v19)
                    v17 = CBasePlayer::CanMelee(*(int *)(*(unsigned int *)&idx + 8), *(int *)(*(unsigned int *)&idx + 16)) != 0;
            }
            v57 = (st_54ab40_10 *)idx;
            if (*(short *)v57->field_8->field_a04 != 100)
            {
                if (*(int *)(*(int *)(*(unsigned int *)&idx + 12) + 652) == 2)
                {
                    v58 = NULL;
                    while (1)
                    {
                        v58 = UTIL_FindEntityByClassname(v58, "Kame Torpedo");
                        if (!v58)
                            break;
                        if (!(char)IsNull(v58) && (v59 = *v58, v59->field_198 == *(int *)(*(unsigned int *)&idx + 12)))
                        {
                            v60 = v59->field_20 * v59->field_20 + v59->field_24 * v59->field_24 + v59->field_28 * v59->field_28;
                            v61 = sqrt(v60);
                            if (isnan(v61))
                                sqrt(*(unsigned int *)&v60);
                            else
                                v60 = v61;
                            v32 = (float)v60;
                            if (0.0 >= v32)
                            {
                                v62 = (st_54ab40_13 *)idx;
                                v62->field_c->field_201 = v62->field_c->field_201 | 8;
                                v62->field_4 = 2;
                                v62->field_8->field_1068 = 19;
                                return 1.0;
                            }
                        }
                    }
                }
                v63 = (st_54ab40_15 *)idx;
                v16 = (float)*(short *)v63->field_8->field_a04;
                if (*(int *)(*(int *)v63->field_10 + 264) == 11 && v19 < 2500.0f)
                    v16 = (float)(1.5 * v16);
                if (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2564) + 52) == 2 && 20.0f > *(float *)(*(int *)(*(unsigned int *)&idx + 12) + 480))
                    v16 = (float)(0.75 * v16);
                if (!v17)
                    v16 = 0;
                v64 = 100.0;
                g_engfuncs.pfnRandomFloat(0x3f800000, 100.0f);
                if ((isnan(v16) ? 0x44 : 100.0 == v16 ? 63 : 100.0 < v16 ? 0 : 0xff) < 64)
                {
                    CCombatTask::PrepareAttack(idx, v55, 2);
                    return 1.0;
                }
                v22 = NULL;
                v66 = __builtin_new(8);
                *v66 = NULL;
                v66[1] = NULL;
                v23 = v66;
                idx1 = 0;
                v14 = &BotWeaponInfoTable.field_0;
                v67 = g_engfuncs.pfnRandomLong(1, 100);
                v13 = (int)v67 <= *(short *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2564) + 38);
                if (v14->field_0)
                {
                    do
                    {
                        if (!(char)CBot::HasWeapon(*(int *)(*(unsigned int *)&idx + 8), *(int *)((char *)v14 + 84 * idx1)) || *(int *)((char *)v14 + 84 * idx1) == 8 && *(int *)(*(int *)(*(unsigned int *)&idx + 16) + 836) || !(v12 = CCombatTask::GetAttackPercent(idx, *(int *)(*(unsigned int *)&idx + 16), *(int *)((char *)v14 + 84 * idx1)), v12))
                            continue;
                        CCombatTask::GetMinDistForAttackByTableIndex(idx, idx1);
                        if (v64 > v19)
                        {
                            if (!v13)
                                continue;
                            v64 = (double)v12 * 0.75;
                            v24 = __fnstcw();
                            v21 = v24 | 0xc00;
                            v25 = (int)v64;
                            v12 = v25;
                        }
                        CCombatTask::GetMaxDistForAttackByTableIndex(idx, idx1);
                        if (v64 >= v19)
                        {
                            if (v18 == 1)
                                v18 = 0;
                            if (*(int *)((char *)v14 + 84 * idx1) != 12 || (v64 = 250.0, !(char)CheckForCollide(*(int *)(*(unsigned int *)&idx + 12), 32, 250.0f)))
                            {
                                v68 = idx1 * 84;
                                if (*(int *)((char *)v14 + v68) != 3 && *(int *)((char *)v14 + v68) != 21 && *(int *)((char *)v14 + v68) != 30 || (v64 = 225.0, !(char)CheckForCollide(*(int *)(*(unsigned int *)&idx + 12), 6, 225.0f)))
                                {
                                    v69 = *(int *)((char *)v14 + 84 * idx1);
                                    if (v12)
                                    {
                                        v70 = __builtin_new(12);
                                        v70->field_0 = NULL;
                                        v70->field_4 = 0;
                                        v11 = v70;
                                        v11->field_0 = v22;
                                        v11->field_4 = v12 + (char *)v22;
                                        v11->field_8 = v69;
                                        v71 = v23;
                                        if (!*v71)
                                        {
                                            v72 = __builtin_new(12);
                                            v10 = 1;
                                            v72->field_4 = NULL;
                                            v72->field_8 = NULL;
                                            memset@GLIBC_2.0(v72, 0, 4);
                                            v10 = 0;
                                            *v71 = v72;
                                            if (v10)
                                                __builtin_delete(v72);
                                            *v71->field_0 = v11;
                                            *v71->field_4 = NULL;
                                            *v71->field_8 = NULL;
                                            v71[1] = *v71;
                                        }
                                        else
                                        {
                                            v9 = v71[1];
                                            v73 = __builtin_new(12);
                                            v8 = 1;
                                            v73->field_4 = NULL;
                                            v73->field_8 = NULL;
                                            memset@GLIBC_2.0(v73, 0, 4);
                                            v8 = 0;
                                            v9->field_4 = v73;
                                            if (v8)
                                                __builtin_delete(v73);
                                            v71[1]->field_4->field_8 = v71[1];
                                            v74 = v71[1]->field_4;
                                            v71[1] = v74;
                                            v74->field_0 = v11;
                                            v71[1]->field_4 = NULL;
                                        }
                                        v22 = (char *)v22 + v12;
                                    }
                                }
                            }
                        }
                    } while ((idx1 += 1, *(int *)((char *)v14 + 84 * idx1)));
                }
                v20 = 0;
                v7 = &v20;
                v1 = v22;
                v6 = g_engfuncs.pfnRandomLong(0, v1);
                v4 = _INSERT(v6, 0, 0) | 0xffff0000;
                v5 = &FindSelection__t12TMultiChoice1ZiPQ2t12TMultiChoice1Zi12SMultiChoicei;
                v76 = *v23;
                if (*v23)
                {
                    v3 = (char *)&v22 + (unsigned short)v4;
                    do
                    {
                        v77 = v76;
                        v78 = v77->field_4;
                        v1 = v77->field_0;
                        if ((char)v5(v3, v1, v6))
                        {
                            v79 = v77->field_0;
                            goto LABEL_54b56f;
                        }
                    } while ((v76 = v78, v77->field_4));
                    v79 = NULL;
LABEL_54b56f:
                    if (v79)
                        v20 = v79->field_8;
                }
                if (v18)
                {
                    *(unsigned short *)&v1 = 1;
                    CBot::ToggleTurbo(*(int *)(*(unsigned int *)&idx + 8), v1);
                    while (*v23 && (v80 = v23, *v80))
                    {
                        v81 = *v80->field_0;
                        v82 = *v80;
                        if (v82)
                        {
                            if (v82 == v80[1])
                                v80[1] = v82->field_4;
                            v83 = *v80->field_4;
                            *v80 = v83;
                            if (v83)
                                v83->field_8 = NULL;
                            v82->field_4 = NULL;
                            __builtin_delete(v82);
                        }
                        v84 = v81;
                        if (!v84)
                            break;
                        __builtin_delete(v84);
                    }
                    if (v23)
                    {
                        v85 = v23;
                        iter = *v85;
                        if (*v85)
                        {
                            do
                            {
                                v87 = iter;
                                iter = iter->field_4;
                                v87->field_4 = NULL;
                                v87->field_8 = NULL;
                                __builtin_delete(v87);
                            } while (iter);
                        }
                        v85[1] = NULL;
                        *v85 = NULL;
                        __builtin_delete(v85);
                    }
                }
                else
                {
                    if (!v20)
                    {
                        while (*v23 && (v88 = v23, *v88))
                        {
                            v89 = *v88->field_0;
                            v90 = *v88;
                            if (v90)
                            {
                                if (v90 == v88[1])
                                    v88[1] = v90->field_4;
                                v91 = *v88->field_4;
                                *v88 = v91;
                                if (v91)
                                    v91->field_8 = NULL;
                                v90->field_4 = NULL;
                                __builtin_delete(v90);
                            }
                            v92 = v89;
                            if (!v92)
                                break;
                            __builtin_delete(v92);
                        }
                        if (v23)
                        {
                            v93 = v23;
                            node = *v93;
                            if (*v93)
                            {
                                do
                                {
                                    v95 = node;
                                    node = node->field_4;
                                    v95->field_4 = NULL;
                                    v95->field_8 = NULL;
                                    __builtin_delete(v95);
                                } while (node);
                            }
                            v93[1] = NULL;
                            *v93 = NULL;
                            __builtin_delete(v93);
                        }
                    }
                    else
                    {
                        CCombatTask::GetMinDistForAttackById(idx, v20);
                        if (v64 > v19)
                        {
                            v2 = 0;
                            v1 = v20;
                            v0 = idx;
                        }
                        else
                        {
                            v2 = 2;
                            v1 = v20;
                            v0 = idx;
                        }
                        CCombatTask::PrepareAttack(v0, v1, v2);
                        while (*v23 && (v96 = v23, *v96))
                        {
                            v97 = *v96->field_0;
                            v98 = *v96;
                            if (v98)
                            {
                                if (v98 == v96[1])
                                    v96[1] = v98->field_4;
                                v99 = *v96->field_4;
                                *v96 = v99;
                                if (v99)
                                    v99->field_8 = NULL;
                                v98->field_4 = NULL;
                                __builtin_delete(v98);
                            }
                            v100 = v97;
                            if (!v100)
                                break;
                            __builtin_delete(v100);
                        }
                        if (v23)
                        {
                            v101 = v23;
                            iter1 = *v101;
                            if (*v101)
                            {
                                do
                                {
                                    v103 = iter1;
                                    iter1 = iter1->field_4;
                                    v103->field_4 = NULL;
                                    v103->field_8 = NULL;
                                    __builtin_delete(v103);
                                } while (iter1);
                            }
                            v101[1] = NULL;
                            *v101 = NULL;
                            __builtin_delete(v101);
                        }
                    }
                }
                v23 = 0;
                return 1.0;
            }
            else if (v17)
            {
                CCombatTask::PrepareAttack(v57, v55, 2);
                return 1.0;
            }
            else
            {
                return 1.0;
            }
        }
        else
        {
            return 1.0;
        }
    }
    else
    {
        return v50;
    }
}

