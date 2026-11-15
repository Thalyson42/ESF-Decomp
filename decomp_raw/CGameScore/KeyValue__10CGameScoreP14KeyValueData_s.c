// KeyValue__10CGameScoreP14KeyValueData_s @0xcf0b0 size=332
typedef struct st_4cf0b0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4cf0b0_0;

typedef struct st_4cf0b0_1 {
    char padding_0[356];
    float field_164;
} st_4cf0b0_1;

typedef struct st_4cf0b0_2 {
    char padding_0[356];
    unsigned int field_164;
} st_4cf0b0_2;

st_4cf0b0_2 * KeyValue__10CGameScoreP14KeyValueData_s(st_4cf0b0_1 **a0, st_4cf0b0_0 *a1)
{
    int v1;  // eax
    st_4cf0b0_1 *v2;  // eax
    int v0;  // [bp-0x24]

    if (sub_488af0(a1->field_4, "points"))
        return sub_489590(a0, a1);
    v1 = sub_48b500(a1->field_8, 0, 10, 0);
    v2 = *a0;
    v0 = v1;
    v2->field_164 = (float)v0;
    a1->field_c = 1;
    return v2;
}

