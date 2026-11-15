// StopTouch__13CGuidedAttackP11CBaseEntity @0xc7830 size=188
typedef struct st_4c7830_2 {
    char padding_0[40];
    struct st_4c7830_3 *field_28;
    char padding_2c[116];
    struct st_4c7830_3 *field_a0;
} st_4c7830_2;

typedef struct st_4c7830_1 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[364];
    unsigned int field_198;
} st_4c7830_1;

typedef struct st_4c7830_3 {
    unsigned int field_0;
} st_4c7830_3;

typedef struct st_4c7830_0 {
    struct st_4c7830_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[696];
    unsigned int field_2cc;
} st_4c7830_0;

typedef struct st_4c7830_4 {
    unsigned int field_0;
    char padding_4[92];
    struct st_4c7830_2 *field_60;
} st_4c7830_4;

unsigned int StopTouch__13CGuidedAttackP11CBaseEntity(st_4c7830_0 *a0, st_4c7830_4 *a1)
{
    unsigned int v3;  // eax
    unsigned int *v4;  // edx
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    if (a0->field_0->field_198 && a0->field_0->field_198)
        v3 = a0->field_0->field_198 + 128;
    else
        v3 = 0;
    if (v3 == a1->field_0)
        return v3;
    if (a1->field_60->field_28(a1) == 1 || a1->field_60->field_a0(a1))
        return sub_48b1c0(a0, a1);
    v4 = a0->field_0;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v4[8] = v0;
    v4[9] = v1;
    v4[10] = v2;
    a0->field_2cc = 1;
    a0->field_c = 0;
    a0->field_10 = 0;
    return v2;
    return sub_48b1c0(a0, a1);
}

