// KeyValue__12CMultiSourceP14KeyValueData_s @0x95930 size=274
typedef struct st_495930_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_495930_0;

typedef struct st_495930_1 {
    char padding_0[488];
    unsigned int field_1e8;
} st_495930_1;

typedef struct st_495930_2 {
    unsigned int field_0;
} st_495930_2;

extern st_495930_2 *g_6168cc;

st_495930_1 * KeyValue__12CMultiSourceP14KeyValueData_s(st_495930_1 *a0, st_495930_0 *a1)
{
    st_495930_1 *v0;  // eax
    st_495930_1 *v1;  // eax

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
                            v1 = sub_488af0(a1->field_4, "globalstate");
                            if (v1)
                            {
                                a1->field_c = 0;
                                return v1;
                            }
                            v0 = a0;
                            v0->field_1e8 = g_6168cc(a1->field_8);
                        }
                    }
                }
            }
        }
    }
    a1->field_c = 1;
    return v0;
}

