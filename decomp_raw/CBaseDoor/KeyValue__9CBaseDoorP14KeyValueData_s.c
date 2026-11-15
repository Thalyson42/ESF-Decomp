// KeyValue__9CBaseDoorP14KeyValueData_s @0xaaf20 size=2892
typedef struct st_4aaf20_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4aaf20_0;

typedef struct st_4aaf20_2 {
    struct st_4aaf20_1 *field_0;
    char padding_4[256];
    char field_104;
    char field_105;
    char field_106;
    char padding_107[37];
    char field_12c;
    char field_12d;
    char field_12e;
    char field_12f;
} st_4aaf20_2;

typedef struct st_4aaf20_1 {
    char padding_0[272];
    unsigned int field_110;
    char padding_114[48];
    float field_144;
} st_4aaf20_1;

double KeyValue__9CBaseDoorP14KeyValueData_s(st_4aaf20_2 *a0, st_4aaf20_0 *a1)
{
    double v3;  // mm7
    double v4;  // mm7
    double v5;  // mm7
    double v6;  // mm7
    double v7;  // mm7
    double v8;  // mm7
    double v9;  // mm7
    double v10;  // mm7
    double v11;  // mm7
    double v12;  // mm7
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    if (!sub_488af0(a1->field_4, "skin"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v3;
        a0->field_0->field_110 = v0;
        a1->field_c = 1;
        return v3;
    }
    else if (!sub_488af0(a1->field_4, "movesnd"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v4;
        a0->field_105 = v0;
        a1->field_c = 1;
        return v4;
    }
    else if (!sub_488af0(a1->field_4, "stopsnd"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v5;
        a0->field_106 = v0;
        a1->field_c = 1;
        return v5;
    }
    else if (!sub_488af0(a1->field_4, "healthvalue"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v6;
        a0->field_104 = v0;
        a1->field_c = 1;
        return v6;
    }
    else if (!sub_488af0(a1->field_4, "locked_sound"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v7;
        a0->field_12c = v0;
        a1->field_c = 1;
        return v7;
    }
    else if (!sub_488af0(a1->field_4, "locked_sentence"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v8;
        a0->field_12d = v0;
        a1->field_c = 1;
        return v8;
    }
    else if (!sub_488af0(a1->field_4, "unlocked_sound"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v9;
        a0->field_12e = v0;
        a1->field_c = 1;
        return v9;
    }
    else if (!sub_488af0(a1->field_4, "unlocked_sentence"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v10;
        a0->field_12f = v0;
        a1->field_c = 1;
        return v10;
    }
    else if (!sub_488af0(a1->field_4, "WaveHeight"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        a0->field_0->field_144 = (float)(v11 * 0.125);
        a1->field_c = 1;
        return v11 * 0.125;
    }
    else
    {
        sub_48ba40(a0, a1);
        return v12;
    }
}

