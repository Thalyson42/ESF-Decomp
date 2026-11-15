// UTIL_FindEntityGeneric__FPCcR6Vectorf @0x131cf0 size=225
typedef struct st_531cf0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_531cf0_0;

st_531cf0_0 ** UTIL_FindEntityGeneric__FPCcR6Vectorf(int a0, float *a1, float a2)
{
    st_531cf0_0 **v5;  // edi
    st_531cf0_0 **v6;  // esi
    double v7;  // mm7
    unsigned int *v8;  // edx
    float v9;  // 112
    float v10;  // 112
    float v11;  // 112
    double v12;  // mm7
    double v13;  // mm6
    float v0;  // [bp-0x48]
    float v1;  // [bp-0x38]
    float v2;  // [bp-0x24]
    float v3;  // [bp-0x20]
    float v4;  // [bp-0x1c]

    v5 = sub_48cce0(0, a0);
    if (v5)
        return v5;
    v6 = NULL;
    v7 = a2 * a2;
    while (1)
    {
        v0 = (float)v7;
        while (1)
        {
            v6 = sub_487e80(v6, a0);
            if (!v6)
                return v5;
            v8 = &*v6->field_8;
            v9 = *v6->field_8 - *a1;
            v2 = v9;
            v10 = *(float *)&v8[1] - a1[1];
            v3 = v10;
            v11 = *(float *)&v8[2] - a1[2];
            v4 = v11;
            v12 = v9 * v9 + v10 * v10 + v11 * v11;
            v13 = sqrt(v12);
            if (isnan(v13))
                sub_487dc0(*(unsigned int *)&v12);
            else
                v12 = v13;
            v1 = (float)v12;
            v7 = v1 * v1;
            if (v7 < v0)
                break;
        }
        v5 = v6;
    }
}

