// RecountTeams__17CHalfLifeTeamplayb @0x128da0 size=708
typedef struct st_528da0_0 {
    char padding_0[144];
    unsigned int field_90;
} st_528da0_0;

typedef struct st_528da0_5 {
    char padding_0[168];
    struct st_528da0_2 *field_a8;
} st_528da0_5;

typedef struct st_528da0_1 {
    char padding_0[204];
    struct st_528da0_2 *field_cc;
    char padding_d0[4];
    struct st_528da0_2 *field_d4;
} st_528da0_1;

typedef struct st_528da0_2 {
    unsigned int field_0;
} st_528da0_2;

typedef struct st_528da0_4 {
    char padding_0[356];
    float field_164;
    char padding_168[160];
    unsigned int field_208;
} st_528da0_4;

typedef struct st_528da0_6 {
    struct st_528da0_4 *field_0;
    char padding_4[92];
    struct st_528da0_5 *field_60;
} st_528da0_6;

typedef struct st_528da0_3 {
    char padding_0[68];
    struct st_528da0_1 *field_44;
    char padding_48[24];
    unsigned int field_60;
} st_528da0_3;

extern unsigned int gmsgTeamInfo;
extern int num_teams;
extern char _GLOBAL_OFFSET_TABLE_;
extern st_528da0_2 *g_engfuncs.pfnMessageBegin;
extern st_528da0_2 *g_engfuncs.pfnMessageEnd;
extern st_528da0_2 *g_engfuncs.pfnWriteByte;
extern st_528da0_2 *g_engfuncs.pfnWriteString;
extern st_528da0_2 *g_engfuncs.pfnIndexOfEdict;
extern st_528da0_0 *gpGlobals;
extern char team_names;
extern unsigned int team_scores[4];

st_528da0_0 * RecountTeams__17CHalfLifeTeamplayb(st_528da0_3 *a0, char a1)
{
    char *i;  // esi
    st_528da0_6 *v7;  // edi
    int v8;  // esi
    unsigned int v9;  // edx
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v12;  // eax
    int v0;  // [bp-0x214]
    int v1;  // [bp-0x210]
    unsigned short v2;  // [bp-0x20c]
    unsigned short v3;  // [bp-0x20a]
    int v4;  // [bp-0x208]
    char v5;  // [bp-0x204]

    num_teams = 0;
    strcpy@GLIBC_2.0(&v5, a0 + 1);
    for (i = strtok@GLIBC_2.0(&v5, ";"); i && *i; i = strtok@GLIBC_2.0(0, ";"))
    {
        if ((int)a0->field_44->field_cc(a0, i) < 0)
        {
            strcpy@GLIBC_2.0(&(&team_names)[16 * num_teams], i);
            num_teams = num_teams + 1;
        }
    }
    if (num_teams <= 1)
    {
        num_teams = 0;
        a0->field_60 = 0;
    }
    memset@GLIBC_2.0(&team_scores[0], 0, 128);
    v1 = 1;
    if (v1 > (int)gpGlobals->field_90)
        return gpGlobals;
    do
    {
        v7 = UTIL_PlayerByIndex(v1);
        if (!v7)
            continue;
        v0 = v7->field_60->field_a8(v7);
        v8 = a0->field_44->field_cc(a0, v0);
        if (v8 < 0)
        {
            if (!a0->field_60)
            {
                v8 = num_teams;
                num_teams = num_teams + 1;
                *(unsigned int *)&(&_GLOBAL_OFFSET_TABLE_)[0xffa4 + 4 * v8] = 0;
                strncpy@GLIBC_2.0(&(&team_names)[16 * v8], v0, 16);
            }
            if (v8 < 0)
                goto LABEL_528f8a;
        }
        v9 = v8 * 4;
        v3 = __fnstcw();
        v2 = v3 | 0xc00;
        v4 = (int)((double)*(int *)(v9 + (char *)&team_scores[0]) + v7->field_0->field_164);
        *(int *)(v9 + (char *)&team_scores[0]) = v4;
LABEL_528f8a:
        if (a1 && v7)
        {
            v10 = v7->field_60->field_a8(v7);
            if (a0->field_44->field_d4(a0, v10))
            {
                g_engfuncs.pfnMessageBegin(2, gmsgTeamInfo, 0, 0);
                v11 = g_engfuncs.pfnIndexOfEdict(v7->field_0->field_208);
                g_engfuncs.pfnWriteByte(v11);
                v12 = v7->field_60->field_a8(v7);
                g_engfuncs.pfnWriteString(v12);
                g_engfuncs.pfnMessageEnd();
            }
        }
    } while ((v1 += 1, v1 <= (int)gpGlobals->field_90));
    return gpGlobals;
}

