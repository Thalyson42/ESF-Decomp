// KeyValue__13CMultiManagerP14KeyValueData_s @0x12b140 size=686
typedef struct st_52b140_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_52b140_0;

typedef struct st_52b140_1 {
    char padding_0[140];
    float field_8c;
    char padding_90[116];
    int field_104;
} st_52b140_1;

typedef struct st_52b140_2 {
    unsigned int field_0;
} st_52b140_2;

extern st_52b140_2 *g_6168cc;

st_52b140_0 * KeyValue__13CMultiManagerP14KeyValueData_s(st_52b140_1 *a0, st_52b140_0 *a1)
{
    st_52b140_0 *v1;  // eax
    double v2;  // mm7
    unsigned int v3;  // eax
    char v0;  // [bp-0x88]

    v1 = sub_488af0(a1->field_4, "wait");
    if (!v1)
    {
        sub_487fc0(a1->field_8, 0, 0);
        a0->field_8c = (float)v2;
    }
    else if (a0->field_104 <= 15)
    {
        sub_48c9e0(a1->field_4, &v0);
        v3 = g_6168cc(&v0);
        *(unsigned int *)&a0[1].padding_0[8 + 4 * a0->field_104] = v3;
        sub_487fc0(a1->field_8, 0, 0);
        *(float *)&a0[1].padding_0[72 + 4 * a0->field_104] = (float)v2;
        a0->field_104 = a0->field_104 + 1;
    }
    else
    {
        return v1;
    }
    a1->field_c = 1;
    return a1;
}

