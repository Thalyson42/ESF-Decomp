// Think__18CPowerupComboEntry @0x15c430 size=256
typedef struct st_55c430_1 {
    struct st_55c430_0 *field_0;
    char padding_4[812];
    unsigned int field_330;
    char padding_334[1764];
    short field_a18;
    char padding_a1a[338];
    int field_b6c;
} st_55c430_1;

typedef struct st_55c430_0 {
    char padding_0[608];
    float field_260;
} st_55c430_0;

typedef struct st_55c430_2 {
    unsigned int field_0;
    struct st_55c430_1 *field_4;
} st_55c430_2;

typedef struct st_55c430_3 {
    unsigned int field_0;
} st_55c430_3;

extern st_55c430_3 *g_616928;

unsigned int Think__18CPowerupComboEntry(st_55c430_2 *a0)
{
    unsigned int v3;  // eax
    short v4;  // di
    st_55c430_1 *v5;  // edx
    int v0;  // [bp-0x24]
    unsigned short v1;  // [bp-0x20]
    unsigned short v2;  // [bp-0x1e]

    v3 = sub_48b430(a0->field_4);
    if ((char)v3)
    {
        if (!a0->field_4->field_330 && g_616928(0, 1))
            sub_48dd60(a0->field_4);
        v4 = 990;
        v5 = a0->field_4;
        if (v5->field_b6c)
            sub_48b720(v5, v5->field_b6c);
        if (a0->field_4->field_a18 > 59)
        {
            v4 = 20;
            if (a0->field_4->field_a18 <= 99)
                v4 = 100;
        }
        sub_48d0d0(a0->field_4);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)a0->field_4->field_0->field_260;
        if (v0 < v4)
            return v4;
        v3 = sub_48ba60(a0->field_4);
    }
    a0->field_0 = 2;
    return v3;
}

