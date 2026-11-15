// KeyValue__6CShakeP14KeyValueData_s @0xb5980 size=1187
typedef struct st_4b5980_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4b5980_0;

typedef struct st_4b5980_1 {
    char padding_0[324];
    float field_144;
    char padding_148[144];
    float field_1d8;
    float field_1dc;
    float field_1e0;
} st_4b5980_1;

unsigned int * KeyValue__6CShakeP14KeyValueData_s(st_4b5980_1 **a0, st_4b5980_0 *a1)
{
    float *v0;  // eax
    double v1;  // mm7
    float *v2;  // eax
    double v3;  // mm7
    float *v4;  // eax
    double v5;  // mm7
    unsigned int *v6;  // eax
    float *v7;  // eax
    double v8;  // mm7

    if (!strcmp@GLIBC_2.0(a1->field_4, "amplitude"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        v0 = *a0;
        v0[81] = (float)v1;
        a1->field_c = 1;
        return v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "frequency"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        v2 = *a0;
        v2[0x77] = (float)v3;
        a1->field_c = 1;
        return v2;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "duration"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        v4 = *a0;
        v4[118] = (float)v5;
        a1->field_c = 1;
        return v4;
    }
    else
    {
        v6 = strcmp@GLIBC_2.0(a1->field_4, "radius");
        if (v6)
        {
            a1->field_c = 0;
            return v6;
        }
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        v7 = *a0;
        v7[120] = (float)v8;
        a1->field_c = 1;
        return v7;
    }
}

