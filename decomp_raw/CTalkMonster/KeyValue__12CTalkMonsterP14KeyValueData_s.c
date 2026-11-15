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

extern st_527520_1 *g_engfuncs.pfnAllocString;

unsigned int KeyValue__12CTalkMonsterP14KeyValueData_s(unsigned int *a0, st_527520_0 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (!strcmp@GLIBC_2.0(a1->field_4, "UseSentence"))
    {
        v0 = g_engfuncs.pfnAllocString(a1->field_8);
        a0[192] = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "UnUseSentence"))
    {
        v1 = g_engfuncs.pfnAllocString(a1->field_8);
        a0[193] = v1;
        a1->field_c = 1;
        return v1;
    }
    else
    {
        return CBaseMonster::KeyValue(a0, a1);
    }
}

