// LetBotJoinTeam__4CBot @0x13b1b0 size=314
typedef struct st_53b1b0_0 {
    char padding_0[2540];
    unsigned int field_9ec;
    char padding_9f0[1648];
    unsigned short field_1060;
} st_53b1b0_0;

typedef struct st_53b1b0_2 {
    char padding_0[428];
    unsigned int field_1ac;
} st_53b1b0_2;

typedef struct st_53b1b0_4 {
    char padding_0[96];
    struct st_53b1b0_3 *field_60;
} st_53b1b0_4;

typedef struct st_53b1b0_1 {
    char padding_0[144];
    int field_90;
} st_53b1b0_1;

typedef struct st_53b1b0_3 {
    unsigned int field_0;
} st_53b1b0_3;

typedef struct st_53b1b0_5 {
    char padding_0[68];
    struct st_53b1b0_4 *field_44;
} st_53b1b0_5;

extern st_53b1b0_5 *g_pGameRules;
extern st_53b1b0_3 *g_616928;
extern st_53b1b0_1 *gpGlobals;

unsigned int LetBotJoinTeam__4CBot(st_53b1b0_0 *a0)
{
    int iter;  // edi
    st_53b1b0_2 **v5;  // esi
    unsigned int v6;  // eax
    int v0;  // [bp-0x48]
    int v1;  // [bp-0x44]
    int v2;  // [bp-0xc]
    int v3;  // [bp-0x8]

    if (a0->field_1060 - 1 > 1)
        a0->field_1060 = 0xffff;
    if (a0->field_1060 == 0xffff)
    {
        v2 = 0;
        v3 = 0;
        iter = 1;
        while (iter <= gpGlobals->field_90)
        {
            v5 = sub_48a500(iter);
            *(unsigned short *)&v1 = 0;
            *(unsigned short *)&v0 = 0;
            if (!(char)sub_489a70(v5, v0, v1))
            {
                iter += 1;
            }
            else if (*v5->field_1ac == 1)
            {
                v3 += 1;
                iter += 1;
            }
            else if (*v5->field_1ac == 2)
            {
                v2 += 1;
                iter += 1;
            }
            else
            {
                iter += 1;
            }
        }
        if (v3 > v2)
        {
            a0->field_1060 = 2;
        }
        else if (v3 < v2)
        {
            a0->field_1060 = 1;
        }
        else
        {
            a0->field_1060 = g_616928(1, 2);
        }
    }
    v6 = g_pGameRules->field_44->field_60(g_pGameRules, a0, "jointeam");
    a0->field_9ec = 2;
    return v6;
}

