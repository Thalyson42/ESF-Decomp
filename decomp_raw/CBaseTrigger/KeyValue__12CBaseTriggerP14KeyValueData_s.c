// KeyValue__12CBaseTriggerP14KeyValueData_s @0x12bab0 size=932
typedef struct st_52bab0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_52bab0_0;

typedef struct st_52bab0_2 {
    struct st_52bab0_1 *field_0;
    char padding_4[200];
    int field_cc;
    char padding_d0[44];
    struct st_52bab0_1 *field_fc;
} st_52bab0_2;

typedef struct st_52bab0_1 {
    char padding_0[480];
    float field_1e0;
} st_52bab0_1;

typedef struct st_52bab0_3 {
    char padding_0[480];
    unsigned int field_1e0;
} st_52bab0_3;

st_52bab0_3 * KeyValue__12CBaseTriggerP14KeyValueData_s(st_52bab0_2 *a0, st_52bab0_0 *a1)
{
    st_52bab0_1 *v2;  // eax
    double v3;  // mm7
    double v4;  // mm7
    st_52bab0_3 *v5;  // eax
    unsigned short v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0xa]

    if (!sub_488af0(a1->field_4, "damage"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = a0->field_0;
        v2->field_1e0 = (float)v3;
        a1->field_c = 1;
        return v2;
    }
    else if (!sub_488af0(a1->field_4, "count"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v1 = __fnstcw();
        v0 = v1 | 0xc00;
        a0->field_cc = (int)v4;
        a1->field_c = 1;
        return (int)v4;
    }
    else if (!sub_488af0(a1->field_4, "damagetype"))
    {
        v5 = sub_48b500(a1->field_8, 0, 10, 0);
        a0->field_fc = v5;
        a1->field_c = 1;
        return v5;
    }
    else
    {
        return sub_48ba40(a0, a1);
    }
}

