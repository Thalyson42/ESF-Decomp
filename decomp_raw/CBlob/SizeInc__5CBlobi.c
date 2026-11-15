// SizeInc__5CBlobi @0xcb3e0 size=251
typedef struct st_4cb3e0_0 {
    char padding_0[480];
    float field_1e0;
} st_4cb3e0_0;

typedef struct st_4cb3e0_1 {
    struct st_4cb3e0_0 *field_0;
    char padding_4[96];
    float field_64;
    unsigned int field_68;
} st_4cb3e0_1;

typedef struct st_4cb3e0_2 {
    float field_0;
} st_4cb3e0_2;

extern st_4cb3e0_2 *gpGlobals;

int SizeInc__5CBlobi(st_4cb3e0_1 *a0, int a1)
{
    char v7;  // dl
    double v8;  // mm7
    float v0;  // [bp-0x48]
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    float v3;  // [bp-0x28]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x8]

    v7 = 0;
    if (a1 < 0)
    {
        if ((int)*(unsigned int *)&a0->field_64 > 0)
        {
            *(unsigned int *)&a0->field_64 = *(unsigned int *)&a0->field_64 + a1;
            v7 = 1;
        }
        else
        {
            return sub_48ae80(a0);
        }
    }
    else
    {
        if (a0->field_64 != 200.0f)
            *(unsigned int *)&a0->field_64 = *(unsigned int *)&a0->field_64 + a1;
    }
    if (a0->field_64 > 200.0f)
        a0->field_64 = 2.8e-43;
    if (20.0f < a0->field_0->field_1e0)
        return sub_48ae80(a0);
    *(float *)&a0->field_68 = *(float *)gpGlobals;
    if (!v7)
        a0->field_0->field_1e0 = (float)(a0->field_0->field_1e0 + 2.0);
    sub_48dca0(a0);
    v3 = a0->field_64;
    v4 = a0->field_64;
    v5 = a0->field_64;
    *(unsigned int *)&v6 = -*(unsigned int *)&a0->field_64;
    v8 = v6;
    v0 = (float)v8;
    v1 = (float)v8;
    v2 = (float)v8;
    return sub_48a0d0(a0->field_0, &v0, &v3);
}

