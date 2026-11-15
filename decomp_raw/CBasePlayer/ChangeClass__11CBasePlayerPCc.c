// ChangeClass__11CBasePlayerPCc @0xf1af0 size=3150
typedef struct st_4f1af0_1 {
    char padding_0[52];
    struct st_4f1af0_2 *field_34;
    char padding_38[84];
    struct st_4f1af0_2 *field_8c;
} st_4f1af0_1;

typedef struct st_4f1af0_5 {
    struct st_4f1af0_0 *field_0;
    char padding_4[92];
    struct st_4f1af0_1 *field_60;
    char padding_64[488];
    int field_24c;
    char padding_250[216];
    unsigned int field_328;
    char padding_32c[32];
    unsigned int field_34c;
    unsigned int field_350;
    char padding_354[16];
    unsigned int field_364;
    char padding_368[8];
    unsigned int field_370;
    char padding_374[336];
    unsigned int field_4c4;
    char padding_4c8[516];
    unsigned int field_6cc;
    char padding_6d0[88];
    unsigned int field_728;
    char padding_72c[12];
    unsigned int field_738;
    char padding_73c[12];
    unsigned int field_748;
    unsigned int field_74c;
    char padding_750[20];
    struct st_4f1af0_4 *field_764;
    char padding_768[48];
    unsigned int field_798;
    char padding_79c[488];
    unsigned int field_984;
} st_4f1af0_5;

typedef struct st_4f1af0_2 {
    unsigned int field_0;
} st_4f1af0_2;

typedef struct st_4f1af0_3 {
    char padding_0[12];
    struct st_4f1af0_2 *field_c;
    struct st_4f1af0_2 *field_10;
    struct st_4f1af0_2 *field_14;
    char padding_18[16];
    struct st_4f1af0_2 *field_28;
    struct st_4f1af0_2 *field_2c;
    char padding_30[4];
    struct st_4f1af0_2 *field_34;
} st_4f1af0_3;

typedef struct st_4f1af0_0 {
    char padding_0[352];
    float field_160;
    unsigned int field_164;
    char padding_168[68];
    unsigned int field_1ac;
    char padding_1b0[88];
    unsigned int field_208;
    unsigned int field_20c;
    char padding_210[52];
    unsigned int field_244;
} st_4f1af0_0;

typedef struct st_4f1af0_4 {
    char padding_0[4];
    struct st_4f1af0_3 *field_4;
} st_4f1af0_4;

typedef struct st_4f1af0_7 {
    char padding_0[32];
    struct st_4f1af0_2 *field_20;
    char padding_24[168];
    struct st_4f1af0_2 *field_cc;
    char padding_d0[48];
    struct st_4f1af0_2 *field_100;
} st_4f1af0_7;

typedef struct st_4f1af0_6 {
    float field_0;
} st_4f1af0_6;

typedef struct st_4f1af0_8 {
    char padding_0[68];
    struct st_4f1af0_7 *field_44;
} st_4f1af0_8;

extern st_4f1af0_8 *g_pGameRules;
extern unsigned int gmsgScoreInfo;
extern unsigned int gmsgTransform;
extern st_4f1af0_2 *g_engfuncs.pfnMessageBegin;
extern st_4f1af0_2 *g_engfuncs.pfnMessageEnd;
extern st_4f1af0_2 *g_engfuncs.pfnWriteByte;
extern st_4f1af0_2 *g_engfuncs.pfnWriteShort;
extern st_4f1af0_2 *g_engfuncs.pfnWriteLong;
extern st_4f1af0_2 *g_engfuncs.pfnAlertMessage;
extern st_4f1af0_2 *g_engfuncs.pfnIndexOfEdict;
extern st_4f1af0_2 *g_engfuncs.pfnPEntityOfEntIndex;
extern st_4f1af0_2 *g_engfuncs.pfnRandomLong;
extern st_4f1af0_6 *gpGlobals;

