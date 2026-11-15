// HumanizeName__10CChatClassP17bot_personality_sPCcPc @0x148540 size=236
typedef struct st_548540_1 {
    char field_0;
    char padding_1[30];
    char field_1f;
} st_548540_1;

typedef struct st_548540_0 {
    unsigned int field_0;
} st_548540_0;

extern st_548540_0 *g_engfuncs.pfnRandomLong;

unsigned int HumanizeName__10CChatClassP17bot_personality_sPCcPc(int a0, short *a1, int a2, st_548540_1 *a3)
{
    int v2;  // eax
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    int v5;  // esi
    unsigned int v6;  // eax
    char v0;  // [bp-0x64]
    char v1;  // [bp-0x45]

    v2 = g_engfuncs.pfnRandomLong(1, 100);
    if (v2 <= a1[15])
    {
        strncpy@GLIBC_2.0(&v0, a2, 31);
        v1 = 0;
        while (CChatClass::CutTags(a0, &v0, a3))
        {
            strcpy@GLIBC_2.0(&v0, a3);
        }
    }
    else
    {
        strncpy@GLIBC_2.0(a3, a2, 31);
        a3->field_1f = 0;
    }
    v3 = g_engfuncs.pfnRandomLong(1, 100);
    v4 = a1[18];
    if ((int)v3 > (int)v4)
        return v4;
    v5 = 0;
    if (!a3->field_0)
        return v4;
    while (1)
    {
        v6 = tolower@GLIBC_2.0((&a3->field_0)[v5]);
        (&a3->field_0)[v5] = v6;
        v5 += 1;
        if (v5 > 79)
        {
            return v6;
        }
        else if (!(&a3->field_0)[v5])
        {
            return v6;
        }
    }
}

