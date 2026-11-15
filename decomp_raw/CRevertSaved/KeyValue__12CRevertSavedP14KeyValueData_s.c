// KeyValue__12CRevertSavedP14KeyValueData_s @0xfe480 size=1185
typedef struct st_4fe480_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4fe480_0;

typedef struct st_4fe480_2 {
    char padding_0[472];
    float field_1d8;
    float field_1dc;
} st_4fe480_2;

typedef struct st_4fe480_1 {
    struct st_4fe480_2 *field_0;
    char padding_4[96];
    float field_64;
    float field_68;
} st_4fe480_1;

unsigned int * KeyValue__12CRevertSavedP14KeyValueData_s(st_4fe480_1 *a0, st_4fe480_0 *a1)
{
    float *v0;  // eax
    double v1;  // mm7
    float *v2;  // eax
    double v3;  // mm7
    unsigned int *v4;  // eax
    double v5;  // mm7
    unsigned int *v6;  // eax
    unsigned int *v7;  // eax
    double v8;  // mm7

    if (!sub_488af0(a1->field_4, "duration"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v0 = a0->field_0;
        v0[118] = (float)v1;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "holdtime"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = a0->field_0;
        v2[0x77] = (float)v3;
        a1->field_c = 1;
        return v2;
    }
    else if (!sub_488af0(a1->field_4, "messagetime"))
    {
        v4 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_64 = (float)v5;
        a1->field_c = 1;
        return v4;
    }
    else
    {
        v6 = sub_488af0(a1->field_4, "loadtime");
        if (v6)
        {
            a1->field_c = 0;
            return v6;
        }
        v7 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_68 = (float)v8;
        a1->field_c = 1;
        return v7;
    }
}

