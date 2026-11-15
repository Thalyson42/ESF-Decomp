// ClientUserInfoChanged__10CGameRulesP11CBasePlayerPc @0xc4b00 size=486
typedef struct st_4c4b00_4 {
    struct st_4c4b00_1 *field_0;
    char padding_4[1436];
    char field_5a0;
    char padding_5a1[451];
    struct st_4c4b00_3 *field_764;
} st_4c4b00_4;

typedef struct st_4c4b00_0 {
    unsigned int field_0;
} st_4c4b00_0;

typedef struct st_4c4b00_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4c4b00_1;

typedef struct st_4c4b00_2 {
    char padding_0[52];
    struct st_4c4b00_0 *field_34;
    char padding_38[4];
    struct st_4c4b00_0 *field_3c;
} st_4c4b00_2;

typedef struct st_4c4b00_3 {
    char padding_0[4];
    struct st_4c4b00_2 *field_4;
} st_4c4b00_3;

extern int g_59f95c;
extern st_4c4b00_0 *g_engfuncs.pfnCVarGetFloat;
extern st_4c4b00_0 *g_engfuncs.pfnIndexOfEdict;
extern st_4c4b00_0 *g_engfuncs.pfnGetInfoKeyBuffer;
extern st_4c4b00_0 *g_engfuncs.pfnInfoKeyValue;
extern st_4c4b00_0 *g_engfuncs.pfnSetClientKeyValue;

unsigned int ClientUserInfoChanged__10CGameRulesP11CBasePlayerPc(double a0, unsigned int a1, st_4c4b00_4 *a2, unsigned int a3)
{
    int iter;  // esi
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v0;  // [bp-0x138]
    unsigned int v1;  // [bp-0x134]
    char *v2;  // [bp-0x130]
    char v3;  // [bp-0x109]
    int v4;  // [bp-0x108]
    char v5;  // [bp-0x104]

    v4 = g_engfuncs.pfnInfoKeyValue(a3, "model");
    if (strcasecmp@GLIBC_2.0(&a2->field_5a0, g_engfuncs.pfnInfoKeyValue(a3, "model")))
    {
        v3 = 0;
        iter = 0;
        while (iter <= 19 && strcasecmp@GLIBC_2.0(32 * iter + 5896896, &g_59f95c))
        {
            if (!strcasecmp@GLIBC_2.0(32 * iter + 5896896, v4))
            {
                v3 = 1;
                iter += 1;
            }
            else
            {
                iter += 1;
            }
        }
        if (v3)
            UTIL_SetPlayerModel(a2, g_engfuncs.pfnInfoKeyValue(a3, "model"));
    }
    g_engfuncs.pfnCVarGetFloat("mp_lockmodels");
    if (a0 == 0.0)
    {
        return v10;
    }
    else if ((int)a2->field_764->field_4->field_34(a2->field_764) >= 0)
    {
        strcpy@GLIBC_2.0(&v5, a2->field_764->field_4->field_3c(a2->field_764));
        if (!strcasecmp@GLIBC_2.0(v4, &v5))
            return v10;
        v2 = &v5;
        v1 = "model";
        v0 = g_engfuncs.pfnGetInfoKeyBuffer(a2->field_0->field_208);
        v9 = g_engfuncs.pfnIndexOfEdict(a2->field_0->field_208);
        g_engfuncs.pfnSetClientKeyValue(v9);
        v10 = UTIL_SetPlayerModel(a2, &v5);
        return v10;
    }
    else
    {
        return v10;
    }
}

