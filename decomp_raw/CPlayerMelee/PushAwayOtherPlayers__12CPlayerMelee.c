// PushAwayOtherPlayers__12CPlayerMelee @0x107eb0 size=1188
typedef struct st_507eb0_1 {
    char padding_0[140];
    struct st_507eb0_2 *field_8c;
    char padding_90[16];
    struct st_507eb0_2 *field_a0;
} st_507eb0_1;

typedef struct st_507eb0_3 {
    struct st_507eb0_0 *field_0;
    char padding_4[92];
    struct st_507eb0_1 *field_60;
    char padding_64[700];
    unsigned int field_320;
    char padding_324[8];
    unsigned int field_32c;
    unsigned int field_330;
    char padding_334[28];
    unsigned int field_350;
    unsigned int field_354;
    unsigned int field_358;
    unsigned int field_35c;
    char padding_360[32];
    char field_380;
    char padding_381[35];
    unsigned int field_3a4;
    char padding_3a8[60];
    unsigned int field_3e4;
    char padding_3e8[220];
    unsigned int field_4c4;
    char padding_4c8[500];
    unsigned int field_6bc;
    char padding_6c0[176];
    unsigned int field_770;
} st_507eb0_3;

typedef struct st_507eb0_5 {
    struct st_507eb0_4 *field_0;
    char padding_4[92];
    struct st_507eb0_1 *field_60;
    char padding_64[700];
    unsigned int field_320;
    char padding_324[8];
    unsigned int field_32c;
    unsigned int field_330;
    char padding_334[28];
    unsigned int field_350;
    unsigned int field_354;
    unsigned int field_358;
    unsigned int field_35c;
    char padding_360[32];
    char field_380;
    char padding_381[35];
    float field_3a4;
    char padding_3a8[60];
    unsigned int field_3e4;
    char padding_3e8[220];
    unsigned int field_4c4;
    char padding_4c8[500];
    unsigned int field_6bc;
    char padding_6c0[176];
    unsigned int field_770;
} st_507eb0_5;

typedef struct st_507eb0_2 {
    unsigned int field_0;
} st_507eb0_2;

typedef struct st_507eb0_4 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[476];
    unsigned int field_208;
} st_507eb0_4;

typedef struct st_507eb0_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[476];
    int field_208;
} st_507eb0_0;

typedef struct st_507eb0_6 {
    float field_0;
} st_507eb0_6;

extern float nomeleehittime+12;
extern unsigned int gmsgMeleeFX;
extern st_507eb0_2 *g_engfuncs.pfnMessageBegin;
extern st_507eb0_2 *g_engfuncs.pfnMessageEnd;
extern st_507eb0_2 *g_engfuncs.pfnWriteByte;
extern st_507eb0_2 *g_engfuncs.pfnIndexOfEdict;
extern st_507eb0_6 *gpGlobals;

