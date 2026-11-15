// GravityTouch__15CTriggerGravityP11CBaseEntity @0x12f050 size=70
typedef struct st_52f050_1 {
    char padding_0[160];
    struct st_52f050_2 *field_a0;
} st_52f050_1;

typedef struct st_52f050_0 {
    char padding_0[284];
    unsigned int field_11c;
} st_52f050_0;

typedef struct st_52f050_4 {
    char padding_0[284];
    float field_11c;
} st_52f050_4;

typedef struct st_52f050_2 {
    unsigned int field_0;
} st_52f050_2;

typedef struct st_52f050_3 {
    struct st_52f050_0 *field_0;
    char padding_4[92];
    struct st_52f050_1 *field_60;
} st_52f050_3;

st_52f050_0 * GravityTouch__15CTriggerGravityP11CBaseEntity(st_52f050_4 **a0, st_52f050_3 *a1)
{
    st_52f050_0 *v0;  // eax
    st_52f050_4 *v1;  // eax

    v0 = a1->field_60->field_a0(a1);
    if (!v0)
        return v0;
    v1 = *a0;
    *(float *)&a1->field_0->field_11c = v1->field_11c;
    return v1;
}

