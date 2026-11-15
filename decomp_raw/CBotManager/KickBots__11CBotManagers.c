// KickBots__11CBotManagers @0x13f240 size=422
typedef struct st_53f240_1 {
    char padding_0[164];
    struct st_53f240_2 *field_a4;
} st_53f240_1;

typedef struct st_53f240_3 {
    struct st_53f240_0 *field_0;
    char padding_4[92];
    struct st_53f240_1 *field_60;
    char padding_64[2468];
    char field_a08;
} st_53f240_3;

typedef struct st_53f240_5 {
    char padding_0[3364];
    char field_d24;
} st_53f240_5;

typedef struct st_53f240_2 {
    unsigned int field_0;
} st_53f240_2;

typedef struct st_53f240_0 {
    char padding_0[421];
    char field_1a5;
    char padding_1a6[6];
    unsigned int field_1ac;
    char padding_1b0[32];
    unsigned int field_1d0;
} st_53f240_0;

typedef struct st_53f240_6 {
    char padding_0[20];
    struct st_53f240_2 *field_14;
} st_53f240_6;

typedef struct st_53f240_4 {
    char padding_0[144];
    unsigned int field_90;
    char padding_94[4];
    unsigned int field_98;
} st_53f240_4;

extern unsigned int g_teamplay;
extern st_53f240_2 *g_engfuncs.pfnServerCommand;
extern st_53f240_4 *gpGlobals;
extern char cout;
extern st_53f240_6 *cout+512;

int KickBots__11CBotManagers(st_53f240_5 *a0, short a1)
{
    st_53f240_3 *v6;  // esi
    st_53f240_3 *v7;  // ecx
    unsigned int v8;  // eax
    int v0;  // [bp-0x88]
    int v1;  // [bp-0x84]
    char *v2;  // [bp-0x4c]
    char v3;  // [bp-0x46]
    char v4;  // [bp-0x45]
    char v5;  // [bp-0x44]

    if (!g_teamplay)
        a1 = -0x1;
    v4 = 1;
    if ((int)gpGlobals->field_90 > 0)
    {
        v2 = &v5;
        do
        {
            v6 = UTIL_PlayerByIndex(v4);
            *(unsigned short *)&v1 = 0;
            *(unsigned short *)&v0 = 0;
            if ((char)UTIL_IsValidPlayer(v6, v0, v1))
            {
                v3 = 0;
                if (!v6->field_60->field_a4(v6))
                    v3 = (v6->field_0->field_1a5 & 32) != 0;
                if (v3)
                {
                    v7 = v6;
                    if (v7 && (v7->field_0->field_1ac == a1 || a1 == -0x1))
                    {
                        v7->field_a08 = 1;
                        sprintf@GLIBC_2.0(v2, "kick \"%s\"\n", v7->field_0->field_1d0 + gpGlobals->field_98);
                        g_engfuncs.pfnServerCommand(v2);
                    }
                }
            }
        } while ((v4 += 1, v4 <= (int)gpGlobals->field_90));
    }
    a0->field_d24 = 0;
    memset(&a0->padding_0[20], 0, 5);
    if (a1 == 1)
    {
        v8 = "All bots removed in team good\n";
    }
    else if (a1 == 2)
    {
        v8 = "All bots removed in team evil\n";
    }
    else
    {
        return cout+512->field_14(&cout, "All bots removed\n");
    }
    return cout+512->field_14(&cout, v8);
}

