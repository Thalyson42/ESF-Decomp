// ExplodeTouch__5CRockP11CBaseEntity @0x129c90 size=220
typedef struct st_529c90_2 {
    char padding_0[40];
    struct st_529c90_3 *field_28;
    char padding_2c[116];
    struct st_529c90_3 *field_a0;
} st_529c90_2;

typedef struct st_529c90_1 {
    char padding_0[408];
    struct st_529c90_0 *field_198;
} st_529c90_1;

typedef struct st_529c90_3 {
    unsigned int field_0;
} st_529c90_3;

typedef struct st_529c90_5 {
    char padding_0[504];
    struct st_529c90_3 *field_1f8;
    char padding_1fc[4];
    struct st_529c90_3 *field_200;
} st_529c90_5;

typedef struct st_529c90_0 {
    char padding_0[536];
    struct st_529c90_0 *field_218;
} st_529c90_0;

typedef struct st_529c90_4 {
    struct st_529c90_1 *field_0;
    char padding_4[92];
    struct st_529c90_2 *field_60;
    char padding_64[756];
    unsigned int field_358;
} st_529c90_4;

typedef struct st_529c90_6 {
    struct st_529c90_1 *field_0;
    char padding_4[92];
    struct st_529c90_5 *field_60;
} st_529c90_6;

st_529c90_1 * ExplodeTouch__5CRockP11CBaseEntity(st_529c90_6 *a0, st_529c90_4 *a1)
{
    st_529c90_1 *v0;  // eax
    st_529c90_1 *v1;  // edx
    st_529c90_1 *v2;  // eax

    v0 = a1->field_60->field_28(a1);
    if (v0 == 0x10)
        return v0;
    if (a0->field_0->field_198 && a0->field_0->field_198)
        v1 = &a0->field_0->field_198->padding_0[128];
    else
        v1 = NULL;
    if (a1->field_0->field_198 && a1->field_0->field_198)
        v2 = &a1->field_0->field_198->padding_0[128];
    else
        v2 = NULL;
    if (v1 == a1->field_0)
        return v2;
    if (v2 == v1 && v1)
        return v2;
    if (!a1->field_60->field_a0(a1) || !sub_48b6d0(a0, a1) || a1->field_358)
        return a0->field_60->field_200(a0);
    a0->field_60->field_1f8(a0, a1, 1);
    return a0->field_60->field_200(a0);
}

