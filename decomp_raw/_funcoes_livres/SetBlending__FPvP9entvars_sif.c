// SetBlending__FPvP9entvars_sif @0x8f6e0 size=404
typedef struct st_48f6e0_2 {
    float field_0;
    char padding_4[124];
    unsigned int field_80;
} st_48f6e0_2;

typedef struct st_48f6e0_0 {
    char padding_0[168];
    unsigned int field_a8;
} st_48f6e0_0;

typedef struct st_48f6e0_1 {
    char padding_0[296];
    unsigned int field_128;
} st_48f6e0_1;

double SetBlending__FPvP9entvars_sif(st_48f6e0_0 *a0, st_48f6e0_1 *a1, unsigned int a2, float a3)
{
    double iter;  // mm7
    st_48f6e0_2 *v6;  // ecx
    unsigned int v7;  // edx
    float *v8;  // edx
    st_48f6e0_2 *v9;  // esi
    st_48f6e0_2 *v10;  // edx
    float *v0;  // [bp-0x20]
    int v1;  // [bp-0x1c]
    unsigned short v2;  // [bp-0x18]
    unsigned short v3;  // [bp-0x16]
    double v4;  // [bp-0x8]

    iter = a3;
    if (!a0)
        return iter;
    v6 = &a0->padding_0[a0->field_a8 + 176 * a1->field_128];
    if (!(&v6->field_80)[a2])
        return iter;
    v7 = a2 * 4;
    if (*(v7 + (char *)v6 + 128) & 56)
    {
        if (*(float *)&v6[1].padding_4[8 + v7] < *(float *)&v6[1].padding_4[v7])
            iter = -iter;
        v8 = a2 * 4;
        v0 = v8;
        v9 = v6[1].padding_4;
        v10 = &v6[1].padding_4[8];
        if (*(float *)(v8 + v9) + 359.0 >= *(float *)(v0 + v10))
        {
            if ((*(float *)(v0 + v9) + *(float *)(v0 + v10)) * 0.5 + 180.0 < iter)
                iter -= 360.0;
            if ((*(float *)&v6[1].padding_4[4 * a2] + *(float *)&v6[1].padding_4[8 + 4 * a2]) * 0.5 - 180.0 > iter)
                iter += 360.0;
        }
    }
    v3 = __fnstcw();
    v2 = v3 | 0xc00;
    v1 = (int)((iter - *(float *)&v6[1].padding_4[4 * a2]) * 255.0 / (*(float *)&v6[1].padding_4[8 + 4 * a2] - *(float *)&v6[1].padding_4[4 * a2]));
    if (v1 < NULL)
        v1 = 0;
    if (v1 > 0xff)
        v1 = 0xff;
    a1[1].padding_0[20 + a2] = v1;
    v4 = (float)((double)v1 * 0.00392156862745098 * (*(float *)&v6[1].padding_4[8 + 4 * a2] - *(float *)&v6[1].padding_4[4 * a2]) + *(float *)&v6[1].padding_4[4 * a2]);
    return v4;
}

