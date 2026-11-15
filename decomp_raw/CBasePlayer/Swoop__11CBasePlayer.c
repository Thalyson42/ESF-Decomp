// Swoop__11CBasePlayer @0xf71c0 size=1481
typedef struct st_4f71c0_3 {
    struct st_4f71c0_2 *field_0;
    char padding_4[892];
    int field_380;
    char padding_384[36];
    unsigned int field_3a8;
    char padding_3ac[344];
    unsigned int field_504;
    unsigned int field_508;
    unsigned int field_50c;
} st_4f71c0_3;

typedef struct st_4f71c0_4 {
    char padding_0[136];
    unsigned int field_88;
} st_4f71c0_4;

typedef struct st_4f71c0_1 {
    char padding_0[385];
    char field_181;
} st_4f71c0_1;

typedef struct st_4f71c0_2 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[117];
    char field_181;
} st_4f71c0_2;

typedef struct st_4f71c0_6 {
    char padding_0[388];
    unsigned int field_184;
} st_4f71c0_6;

typedef struct st_4f71c0_0 {
    char padding_0[1024];
    unsigned int field_400;
} st_4f71c0_0;

typedef struct st_4f71c0_5 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[1112];
    struct st_4f71c0_4 *field_464;
} st_4f71c0_5;

extern float melee_swoop_minstrugtime+12;

