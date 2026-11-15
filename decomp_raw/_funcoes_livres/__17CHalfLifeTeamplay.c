// __17CHalfLifeTeamplay @0x127750 size=354
typedef struct st_527750_2 {
    char padding_0[556];
    unsigned int field_22c;
} st_527750_2;

typedef struct st_527750_3 {
    char padding_0[152];
    unsigned int field_98;
} st_527750_3;

typedef struct st_527750_1 {
    unsigned int field_0;
} st_527750_1;

typedef struct st_527750_0 {
    char field_0;
} st_527750_0;

extern float allowspectator+12;
extern st_527750_0 *teamlist+4;
extern float teamoverride+12;
extern unsigned int num_teams;
extern char __vt_17CHalfLifeTeamplay;
extern st_527750_1 *g_engfuncs.pfnPEntityOfEntIndex;
extern st_527750_3 *gpGlobals;
extern int team_names;
extern int team_scores;

float __17CHalfLifeTeamplay(float idx)
{
    st_527750_2 *v3;  // ecx
    char *v4;  // edx
    unsigned int v5;  // ecx
    char *v6;  // edi
    char *v7;  // edi
    char *v8;  // edi
    unsigned int v9;  // ecx
    char *v10;  // edi
    char *v0;  // [bp-0x28], Other Possible Types: int
    char *v1;  // [bp-0x8]

    __18CHalfLifeMultiplay(idx);
    *(char **)(*(unsigned int *)&idx + 0x44) = &__vt_17CHalfLifeTeamplay;
    *(unsigned int *)(*(unsigned int *)&idx + 88) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 92) = 0;
    memset@GLIBC_2.0(&team_names, 0, 0x200);
    memset@GLIBC_2.0(&team_scores, 0, 128);
    num_teams = 0;
    *(char *)(*(unsigned int *)&idx + 100) = 0;
    v0 = teamlist+4;
    v1 = *(unsigned int *)&idx + 100;
    strncpy@GLIBC_2.0(v1, v0, 0x200);
    v3 = g_engfuncs.pfnPEntityOfEntIndex(0);
    if (v3 && v3->field_22c && teamoverride+12 != 0.0f)
    {
        v4 = v3->field_22c + gpGlobals->field_98;
        if (v4)
        {
            v5 = 0xffffffff;
            v6 = v4;
            do
            {
                v7 = v6;
            } while (v5 && (v5 -= 1, v6 = v7 + 1, *v7));
            if (v5 != 0xfffffffe)
            {
                v0 = v4;
                strncpy@GLIBC_2.0(v1, v0, 0x200);
            }
        }
    }
    *(float *)(*(unsigned int *)&idx + 80) = allowspectator+12;
    v8 = *(unsigned int *)&idx + 100;
    v9 = 0xffffffff;
    do
    {
        v10 = v8;
    } while (v9 && (v9 -= 1, v8 = v10 + 1, *v10));
    if (v9 != 0xfffffffe)
        *(unsigned int *)(*(unsigned int *)&idx + 96) = 1;
    else
        *(unsigned int *)(*(unsigned int *)&idx + 96) = 0;
    *(unsigned short *)&v0 = 0;
    CHalfLifeTeamplay::RecountTeams(idx, v0);
    return idx;
}

