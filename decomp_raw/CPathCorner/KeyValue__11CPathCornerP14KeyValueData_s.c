// KeyValue__11CPathCornerP14KeyValueData_s @0xe6a50 size=320
typedef struct st_4e6a50_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4e6a50_0;

typedef struct st_4e6a50_1 {
    char padding_0[100];
    float field_64;
} st_4e6a50_1;

st_4e6a50_1 * KeyValue__11CPathCornerP14KeyValueData_s(st_4e6a50_1 *a0, st_4e6a50_0 *a1)
{
    st_4e6a50_1 *v0;  // eax
    double v1;  // mm7

    v0 = sub_488af0(a1->field_4, "wait");
    if (v0)
    {
        a1->field_c = 0;
        return v0;
    }
    sub_487fc0(a1->field_8, 0, 0);
    a0->field_64 = (float)v1;
    a1->field_c = 1;
    return a0;
}

