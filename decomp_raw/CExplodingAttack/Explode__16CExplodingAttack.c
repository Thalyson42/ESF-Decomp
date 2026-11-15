// Explode__16CExplodingAttack @0xbb0e0 size=1641
typedef struct st_4bb0e0_9 {
    char padding_0[140];
    struct st_4bb0e0_2 *field_8c;
    char padding_90[16];
    struct st_4bb0e0_2 *field_a0;
} st_4bb0e0_9;

typedef struct st_4bb0e0_10 {
    struct st_4bb0e0_11 *field_0;
    char padding_4[92];
    struct st_4bb0e0_9 *field_60;
    char padding_64[700];
    unsigned int field_320;
    char padding_324[24];
    unsigned int field_33c;
    char padding_340[20];
    unsigned int field_354;
    unsigned int field_358;
    unsigned int field_35c;
    char padding_360[8];
    unsigned int field_368;
    char padding_36c[120];
    unsigned int field_3e4;
    char padding_3e8[220];
    unsigned int field_4c4;
    char padding_4c8[64];
    unsigned int field_508;
    char padding_50c[444];
    unsigned int field_6c8;
} st_4bb0e0_10;

typedef struct st_4bb0e0_8 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4bb0e0_8;

typedef struct st_4bb0e0_5 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[244];
    unsigned int field_108;
} st_4bb0e0_5;

typedef struct st_4bb0e0_0 {
    char padding_0[268];
    unsigned int field_10c;
} st_4bb0e0_0;

typedef struct st_4bb0e0_15 {
    char padding_0[280];
    char field_118;
} st_4bb0e0_15;

typedef struct st_4bb0e0_18 {
    char padding_0[268];
    unsigned int field_10c;
    char padding_110[136];
    struct st_4bb0e0_17 *field_198;
} st_4bb0e0_18;

typedef struct st_4bb0e0_2 {
    unsigned int field_0;
} st_4bb0e0_2;

typedef struct st_4bb0e0_11 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
} st_4bb0e0_11;

typedef struct st_4bb0e0_1 {
    char padding_0[508];
    struct st_4bb0e0_2 *field_1fc;
} st_4bb0e0_1;

typedef struct st_4bb0e0_17 {
    char padding_0[648];
    unsigned int field_288;
} st_4bb0e0_17;

typedef struct st_4bb0e0_7 {
    struct st_4bb0e0_8 *field_0;
    char padding_4[684];
    unsigned int field_2b0;
    char padding_2b4[8];
    struct st_4bb0e0_6 *field_2bc;
} st_4bb0e0_7;

typedef struct st_4bb0e0_4 {
    struct st_4bb0e0_0 *field_0;
    char padding_4[680];
    unsigned int field_2ac;
    char padding_2b0[16];
    struct st_4bb0e0_3 *field_2c0;
} st_4bb0e0_4;

typedef struct st_4bb0e0_16 {
    struct st_4bb0e0_15 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[680];
    unsigned int field_2c4;
} st_4bb0e0_16;

typedef struct st_4bb0e0_14 {
    char padding_0[96];
    struct st_4bb0e0_1 *field_60;
    char padding_64[612];
    unsigned int field_2c8;
} st_4bb0e0_14;

typedef struct st_4bb0e0_6 {
    struct st_4bb0e0_5 *field_0;
    char padding_4[796];
    unsigned int field_320;
} st_4bb0e0_6;

typedef struct st_4bb0e0_3 {
    char padding_0[96];
    struct st_4bb0e0_1 *field_60;
} st_4bb0e0_3;

typedef struct st_4bb0e0_12 {
    char padding_0[64];
    struct st_4bb0e0_2 *field_40;
} st_4bb0e0_12;

typedef struct st_4bb0e0_13 {
    char padding_0[68];
    struct st_4bb0e0_12 *field_44;
} st_4bb0e0_13;

extern st_4bb0e0_13 *g_pGameRules;
extern unsigned int gmsgPowerStruggle;
extern st_4bb0e0_2 *g_engfuncs.pfnMessageBegin;
extern st_4bb0e0_2 *g_engfuncs.pfnMessageEnd;
extern st_4bb0e0_2 *g_engfuncs.pfnWriteChar;
extern st_4bb0e0_2 *g_engfuncs.pfnPEntityOfEntOffset;
extern char g_800000;

