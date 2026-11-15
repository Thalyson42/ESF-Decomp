// KeyValue__9CPendulumP14KeyValueData_s @0x92b40 size=612
typedef struct st_492b40_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_492b40_0;

double KeyValue__9CPendulumP14KeyValueData_s(float *a0, st_492b40_0 *a1)
{
    double v0;  // mm7
    double v1;  // mm7
    double v2;  // mm7

    if (!strcmp@GLIBC_2.0(a1->field_4, "distance"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0[26] = (float)v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "damp"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0[28] = (float)(v1 * 0.001);
        a1->field_c = 1;
        return v1 * 0.001;
    }
    else
    {
        a1->field_c = 0;
        return v2;
    }
}