float Swoop__11CBasePlayer(float a0)
{
    st_4f71c0_0 *v21;  // edx
    st_4f71c0_3 *v22;  // edi
    unsigned long long v31;  // mm7
    unsigned long long v32;  // mm7
    unsigned long long v33;  // mm7
    unsigned long long v34;  // mm7
    unsigned long long v35;  // mm7
    unsigned long long v36;  // mm7
    unsigned long long v37;  // mm7
    st_4f71c0_1 **v38;  // edx
    unsigned long long v39;  // mm7
    st_4f71c0_5 *v40;  // esi
    st_4f71c0_1 **v23;  // edx
    unsigned int v41;  // fc3210
    unsigned long long v42;  // mm7
    st_4f71c0_1 **v43;  // edx
    unsigned int v44;  // esi
    st_4f71c0_1 **v45;  // edx
    st_4f71c0_6 *v46;  // esi
    unsigned int v47;  // esi
    unsigned long long v48;  // mm7
    st_4f71c0_1 **v49;  // edx
    unsigned int *v50;  // edx
    unsigned long long v24;  // mm7
    unsigned long long v51;  // mm7
    st_4f71c0_1 **v52;  // edx
    unsigned long long v53;  // mm7
    unsigned long long v55;  // mm7
    unsigned long long v56;  // mm7
    unsigned long long v57;  // mm7
    unsigned long long v58;  // mm7
    unsigned long long v59;  // mm7
    unsigned long long v60;  // mm7
    st_4f71c0_5 *v25;  // esi
    unsigned long long v61;  // mm7
    unsigned long long v62;  // mm7
    double v26;  // mm6
    double v27;  // mm6
    unsigned int v28;  // fc3210
    char *v29;  // eax
    st_4f71c0_1 **v30;  // edx
    unsigned int v0;  // [bp-0x9c]
    float v1;  // [bp-0x98]
    float v2;  // [bp-0x94]
    st_4f71c0_3 *v3;  // [bp-0x90]
    st_4f71c0_3 *v4;  // [bp-0x8c], Other Possible Types: float
    unsigned int v5;  // [bp-0x5c]
    float v6;  // [bp-0x58]
    float v7;  // [bp-0x54]
    unsigned int v8;  // [bp-0x50]
    float v9;  // [bp-0x4c]
    float v10;  // [bp-0x48]
    char v11;  // [bp-0x44], Other Possible Types: unsigned int
    unsigned int v12;  // [bp-0x40]
    unsigned int v13;  // [bp-0x3c]
    char v14;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned int v15;  // [bp-0x34]
    unsigned int v16;  // [bp-0x30]
    unsigned int v17;  // [bp-0x24]
    unsigned int v18;  // [bp-0x20]
    unsigned int v19;  // [bp-0x1c]

    if (!*(int *)(*(unsigned int *)&a0 + 2408))
    {
        return v62;
    }
    else if ((unsigned int)(*(int *)(*(int *)(*(unsigned int *)&a0 + 2408) + 0x88) - 1) <= 1)
    {
        v21 = (st_4f71c0_0 *)a0;
        if (v21->field_400)
        {
            v22 = CPlayerMelee::GetEnemyPrepunch(&v21->padding_0[896], 0);
            if (!v22)
                return v37;
            v23 = (st_4f71c0_1 **)a0;
            if (*v23->field_181 & 8)
            {
                if (!CBasePlayer::CanMelee(v23, v22))
                    return v24;
            }
            else
            {
                if (!CBasePlayer::CanMelee(a0, v22))
                {
                    return v36;
                }
                else if (v22->field_3a8)
                {
                    return v35;
                }
            }
            v8 = 0;
            v25 = *(unsigned int *)&a0 + 1284;
            CSwoop::GetSwoopTime(v25);
            v10 = (float)v26;
            CSwoop::GetCurrentDirection(&v11, v25);
            v17 = v11;
            v18 = v12;
            v19 = v13;
            CBasePlayer::StopSwoop(a0);
            if (CPlayerMelee::GetEnemyPrepunch(&v22->field_380, a0) == *(unsigned int *)&a0 && v22->field_508)
            {
                v27 = v10;
                v28 = (isunordered(v27, melee_swoop_minstrugtime+12) ? 0x4500 : v27 == melee_swoop_minstrugtime+12 ? 0x4000 : v27 < melee_swoop_minstrugtime+12 ? 0x100 : 0);
                if (((char)((0x3800 | (unsigned short)v28 & 0x4700) >> 8) & 69) - 1 < 64 && !*(int *)(*(unsigned int *)&a0 + 1292))
                {
                    CSwoop::GetSwoopTime(&v22->field_504);
                    if (v27 > v10 && !v22->field_50c)
                        goto LABEL_4f7558;
                }
                else
                {
                    CSwoop::GetSwoopTime(&v22->field_504);
                    if (v27 > melee_swoop_minstrugtime+12 && !v22->field_50c)
                        v8 = 1;
                }
            }
            if (v8)
            {
                CSwoop::GetSwoopTime(&v22->field_504);
                v9 = (float)v27;
                CBasePlayer::StopSwoop(v22);
                v11 = v17;
                v12 = v18;
                v13 = v19;
                v3 = v22;
                v2 = v9;
                v1 = v10;
                v29 = &v11;
                goto LABEL_4f7674;
            }
            else
            {
                v30 = (st_4f71c0_1 **)a0;
                if (!(*v30->field_181 & 8))
                {
                    return v34;
                }
                else if (!CBasePlayer::UseKi(v30, 35))
                {
                    return v33;
                }
                else if (v22->field_380 <= 1)
                {
                    v11 = v17;
                    v12 = v18;
                    v13 = v19;
                    CPlayerMelee::SimpleMeleePowerhit(*(unsigned int *)&a0 + 896, v22, &v11, *(int *)(*(unsigned int *)&a0 + 1284));
                    return v31;
                }
                else
                {
                    return v32;
                }
            }
        }
        else
        {
            v22 = CPlayerMelee::GetEnemyPrepunch(*(unsigned int *)&a0 + 896, 0);
            if (!v22)
                return v60;
            v38 = (st_4f71c0_1 **)a0;
            if (*v38->field_181 & 8)
            {
                if (!CBasePlayer::CanMelee(v38, v22))
                    return v39;
            }
            else
            {
                if (!CBasePlayer::CanMelee(a0, v22))
                {
                    return v59;
                }
                else if (v22->field_3a8)
                {
                    return v58;
                }
            }
            v5 = 0;
            v40 = *(unsigned int *)&a0 + 1284;
            CSwoop::GetSwoopTime(v40);
            v7 = (float)v27;
            CSwoop::GetCurrentDirection(&v14, v40);
            v11 = v14;
            v12 = v15;
            v13 = v16;
            CBasePlayer::StopSwoop(a0);
            if (CPlayerMelee::GetEnemyPrepunch(&v22->field_380, a0) == *(unsigned int *)&a0 && v22->field_508 && v22->field_504 != 5)
            {
                v27 = v7;
                v41 = (isunordered(v27, melee_swoop_minstrugtime+12) ? 0x4500 : v27 == melee_swoop_minstrugtime+12 ? 0x4000 : v27 < melee_swoop_minstrugtime+12 ? 0x100 : 0);
                if (((char)((0x3800 | (unsigned short)v41 & 0x4700) >> 8) & 69) - 1 < 64 && !*(int *)(*(unsigned int *)&a0 + 1292))
                {
                    CSwoop::GetSwoopTime(&v22->field_504);
                    if (v27 > v7 || v22->field_50c)
                    {
LABEL_4f7558:
                        CBasePlayer::Swoop(v22);
                        return v42;
                    }
                }
                else
                {
                    CSwoop::GetSwoopTime(&v22->field_504);
                    if (v27 > melee_swoop_minstrugtime+12 || v22->field_50c)
                        v5 = 1;
                }
            }
            if (v5)
            {
                CSwoop::GetSwoopTime(&v22->field_504);
                v6 = (float)v27;
                CBasePlayer::StopSwoop(v22);
                if (!(v22->field_0->field_181 & 8) && (v43 = (st_4f71c0_1 **)a0, !(*v43->field_181 & 8)))
                {
                    v44 = v43 + 224;
                    CPlayerMelee::InitMelee(v44, v22);
                    v0 = 9;
                }
                else
                {
                    if (!(v22->field_0->field_181 & 8))
                    {
                        if (*(char *)(*(int *)a0 + 385) & 8)
                        {
                            v4 = a0;
                            v44 = &v22->field_380;
                            goto LABEL_4f7645;
                        }
                        else
                        {
                            if (!(v22->field_0->field_181 & 8))
                                goto LABEL_4f7655;
                        }
                    }
                    v45 = (st_4f71c0_1 **)a0;
                    if (*v45->field_181 & 8)
                    {
LABEL_4f7655:
                        v14 = v11;
                        v15 = v12;
                        v16 = v13;
                        v3 = v22;
                        v2 = v6;
                        v1 = v7;
                        v29 = &v14;
LABEL_4f7674:
                        v46 = *(unsigned int *)&a0 + 896;
                        CPlayerMelee::BlowbackStruggle(v46, v29);
                        CPlayerMelee::MeleeText(v46, 15, 0);
                        CPlayerMelee::MeleeText(v46, 16, 0);
                        v47 = &v22->field_380;
                        CPlayerMelee::MeleeText(v47, 15, 0);
                        CPlayerMelee::MeleeText(v47, 16, 0);
                        return v48;
                    }
                    v4 = v22;
                    v44 = v45 + 224;
LABEL_4f7645:
                    CPlayerMelee::InitMelee(v44);
                    v0 = 12;
                }
            }
            else if (*(int *)(*(unsigned int *)&a0 + 1284) != 5)
            {
                v49 = (st_4f71c0_1 **)a0;
                if (!(*v49->field_181 & 8) && v22->field_0->field_108 != 15)
                {
                    v44 = v49 + 224;
                    CPlayerMelee::InitMelee(v44, v22);
                    v50 = (unsigned int *)a0;
                    v50[292] = v11;
                    v50[293] = v12;
                    v50[294] = v13;
                    v0 = 1;
                }
                else if (v22->field_380 <= 1)
                {
                    v52 = (st_4f71c0_1 **)a0;
                    if (!(*v52->field_181 & 8))
                        return v55;
                    if (!CBasePlayer::UseKi(v52, 35))
                        return v53;
                    v14 = v11;
                    v15 = v12;
                    v16 = v13;
                    CPlayerMelee::Powerhit(*(unsigned int *)&a0 + 896, v22, &v14, *(int *)(*(unsigned int *)&a0 + 1284));
                    return v53;
                }
                else
                {
                    return v56;
                }
            }
            else
            {
                return v57;
            }
            CPlayerMelee::SetMode(v44);
            return v51;
        }
    }
    else
    {
        return v61;
    }
}

