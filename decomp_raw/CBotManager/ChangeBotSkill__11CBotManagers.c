// ChangeBotSkill__11CBotManagers @0x13e6c0 size=629
typedef struct st_53e6c0_4 {
    char padding_0[164];
    struct st_53e6c0_0 *field_a4;
} st_53e6c0_4;

typedef struct st_53e6c0_6 {
    char padding_0[236];
    struct st_53e6c0_0 *field_ec;
} st_53e6c0_6;

typedef struct st_53e6c0_5 {
    struct st_53e6c0_3 *field_0;
    char padding_4[92];
    struct st_53e6c0_4 *field_60;
    char padding_64[2456];
    char field_9fc;
    char padding_9fd[3];
    unsigned int field_a00;
} st_53e6c0_5;

typedef struct st_53e6c0_0 {
    unsigned int field_0;
} st_53e6c0_0;

typedef struct st_53e6c0_3 {
    char padding_0[421];
    char field_1a5;
} st_53e6c0_3;

typedef struct st_53e6c0_1 {
    char padding_0[20];
    struct st_53e6c0_0 *field_14;
} st_53e6c0_1;

typedef struct st_53e6c0_2 {
    char padding_0[144];
    unsigned int field_90;
} st_53e6c0_2;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_53e6c0_6 g_engfuncs;
extern st_53e6c0_0 *g_engfuncs.pfnCVarGetFloat;
extern st_53e6c0_0 *g_engfuncs.pfnRandomLong;
extern st_53e6c0_2 *gpGlobals;
extern char cout;
extern st_53e6c0_1 *cout+512;

int ChangeBotSkill__11CBotManagers(unsigned int a0, unsigned short a1)
{
    unsigned short v8;  // di
    st_53e6c0_5 *v9;  // esi
    double v10;  // mm7
    double v11;  // mm0
    int v0;  // [bp-0x68]
    int v1;  // [bp-0x64]
    st_53e6c0_6 *v2;  // [bp-0x30]
    char v3;  // [bp-0x2a]
    char v4;  // [bp-0x29]
    char v5;  // [bp-0x28]
    char v6;  // [bp-0x27]
    unsigned int v7;  // [bp-0x8]

    v8 = a1;
    if (v8 == 0xffff)
        v8 = g_engfuncs.pfnRandomLong(1, 5);
    if (v8 - 1 > 4)
        return cout+512->field_14(&cout, "Invalid botskill ! Choose a number between 1(best) and 5(worst)\n");
    v4 = 1;
    if ((int)gpGlobals->field_90 > 0)
    {
        do
        {
            v9 = UTIL_PlayerByIndex(v4);
            *(unsigned short *)&v1 = 0;
            *(unsigned short *)&v0 = 0;
            if ((char)UTIL_IsValidPlayer(v9, v0, v1))
            {
                v3 = 0;
                if (!v9->field_60->field_a4(v9))
                    v3 = (v9->field_0->field_1a5 & 32) != 0;
                if (v3 && v9)
                {
                    v9->field_9fc = (char)v8 - 1;
                    v9->field_a00 = a0 + v8 * 0x44 + 3884;
                }
            }
        } while ((v4 += 1, v4 <= (int)gpGlobals->field_90));
    }
    v2 = &g_engfuncs.padding_0[0];
    g_engfuncs.pfnCVarGetFloat("sv_botskill");
    v7 = v8 - 1;
    v10 = (double)(int)v7;
    if (v10 != v11)
        v2->field_ec("sv_botskill", (float)v10);
    v5 = 0;
    memset@GLIBC_2.0(&v6, 0, 9);
    if (v8 - 1 > 4)
    {
        cout+512->field_14(&cout, "EVERY bot has now the skill ");
        cout+512->field_14(&cout, &v5);
        return cout+512->field_14(&cout, "\n");
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v8] - 873072)]));
}

