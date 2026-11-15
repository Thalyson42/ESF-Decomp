// DisableBeamJump__15CControlledBeam @0xa7680 size=201
typedef struct st_4a7680_1 {
    unsigned int field_0;
} st_4a7680_1;

typedef struct st_4a7680_3 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
} st_4a7680_3;

typedef struct st_4a7680_0 {
    char padding_0[512];
    struct st_4a7680_1 *field_200;
} st_4a7680_0;

typedef struct st_4a7680_4 {
    char padding_0[200];
    struct st_4a7680_2 *field_c8;
    char padding_cc[312];
    unsigned int field_204;
    unsigned int field_208;
} st_4a7680_4;

typedef struct st_4a7680_2 {
    struct st_4a7680_3 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_4a7680_0 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[32];
    unsigned int field_2cc;
} st_4a7680_2;

typedef struct st_4a7680_5 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4a7680_5;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern st_4a7680_5 *gpGlobals;

float DisableBeamJump__15CControlledBeam(st_4a7680_4 *a0)
{
    st_4a7680_2 *v3;  // edx
    st_4a7680_2 *v4;  // ecx
    unsigned int *v6;  // ecx
    float v7;  // 128
    unsigned int *v8;  // edx
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    a0->field_204 = 0;
    v3 = a0->field_c8;
    if (!v3->field_2cc)
    {
        v4 = a0->field_c8;
        v4->field_14 = _INSERT(0, 0, 0) | 0xffff0000;
        v4->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
        sub_48a800(&a0->field_c8->field_0[1].field_24);
        v6 = a0->field_c8->field_0;
        v7 = a0->field_c8->field_2a8;
        v8 = &gpGlobals->field_28;
        v0 = v7 * gpGlobals->field_28;
        v1 = v7 * *(float *)&v8[1];
        v2 = v7 * *(float *)&v8[2];
        *(float *)&v6[8] = v0;
        *(float *)&v6[9] = v1;
        *(float *)&v6[10] = v2;
        a0->field_208 = 0;
        return v2;
    }
    return v3->field_60->field_200(v3);
}

