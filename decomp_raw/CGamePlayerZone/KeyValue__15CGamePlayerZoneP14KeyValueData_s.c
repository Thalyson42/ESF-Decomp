// KeyValue__15CGamePlayerZoneP14KeyValueData_s @0xd0510 size=308
typedef struct st_4d0510_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_4d0510_0;

typedef struct st_4d0510_1 {
    unsigned int field_0;
} st_4d0510_1;

extern st_4d0510_1 *g_6168cc;

unsigned int KeyValue__15CGamePlayerZoneP14KeyValueData_s(unsigned int *a0, st_4d0510_0 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    if (!sub_488af0(a1->field_4, "intarget"))
    {
        v0 = g_6168cc(a1->field_8);
        a0[26] = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "outtarget"))
    {
        v1 = g_6168cc(a1->field_8);
        a0[27] = v1;
        a1->field_c = 1;
        return v1;
    }
    else if (!sub_488af0(a1->field_4, "incount"))
    {
        v2 = g_6168cc(a1->field_8);
        a0[28] = v2;
        a1->field_c = 1;
        return v2;
    }
    else if (!sub_488af0(a1->field_4, "outcount"))
    {
        v3 = g_6168cc(a1->field_8);
        a0[29] = v3;
        a1->field_c = 1;
        return v3;
    }
    else
    {
        return sub_489590(a0, a1);
    }
}

