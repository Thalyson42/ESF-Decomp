// FizzThink__9CBubbling @0xaf890 size=237
typedef struct st_4af890_0 {
    char padding_0[260];
    float field_104;
    char padding_108[256];
    unsigned int field_208;
} st_4af890_0;

typedef struct st_4af890_1 {
    struct st_4af890_0 *field_0;
    char padding_4[96];
    unsigned int field_64;
    int field_68;
    short field_6c;
} st_4af890_1;

typedef struct st_4af890_3 {
    float field_0;
} st_4af890_3;

typedef struct st_4af890_2 {
    unsigned int field_0;
} st_4af890_2;

extern st_4af890_2 *g_engfuncs.pfnMessageBegin;
extern st_4af890_2 *g_engfuncs.pfnMessageEnd;
extern st_4af890_2 *g_engfuncs.pfnWriteByte;
extern st_4af890_2 *g_engfuncs.pfnWriteShort;
extern st_4af890_2 *g_engfuncs.pfnIndexOfEdict;
extern st_4af890_3 *gpGlobals;

unsigned int * FizzThink__9CBubbling(st_4af890_1 *a0)
{
    unsigned short v2;  // ax
    st_4af890_0 *v3;  // edx
    float *v4;  // eax
    double v5;  // mm7
    unsigned int v0;  // [bp-0x60]
    char v1;  // [bp-0x24]

    VecBModelOrigin(&v1, a0->field_0);
    g_engfuncs.pfnMessageBegin(5, 23, &v1, 0);
    g_engfuncs.pfnWriteByte(105);
    v2 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
    g_engfuncs.pfnWriteShort(v2);
    g_engfuncs.pfnWriteShort(a0->field_6c);
    v0 = a0->field_64;
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnMessageEnd(v0);
    if (a0->field_68 > 19)
    {
        v3 = a0->field_0;
        v4 = gpGlobals;
        v5 = 0.5 + *(float *)gpGlobals;
    }
    else
    {
        v3 = a0->field_0;
        v4 = gpGlobals;
        v5 = 2.5 + *(float *)gpGlobals - (double)a0->field_68 * 0.1;
    }
    v3->field_104 = (float)v5;
    return v4;
}

