// KeyValue__12CCineMonsterP14KeyValueData_s @0x114420 size=1396
typedef struct st_514420_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_514420_0;

typedef struct st_514420_2 {
    char padding_0[680];
    unsigned int field_2a8;
    unsigned int field_2ac;
    unsigned int field_2b0;
    unsigned int field_2b4;
    unsigned int field_2b8;
    float field_2bc;
    float field_2c0;
} st_514420_2;

typedef struct st_514420_1 {
    unsigned int field_0;
} st_514420_1;

extern st_514420_1 *g_6168cc;

unsigned int KeyValue__12CCineMonsterP14KeyValueData_s(st_514420_2 *a0, st_514420_0 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    double v5;  // mm7
    unsigned int v6;  // eax
    double v7;  // mm7
    unsigned int v8;  // eax

    if (!sub_488af0(a1->field_4, "m_iszIdle"))
    {
        v0 = g_6168cc(a1->field_8);
        a0->field_2a8 = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "m_iszPlay"))
    {
        v1 = g_6168cc(a1->field_8);
        a0->field_2ac = v1;
        a1->field_c = 1;
        return v1;
    }
    else if (!sub_488af0(a1->field_4, "m_iszEntity"))
    {
        v2 = g_6168cc(a1->field_8);
        a0->field_2b0 = v2;
        a1->field_c = 1;
        return v2;
    }
    else if (!sub_488af0(a1->field_4, "m_fMoveTo"))
    {
        v3 = sub_48b500(a1->field_8, 0, 10, 0);
        a0->field_2b4 = v3;
        a1->field_c = 1;
        return v3;
    }
    else if (!sub_488af0(a1->field_4, "m_flRepeat"))
    {
        v4 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_2c0 = (float)v5;
        a1->field_c = 1;
        return v4;
    }
    else if (!sub_488af0(a1->field_4, "m_flRadius"))
    {
        v6 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_2bc = (float)v7;
        a1->field_c = 1;
        return v6;
    }
    else if (!sub_488af0(a1->field_4, "m_iFinishSchedule"))
    {
        v8 = sub_48b500(a1->field_8, 0, 10, 0);
        a0->field_2b8 = v8;
        a1->field_c = 1;
        return v8;
    }
    else
    {
        return sub_488d50(a0, a1);
    }
}

