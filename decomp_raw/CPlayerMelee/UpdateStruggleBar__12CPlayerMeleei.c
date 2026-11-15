// UpdateStruggleBar__12CPlayerMeleei @0x102e00 size=150
typedef struct st_502e00_1 {
    char padding_0[56];
    unsigned int field_38;
    char padding_3c[104];
    unsigned int field_a4;
    char padding_a8[124];
    struct st_502e00_2 *field_124;
} st_502e00_1;

typedef struct st_502e00_2 {
    struct st_502e00_0 *field_0;
} st_502e00_2;

typedef struct st_502e00_0 {
    char padding_0[520];
    unsigned int field_208;
} st_502e00_0;

typedef struct st_502e00_3 {
    float field_0;
} st_502e00_3;

typedef struct st_502e00_4 {
    unsigned int field_0;
} st_502e00_4;

extern unsigned int gmsgPowerStruggle;
extern st_502e00_4 *g_engfuncs.pfnMessageBegin;
extern st_502e00_4 *g_engfuncs.pfnMessageEnd;
extern st_502e00_4 *g_engfuncs.pfnWriteChar;
extern st_502e00_3 *gpGlobals;

unsigned int UpdateStruggleBar__12CPlayerMeleei(st_502e00_1 *a0, unsigned int a1)
{
    if (*(float *)&a0->field_a4 + 0.05000000074505806 <= *(float *)gpGlobals)
    {
        *(float *)&a0->field_a4 = *(float *)gpGlobals;
        a0->field_38 = 1;
        g_engfuncs.pfnMessageBegin(1, gmsgPowerStruggle, 0, *(int *)(*(int *)a0->field_124 + 520));
        g_engfuncs.pfnWriteChar(a1);
    }
    return g_engfuncs.pfnMessageEnd(a1);
}

