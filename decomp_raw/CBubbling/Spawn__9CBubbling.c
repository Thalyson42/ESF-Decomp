// Spawn__9CBubbling @0xaf2e0 size=326
typedef struct st_4af2e0_0 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4af2e0_0;

typedef struct st_4af2e0_1 {
    unsigned int field_0;
} st_4af2e0_1;

extern char FizzThink__9CBubbling;
extern st_4af2e0_1 *g_engfuncs.pfnSetModel;
extern st_4af2e0_0 *gpGlobals;

short Spawn__9CBubbling(float idx)
{
    double v4;  // mm7
    int v5;  // ecx
    double v6;  // mm7
    unsigned int *v7;  // ecx
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    unsigned int v0;  // [bp-0xc], Other Possible Types: int
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    g_engfuncs.pfnSetModel(*(int *)(*(int *)idx + 520), *(int *)(*(int *)idx + 184) + gpGlobals->field_98);
    *(unsigned int *)(*(int *)idx + 268) = 0;
    *(unsigned int *)(*(int *)idx + 332) = 0;
    *(unsigned int *)(*(int *)idx + 328) = 2;
    v4 = *(float *)(*(int *)idx + 504);
    if (0.0 >= v4)
        v4 = -*(float *)(*(int *)idx + 504);
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)v4;
    v5 = v0;
    v0 = v5 >> 8;
    *(float *)(*(int *)idx + 336) = (float)v0;
    v0 = v5 & 0xff;
    *(float *)(*(int *)idx + 340) = (float)(int)v0;
    v6 = 0.0;
    if (0.0 > *(float *)(*(int *)idx + 504))
        v6 = 1.0;
    *(float *)(*(int *)idx + 344) = (float)v6;
    v7 = *(int *)idx;
    *(char *)&v8 = (char)v7[104] ^ 1;
    if (!((char)v7[104] & 1))
    {
        v9 = _INSERT(v8, 0, 0);
        *(unsigned int *)(*(unsigned int *)&idx + 12) = v9 | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &FizzThink__9CBubbling;
        *(float *)&v7[65] = (float)(2.0 + gpGlobals->field_0);
        *(unsigned int *)(*(unsigned int *)&idx + 112) = 1;
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 112) = 0;
    }
    return (unsigned short)gpGlobals;
}

