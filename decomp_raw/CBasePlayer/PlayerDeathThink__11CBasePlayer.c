// PlayerDeathThink__11CBasePlayer @0xf7970 size=1260
typedef struct st_4f7970_0 {
    struct st_4f7970_1 *field_0;
    char padding_4[1872];
    float field_754;
} st_4f7970_0;

typedef struct st_4f7970_6 {
    struct st_4f7970_5 *field_0;
    char padding_4[2320];
    unsigned int field_914;
} st_4f7970_6;

typedef struct st_4f7970_7 {
    char padding_0[2440];
    float field_988;
} st_4f7970_7;

typedef struct st_4f7970_11 {
    struct st_4f7970_12 *field_0;
    char padding_4[2436];
    unsigned int field_988;
} st_4f7970_11;

typedef struct st_4f7970_1 {
    char padding_0[284];
    unsigned int field_11c;
    unsigned int field_120;
} st_4f7970_1;

typedef struct st_4f7970_5 {
    char padding_0[368];
    unsigned int field_170;
} st_4f7970_5;

typedef struct st_4f7970_13 {
    char padding_0[32];
    char field_20;
    char padding_21[147];
    unsigned int field_b4;
    char padding_b8[80];
    unsigned int field_108;
    char padding_10c[100];
    unsigned int field_170;
} st_4f7970_13;

typedef struct st_4f7970_12 {
    char padding_0[328];
    unsigned int field_148;
    char padding_14c[52];
    unsigned int field_180;
} st_4f7970_12;

typedef struct st_4f7970_2 {
    char padding_0[280];
    char field_118;
    char padding_119[140];
    char field_1a5;
} st_4f7970_2;

typedef struct st_4f7970_3 {
    char field_0;
    char field_1;
    char padding_2[646];
    unsigned int field_288;
} st_4f7970_3;

typedef struct st_4f7970_9 {
    unsigned int field_0;
} st_4f7970_9;

typedef struct st_4f7970_8 {
    char padding_0[24];
    struct st_4f7970_9 *field_18;
    char padding_1c[52];
    struct st_4f7970_9 *field_50;
} st_4f7970_8;

typedef struct st_4f7970_4 {
    float field_0;
} st_4f7970_4;

typedef struct st_4f7970_10 {
    char padding_0[68];
    struct st_4f7970_8 *field_44;
} st_4f7970_10;

extern float forcerespawn+12;
extern st_4f7970_10 *g_pGameRules;
extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_4f7970_4 *gpGlobals;

