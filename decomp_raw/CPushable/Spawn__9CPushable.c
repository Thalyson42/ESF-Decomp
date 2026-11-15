// Spawn__9CPushable @0xc32e0 size=330
typedef struct st_4c32e0_2 {
    char padding_0[264];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[144];
    char field_1a0;
} st_4c32e0_2;

typedef struct st_4c32e0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4c32e0_0;

typedef struct st_4c32e0_1 {
    unsigned int field_0;
} st_4c32e0_1;

extern st_4c32e0_1 *g_engfuncs.pfnSetModel;
extern st_4c32e0_0 *gpGlobals;

int Spawn__9CPushable(float idx)
{
    st_4c32e0_2 *v2;  // eax
    st_4c32e0_2 *v3;  // edx
    int v0;  // [bp-0x8]

    if (*(char *)(*(int *)idx + 416) < 0)
        CBreakable::Spawn(idx);
    else
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(int *)idx + 264) = 13;
    *(unsigned int *)(*(int *)idx + 268) = 2;
    g_engfuncs.pfnSetModel(*(int *)(*(int *)idx + 520), *(int *)(*(int *)idx + 184) + gpGlobals->field_98);
    if (399.0 < *(float *)(*(int *)idx + 288))
        *(float *)(*(int *)idx + 288) = 399.0f;
    v2 = *(int *)idx;
    *(float *)(*(unsigned int *)&idx + 0x88) = (float)(400.0 - *(float *)&v2->padding_110[16]);
    v2[1].padding_0[4] = v2[1].padding_0[4] | 128;
    *(float *)(*(int *)idx + 288) = 0;
    *(float *)(*(int *)idx + 16) = (float)(1.0 + *(float *)(*(int *)idx + 16));
    UTIL_SetOrigin(*(int *)idx, *(int *)idx + 8);
    v3 = *(int *)idx;
    __fnstcw();
    v0 = (int)((double)*(int *)&v3->padding_110[0] * (*(float *)&v3->padding_0[232] - *(float *)&v3->padding_0[220]) * (*(float *)&v3->padding_0[236] - *(float *)&v3->padding_0[224]) * 0.0005);
    *(int *)&v3->padding_110[0] = v0;
    *(unsigned int *)(*(unsigned int *)&idx + 140) = 0;
    return v0;
}

