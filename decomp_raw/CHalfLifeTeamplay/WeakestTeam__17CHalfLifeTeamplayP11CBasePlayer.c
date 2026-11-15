// WeakestTeam__17CHalfLifeTeamplayP11CBasePlayer @0x128b00 size=661
typedef struct st_528b00_2 {
    char padding_0[168];
    struct st_528b00_3 *field_a8;
} st_528b00_2;

typedef struct st_528b00_5 {
    char padding_0[204];
    struct st_528b00_3 *field_cc;
} st_528b00_5;

typedef struct st_528b00_4 {
    struct st_528b00_1 *field_0;
    char padding_4[92];
    struct st_528b00_2 *field_60;
    char padding_64[2336];
    int field_984;
} st_528b00_4;

typedef struct st_528b00_1 {
    char padding_0[356];
    float field_164;
} st_528b00_1;

typedef struct st_528b00_3 {
    unsigned int field_0;
} st_528b00_3;

typedef struct st_528b00_6 {
    char padding_0[68];
    struct st_528b00_5 *field_44;
} st_528b00_6;

typedef struct st_528b00_0 {
    char padding_0[144];
    int field_90;
} st_528b00_0;

extern int num_teams;
extern st_528b00_3 *g_engfuncs.pfnRandomFloat;
extern st_528b00_0 *gpGlobals;
extern char team_names;

unsigned int WeakestTeam__17CHalfLifeTeamplayP11CBasePlayer(st_528b00_6 *a0, st_528b00_4 *a1)
{
    double v11;  // mm7
    st_528b00_4 *v12;  // edi
    unsigned int v13;  // eax
    int v14;  // eax
    int *v15;  // edx
    int *v16;  // eax
    int *v17;  // eax
    int *v18;  // esi
    char *v0;  // [bp-0x134]
    char *v1;  // [bp-0x130]
    unsigned int v2;  // [bp-0x12c]
    int v3;  // [bp-0x128]
    int v4;  // [bp-0x124]
    int iter;  // [bp-0x120]
    unsigned short v6;  // [bp-0x10c]
    unsigned short v7;  // [bp-0x10a]
    int v8;  // [bp-0x108]
    int v9;  // [bp-0x104]
    char v10;  // [bp-0x84]

    v4 = 0;
    v3 = 100;
    v2 = 0;
    memset@GLIBC_2.0(&v10, 0, 128);
    memset@GLIBC_2.0(&v9, 0, 128);
    iter = 1;
    if (iter <= gpGlobals->field_90)
    {
        v1 = &v9;
        do
        {
            v12 = UTIL_PlayerByIndex(iter);
            if (v12)
            {
                v13 = v12->field_60->field_a8(v12);
                v14 = a0->field_44->field_cc(a0, v13);
                if (v14 >= NULL && a1 != v12)
                {
                    v15 = v14 * 4;
                    *(unsigned int *)(&v10 + v15) = *(int *)(&v10 + v15) + 1;
                    v11 = (double)*(int *)(v15 + v1) + v12->field_0->field_164 - (double)v12->field_984;
                    v7 = __fnstcw();
                    v6 = v7 | 0xc00;
                    v8 = (int)v11;
                    *(int *)(v15 + v1) = v8;
                }
            }
        } while ((iter += 1, iter <= gpGlobals->field_90));
    }
    iter = 0;
    if (iter >= num_teams)
        return v2;
    v0 = &v10;
    do
    {
        v16 = iter * 4;
        if (*(int *)(v16 + v0) < v3)
        {
            v3 = *(int *)(v16 + v0);
            v2 = &(&team_names)[16 * iter];
            v4 = iter;
            continue;
        }
        else
        {
            v17 = iter * 4;
            if (*(int *)(v17 + v0) != v3)
                continue;
            if (*(int *)(v17 + &v9) >= (&v9)[v4])
            {
                v18 = iter * 4;
                if (*(int *)(v18 + &v9) != (&v9)[v4] || !(g_engfuncs.pfnRandomFloat(0, 0x3f800000), v11 > 0.5))
                    continue;
                v3 = *(int *)(v18 + v0);
            }
            v2 = &(&team_names)[16 * iter];
            v4 = iter;
        }
    } while ((iter += 1, iter < num_teams));
    return v2;
}