double PlayerDeathThink__11CBasePlayer(float a0)
{
    st_4f7970_13 *v11;  // edx
    double v12;  // mm7
    unsigned int *v21;  // esi
    st_4f7970_2 **v22;  // edi
    st_4f7970_3 *v23;  // esi
    char *v24;  // eax
    unsigned int v25;  // ecx
    unsigned int v26;  // cc_op
    unsigned int v27;  // cc_dep1
    unsigned int v28;  // cc_dep2
    st_4f7970_3 *v29;  // esi
    char *v30;  // edi
    double v13;  // mm6
    unsigned int v31;  // 4101
    int v32;  // eax
    st_4f7970_3 *v33;  // esi
    char *v34;  // edi
    unsigned int v35;  // ecx
    unsigned int v36;  // cc_op
    unsigned int v37;  // cc_dep1
    unsigned int v38;  // cc_dep2
    st_4f7970_3 *v39;  // esi
    char *v40;  // edi
    st_4f7970_13 *v14;  // ecx
    unsigned int v41;  // 4101
    st_4f7970_7 *v42;  // edi
    double v43;  // mm7
    st_4f7970_13 *v44;  // eax
    st_4f7970_5 **v45;  // edi
    st_4f7970_13 *v46;  // ecx
    double v47;  // mm7
    unsigned int v48;  // esi
    st_4f7970_6 *v49;  // edi
    st_4f7970_11 *v50;  // edx
    st_4f7970_13 *v15;  // edi
    unsigned int *v16;  // esi
    double v17;  // mm7
    double v18;  // mm6
    double v19;  // mm7
    st_4f7970_0 *v20;  // edx
    int v0;  // [bp-0x88]
    st_4f7970_3 *v1;  // [bp-0x4c]
    float v2;  // [bp-0x48]
    float v3;  // [bp-0x38]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]
    float v7;  // [bp-0x18]
    float v8;  // [bp-0x14]
    float v9;  // [bp-0x10]

    v11 = *(int *)a0;
    if (v11[1].padding_21[16] & 2)
    {
        v12 = *(float *)&v11->field_20 * *(float *)&v11->field_20 + *(float *)&v11->padding_21[3] * *(float *)&v11->padding_21[3] + *(float *)&v11->padding_21[7] * *(float *)&v11->padding_21[7];
        v13 = sqrt(v12);
        if (isnan(v13))
            sqrt(*(unsigned int *)&v12);
        else
            v12 = v13;
        v7 = (float)v12;
        v2 = (float)(v7 - 20.0);
        if (0.0 >= v2)
        {
            v14 = *(int *)a0;
            *(unsigned int *)&v14->field_20 = g_vecZero;
            *(unsigned int *)&v14->padding_21[3] = g_vecZero+4;
            *(unsigned int *)&v14->padding_21[7] = g_vecZero+8;
        }
        else
        {
            v15 = *(int *)a0;
            v16 = &v15->field_20;
            v17 = *(float *)&v15->field_20 * *(float *)&v15->field_20 + *(float *)&v16[1] * *(float *)&v16[1] + *(float *)&v16[2] * *(float *)&v16[2];
            v18 = sqrt(v17);
            if (isnan(v18))
                sqrt(*(unsigned int *)&v17);
            else
                v17 = v18;
            v3 = (float)v17;
            if (v3 == 0.0f)
            {
                v7 = 0.0f;
                v8 = 0.0f;
                v9 = 1.0;
            }
            else
            {
                v19 = 1.0 / v3;
                v7 = (float)(v19 * *(float *)v16);
                v8 = (float)(v19 * *(float *)&v16[1]);
                v9 = (float)(v19 * *(float *)&v16[2]);
            }
            v4 = v2 * v7;
            v5 = v2 * v8;
            v6 = v2 * v9;
            *(float *)&v15->field_20 = v4;
            *(float *)&v15->padding_21[3] = v5;
            *(float *)&v15->padding_21[7] = v6;
        }
    }
    if (CBasePlayer::HasWeapons(a0) || *(int *)(*(unsigned int *)&a0 + 1884) > 0)
        CBasePlayer::PackDeadPlayerItems(a0);
    v20 = (st_4f7970_0 *)a0;
    if (v20->field_754 != 0.0f)
    {
        v20->field_0->field_11c = 0x3f800000;
        v20->field_0->field_120 = 0x3f800000;
        v20->field_754 = 0.0f;
    }
    if (*(int *)(*(int *)a0 + 180))
    {
        v21 = *(unsigned int *)&a0 + 896;
        if (CPlayerMelee::CanPlayAnimation(v21))
        {
            v22 = (st_4f7970_2 **)a0;
            if (*v22->field_1a5 & 2 && *v22->field_118 >= 0)
            {
                v1 = CPlayerMelee::GetCurrentAnim(v21);
                if (v1)
                {
                    if (!v21[73])
                        CPlayerMelee::SetAttacker(v21, v22);
                    v23 = &(&v1->field_0)[32 * v1->field_288];
                    v24 = "die_fall_up";
                    v25 = 12;
                    v26 = 13;
                    v27 = 0;
                    v28 = 0;
                    do
                    {
                        v29 = v23;
                        v30 = v24;
                        if (!v25)
                            break;
                        v25 -= 1;
                        v26 = 4;
                        v27 = v29->field_0;
                        v28 = *v30;
                        v24 = v30 + 1;
                        v23 = &v29->field_1;
                    } while (v29->field_0 == *v30);
                    v31 = _ccall(4, v26, v27, v28, 0);
                    if (v31 & 1)
                    {
                        v32 = "die_fall_up_hit";
                    }
                    else
                    {
                        v33 = &(&v1->field_0)[32 * v1->field_288];
                        v34 = "die_fall_down";
                        v35 = 14;
                        v36 = 13;
                        v37 = 0;
                        v38 = 0;
                        do
                        {
                            v39 = v33;
                            v40 = v34;
                            if (!v35)
                                break;
                            v35 -= 1;
                            v36 = 4;
                            v37 = v39->field_0;
                            v38 = *v40;
                            v34 = v40 + 1;
                            v33 = &v39->field_1;
                        } while (v39->field_0 == *v40);
                        v41 = _ccall(4, v36, v37, v38, 0);
                        if (!(v41 & 1))
                            goto LABEL_4f7c61;
                        v32 = "die_fall_down_hit";
                    }
                    *(unsigned short *)&v0 = 1;
                    CPlayerMelee::AddAnimation(*(unsigned int *)&a0 + 896, v0, *(float *)gpGlobals, 1, v32);
                    EMIT_SOUND_DYN(*(int *)(*(int *)a0 + 520), 1, "weapons/deathfall.wav", 0x3f800000, 0.800000011920929f, 0, 100);
                }
            }
        }
LABEL_4f7c61:
        v42 = (st_4f7970_7 *)a0;
        CBasePlayer::PlayAnimation(v42);
        CBaseAnimating::StudioFrameAdvance(v42, 0);
        v43 = 1.0 + v42->field_988;
        v42->field_988 = (float)v43;
        if (v43 < 120.0)
            return v43;
    }
    v44 = *(int *)a0;
    if (v44->field_108 && v44[1].padding_21[16] & 2)
        v44->field_108 = 0;
    v45 = (st_4f7970_5 **)a0;
    if (*v45->field_170 == 1)
        *v45->field_170 = 2;
    v46 = *(int *)a0;
    v47 = 0.0;
    if (0.0 < *(float *)&v46->padding_10c[64])
    {
        v47 = *(float *)&v46->padding_10c[64] - 1.0;
        *(float *)&v46->padding_10c[64] = (float)v47;
    }
    v48 = *(int *)(*(int *)a0 + 384) & 0xffff7fff;
    if (*(int *)(*(int *)a0 + 368) != 2)
    {
        if (g_pGameRules->field_44->field_18(g_pGameRules))
        {
            v47 = *(float *)(*(unsigned int *)&a0 + 2324) + 12.0;
            if (v47 < *(float *)gpGlobals && !(*(char *)(*(unsigned int *)&a0 + 784) & 32))
                CBasePlayer::StartDeathCam(a0);
        }
        if (!v48)
        {
            if (g_pGameRules->field_44->field_18(g_pGameRules))
            {
                if (0.0 < forcerespawn+12)
                {
                    if (*(float *)(*(unsigned int *)&a0 + 2324) + 5.0 >= *(float *)gpGlobals)
                        return v47;
                }
                else
                {
                    return v47;
                }
            }
            else
            {
                return v47;
            }
        }
        v50 = (st_4f7970_11 *)a0;
        v50->field_0->field_180 = 0;
        v50->field_988 = 0;
        v50->field_0->field_148 = 0;
        respawn(v50->field_0, 0);
        *(float *)(*(int *)a0 + 260) = -1.0f;
        return -1.0;
    }
    else if (!v48)
    {
        v49 = (st_4f7970_6 *)a0;
        if (!g_pGameRules->field_44->field_50(g_pGameRules, v49))
            return v47;
        *(float *)&v49->field_914 = *(float *)gpGlobals;
        v49->field_0->field_170 = 3;
        return v47;
    }
    else
    {
        return v47;
    }
}

