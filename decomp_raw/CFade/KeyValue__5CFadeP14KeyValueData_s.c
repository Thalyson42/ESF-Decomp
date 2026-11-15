// KeyValue__5CFadeP14KeyValueData_s @0xb5f00 size=611
typedef struct st_4b5f00_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4b5f00_0;

typedef struct st_4b5f00_1 {
    char padding_0[472];
    float field_1d8;
    float field_1dc;
} st_4b5f00_1;

unsigned int * KeyValue__5CFadeP14KeyValueData_s(st_4b5f00_1 **a0, st_4b5f00_0 *a1)
{
    float *v0;  // eax
    double v1;  // mm7
    unsigned int *v2;  // eax
    float *v3;  // eax
    double v4;  // mm7

    if (!sub_488af0(a1->field_4, "duration"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v0 = *a0;
        v0[118] = (float)v1;
        a1->field_c = 1;
        return v0;
    }
    v2 = sub_488af0(a1->field_4, "holdtime");
    if (v2)
    {
        a1->field_c = 0;
        return v2;
    }
    sub_487fc0(a1->field_8, 0, 0);
    v3 = *a0;
    v3[0x77] = (float)v4;
    a1->field_c = 1;
    return v3;
}

