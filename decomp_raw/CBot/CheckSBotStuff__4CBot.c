// CheckSBotStuff__4CBot @0x13c780 size=1233
typedef struct st_53c780_12 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_53c780_12;

typedef struct st_53c780_3 {
    char padding_0[1860];
    int field_744;
} st_53c780_3;

typedef struct st_53c780_1 {
    struct st_53c780_0 *field_0;
    char padding_4[2976];
    unsigned short field_ba4;
} st_53c780_1;

typedef struct st_53c780_6 {
    struct st_53c780_5 *field_0;
    char padding_4[584];
    int field_24c;
    char padding_250[2388];
    unsigned short field_ba4;
} st_53c780_6;

typedef struct st_53c780_2 {
    char padding_0[2980];
    unsigned short field_ba4;
    char padding_ba6[6];
    float field_bac;
} st_53c780_2;

typedef struct st_53c780_0 {
    char padding_0[348];
    unsigned int field_15c;
} st_53c780_0;

typedef struct st_53c780_5 {
    char padding_0[352];
    float field_160;
} st_53c780_5;

typedef struct st_53c780_8 {
    struct st_53c780_7 *field_0;
    char padding_4[4188];
    unsigned short field_1060;
} st_53c780_8;

typedef struct st_53c780_7 {
    char padding_0[428];
    unsigned int field_1ac;
} st_53c780_7;

typedef struct st_53c780_13 {
    char padding_0[464];
    unsigned int field_1d0;
    char padding_1d4[52];
    unsigned int field_208;
} st_53c780_13;

typedef struct st_53c780_9 {
    char padding_0[96];
    struct st_53c780_10 *field_60;
} st_53c780_9;

typedef struct st_53c780_10 {
    unsigned int field_0;
} st_53c780_10;

typedef struct st_53c780_11 {
    char padding_0[68];
    struct st_53c780_9 *field_44;
} st_53c780_11;

extern st_53c780_11 *g_pGameRules;
extern st_53c780_10 *g_engfuncs.pfnIndexOfEdict;
extern st_53c780_10 *g_engfuncs.pfnGetInfoKeyBuffer;
extern st_53c780_10 *g_engfuncs.pfnSetClientKeyValue;
extern st_53c780_12 *gpGlobals;
extern unsigned short BotManager+4292[4];
extern unsigned short BotManager+4294[4];
extern unsigned int BotManager+4296[4];
extern unsigned int BotManager+4300[4];

