// KeyValue__13CFuncRotatingP14KeyValueData_s @0x917d0 size=1089
typedef struct st_4917d0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4917d0_0;

typedef struct st_4917d0_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_4917d0_2;

typedef struct st_4917d0_1 {
    struct st_4917d0_2 *field_0;
    char padding_4[96];
    float field_64;
    char padding_68[4];
    unsigned int field_6c;
    char padding_70[4];
    unsigned int field_74;
} st_4917d0_1;

extern float g_vecZero;
extern float g_616790;
extern float g_616794;

unsigned int KeyValue__13CFuncRotatingP14KeyValueData_s(st_4917d0_1 *a0, st_4917d0_0 *a1)
{
    unsigned int v4;  // eax
    double v5;  // mm7
    unsigned int v6;  // ecx
    unsigned int *v7;  // edx
    char v0;  // [bp-0x34]
    float v1;  // [bp-0x34]
    float v2;  // [bp-0x30]
    float v3;  // [bp-0x2c]

    if (!sub_488af0(a1->field_4, "fanfriction"))
    {
        v4 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_64 = (float)(v5 / 100.0);
    }
    else if (!sub_488af0(a1->field_4, "Volume"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        *(float *)&a0->field_6c = (float)(v5 / 10.0);
        if (1.0 < *(float *)&a0->field_6c)
            a0->field_6c = 0x3f800000;
        if (0.0 > *(float *)&a0->field_6c)
            a0->field_6c = 0;
    }
    else
    {
        if (!sub_488af0(a1->field_4, "spawnorigin"))
        {
            sub_48c430(&v0, a1->field_8);
            v6 = 0;
            if (g_vecZero == v1 && g_616790 == v2)
                v6 = g_616794 == v3;
            if (v6)
                return v4;
            v7 = a0->field_0;
            *(float *)&v7[2] = v1;
            *(float *)&v7[3] = v2;
            *(float *)&v7[4] = v3;
            return v4;
        }
        if (sub_488af0(a1->field_4, "sounds"))
        {
            a1->field_c = 0;
            return v4;
        }
        a0->field_74 = sub_48b500(a1->field_8, 0, 10, 0);
    }
    a1->field_c = 1;
    return v4;
}

