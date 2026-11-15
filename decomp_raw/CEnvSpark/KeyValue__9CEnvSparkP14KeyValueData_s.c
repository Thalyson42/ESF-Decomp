// KeyValue__9CEnvSparkP14KeyValueData_s @0x98a60 size=484
typedef struct st_498a60_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_498a60_0;

typedef struct st_498a60_1 {
    char padding_0[100];
    float field_64;
} st_498a60_1;

st_498a60_1 * KeyValue__9CEnvSparkP14KeyValueData_s(st_498a60_1 *a0, st_498a60_0 *a1)
{
    st_498a60_1 *v0;  // eax
    double v1;  // mm7

    if (!sub_488af0(a1->field_4, "MaxDelay"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v0 = a0;
        v0->field_64 = (float)v1;
    }
    else
    {
        v0 = sub_488af0(a1->field_4, "style");
        if (v0)
        {
            v0 = sub_488af0(a1->field_4, "height");
            if (v0)
            {
                v0 = sub_488af0(a1->field_4, "killtarget");
                if (v0)
                {
                    v0 = sub_488af0(a1->field_4, "value1");
                    if (v0)
                    {
                        v0 = sub_488af0(a1->field_4, "value2");
                        if (v0)
                        {
                            v0 = sub_488af0(a1->field_4, "value3");
                            if (v0)
                            {
                                a1->field_c = 0;
                                return v0;
                            }
                        }
                    }
                }
            }
        }
    }
    a1->field_c = 1;
    return v0;
}

