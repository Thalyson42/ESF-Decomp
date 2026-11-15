// TakeDamage__13CButtonTargetP9entvars_sT1fi @0x98f10 size=107
typedef struct st_498f10_3 {
    char padding_0[124];
    unsigned int field_7c;
} st_498f10_3;

typedef struct st_498f10_0 {
    char padding_0[184];
    struct st_498f10_1 *field_b8;
} st_498f10_0;

typedef struct st_498f10_1 {
    unsigned int field_0;
} st_498f10_1;

typedef struct st_498f10_4 {
    char padding_0[520];
    struct st_498f10_3 *field_208;
} st_498f10_4;

typedef struct st_498f10_2 {
    char padding_0[96];
    struct st_498f10_0 *field_60;
} st_498f10_2;

extern st_498f10_1 *g_6168d4;

unsigned int TakeDamage__13CButtonTargetP9entvars_sT1fi(st_498f10_2 *a0, unsigned int a1, st_498f10_4 *a2)
{
    st_498f10_3 *v3;  // eax
    unsigned int v4;  // eax
    st_498f10_2 *v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]

    v2 = 0;
    v1 = 3;
    v0 = a0;
    v3 = a2->field_208;
    if (a2->field_208 || (v3 = g_6168d4(0), v3))
        v4 = v3->field_7c;
    else
        v4 = 0;
    a0->field_60->field_b8(a0, v4);
    return 1;
}