st_4bb0e0_0 * Explode__16CExplodingAttack(float idx)
{
    st_4bb0e0_4 *v34;  // edx
    st_4bb0e0_7 *v35;  // ecx
    float v44;  // 112
    float v45;  // 112
    double v46;  // mm7
    double v47;  // mm6
    unsigned int v48;  // edi
    unsigned int *v49;  // edx
    float v50;  // 112
    float v51;  // 112
    float v52;  // 112
    double v53;  // mm7
    unsigned int *v36;  // edx
    double v54;  // mm6
    double v55;  // mm7
    double v56;  // mm7
    double v57;  // mm5
    double v58;  // mm5
    double v59;  // mm5
    double v60;  // mm5
    unsigned int *v61;  // edx
    unsigned int *v62;  // eax
    st_4bb0e0_14 *v63;  // ecx
    st_4bb0e0_6 *v37;  // ecx
    st_4bb0e0_16 *v64;  // eax
    st_4bb0e0_16 *v65;  // edx
    st_4bb0e0_16 *v66;  // ecx
    st_4bb0e0_18 *v67;  // eax
    st_4bb0e0_5 *v38;  // edx
    st_4bb0e0_10 *v39;  // esi
    unsigned int v40;  // eax
    unsigned int v41;  // eax
    unsigned int *v42;  // edx
    float v43;  // 112
    unsigned int v0;  // [bp-0xcc]
    st_4bb0e0_10 *v1;  // [bp-0xc4]
    float v2;  // [bp-0xa0]
    float v3;  // [bp-0x9c]
    st_4bb0e0_10 *v4;  // [bp-0x98]
    unsigned int v5;  // [bp-0x94]
    float v6;  // [bp-0x90]
    float v7;  // [bp-0x8c]
    float v8;  // [bp-0x88]
    float v9;  // [bp-0x84]
    float v10;  // [bp-0x80]
    int v11;  // [bp-0x6c]
    unsigned short v12;  // [bp-0x68]
    unsigned short v13;  // [bp-0x66]
    float v14;  // [bp-0x64]
    float v15;  // [bp-0x60]
    float v16;  // [bp-0x5c]
    float v17;  // [bp-0x58]
    float v18;  // [bp-0x54]
    float v19;  // [bp-0x50]
    float v20;  // [bp-0x4c]
    float v21;  // [bp-0x48]
    float v22;  // [bp-0x44]
    float v23;  // [bp-0x40]
    float v24;  // [bp-0x3c]
    float v25;  // [bp-0x38]
    float v26;  // [bp-0x34]
    float v27;  // [bp-0x30]
    float v28;  // [bp-0x2c]
    float v29;  // [bp-0x24]
    float v30;  // [bp-0x20]
    float v31;  // [bp-0x1c]
    float v32;  // [bp-0x1c]

    v34 = (st_4bb0e0_4 *)idx;
    if (!v34->field_0->field_10c)
        return v34->field_0;
    if (v34->field_2ac && v34->field_2c0)
        return v34->field_2c0->field_60->field_1fc(v34->field_2c0);
    v35 = (st_4bb0e0_7 *)idx;
    v36 = &v35->field_0->field_8;
    v29 = v35->field_0->field_8;
    v30 = *(float *)&v36[1];
    v31 = *(float *)&v36[2];
    v32 = v31;
    if (v35->field_2b0)
    {
        v37 = v35->field_2bc;
        v38 = v37->field_0;
        v29 = v38->field_8;
        v30 = v38->field_c;
        v32 = v38->field_10;
        *(unsigned int *)(*(unsigned int *)&idx + 688) = 0;
        if (v37->field_320)
            v37->field_0->field_108 = 14;
        else
            *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 700) + 264) = 3;
        g_engfuncs.pfnMessageBegin(1, gmsgPowerStruggle, 0, *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 700) + 520));
        v0 = 127;
        g_engfuncs.pfnWriteChar(v0);
        g_engfuncs.pfnMessageEnd(v0);
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 700) + 856) = 0;
    }
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 516))(idx);
    v6 = v31;
    if (*(int *)(*(int *)idx + 408) && *(int *)(*(int *)idx + 408))
        v5 = *(int *)(*(int *)idx + 408) + 128;
    else
        v5 = 0;
    v4 = NULL;
    while (1)
    {
        v4 = UTIL_FindEntityInSphere(v4, &v29, v6);
        if (!v4)
            break;
        if (v4->field_60->field_a0(v4) && (v39 = v4, 15.0f <= *(float *)(*(int *)idx + 480)))
        {
            v1 = v39;
            v40 = *(int *)(v5 + 520);
            if (*(int *)(v5 + 520) || (v40 = g_engfuncs.pfnPEntityOfEntOffset(0), v40))
                v41 = *(int *)(v40 + 124);
            else
                v41 = 0;
            if (g_pGameRules->field_44->field_40(g_pGameRules, v41) && !v39->field_4c4 && v39->field_60->field_8c(v39) && v39->field_3e4 != 4 && v39->field_3e4 != 5 && !v39->field_354 && !v39->field_358 && !v39->field_35c && !v39->field_368)
            {
                v42 = &v39->field_0->field_8;
                v43 = *(float *)&v39->field_0->field_8 - v29;
                v22 = v43;
                v44 = *(float *)&v42[1] - v30;
                v23 = v44;
                v45 = *(float *)&v42[2] - v32;
                v24 = v45;
                v46 = v43 * v43 + v44 * v44 + v45 * v45;
                v47 = sqrt(v46);
                if (isnan(v47))
                    sqrt(*(unsigned int *)&v46);
                else
                    v46 = v47;
                v3 = (float)v46;
                v48 = v39->field_33c;
                v39->field_33c = 0;
                if (v39->field_6c8)
                    CBasePlayer::RemoveWallJump(v39);
                if (v6 * 0.5 > v3 && v39->field_508)
                    CBasePlayer::StopSwoop(v39);
                if (v6 * 0.25 > v3 && v39->field_320)
                    CBasePlayer::StopFly(v39);
                v39->field_33c = v48;
                v2 = (v6 - v3) / v6;
                v13 = __fnstcw();
                v12 = v13 | 0xc00;
                v11 = (int)(*(float *)(*(int *)idx + 480) * 3.0);
                v49 = &v39->field_0->field_8;
                v50 = v29 - *(float *)&v39->field_0->field_8;
                v26 = v50;
                v51 = v30 - *(float *)&v49[1];
                v27 = v51;
                v52 = v32 - *(float *)&v49[2];
                v28 = v52;
                v53 = v50 * v50 + v51 * v51 + v52 * v52;
                v54 = sqrt(v53);
                if (isnan(v54))
                    sqrt(*(unsigned int *)&v53);
                else
                    v53 = v54;
                v10 = (float)v53;
                if (v10 == 0.0f)
                {
                    v23 = 0.0f;
                    v24 = 0.0f;
                    v25 = 1.0;
                }
                else
                {
                    v55 = 1.0 / v10;
                    v23 = (float)(v55 * v26);
                    v24 = (float)(v55 * v27);
                    v25 = (float)(v55 * v28);
                }
                v11 += 300;
                v56 = (double)v11;
                v57 = v56 * v23;
                v20 = (float)v57;
                v58 = v56 * v24;
                v21 = (float)v58;
                v22 = (float)(v56 * v25);
                v17 = (float)(v57 * v2);
                v18 = (float)(v58 * v2);
                v19 = v2 * v22;
                v59 = -1.0 * v17;
                v14 = (float)v59;
                v60 = -1.0 * v18;
                v15 = (float)v60;
                v16 = (float)(-1.0 * v19);
                v61 = v39->field_0;
                v62 = v61 + 8;
                v7 = (float)(v59 + *(float *)&v61[8]);
                v8 = (float)(v60 + *(float *)&v62[1]);
                v9 = *(float *)&v62[2] + v16;
                *(float *)&v61[8] = v7;
                *(float *)&v61[9] = v8;
                *(float *)&v61[10] = v9;
            }
        }
    }
    v7 = v29;
    v8 = v30;
    v9 = v32;
    RadiusDamage(&v7, *(int *)idx, v5, *(float *)(*(int *)idx + 480), v6, 0, &g_800000);
    v63 = (st_4bb0e0_14 *)idx;
    if (v63->field_2c8)
    {
        v63->field_60->field_1fc(v63);
    }
    else
    {
        v64 = (st_4bb0e0_16 *)idx;
        v64->field_2c4 = 1;
        v65 = v64;
        v65->field_14 = 0;
        v65->field_18 = 0;
        v66 = v65;
        v66->field_c = 0;
        v66->field_10 = 0;
        v66->field_0->field_118 = v66->field_0->field_118 | 128;
    }
    v7 = v29;
    v8 = v30;
    v9 = v32;
    v13 = __fnstcw();
    v12 = v13 | 0xc00;
    v11 = (int)v6;
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 524))(idx, v11, &v7);
    v67 = *(int *)idx;
    v67->field_10c = 0;
    return v67;
}

