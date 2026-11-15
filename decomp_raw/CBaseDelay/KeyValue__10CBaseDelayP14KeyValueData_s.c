// KeyValue__10CBaseDelayP14KeyValueData_s @0x122330 size=385
typedef struct st_522330_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_522330_0;

typedef struct st_522330_1 {
    char padding_0[100];
    float field_64;
    unsigned int field_68;
} st_522330_1;

typedef struct st_522330_2 {
    unsigned int field_0;
} st_522330_2;

extern st_522330_2 *g_6168cc;

unsigned int KeyValue__10CBaseDelayP14KeyValueData_s(st_522330_1 *a0, st_522330_0 *a1)
{
    unsigned int v0;  // eax
    double v1;  // mm7
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    if (!sub_488af0(a1->field_4, "delay"))
    {
        v0 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_64 = (float)v1;
        a1->field_c = 1;
        return v0;
    }
    v2 = sub_488af0(a1->field_4, "killtarget");
    if (v2)
    {
        a1->field_c = 0;
        return v2;
    }
    v3 = g_6168cc(a1->field_8);
    a0->field_68 = v3;
    a1->field_c = 1;
    return v3;
}