double PushAwayOtherPlayers__12CPlayerMelee(st_507eb0_3 **a0)
{
    st_507eb0_5 *v22;  // edi
    st_507eb0_4 *v23;  // edx
    float v32;  // 112
    float v33;  // 112
    float v34;  // 112
    double v35;  // mm7
    double v36;  // mm6
    double v37;  // mm7
    st_507eb0_4 *v38;  // esi
    unsigned int *v39;  // eax
    float v40;  // 112
    float v41;  // 112
    st_507eb0_5 *v24;  // esi
    float v42;  // 112
    double v43;  // mm7
    double v44;  // mm6
    double v45;  // mm7
    unsigned int *v25;  // edx
    float v26;  // 112
    float v27;  // 112
    float v28;  // 112
    double v29;  // mm7
    double v30;  // mm6
    unsigned int *v31;  // edx
    unsigned int v0;  // [bp-0xcc]
    float v1;  // [bp-0x98]
    float v2;  // [bp-0x84]
    float v3;  // [bp-0x80]
    float v4;  // [bp-0x7c]
    float v5;  // [bp-0x78]
    float v6;  // [bp-0x74]
    float v7;  // [bp-0x70]
    float v8;  // [bp-0x6c]
    float v9;  // [bp-0x68]
    float v10;  // [bp-0x64]
    float v11;  // [bp-0x60]
    float v12;  // [bp-0x5c], Other Possible Types: unsigned int
    float v13;  // [bp-0x58]
    float v14;  // [bp-0x54]
    float v15;  // [bp-0x50]
    float v16;  // [bp-0x44]
    float v17;  // [bp-0x40]
    float v18;  // [bp-0x3c]
    unsigned int v19;  // [bp-0x24]
    unsigned int v20;  // [bp-0x20]
    unsigned int v21;  // [bp-0x1c]

    v22 = NULL;
    v23 = (!a0[74] ? a0[73] : a0[74])->field_0;
    *(float *)&v19 = v23->field_8;
    *(float *)&v20 = v23->field_c;
    *(float *)&v21 = v23->field_10;
    while (1)
    {
        v22 = UTIL_FindEntityInSphere(v22, &v19, 350.0f);
        if (!v22)
            break;
        if (v22->field_60->field_a0(v22) && v22 != a0[73] && v22 != a0[74])
        {
            v24 = v22;
            if (v22->field_330)
                CBasePlayer::StopPowerUp(v22);
            if (!v24->field_3e4 && !v24->field_354 && !v24->field_358 && !v24->field_35c && !v24->field_770 && !v24->field_6bc && !v24->field_350 && v24->field_60->field_8c(v24) && !v24->field_4c4 && *(float *)gpGlobals - nomeleehittime+12 >= v24->field_3a4)
            {
                if (v24->field_320)
                    CBasePlayer::StopFly(v24);
                if (v24->field_32c)
                    CBasePlayer::StopBlock(v24);
                v25 = &v24->field_0->field_8;
                v26 = v24->field_0->field_8 - *(float *)&v19;
                v16 = v26;
                v27 = *(float *)&v25[1] - *(float *)&v20;
                v17 = v27;
                v28 = *(float *)&v25[2] - *(float *)&v21;
                v18 = v28;
                v29 = v26 * v26 + v27 * v27 + v28 * v28;
                v30 = sqrt(v29);
                if (isnan(v30))
                    sqrt(*(unsigned int *)&v29);
                else
                    v29 = v30;
                v13 = (float)v29;
                if (v13 < 87.0f)
                {
                    v31 = &v24->field_0->field_8;
                    v32 = v24->field_0->field_8 - *(float *)&v19;
                    v13 = v32;
                    v33 = *(float *)&v31[1] - *(float *)&v20;
                    v14 = v33;
                    v34 = *(float *)&v31[2] - *(float *)&v21;
                    v15 = v34;
                    v35 = v32 * v32 + v33 * v33 + v34 * v34;
                    v36 = sqrt(v35);
                    if (isnan(v36))
                        sqrt(*(unsigned int *)&v35);
                    else
                        v35 = v36;
                    v5 = (float)v35;
                    if (v5 == 0.0f)
                    {
                        v10 = 0.0f;
                        v11 = 0.0f;
                        v12 = 0x3f800000;
                    }
                    else
                    {
                        v37 = 1.0 / v5;
                        v10 = (float)(v37 * v13);
                        v11 = (float)(v37 * v14);
                        v12 = (float)(v37 * v15);
                    }
                    CPlayerMelee::StartToss(&v24->field_380, a0[73], 0, &v10, 1500.0f, 800.0f, 250.0f, 2.0f);
                }
                else
                {
                    v38 = v24->field_0;
                    v39 = &v38->field_8;
                    v40 = v38->field_8 - *(float *)&v19;
                    v8 = v40;
                    v41 = *(float *)&v39[1] - *(float *)&v20;
                    v9 = v41;
                    v42 = *(float *)&v39[2] - *(float *)&v21;
                    v10 = v42;
                    v43 = v40 * v40 + v41 * v41 + v42 * v42;
                    v44 = sqrt(v43);
                    if (isnan(v44))
                        sqrt(*(unsigned int *)&v43);
                    else
                        v43 = v44;
                    v1 = (float)v43;
                    if (v1 == 0.0f)
                    {
                        v5 = 0.0f;
                        v6 = 0.0f;
                        v7 = 1.0;
                    }
                    else
                    {
                        v45 = 1.0 / v1;
                        v5 = (float)(v45 * v8);
                        v6 = (float)(v45 * v9);
                        v7 = (float)(v45 * v10);
                    }
                    v2 = (float)(900.0 * v5);
                    v3 = (float)(900.0 * v6);
                    v4 = (float)(900.0 * v7);
                    *(float *)&v38->field_20 = v2;
                    *(float *)&v38->field_24 = v3;
                    *(float *)&v38->field_28 = v4;
                }
            }
        }
    }
    g_engfuncs.pfnMessageBegin(4, gmsgMeleeFX, &a0[73]->field_0->field_8, 0);
    g_engfuncs.pfnWriteByte(3);
    v0 = g_engfuncs.pfnIndexOfEdict(a0[73]->field_0->field_208);
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnMessageEnd(v0);
    EMIT_SOUND_DYN(a0[73]->field_0->field_208, 1, "weapons/meleeflash.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return 0.800000011920929;
}

