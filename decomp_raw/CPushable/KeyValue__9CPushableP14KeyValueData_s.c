// KeyValue__9CPushableP14KeyValueData_s @0xc3490 size=952
typedef struct st_4c3490_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_4c3490_0;

typedef struct st_4c3490_1 {
    char padding_0[272];
    int field_110;
} st_4c3490_1;

extern char _GLOBAL_OFFSET_TABLE_;

int KeyValue__9CPushableP14KeyValueData_s(st_4c3490_1 **a0, st_4c3490_0 *a1)
{
    double v12;  // mm7
    unsigned int v0;  // [bp-0x7c]
    char *v1;  // [bp-0x78], Other Possible Types: int
    char *v2;  // [bp-0x74], Other Possible Types: int
    int v3;  // [bp-0x70]
    unsigned short v4;  // [bp-0x48]
    unsigned short v5;  // [bp-0x46]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    float v9;  // [bp-0x38]
    float v10;  // [bp-0x34]
    float v11;  // [bp-0x30]

    if (!sub_488af0(a1->field_4, "size"))
    {
        v3 = 0;
        v2 = 10;
        v1 = 0;
        v0 = a1->field_8;
        sub_48b500(v0, v1, v2, v3);
        a1->field_c = 1;
        if (sub_48b500(v0, v1, v2, v3) > 3)
        {
            v6 = 4.0f;
            v7 = 4.0f;
            v8 = 9.0f;
            v9 = -4.0f;
            v10 = -4.0f;
            v11 = -9.0f;
            v2 = &v6;
            v1 = &v9;
            return sub_48a0d0(*a0);
        }
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * sub_48b500(v0, v1, v2, v3)] - 1377548)]));
    }
    else if (!sub_488af0(a1->field_4, "buoyancy"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        *a0->field_110 = (int)v12;
        a1->field_c = 1;
        return (int)v12;
    }
    else
    {
        return sub_48c000(a0, a1);
    }
}

