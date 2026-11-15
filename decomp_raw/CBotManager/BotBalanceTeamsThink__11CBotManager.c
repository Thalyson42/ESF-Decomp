// BotBalanceTeamsThink__11CBotManager @0x13fe50 size=705
typedef struct st_53fe50_4 {
    char padding_0[164];
    struct st_53fe50_5 *field_a4;
} st_53fe50_4;

typedef struct st_53fe50_0 {
    char padding_0[4];
    char field_4;
    char padding_5[3];
    float field_8;
    char padding_c[3392];
    char field_d4c;
} st_53fe50_0;

typedef struct st_53fe50_5 {
    unsigned int field_0;
} st_53fe50_5;

typedef struct st_53fe50_6 {
    struct st_53fe50_3 *field_0;
    char padding_4[92];
    struct st_53fe50_4 *field_60;
    char padding_64[4092];
    unsigned short field_1060;
} st_53fe50_6;

typedef struct st_53fe50_2 {
    char padding_0[428];
    unsigned int field_1ac;
} st_53fe50_2;

typedef struct st_53fe50_3 {
    char padding_0[421];
    char field_1a5;
    char padding_1a6[6];
    unsigned int field_1ac;
} st_53fe50_3;

typedef struct st_53fe50_7 {
    char padding_0[96];
    struct st_53fe50_5 *field_60;
} st_53fe50_7;

typedef struct st_53fe50_1 {
    unsigned int field_0;
    char padding_4[140];
    int field_90;
} st_53fe50_1;

typedef struct st_53fe50_8 {
    char padding_0[68];
    struct st_53fe50_7 *field_44;
} st_53fe50_8;

extern st_53fe50_8 *g_pGameRules;
extern unsigned int g_teamplay;
extern st_53fe50_1 *gpGlobals;

unsigned int * BotBalanceTeamsThink__11CBotManager(st_53fe50_0 *a0)
{
    st_53fe50_2 **v7;  // esi
    st_53fe50_6 *v8;  // esi
    st_53fe50_6 *v9;  // esi
    int v0;  // [bp-0x48]
    int v1;  // [bp-0x44]
    char v2;  // [bp-0x19]
    char v3;  // [bp-0x18]
    char v4;  // [bp-0x17]
    char node;  // [bp-0x16]
    char iter;  // [bp-0x15]

    if (a0->field_8 >= *(float *)&gpGlobals->field_0)
        return &g_teamplay;
    a0->field_8 = (float)(5.0 + *(float *)&gpGlobals->field_0);
    if (!a0->field_d4c)
    {
        return &g_teamplay;
    }
    else if (!a0->field_4)
    {
        return &g_teamplay;
    }
    else if (g_teamplay)
    {
        node = 0;
        v4 = 0;
        iter = 1;
        if (gpGlobals->field_90 > 0)
        {
            do
            {
                v7 = sub_48a500(iter);
                *(unsigned short *)&v1 = 0;
                *(unsigned short *)&v0 = 1;
                if ((char)sub_489a70(v7, v0, v1))
                {
                    if (*v7->field_1ac == 1)
                        node += 1;
                    if (*v7->field_1ac == 2)
                        v4 += 1;
                }
            } while ((iter += 1, iter <= gpGlobals->field_90));
        }
        if (node - 1 > v4)
        {
            iter = 1;
            if (gpGlobals->field_90 <= 0)
                return &g_teamplay;
            while (1)
            {
                v8 = sub_48a500(iter);
                *(unsigned short *)&v1 = 0;
                *(unsigned short *)&v0 = 0;
                if ((char)sub_489a70(v8, v0, v1))
                {
                    v3 = 0;
                    if (!v8->field_60->field_a4(v8))
                        v3 = (v8->field_0->field_1a5 & 32) != 0;
                    if (v3 && v8 && v8->field_0->field_1ac == 1)
                    {
                        v8->field_1060 = 2;
                        g_pGameRules->field_44->field_60(g_pGameRules, v8, "jointeam");
                        node -= 1;
                        if (node <= v4)
                            return &g_teamplay;
                    }
                }
                iter += 1;
                if (iter > gpGlobals->field_90)
                    return &g_teamplay;
            }
        }
        else if (v4 - 1 > node)
        {
            iter = 1;
            if (gpGlobals->field_90 <= 0)
                return &g_teamplay;
            while (1)
            {
                v9 = sub_48a500(iter);
                *(unsigned short *)&v1 = 0;
                *(unsigned short *)&v0 = 0;
                if ((char)sub_489a70(v9, v0, v1))
                {
                    v2 = 0;
                    if (!v9->field_60->field_a4(v9))
                        v2 = (v9->field_0->field_1a5 & 32) != 0;
                    if (v2 && v9 && v9->field_0->field_1ac == 2)
                    {
                        v9->field_1060 = 1;
                        g_pGameRules->field_44->field_60(g_pGameRules, v9, "jointeam");
                        return &g_teamplay;
                    }
                }
                iter += 1;
                if (iter > gpGlobals->field_90)
                    return &g_teamplay;
            }
        }
        else
        {
            return &g_teamplay;
        }
    }
    else
    {
        return &g_teamplay;
    }
}

