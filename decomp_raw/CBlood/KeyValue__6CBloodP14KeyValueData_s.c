// KeyValue__6CBloodP14KeyValueData_s @0xb52f0 size=627
typedef struct st_4b52f0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4b52f0_0;

typedef struct st_4b52f0_1 {
    char padding_0[388];
    unsigned int field_184;
    char padding_188[88];
    float field_1e0;
} st_4b52f0_1;

unsigned int * KeyValue__6CBloodP14KeyValueData_s(st_4b52f0_1 **a0, st_4b52f0_0 *a1)
{
    st_4b52f0_1 *v0;  // eax
    unsigned int *v1;  // eax
    double v2;  // mm7

    if (strcmp@GLIBC_2.0(a1->field_4, "color"))
    {
        v1 = strcmp@GLIBC_2.0(a1->field_4, "amount");
        if (v1)
        {
            a1->field_c = 0;
            return v1;
        }
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        v0 = *a0;
        v0->field_1e0 = (float)v2;
    }
    else if (__strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0) == 1)
    {
        v0 = *a0;
        v0->field_184 = 195;
    }
    else
    {
        v0 = *a0;
        v0->field_184 = 247;
    }
    a1->field_c = 1;
    return v0;
}

