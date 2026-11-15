// SetPowerLevel__11CBasePlayeri @0xf2c10 size=115
typedef struct st_4f2c10_0 {
    char padding_0[804];
    unsigned int field_324;
    char padding_328[1052];
    int field_744;
} st_4f2c10_0;

typedef struct st_4f2c10_1 {
    unsigned int field_0;
} st_4f2c10_1;

extern st_4f2c10_1 *g_engfuncs.pfnAlertMessage;

int SetPowerLevel__11CBasePlayeri(st_4f2c10_0 *a0, int a1)
{
    int v0;  // edx
    int v1;  // eax

    v0 = 0x2faf07ff;
    if (a0->field_324)
        v0 = 0x3b9ac9ff;
    a0->field_744 = a1;
    if (a1 > v0)
        a0->field_744 = v0;
    if (a0->field_744 >= 0)
        return a1;
    v1 = g_engfuncs.pfnAlertMessage(1, "negative PowerLevel\n");
    a0->field_744 = 0;
    return v1;
}

