// RampPitchVol__13CFuncRotatingi @0x92230 size=345
typedef struct st_492230_0 {
    char padding_0[68];
    float field_44;
    float field_48;
    float field_4c;
    char padding_50[12];
    float field_5c;
    float field_60;
    float field_64;
    char padding_68[396];
    unsigned int field_1f4;
    float field_1f8;
    char padding_1fc[12];
    int field_208;
} st_492230_0;

typedef struct st_492230_1 {
    struct st_492230_0 *field_0;
    char padding_4[100];
    float field_68;
    float field_6c;
} st_492230_1;

typedef struct st_492230_2 {
    char padding_0[152];
    unsigned int field_98;
} st_492230_2;

extern st_492230_2 *gpGlobals;

int RampPitchVol__13CFuncRotatingi(st_492230_1 *a0)
{
    unsigned int *v8;  // edx
    double v9;  // mm7
    int v10;  // eax
    double v11;  // mm6
    int v12;  // eax
    int v0;  // [bp-0x2c]
    int v1;  // [bp-0x2c]
    int v2;  // [bp-0x2c]
    unsigned short v3;  // [bp-0x28]
    unsigned short v4;  // [bp-0x26]
    float v5;  // [bp-0x24]
    float v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]

    v8 = &a0->field_0->field_5c;
    v9 = a0->field_0->field_5c;
    v5 = (float)v9;
    v6 = *(float *)&v8[1];
    v7 = *(float *)&v8[2];
    if (v9 == 0.0)
    {
        v9 = v6;
        if (v9 == 0.0)
            v9 = v7;
    }
    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v0 = (int)v9;
    v10 = v0;
    if (v10 < 0)
        v10 = -v10;
    v2 = v10;
    v11 = a0->field_0->field_44;
    if (v11 == 0.0)
    {
        v11 = a0->field_0->field_48;
        if (v11 == 0.0)
            v11 = a0->field_0->field_4c;
    }
    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v0 = (int)(v11 * a0->field_0->field_1f8);
    v12 = v0;
    if (v12 < 0)
        v12 = -v12;
    v0 = v12;
    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v1 = (int)((double)v2 / (double)v0 * 70.0 + 30.0);
    if (v1 == 100)
        v1 = 99;
    return sub_489390(a0->field_0->field_208, 6, a0->field_0->field_1f4 + gpGlobals->field_98, (float)((double)v2 / (double)v0 * a0->field_6c), a0->field_68, 192, v1);
}

