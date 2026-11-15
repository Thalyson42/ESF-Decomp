// KeyValue__19CMomentaryRotButtonP14KeyValueData_s @0x97eb0 size=612
typedef struct st_497eb0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_497eb0_0;

typedef struct st_497eb0_1 {
    char padding_0[268];
    float field_10c;
    char padding_110[24];
    unsigned int field_128;
} st_497eb0_1;

unsigned int KeyValue__19CMomentaryRotButtonP14KeyValueData_s(st_497eb0_1 *a0, st_497eb0_0 *a1)
{
    unsigned int v0;  // eax
    double v1;  // mm7
    unsigned int v2;  // eax

    if (!sub_488af0(a1->field_4, "returnspeed"))
    {
        v0 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_10c = (float)v1;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "sounds"))
    {
        v2 = sub_48b500(a1->field_8, 0, 10, 0);
        a0->field_128 = v2;
        a1->field_c = 1;
        return v2;
    }
    else
    {
        return sub_48ba40(a0, a1);
    }
}

