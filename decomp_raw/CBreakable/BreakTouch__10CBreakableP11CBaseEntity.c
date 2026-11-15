// BreakTouch__10CBreakableP11CBaseEntity @0xc2310 size=404
typedef struct st_4c2310_0 {
    char padding_0[52];
    struct st_4c2310_1 *field_34;
    char padding_38[104];
    struct st_4c2310_1 *field_a0;
} st_4c2310_0;

typedef struct st_4c2310_3 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[160];
    float field_cc;
} st_4c2310_3;

typedef struct st_4c2310_1 {
    unsigned int field_0;
} st_4c2310_1;

typedef struct st_4c2310_4 {
    char padding_0[240];
    unsigned int field_f0;
    char padding_f4[12];
    unsigned int field_100;
    unsigned int field_104;
    char padding_108[88];
    float field_160;
    char padding_164[60];
    char field_1a0;
} st_4c2310_4;

typedef struct st_4c2310_5 {
    char padding_0[52];
    struct st_4c2310_1 *field_34;
} st_4c2310_5;

typedef struct st_4c2310_2 {
    struct st_4c2310_3 *field_0;
    char padding_4[92];
    struct st_4c2310_0 *field_60;
} st_4c2310_2;

typedef struct st_4c2310_6 {
    struct st_4c2310_4 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_4c2310_5 *field_60;
    unsigned int field_64;
} st_4c2310_6;

extern char Die__10CBreakable;

float BreakTouch__10CBreakableP11CBaseEntity(st_4c2310_6 *a0, st_4c2310_2 *a1)
{
    float *v2;  // edi
    double v3;  // mm6
    double v4;  // mm5
    unsigned long long v7;  // mm7
    unsigned long long v8;  // mm7
    unsigned long long v9;  // mm7
    unsigned long long v10;  // mm7
    unsigned long long v11;  // mm7
    float v0;  // [bp-0x38]
    float v1;  // [bp-0x18]

    v2 = a1->field_0;
    if (!a1->field_60->field_a0(a1))
    {
        return v11;
    }
    else if (sub_48c7c0(a0))
    {
        if (a0->field_0->field_1a0 & 2)
        {
            v3 = v2[8] * v2[8] + v2[9] * v2[9] + v2[10] * v2[10];
            v4 = sqrt(v3);
            if (isnan(v4))
                sub_487dc0(*(unsigned int *)&v3);
            else
                v3 = v4;
            v1 = (float)v3;
            v0 = (float)(v1 * 0.01);
            if (v0 >= a0->field_0->field_160)
            {
                a0->field_14 = 0;
                a0->field_18 = 0;
                a0->field_60->field_34(a0, v2, v2, v0, 1);
                a1->field_60->field_34(a1, a0->field_0, a0->field_0, (float)(v0 * 0.25), 4);
            }
        }
        if (!(a0->field_0->field_1a0 & 4))
        {
            return v9;
        }
        else if (((char)((0x3800 | (unsigned short)(CmpF(__double_as_longlong((double)*(float *)&a0->field_0->field_f0 - 2.0), __double_as_longlong((double)v2[0x33])) * 0x100 & 0x4500) & 0x4700) >> 8) & 69) - 1 < 64)
        {
            a0->field_c = _INSERT(sub_48cba0(a0), 0, 0) | 0xffff0000;
            a0->field_10 = &Die__10CBreakable;
            a0->field_14 = 0;
            a0->field_18 = 0;
            if (*(float *)&a0->field_64 == 0.0f)
                *(float *)&a0->field_64 = 0.10000000149011612f;
            *(float *)&a0->field_0->field_104 = *(float *)&a0->field_0->field_100 + *(float *)&a0->field_64;
            return v7;
        }
        else
        {
            return v8;
        }
    }
    else
    {
        return v10;
    }
}

