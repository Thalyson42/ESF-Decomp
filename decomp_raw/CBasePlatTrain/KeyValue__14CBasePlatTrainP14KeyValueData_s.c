// KeyValue__14CBasePlatTrainP14KeyValueData_s @0xe8020 size=2116
typedef struct st_4e8020_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4e8020_0;

typedef struct st_4e8020_1 {
    char padding_0[140];
    float field_8c;
    float field_90;
    char padding_94[60];
    float field_d0;
    char padding_d4[28];
    float field_f0;
    char padding_f4[16];
    char field_104;
    char field_105;
    char padding_106[2];
    float field_108;
} st_4e8020_1;

int KeyValue__14CBasePlatTrainP14KeyValueData_s(st_4e8020_1 *a0, st_4e8020_0 *a1)
{
    int v3;  // eax
    double v4;  // mm7
    int v13;  // eax
    double v14;  // mm7
    int v5;  // eax
    double v6;  // mm7
    int v7;  // eax
    double v8;  // mm7
    int v9;  // eax
    double v10;  // mm7
    double v11;  // mm7
    double v12;  // mm7
    int v0;  // [bp-0x10]
    unsigned short v1;  // [bp-0xc]
    unsigned short v2;  // [bp-0xa]

    if (!sub_488af0(a1->field_4, "lip"))
    {
        v3 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_90 = (float)v4;
        a1->field_c = 1;
        return v3;
    }
    else if (!sub_488af0(a1->field_4, "wait"))
    {
        v5 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_8c = (float)v6;
        a1->field_c = 1;
        return v5;
    }
    else if (!sub_488af0(a1->field_4, "height"))
    {
        v7 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_d0 = (float)v8;
        a1->field_c = 1;
        return v7;
    }
    else if (!sub_488af0(a1->field_4, "rotation"))
    {
        v9 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_f0 = (float)v10;
        a1->field_c = 1;
        return v9;
    }
    else if (!sub_488af0(a1->field_4, "movesnd"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v11;
        a0->field_104 = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "stopsnd"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v12;
        a0->field_105 = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "volume"))
    {
        v13 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_108 = (float)v14;
        a1->field_c = 1;
        return v13;
    }
    else
    {
        return sub_48ba40(a0, a1);
    }
}

