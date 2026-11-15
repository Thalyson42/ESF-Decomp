// Killed__12CTalkMonsterP9entvars_si @0x125690 size=188
typedef struct st_525690_0 {
    char padding_0[124];
    int field_7c;
} st_525690_0;

typedef struct st_525690_2 {
    char padding_0[368];
    struct st_525690_3 *field_170;
} st_525690_2;

typedef struct st_525690_4 {
    char padding_0[28];
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[60];
    struct st_525690_2 *field_60;
    char padding_64[172];
    char field_110;
    char padding_111[111];
    unsigned int field_180;
} st_525690_4;

typedef struct st_525690_3 {
    unsigned int field_0;
} st_525690_3;

typedef struct st_525690_1 {
    char padding_0[420];
    char field_1a4;
    char padding_1a5[99];
    struct st_525690_0 *field_208;
} st_525690_1;

extern st_525690_3 *g_6168d4;

int Killed__12CTalkMonsterP9entvars_si(st_525690_4 *a0, st_525690_1 *a1, int a2)
{
    st_525690_0 *v1;  // eax
    int v2;  // eax
    unsigned int v0;  // [bp-0x34]

    if (a1->field_1a4 & 8 && a0->field_180 != 5)
    {
        sub_489de0(a0);
        v0 = 0;
        v1 = a1->field_208;
        if (a1->field_208 || (v1 = g_6168d4(0), v1))
            v2 = v1->field_7c;
        else
            v2 = 0;
        sub_48b200(a0, v2);
    }
    sub_48d960(&a0->field_110, 0);
    a0->field_60->field_170(a0);
    a0->field_1c = 0;
    a0->field_20 = 0;
    return sub_4885f0(a0, a1, a2);
}

