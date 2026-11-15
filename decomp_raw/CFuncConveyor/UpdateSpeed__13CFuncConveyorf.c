// UpdateSpeed__13CFuncConveyorf @0x91330 size=146
typedef struct st_491330_0 {
    char padding_0[336];
    unsigned int field_150;
    float field_154;
    float field_158;
} st_491330_0;

unsigned int UpdateSpeed__13CFuncConveyorf(st_491330_0 **a0, float a1)
{
    int v3;  // esi
    unsigned int v0;  // [bp-0x1c], Other Possible Types: int
    unsigned short v1;  // [bp-0x18]
    unsigned short v2;  // [bp-0x16]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)(fabs(a1) * 16.0);
    v3 = v0;
    if (0.0 > a1)
        *a0->field_150 = 0x3f800000;
    else
        *a0->field_150 = 0;
    v0 = v3 >> 8;
    *a0->field_154 = (float)v0;
    v0 = v3 & 0xff;
    *a0->field_158 = (float)(int)v0;
    return v3 & 0xff;
}

