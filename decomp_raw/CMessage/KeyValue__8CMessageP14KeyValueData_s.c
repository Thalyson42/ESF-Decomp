// KeyValue__8CMessageP14KeyValueData_s @0xb63f0 size=691
typedef struct st_4b63f0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4b63f0_0;

typedef struct st_4b63f0_2 {
    char padding_0[324];
    float field_144;
    char padding_148[60];
    unsigned int field_184;
    char padding_188[96];
    unsigned int field_1e8;
} st_4b63f0_2;

typedef struct st_4b63f0_1 {
    unsigned int field_0;
} st_4b63f0_1;

extern st_4b63f0_1 *g_6168cc;

double KeyValue__8CMessageP14KeyValueData_s(st_4b63f0_2 **a0, st_4b63f0_0 *a1)
{
    unsigned int v0;  // eax
    double v1;  // mm7
    double v2;  // mm7
    unsigned int v3;  // eax
    double v4;  // mm7
    double v5;  // mm7

    if (!sub_488af0(a1->field_4, "messagesound"))
    {
        v0 = g_6168cc(a1->field_8);
        *a0->field_1e8 = v0;
        a1->field_c = 1;
        return v1;
    }
    else if (!sub_488af0(a1->field_4, "messagevolume"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        *a0->field_144 = (float)(v2 * 0.1);
        a1->field_c = 1;
        return v2 * 0.1;
    }
    else if (!sub_488af0(a1->field_4, "messageattenuation"))
    {
        v3 = sub_48b500(a1->field_8, 0, 10, 0);
        *a0->field_184 = v3;
        a1->field_c = 1;
        return v4;
    }
    else
    {
        a1->field_c = 0;
        return v5;
    }
}

