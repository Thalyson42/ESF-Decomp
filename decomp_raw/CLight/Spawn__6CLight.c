// Spawn__6CLight @0xcdea0 size=197
typedef struct st_4cdea0_0 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[43];
    unsigned int field_1cc;
    char padding_1d0[56];
    unsigned int field_208;
} st_4cdea0_0;

typedef struct st_4cdea0_1 {
    struct st_4cdea0_0 *field_0;
    char padding_4[96];
    int field_64;
    unsigned int field_68;
} st_4cdea0_1;

typedef struct st_4cdea0_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4cdea0_3;

typedef struct st_4cdea0_2 {
    unsigned int field_0;
} st_4cdea0_2;

extern st_4cdea0_2 *g_engfuncs.pfnRemoveEntity;
extern st_4cdea0_2 *g_engfuncs.pfnLightStyle;
extern st_4cdea0_3 *gpGlobals;

int Spawn__6CLight(st_4cdea0_1 *a0)
{
    unsigned int v0;  // eax

    if (!a0->field_0->field_1cc)
    {
        return g_engfuncs.pfnRemoveEntity(a0->field_0->field_208);
    }
    else if (a0->field_64 <= 31)
    {
        return v0;
    }
    else if (a0->field_0->field_1a0 & 1)
    {
        return g_engfuncs.pfnLightStyle(a0->field_64, "a");
    }
    else if (a0->field_68)
    {
        return g_engfuncs.pfnLightStyle(a0->field_64, a0->field_68 + gpGlobals->field_98);
    }
    else
    {
        return g_engfuncs.pfnLightStyle(a0->field_64, "m");
    }
}

