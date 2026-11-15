// KeyValue__16CFuncTrackChangeP14KeyValueData_s @0xecdc0 size=244
typedef struct st_4ecdc0_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_4ecdc0_0;

typedef struct st_4ecdc0_1 {
    unsigned int field_0;
} st_4ecdc0_1;

extern st_4ecdc0_1 *g_6168cc;

unsigned int KeyValue__16CFuncTrackChangeP14KeyValueData_s(unsigned int *a0, st_4ecdc0_0 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    if (!sub_488af0(a1->field_4, "train"))
    {
        v0 = g_6168cc(a1->field_8);
        a0[78] = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "toptrack"))
    {
        v1 = g_6168cc(a1->field_8);
        a0[76] = v1;
        a1->field_c = 1;
        return v1;
    }
    else if (!sub_488af0(a1->field_4, "bottomtrack"))
    {
        v2 = g_6168cc(a1->field_8);
        a0[77] = v2;
        a1->field_c = 1;
        return v2;
    }
    else
    {
        return sub_48d840(a0, a1);
    }
}

