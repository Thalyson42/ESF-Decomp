// KeyValue__12CTalkMonsterP14KeyValueData_s @0x127520 size=180
typedef struct st_527520_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_527520_0;

typedef struct st_527520_1 {
    unsigned int field_0;
} st_527520_1;

extern st_527520_1 *g_6168cc;

unsigned int KeyValue__12CTalkMonsterP14KeyValueData_s(unsigned int *a0, st_527520_0 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (!sub_488af0(a1->field_4, "UseSentence"))
    {
        v0 = g_6168cc(a1->field_8);
        a0[192] = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "UnUseSentence"))
    {
        v1 = g_6168cc(a1->field_8);
        a0[193] = v1;
        a1->field_c = 1;
        return v1;
    }
    else
    {
        return sub_488d50(a0, a1);
    }
}

