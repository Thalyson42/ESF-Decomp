// KeyValue__12CBaseDMStartP14KeyValueData_s @0x1220a0 size=112
typedef struct st_5220a0_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_5220a0_0;

typedef struct st_5220a0_1 {
    char padding_0[464];
    unsigned int field_1d0;
} st_5220a0_1;

typedef struct st_5220a0_2 {
    unsigned int field_0;
} st_5220a0_2;

extern st_5220a0_2 *g_6168cc;

st_5220a0_1 * KeyValue__12CBaseDMStartP14KeyValueData_s(st_5220a0_1 **a0, st_5220a0_0 *a1)
{
    st_5220a0_1 *v0;  // eax
    unsigned int v1;  // eax
    st_5220a0_1 *v2;  // eax

    v0 = sub_488af0(a1->field_4, "master");
    if (v0)
    {
        a1->field_c = 0;
        return v0;
    }
    v1 = g_6168cc(a1->field_8);
    v2 = *a0;
    v2->field_1d0 = v1;
    a1->field_c = 1;
    return v2;
}

