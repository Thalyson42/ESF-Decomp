// KeyValue__13CMonsterMakerP14KeyValueData_s @0xd3250 size=676
typedef struct st_4d3250_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4d3250_0;

typedef struct st_4d3250_1 {
    unsigned int field_0;
} st_4d3250_1;

extern st_4d3250_1 *g_6168cc;

unsigned int KeyValue__13CMonsterMakerP14KeyValueData_s(unsigned int *a0, st_4d3250_0 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    if (!sub_488af0(a1->field_4, "monstercount"))
    {
        v0 = sub_48b500(a1->field_8, 0, 10, 0);
        a0[171] = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "m_imaxlivechildren"))
    {
        v1 = sub_48b500(a1->field_8, 0, 10, 0);
        a0[173] = v1;
        a1->field_c = 1;
        return v1;
    }
    else if (!sub_488af0(a1->field_4, "monstertype"))
    {
        v2 = g_6168cc(a1->field_8);
        a0[0xaa] = v2;
        a1->field_c = 1;
        return v2;
    }
    else
    {
        return sub_488d50(a0, a1);
    }
}