unsigned int CheckSBotStuff__4CBot(float idx)
{
    st_53c780_1 *v15;  // esi
    short *v16;  // esi
    st_53c780_8 *v25;  // esi
    st_53c780_13 **v26;  // esi
    unsigned int v27;  // eax
    st_53c780_2 *v17;  // edx
    unsigned int v18;  // edx
    st_53c780_3 *v19;  // ecx
    st_53c780_1 *v20;  // esi
    int v21;  // edx
    st_53c780_6 *v22;  // esi
    void* v23;  // esi
    unsigned short v24;  // dx
    char v0;  // [bp-0x91]
    unsigned int v1;  // [bp-0x90]
    unsigned int v2;  // [bp-0x8c]
    st_53c780_12 **v3;  // [bp-0x88]
    char *v4;  // [bp-0x84]
    char v5;  // [bp-0x80]
    char v6;  // [bp-0x60]
    char v7;  // [bp-0x5f]
    unsigned short v8;  // [bp-0x3e]
    int v9;  // [bp-0x3c]
    unsigned short v10;  // [bp-0x38]
    unsigned short v11;  // [bp-0x36]
    int v12;  // [bp-0xc]
    unsigned short v13;  // [bp-0x6]

    if (*(int *)(*(int *)idx + 348) != 19)
        *(unsigned int *)(*(int *)idx + 328) = 2;
    v15 = (st_53c780_1 *)idx;
    if (10.0f > *(float *)&v15->field_0[1].padding_0[0])
    {
LABEL_53c7f6:
        if (*(short *)(*(unsigned int *)&idx + 2992) <= 19)
        {
            *(unsigned short *)(*(unsigned int *)&idx + 2994) = 1;
        }
        else
        {
            if (*(short *)(*(unsigned int *)&idx + 2992) > 254)
                *(unsigned short *)(*(unsigned int *)&idx + 2994) = 0xffff;
        }
        v16 = (short *)idx;
        v16[1496] = v16[1496] + (unsigned short)(v16[1497] * 3);
        if (v16[1496] > 0xff)
        {
            v16[1496] = 0xff;
        }
        else
        {
            if (*(short *)(*(unsigned int *)&idx + 2992) < 0)
                *(unsigned short *)(*(unsigned int *)&idx + 2992) = 0;
        }
        *(float *)(*(int *)idx + 332) = (float)*(short *)(*(unsigned int *)&idx + 2992);
    }
    else if (*(int *)((char *)&BotManager+4300[4 * v15->field_ba4] - 16) == 0xffffffff)
    {
        if (v15->field_0->field_15c != 19)
            goto LABEL_53c7f6;
    }
    else
    {
        if (*(int *)(*(int *)idx + 348) != 19)
            *(float *)(*(int *)idx + 332) = (float)*(int *)((char *)&BotManager+4300[4 * *(short *)(*(unsigned int *)&idx + 2980)] - 16);
    }
    if (*(float *)(*(unsigned int *)&idx + 2988) < gpGlobals->field_0)
    {
        v17 = (st_53c780_2 *)idx;
        v17->field_bac = (float)(1.0 + gpGlobals->field_0);
        v18 = (v17->field_ba4 - 1) * 16;
        v19 = (st_53c780_3 *)idx;
        if (v19->field_744 < *(int *)(v18 + (char *)&BotManager+4296[0]))
        {
            CBasePlayer::SetPowerLevel(v19, *(int *)(v18 + (char *)&BotManager+4296[0]));
            CBasePlayer::SetMaxPowerLevel(idx, *(int *)((char *)&BotManager+4296[4 * *(short *)(*(unsigned int *)&idx + 2980)] - 16));
        }
        v20 = (st_53c780_1 *)idx;
        v11 = __fnstcw();
        v10 = v11 | 0xc00;
        v9 = (int)*(float *)&v20->field_0[1].padding_0[0x100];
        if (v9 <= 999)
        {
            if (*(short *)((char *)&BotManager+4292[8 * v20->field_ba4] - 16) == 0xffff)
            {
                v9 = 1000;
                *(float *)&v20->field_0[1].padding_0[0x100] = (float)v9;
            }
            else
            {
                v11 = __fnstcw();
                v10 = v11 | 0xc00;
                v9 = (int)*(float *)(*(int *)idx + 608);
                v21 = *(short *)((char *)&BotManager+4292[8 * *(short *)(*(unsigned int *)&idx + 2980)] - 16) + v9;
                if (v21 > 1000)
                    v21 = 1000;
                v9 = v21;
                *(float *)(*(int *)idx + 608) = (float)v9;
            }
        }
        v22 = (st_53c780_6 *)idx;
        v11 = __fnstcw();
        v10 = v11 | 0xc00;
        v9 = (int)v22->field_0->field_160;
        if (v9 < v22->field_24c)
        {
            if (*(short *)((char *)&BotManager+4294[8 * v22->field_ba4] - 16) == 0xffff)
            {
                v9 = v22->field_24c;
                v22->field_0->field_160 = (float)v9;
            }
            else
            {
                v23 = (void*)idx;
                v13 = __fnstcw();
                v8 = v13 | 0xc00;
                v12 = (int)((double)*(short *)((char *)&BotManager+4294[8 * v23[2980]] - 16) + *(float *)(*(int *)v23 + 352));
                v24 = v12;
                if (v24 > (int)v23[588])
                    v24 = (short)v23[588];
                v9 = v24;
                *(float *)(*(int *)idx + 352) = (float)v9;
            }
        }
    }
    v25 = (st_53c780_8 *)idx;
    if (v25->field_0->field_1ac != 2)
    {
        v25->field_1060 = 2;
        g_pGameRules->field_44->field_60(g_pGameRules, v25, "jointeam");
    }
    v4 = &v9;
    sprintf@GLIBC_2.0(&v9, "[SBot%i]", *(short *)(*(unsigned int *)&idx + 2980));
    v6 = 0;
    memset@GLIBC_2.0(&v7, 0, 31);
    v3 = &gpGlobals;
    sprintf@GLIBC_2.0(&v6, *(int *)(*(int *)idx + 464) + gpGlobals->field_98);
    v0 = strstr@GLIBC_2.0(&v6, v4) != 0;
    v26 = (st_53c780_13 **)idx;
    v27 = strncmp@GLIBC_2.0(v4, *v26->field_1d0 + *v3->field_98, 7);
    if (!v27)
    {
        return v27;
    }
    else if (!v0)
    {
        v2 = g_engfuncs.pfnGetInfoKeyBuffer(*v26->field_208);
        v1 = g_engfuncs.pfnIndexOfEdict(*v26->field_208);
        sprintf@GLIBC_2.0(&v5, "%s%s", v4, *v26->field_1d0 + *v3->field_98);
        return g_engfuncs.pfnSetClientKeyValue(v1, v2, "name", &v5);
    }
    else
    {
        return v27;
    }
}

