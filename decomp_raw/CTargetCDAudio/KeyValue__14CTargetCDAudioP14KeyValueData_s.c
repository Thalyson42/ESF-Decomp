// KeyValue__14CTargetCDAudioP14KeyValueData_s @0x12c270 size=325
typedef struct st_52c270_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_52c270_0;

typedef struct st_52c270_2 {
    char padding_0[324];
    float field_144;
} st_52c270_2;

typedef struct st_52c270_1 {
    char padding_0[324];
    unsigned int field_144;
} st_52c270_1;

st_52c270_1 * KeyValue__14CTargetCDAudioP14KeyValueData_s(st_52c270_2 **a0, st_52c270_0 *a1)
{
    st_52c270_1 *v0;  // eax
    st_52c270_2 *v1;  // eax
    double v2;  // mm7

    v0 = sub_488af0(a1->field_4, "radius");
    if (v0)
    {
        a1->field_c = 0;
        return v0;
    }
    sub_487fc0(a1->field_8, 0, 0);
    v1 = *a0;
    v1->field_144 = (float)v2;
    a1->field_c = 1;
    return v1;
}

