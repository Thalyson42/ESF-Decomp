// WaitToBecomeCandy__11CBasePlayerP11CBasePlayer @0xf0250 size=165
typedef struct st_4f0250_2 {
    struct st_4f0250_0 *field_0;
    char padding_4[1828];
    struct st_4f0250_1 *field_728;
    unsigned int field_72c;
} st_4f0250_2;

typedef struct st_4f0250_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4f0250_0;

typedef struct st_4f0250_1 {
    struct st_4f0250_1 *field_0;
    char padding_4[417];
    char field_1a5;
    char padding_1a6[446];
    unsigned int field_364;
} st_4f0250_1;

typedef struct st_4f0250_3 {
    float field_0;
} st_4f0250_3;

typedef struct st_4f0250_4 {
    unsigned int field_0;
} st_4f0250_4;

extern unsigned int gmsgVGUIMenu;
extern st_4f0250_4 *g_engfuncs.pfnMessageBegin;
extern st_4f0250_4 *g_engfuncs.pfnMessageEnd;
extern st_4f0250_4 *g_engfuncs.pfnWriteByte;
extern st_4f0250_3 *gpGlobals;

st_4f0250_1 * WaitToBecomeCandy__11CBasePlayerP11CBasePlayer(st_4f0250_1 *a0, st_4f0250_2 *a1)
{
    st_4f0250_1 *v1;  // eax
    st_4f0250_1 *v2;  // eax
    unsigned int v0;  // [bp-0x2c]

    if (a1->field_728)
    {
        return v2;
    }
    else if (!a0->field_364)
    {
        g_engfuncs.pfnMessageBegin(1, gmsgVGUIMenu, 0, a1->field_0->field_208);
        v0 = 32;
        g_engfuncs.pfnWriteByte(v0);
        g_engfuncs.pfnMessageEnd(v0);
        a1->field_728 = a0;
        *(float *)&a1->field_72c = *(float *)gpGlobals;
        v1 = a0->field_0;
        v1->field_1a5 = v1->field_1a5 | 16;
        a0->field_364 = 1;
        return v1;
    }
    else
    {
        return a0;
    }
}

