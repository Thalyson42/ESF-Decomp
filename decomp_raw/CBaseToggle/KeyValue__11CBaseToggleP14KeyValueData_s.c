// KeyValue__11CBaseToggleP14KeyValueData_s @0x122bb0 size=964
typedef struct st_522bb0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_522bb0_0;

typedef struct st_522bb0_1 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[108];
    unsigned int field_100;
} st_522bb0_1;

typedef struct st_522bb0_2 {
    unsigned int field_0;
} st_522bb0_2;

extern st_522bb0_2 *g_6168cc;

unsigned int KeyValue__11CBaseToggleP14KeyValueData_s(st_522bb0_1 *a0, st_522bb0_0 *a1)
{
    unsigned int v0;  // eax
    double v1;  // mm7
    unsigned int v2;  // eax
    double v3;  // mm7
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    double v6;  // mm7

    if (!sub_488af0(a1->field_4, "lip"))
    {
        v0 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_90 = (float)v1;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "wait"))
    {
        v2 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_8c = (float)v3;
        a1->field_c = 1;
        return v2;
    }
    else if (!sub_488af0(a1->field_4, "master"))
    {
        v4 = g_6168cc(a1->field_8);
        a0->field_100 = v4;
        a1->field_c = 1;
        return v4;
    }
    else if (!sub_488af0(a1->field_4, "distance"))
    {
        v5 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_88 = (float)v6;
        a1->field_c = 1;
        return v5;
    }
    else
    {
        return sub_48b920(a0, a1);
    }
}

