// CheckTimeBasedDamage__11CBasePlayer @0xf9890 size=432
typedef struct st_4f9890_0 {
    float field_0;
} st_4f9890_0;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_4f9890_0 *gpGlobals;

unsigned int CheckTimeBasedDamage__11CBasePlayer(float a0)
{
    int v7;  // eax
    double v8;  // mm7
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v0;  // [bp-0x14]
    int v1;  // [bp-0x10]
    int v2;  // [bp-0x10]
    int v3;  // [bp-0xc]
    unsigned short v4;  // [bp-0x8]
    unsigned short v5;  // [bp-0x6]

    if (!(*(int *)(*(unsigned int *)&a0 + 616) & 0xffffc000))
        return v11;
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)(*(float *)gpGlobals - *(float *)(*(unsigned int *)&a0 + 2264));
    v7 = v3;
    if (v7 < 0)
        v7 = -v7;
    v3 = v7;
    v8 = (double)v3;
    v10 = _INSERT(_INSERT(v7, 0, 0), 1, (isnan(v8) ? 69 : v8 == 2.0 ? 64 : v8 < 2.0));
    if (v8 < 2.0)
        return v10;
    *(float *)(*(unsigned int *)&a0 + 2264) = *(float *)gpGlobals;
    v1 = 0;
    v0 = *(unsigned int *)&a0 + 620;
    while (1)
    {
        v2 = v1;
        if (0x8000 << ((char)v2 & 31) & *(int *)(*(unsigned int *)&a0 + 616))
            break;
        v1 = v2 + 1;
        if (v1 > 7)
            return 0x8000 << ((char)v2 & 31) & *(int *)(*(unsigned int *)&a0 + 616);
    }
    if ((unsigned int)v2 <= 7)
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v2] - 1155468)]));
}

