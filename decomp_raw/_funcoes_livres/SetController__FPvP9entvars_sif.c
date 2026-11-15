// SetController__FPvP9entvars_sif @0x8f510 size=453
typedef struct st_48f510_0 {
    char padding_0[4];
    char field_4;
    char padding_5[3];
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[4];
    unsigned int field_14;
    char field_18;
    char padding_19[123];
    int field_94;
    unsigned int field_98;
} st_48f510_0;

double SetController__FPvP9entvars_sif(st_48f510_0 *a0, unsigned int a1, unsigned int a2, float a3)
{
    double iter;  // mm7
    st_48f510_0 *v5;  // ecx
    unsigned int v6;  // edx
    double v7;  // mm7
    int v0;  // [bp-0x1c]
    unsigned short v1;  // [bp-0x18]
    unsigned short v2;  // [bp-0x16]
    double v3;  // [bp-0x8], Other Possible Types: float

    iter = a3;
    if (!a0)
        return iter;
    v5 = &a0->padding_0[a0->field_98];
    v6 = 0;
    while (1)
    {
        if ((int)v6 >= a0->field_94)
            return iter;
        if (v5->field_14 == a2)
            break;
        v6 += 1;
        v5 = &v5->field_18;
    }
    if ((int)v6 >= a0->field_94)
        return iter;
    if (v5->field_4 & 56)
    {
        if (*(float *)&v5->field_c < *(float *)&v5->field_8)
            iter = -iter;
        if (*(float *)&v5->field_8 + 359.0 >= *(float *)&v5->field_c)
        {
            if ((*(float *)&v5->field_8 + *(float *)&v5->field_c) * 0.5 + 180.0 < iter)
                iter -= 360.0;
            if ((*(float *)&v5->field_8 + *(float *)&v5->field_c) * 0.5 - 180.0 > iter)
                iter += 360.0;
        }
        else
        {
            if (iter > 360.0)
            {
                v2 = __fnstcw();
                v1 = v2 | 0xc00;
                v0 = (int)(iter / 360.0);
                v7 = iter - 360.0 * (double)v0;
            }
            else
            {
                if (0.0 <= iter)
                    goto LABEL_48f669;
                v2 = __fnstcw();
                v1 = v2 | 0xc00;
                v0 = (int)(iter / -360.0 + 1.0);
                v7 = iter + (double)v0 * 360.0;
            }
            v3 = (float)v7;
            iter = v3;
        }
    }
LABEL_48f669:
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)((iter - *(float *)&v5->field_8) * 255.0 / (*(float *)&v5->field_c - *(float *)&v5->field_8));
    if (v0 < NULL)
        v0 = 0;
    if (v0 > 0xff)
        v0 = 0xff;
    *(char *)(a2 + a1 + 316) = v0;
    v3 = (float)((double)v0 * 0.00392156862745098 * (*(float *)&v5->field_c - *(float *)&v5->field_8) + *(float *)&v5->field_8);
    return v3;
}

