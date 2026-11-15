// GetMaxSpeed__11CBasePlayer @0xf5f60 size=131
typedef struct st_4f5f60_1 {
    struct st_4f5f60_0 *field_0;
    char padding_4[800];
    unsigned int field_324;
    char padding_328[4];
    unsigned int field_32c;
    char padding_330[472];
    unsigned int field_508;
    char padding_50c[576];
    int field_74c;
    char padding_750[4];
    float field_754;
} st_4f5f60_1;

typedef struct st_4f5f60_0 {
    char padding_0[264];
    unsigned int field_108;
} st_4f5f60_0;

int GetMaxSpeed__11CBasePlayer(st_4f5f60_1 *a0)
{
    double v3;  // mm6
    unsigned short v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0xa]
    int v2;  // [bp-0x8], Other Possible Types: unsigned int

    if (a0->field_0->field_108 == 15 && a0->field_32c)
        return a0->field_74c;
    if (a0->field_508)
        return a0->field_74c * 5;
    if (a0->field_324)
    {
        v2 = a0->field_74c * 2;
        v3 = (double)(int)v2;
    }
    else
    {
        v3 = (double)a0->field_74c;
    }
    v1 = __fnstcw();
    v0 = v1 | 0xc00;
    v2 = (int)(a0->field_754 * v3);
    return v2;
}

