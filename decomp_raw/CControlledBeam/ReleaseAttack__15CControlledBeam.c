// ReleaseAttack__15CControlledBeam @0xa88c0 size=141
typedef struct st_4a88c0_3 {
    char padding_0[200];
    struct st_4a88c0_2 *field_c8;
} st_4a88c0_3;

typedef struct st_4a88c0_1 {
    unsigned int field_0;
} st_4a88c0_1;

typedef struct st_4a88c0_0 {
    char padding_0[508];
    struct st_4a88c0_1 *field_1fc;
    struct st_4a88c0_1 *field_200;
} st_4a88c0_0;

typedef struct st_4a88c0_2 {
    char padding_0[96];
    struct st_4a88c0_0 *field_60;
    char padding_64[608];
    unsigned int field_2c4;
    char padding_2c8[20];
    unsigned int field_2dc;
} st_4a88c0_2;

st_4a88c0_2 * ReleaseAttack__15CControlledBeam(st_4a88c0_3 *a0)
{
    st_4a88c0_2 *v0;  // eax
    st_4a88c0_2 *v1;  // edx
    st_4a88c0_2 *v2;  // eax

    v0 = sub_48bd60(a0);
    if (!a0->field_c8)
        return v0;
    v1 = a0->field_c8;
    if (!v1->field_2c4)
    {
        if (!v1->field_2dc)
            v1->field_60->field_200(v1);
        v2 = a0->field_c8;
        if (!a0->field_c8->field_2c4)
        {
            a0->field_c8 = NULL;
            return v2;
        }
    }
    v2 = a0->field_c8->field_60->field_1fc(a0->field_c8);
    a0->field_c8 = NULL;
    return v2;
}

