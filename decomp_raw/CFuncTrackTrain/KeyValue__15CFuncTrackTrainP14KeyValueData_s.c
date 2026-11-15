// KeyValue__15CFuncTrackTrainP14KeyValueData_s @0xea7a0 size=1793
typedef struct st_4ea7a0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4ea7a0_0;

typedef struct st_4ea7a0_1 {
    char padding_0[104];
    float field_68;
    float field_6c;
    char padding_70[8];
    float field_78;
    char padding_7c[28];
    unsigned int field_98;
    float field_9c;
    float field_a0;
} st_4ea7a0_1;

double KeyValue__15CFuncTrackTrainP14KeyValueData_s(st_4ea7a0_1 *a0, st_4ea7a0_0 *a1)
{
    double v1;  // mm7
    double v2;  // mm7
    double v3;  // mm7
    double v4;  // mm7
    double v5;  // mm7
    double v6;  // mm7
    double v7;  // mm7
    int v0;  // [bp-0xc]

    if (!strcmp@GLIBC_2.0(a1->field_4, "wheels"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_68 = (float)v1;
        a1->field_c = 1;
        return v1;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "height"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_6c = (float)v2;
        a1->field_c = 1;
        return v2;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "startspeed"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_78 = (float)v3;
        a1->field_c = 1;
        return v3;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "sounds"))
    {
        a0->field_98 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a1->field_c = 1;
        return v4;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "volume"))
    {
        v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_9c = (float)v0;
        v5 = 0.1 * a0->field_9c;
        a0->field_9c = (float)v5;
        a1->field_c = 1;
        return v5;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "bank"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_a0 = (float)v6;
        a1->field_c = 1;
        return v6;
    }
    else
    {
        a1->field_c = 0;
        return v7;
    }
}

