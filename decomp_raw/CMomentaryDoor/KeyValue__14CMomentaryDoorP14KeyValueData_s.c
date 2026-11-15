// KeyValue__14CMomentaryDoorP14KeyValueData_s @0xad760 size=408
typedef struct st_4ad760_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4ad760_0;

typedef struct st_4ad760_1 {
    char padding_0[260];
    char field_104;
} st_4ad760_1;

int KeyValue__14CMomentaryDoorP14KeyValueData_s(st_4ad760_1 *a0, st_4ad760_0 *a1)
{
    double v2;  // mm7
    int v3;  // eax
    unsigned short v0;  // [bp-0x8]
    unsigned short v1;  // [bp-0x6]

    if (!sub_488af0(a1->field_4, "movesnd"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v1 = __fnstcw();
        v0 = v1 | 0xc00;
        v3 = (int)v2;
        a0->field_104 = v3;
    }
    else
    {
        v3 = sub_488af0(a1->field_4, "stopsnd");
        if (v3)
        {
            v3 = sub_488af0(a1->field_4, "healthvalue");
            if (v3)
                return sub_48ba40(a0, a1);
        }
    }
    a1->field_c = 1;
    return v3;
}

