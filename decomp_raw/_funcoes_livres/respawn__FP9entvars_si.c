// respawn__FP9entvars_si @0x9f610 size=145
typedef struct st_49f610_1 {
    unsigned int field_0;
} st_49f610_1;

typedef struct st_49f610_3 {
    char padding_0[96];
    struct st_49f610_2 *field_60;
} st_49f610_3;

typedef struct st_49f610_2 {
    char padding_0[8];
    struct st_49f610_1 *field_8;
} st_49f610_2;

typedef struct st_49f610_0 {
    char padding_0[20];
    float field_14;
    float field_18;
} st_49f610_0;

extern st_49f610_1 *g_engfuncs.pfnServerCommand;
extern st_49f610_0 *gpGlobals;

int respawn__FP9entvars_si(int a0, unsigned int a1)
{
    st_49f610_3 *v0;  // edx

    if (gpGlobals->field_18 == 0.0f && gpGlobals->field_14 == 0.0f)
        return g_engfuncs.pfnServerCommand("reload\n");
    if (a1)
        CopyToBodyQue(a0);
    v0 = GetClassPtr__H1Z11CBasePlayer_PX01_PX01(a0);
    return v0->field_60->field_8(v0);
}

