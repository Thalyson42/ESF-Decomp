// UpdateClientData__17CBasePlayerWeaponP11CBasePlayer @0x1388f0 size=372
typedef struct st_5388f0_4 {
    char padding_0[132];
    struct st_5388f0_3 *field_84;
    unsigned int field_88;
    char padding_8c[36];
    unsigned int field_b0;
    unsigned int field_b4;
    unsigned int field_b8;
} st_5388f0_4;

typedef struct st_5388f0_5 {
    struct st_5388f0_0 *field_0;
    char padding_4[2308];
    unsigned int field_908;
    char padding_90c[44];
    unsigned int field_938;
    unsigned int field_93c;
    char padding_940[40];
    struct st_5388f0_4 *field_968;
    struct st_5388f0_4 *field_96c;
    char padding_970[16];
    unsigned int field_980;
} st_5388f0_5;

typedef struct st_5388f0_1 {
    char padding_0[296];
    struct st_5388f0_2 *field_128;
} st_5388f0_1;

typedef struct st_5388f0_2 {
    unsigned int field_0;
} st_5388f0_2;

typedef struct st_5388f0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_5388f0_0;

typedef struct st_5388f0_3 {
    char padding_0[96];
    struct st_5388f0_1 *field_60;
} st_5388f0_3;

extern unsigned int gmsgCurWeapon;
extern st_5388f0_2 *g_engfuncs.pfnMessageBegin;
extern st_5388f0_2 *g_engfuncs.pfnMessageEnd;
extern st_5388f0_2 *g_engfuncs.pfnWriteByte;

unsigned int UpdateClientData__17CBasePlayerWeaponP11CBasePlayer(st_5388f0_4 *a0, st_5388f0_5 *a1)
{
    unsigned int v2;  // edx
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x8]

    v2 = 0;
    v1 = 0;
    if (a1->field_968 == a0)
    {
        v1 = 1;
        if (a1->field_980)
            v1 = 64;
    }
    if (!a1->field_908)
        v2 = 1;
    if ((a0 == a1->field_968 || a0 == a1->field_96c) && a1->field_968 != a1->field_96c)
        v2 = 1;
    if (a0->field_b0 != a0->field_b4 || v1 != a0->field_b8 || a1->field_938 != a1->field_93c)
        v2 = 1;
    if (v2)
    {
        g_engfuncs.pfnMessageBegin(1, gmsgCurWeapon, 0, a1->field_0->field_208);
        g_engfuncs.pfnWriteByte(v1);
        g_engfuncs.pfnWriteByte(a0->field_88);
        v0 = a0->field_b0;
        g_engfuncs.pfnWriteByte(v0);
        g_engfuncs.pfnMessageEnd(v0);
        a0->field_b4 = a0->field_b0;
        a0->field_b8 = v1;
        a1->field_908 = 1;
    }
    if (a0->field_84)
        a0->field_84->field_60->field_128(a0->field_84, a1);
    return 1;
}