double ChangeClass__11CBasePlayerPCc(st_4f1af0_5 *a0, int a1)
{
    int v21;  // esi
    double v22;  // mm7
    unsigned int v31;  // eax
    unsigned int v32;  // eax
    float v33;  // 128
    double v35;  // mm7
    double v23;  // mm7
    unsigned int v24;  // esi
    unsigned int v25;  // eax
    unsigned int v26;  // edx
    double v27;  // mm7
    int v28;  // eax
    unsigned int v29;  // eax
    unsigned int v30;  // eax
    st_4f1af0_4 *v0;  // [bp-0x17c]
    st_4f1af0_4 *v1;  // [bp-0x16c]
    float v2;  // [bp-0x144]
    float v3;  // [bp-0x140]
    int v4;  // [bp-0x13c]
    int v5;  // [bp-0x138]
    unsigned int v6;  // [bp-0x134]
    char v7;  // [bp-0x12d]
    char v8;  // [bp-0x12c]
    char v9;  // [bp-0x12b]
    char v10;  // [bp-0x12a]
    char v11;  // [bp-0x129]
    char v12;  // [bp-0x128]
    char v13;  // [bp-0x127]
    char v14;  // [bp-0x126]
    char v15;  // [bp-0x125]
    unsigned int v16;  // [bp-0x120]
    unsigned short v17;  // [bp-0x11c]
    unsigned short v18;  // [bp-0x11a]
    unsigned int v19;  // [bp-0x118], Other Possible Types: int
    char v20;  // [bp-0x104]

    v16 = a0->field_764->field_4->field_34(a0->field_764);
    if (!strcmp@GLIBC_2.0(a1, "goku"))
    {
        v21 = __builtin_new(8);
        v15 = 1;
        v15 = 0;
        v1 = __5CGokuP11CBasePlayer(v21, a0);
        if (v15)
            goto LABEL_4f1e82;
    }
    else if (!strcmp@GLIBC_2.0(a1, "piccolo"))
    {
        v21 = __builtin_new(8);
        v14 = 1;
        v14 = 0;
        v1 = __8CPiccoloP11CBasePlayer(v21, a0);
        if (v14)
            goto LABEL_4f1e82;
    }
    else if (!strcmp@GLIBC_2.0(a1, "krillin"))
    {
        v21 = __builtin_new(8);
        v13 = 1;
        v13 = 0;
        v1 = __8CKrillinP11CBasePlayer(v21, a0);
        if (v13)
            goto LABEL_4f1e82;
    }
    else if (!strcmp@GLIBC_2.0(a1, "vegeta"))
    {
        v21 = __builtin_new(8);
        v12 = 1;
        v12 = 0;
        v1 = __7CVegetaP11CBasePlayer(v21, a0);
        if (v12)
            goto LABEL_4f1e82;
    }
    else if (!strcmp@GLIBC_2.0(a1, "trunks"))
    {
        v21 = __builtin_new(8);
        v11 = 1;
        v11 = 0;
        v1 = __7CTrunksP11CBasePlayer(v21, a0);
        if (v11)
            goto LABEL_4f1e82;
    }
    else if (!strcmp@GLIBC_2.0(a1, "frieza"))
    {
        v21 = __builtin_new(8);
        v10 = 1;
        v10 = 0;
        v1 = __7CFriezaP11CBasePlayer(v21, a0);
        if (v10)
            goto LABEL_4f1e82;
    }
    else if (!strcmp@GLIBC_2.0(a1, "cell"))
    {
        v21 = __builtin_new(8);
        v9 = 1;
        v9 = 0;
        v1 = __5CCellP11CBasePlayer(v21, a0);
        if (v9)
            goto LABEL_4f1e82;
    }
    else if (!strcmp@GLIBC_2.0(a1, "buu"))
    {
        v21 = __builtin_new(8);
        v8 = 1;
        v8 = 0;
        v1 = __4CBuuP11CBasePlayer(v21, a0);
        if (v8)
            goto LABEL_4f1e82;
    }
    else
    {
        if (strcmp@GLIBC_2.0(a1, "gohan"))
        {
            if (!strcmp@GLIBC_2.0(a1, "randompc"))
            {
                do
                {
                    strcpy@GLIBC_2.0(&v20, CBaseClass::GetName(g_engfuncs.pfnRandomLong(1, 9)));
                } while (!g_pGameRules->field_44->field_100(g_pGameRules, &v20, a0));
                CBasePlayer::ChangeClass(a0, &v20);
                return v35;
            }
            else
            {
                return v23;
            }
        }
        v21 = __builtin_new(8);
        v7 = 1;
        v7 = 0;
        v1 = __6CGohanP11CBasePlayer(v21, a0);
        if (v7)
        {
LABEL_4f1e82:
            __builtin_delete(v21);
        }
    }
    if (g_pGameRules->field_44->field_20(g_pGameRules) && !a0->field_0->field_1ac)
    {
        g_engfuncs.pfnAlertMessage(1, "Spectators have to pick a team first\n");
        v0 = v1;
    }
    else if (!g_pGameRules->field_44->field_100(g_pGameRules, a1, a0))
    {
        g_engfuncs.pfnAlertMessage(1, "Invalid class\n");
        v0 = v1;
    }
    else
    {
        if (a0->field_4c4 || a0->field_364 || a0->field_728)
        {
            v1 = v1;
        }
        else
        {
            v6 = 0;
            if (a0->field_0->field_244)
            {
                CBasePlayer::StopSpectator(a0);
                v6 = 1;
            }
            a0->field_34c = 0;
            a0->field_350 = 0;
            if (v16 && !v6)
            {
                v23 = *(float *)gpGlobals;
                if (*(float *)&a0->field_798 + 2.0 > v23)
                {
                    v1 = v1;
                }
                else
                {
                    v24 = a0->field_748;
                    v19 = v24;
                    v18 = __fnstcw();
                    v17 = v18 | 0xc00;
                    v5 = (int)((double)(int)v19 / *(float *)&a0->field_370);
                    if (a0->field_328)
                        CBasePlayer::StopObserving(a0);
                    if (a0->field_60->field_8c(a0))
                    {
                        v25 = g_engfuncs.pfnPEntityOfEntIndex(0);
                        v26 = (!v25 ? 0 : v25 + 128);
                        a0->field_60->field_34(a0, v26, v26, 900.0f, 0x1000);
                        goto LABEL_4f2193;
                    }
                }
            }
            else
            {
                v24 = v1->field_4->field_14(v1);
                v19 = v24;
                v18 = __fnstcw();
                v17 = v18 | 0xc00;
                v5 = (int)((double)(int)v19 / *(float *)&a0->field_370);
LABEL_4f2193:
                v19 = a0->field_764->field_4->field_14(a0->field_764);
                v18 = __fnstcw();
                v17 = v18 | 0xc00;
                v4 = (int)((double)v19 / *(float *)&a0->field_370);
                __builtin_delete(a0->field_764);
                a0->field_764 = v1;
                if (v6)
                    respawn(a0->field_0, 0);
                if (v5)
                {
                    v19 = a0->field_764->field_4->field_14(a0->field_764);
                    v3 = (float)v19;
                    v27 = v3 / (double)v4;
                    v3 = (float)v27;
                    if (v27 > 0.75)
                        v3 = 0.75f;
                    v2 = (float)((double)v5 * v3);
                    v19 = a0->field_764->field_4->field_14(a0->field_764);
                    if ((double)v19 > v2)
                    {
                        v24 = a0->field_764->field_4->field_14(a0->field_764);
                    }
                    else
                    {
                        v18 = __fnstcw();
                        v17 = v18 | 0xc00;
                        v19 = (int)((double)v5 * v3);
                        v24 = v19;
                    }
                }
                CBasePlayer::SetPowerLevel(a0, v24);
                CBasePlayer::SetMaxPowerLevel(a0, v24);
                v28 = a0->field_764->field_4->field_10(a0->field_764);
                a0->field_24c = v28;
                CBasePlayer::SetMaxHealth(a0, v28);
                a0->field_74c = a0->field_764->field_4->field_c(a0->field_764);
                v19 = a0->field_764->field_4->field_10(a0->field_764);
                a0->field_0->field_160 = (float)v19;
                v29 = a0->field_764->field_4->field_34(a0->field_764);
                a0->field_0->field_20c = v29;
                CBaseClass::SetModel(a0->field_764);
                g_engfuncs.pfnMessageBegin(2, gmsgScoreInfo, 0, 0);
                v30 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
                g_engfuncs.pfnWriteByte(v30);
                v18 = __fnstcw();
                v17 = v18 | 0xc00;
                v19 = (int)*(float *)&a0->field_0->field_164;
                g_engfuncs.pfnWriteShort(v19);
                g_engfuncs.pfnWriteShort(a0->field_984);
                g_engfuncs.pfnWriteShort(a0->field_738);
                g_engfuncs.pfnWriteShort(a0->field_0->field_20c);
                v31 = g_pGameRules->field_44->field_cc(g_pGameRules, &a0[1].padding_4[16]);
                g_engfuncs.pfnWriteShort(v31 + 1);
                g_engfuncs.pfnMessageEnd();
                if (a0->field_328)
                    CBasePlayer::StopObserving(a0);
                g_engfuncs.pfnMessageBegin(1, gmsgTransform, 0, a0->field_0->field_208);
                g_engfuncs.pfnWriteByte(0);
                v32 = a0->field_764->field_4->field_28(a0->field_764);
                g_engfuncs.pfnWriteLong(v32);
                g_engfuncs.pfnMessageEnd();
                a0->field_764->field_4->field_2c(a0->field_764);
                *(float *)&a0->field_370 = *(float *)&a0->field_0->field_164;
                a0->field_6cc = 0;
                v33 = *(float *)gpGlobals;
                *(float *)&a0->field_798 = v33;
                return v33;
            }
        }
        __builtin_delete(v1);
        v23 = v23;
        return v23;
    }
    __builtin_delete(v1);
    return v22;
}

