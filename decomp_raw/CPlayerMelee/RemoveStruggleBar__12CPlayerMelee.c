// RemoveStruggleBar__12CPlayerMelee @0x102ea0 size=129
typedef struct st_502ea0_1 {
    char padding_0[56];
    unsigned int field_38;
    char padding_3c[104];
    unsigned int field_a4;
    char padding_a8[124];
    struct st_502ea0_2 *field_124;
} st_502ea0_1;

typedef struct st_502ea0_2 {
    struct st_502ea0_0 *field_0;
} st_502ea0_2;

typedef struct st_502ea0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_502ea0_0;

typedef struct st_502ea0_3 {
    unsigned int field_0;
} st_502ea0_3;

extern unsigned int gmsgPowerStruggle;
extern st_502ea0_3 *g_engfuncs.pfnMessageBegin;
extern st_502ea0_3 *g_engfuncs.pfnMessageEnd;
extern st_502ea0_3 *g_engfuncs.pfnWriteChar;

unsigned int RemoveStruggleBar__12CPlayerMelee(st_502ea0_1 *a0)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0x2c]

    if (a0->field_38)
    {
        g_engfuncs.pfnMessageBegin(1, gmsgPowerStruggle, 0, *(int *)(*(int *)a0->field_124 + 520));
        v0 = 127;
        g_engfuncs.pfnWriteChar(v0);
        v1 = g_engfuncs.pfnMessageEnd(v0);
    }
    a0->field_a4 = 0;
    a0->field_38 = 0;
    return v1;
}

