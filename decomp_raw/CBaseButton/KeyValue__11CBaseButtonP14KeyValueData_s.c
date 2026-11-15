// KeyValue__11CBaseButtonP14KeyValueData_s @0x96270 size=1684
typedef struct st_496270_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_496270_0;

typedef struct st_496270_2 {
    char padding_0[268];
    unsigned int field_10c;
    char padding_110[36];
    char field_134;
    char field_135;
    char field_136;
    char field_137;
    unsigned int field_138;
} st_496270_2;

typedef struct st_496270_1 {
    unsigned int field_0;
} st_496270_1;

extern st_496270_1 *g_6168cc;

int KeyValue__11CBaseButtonP14KeyValueData_s(st_496270_2 *a0, st_496270_0 *a1)
{
    int v3;  // eax
    double v4;  // mm7
    double v5;  // mm7
    double v6;  // mm7
    double v7;  // mm7
    int v8;  // eax
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    if (!sub_488af0(a1->field_4, "changetarget"))
    {
        v3 = g_6168cc(a1->field_8);
        a0->field_10c = v3;
        a1->field_c = 1;
        return v3;
    }
    else if (!sub_488af0(a1->field_4, "locked_sound"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v4;
        a0->field_134 = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "locked_sentence"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v5;
        a0->field_135 = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "unlocked_sound"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v6;
        a0->field_136 = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "unlocked_sentence"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v7;
        a0->field_137 = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!sub_488af0(a1->field_4, "sounds"))
    {
        v8 = sub_48b500(a1->field_8, 0, 10, 0);
        a0->field_138 = v8;
        a1->field_c = 1;
        return v8;
    }
    else
    {
        return sub_48ba40(a0, a1);
    }
}

