// Use__6CLightP11CBaseEntityT18USE_TYPEf @0xcdf70 size=214
typedef struct st_4cdf70_0 {
    char padding_0[416];
    char field_1a0;
} st_4cdf70_0;

typedef struct st_4cdf70_1 {
    struct st_4cdf70_0 *field_0;
    char padding_4[96];
    int field_64;
    unsigned int field_68;
} st_4cdf70_1;

typedef struct st_4cdf70_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4cdf70_2;

typedef struct st_4cdf70_3 {
    unsigned int field_0;
} st_4cdf70_3;

extern st_4cdf70_3 *g_engfuncs.pfnLightStyle;
extern st_4cdf70_2 *gpGlobals;

st_4cdf70_0 * Use__6CLightP11CBaseEntityT18USE_TYPEf(st_4cdf70_1 *a0, unsigned int a1, unsigned int a2, int a3)
{
    st_4cdf70_0 *v1;  // eax
    st_4cdf70_0 *v2;  // eax
    st_4cdf70_0 *v3;  // eax
    st_4cdf70_0 *v4;  // eax

    if (a0->field_64 <= 31)
        return v4;
    v1 = CBaseEntity::ShouldToggle(a0, a3, (a0->field_0->field_1a0 ^ 1) & 1);
    if (!v1)
    {
        return v1;
    }
    else if (a0->field_0->field_1a0 & 1)
    {
        if (a0->field_68)
            g_engfuncs.pfnLightStyle(a0->field_64, a0->field_68 + gpGlobals->field_98);
        else
            g_engfuncs.pfnLightStyle(a0->field_64, "m");
        v2 = a0->field_0;
        v2->field_1a0 = v2->field_1a0 & 254;
        return v2;
    }
    else
    {
        g_engfuncs.pfnLightStyle(a0->field_64, "a");
        v3 = a0->field_0;
        v3->field_1a0 = v3->field_1a0 | 1;
        return v3;
    }
}

