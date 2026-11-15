// Touch__12CTalkMonsterP11CBaseEntity @0x125f00 size=162
typedef struct st_525f00_0 {
    char padding_0[160];
    struct st_525f00_1 *field_a0;
} st_525f00_0;

typedef struct st_525f00_3 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
} st_525f00_3;

typedef struct st_525f00_1 {
    unsigned int field_0;
} st_525f00_1;

typedef struct st_525f00_4 {
    char padding_0[263];
    char field_107;
    char padding_108[320];
    char field_248;
} st_525f00_4;

typedef struct st_525f00_2 {
    struct st_525f00_3 *field_0;
    char padding_4[92];
    struct st_525f00_0 *field_60;
} st_525f00_2;

unsigned int Touch__12CTalkMonsterP11CBaseEntity(st_525f00_4 *a0, st_525f00_2 *a1)
{
    unsigned int *v4;  // edx
    unsigned int v5;  // eax
    float v0;  // [bp-0x34]
    float v1;  // [bp-0x30]
    float v2;  // [bp-0x2c]
    float v3;  // [bp-0x8]

    if (!a1->field_60->field_a0(a1))
    {
        return v5;
    }
    else if (a0->field_248 & 1)
    {
        return v5;
    }
    else if (!sub_48bb60(a0))
    {
        v3 = (float)(fabs(a1->field_0->field_20) + fabs(a1->field_0->field_24));
        if (v3 <= 50.0f)
            return v5;
        a0->field_107 = a0->field_107 | 16;
        v4 = &a1->field_0->field_8;
        v0 = a1->field_0->field_8;
        v1 = *(float *)&v4[1];
        v2 = *(float *)&v4[2];
        v5 = sub_4882f0(a0, &v0);
        return v5;
    }
    else
    {
        return v5;
    }
}

