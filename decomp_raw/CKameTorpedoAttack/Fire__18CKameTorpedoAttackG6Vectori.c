// Fire__18CKameTorpedoAttackG6Vectori @0xc9ea0 size=157
typedef struct st_4c9ea0_1 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[176];
    unsigned int field_10c;
} st_4c9ea0_1;

typedef struct st_4c9ea0_0 {
    struct st_4c9ea0_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[684];
    unsigned int field_2c8;
} st_4c9ea0_0;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char ChaseThink__18CKameTorpedoAttack;

unsigned int Fire__18CKameTorpedoAttackG6Vectori(st_4c9ea0_0 *a0, unsigned int *a1, unsigned int a2)
{
    unsigned int *v3;  // edx
    unsigned int *v4;  // esi
    unsigned int *v6;  // eax
    unsigned int v7;  // eax
    char v0;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    a0->field_2c8 = 1;
    v3 = a0->field_0;
    v3[8] = *a1;
    v3[9] = a1[1];
    v3[10] = a1[2];
    v4 = a0->field_0;
    sub_488860(&v0, a1);
    v4[20] = v0;
    v4[21] = v1;
    v4[22] = v2;
    if (a2)
    {
        a0->field_c = _INSERT(v2, 0, 0) | 0xffff0000;
        a0->field_10 = &ChaseThink__18CKameTorpedoAttack;
    }
    v6 = a0->field_0;
    v6[67] = 1;
    v7 = _INSERT(v6, 0, 0);
    a0->field_14 = v7 | 0xffff0000;
    a0->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    return v7 | 0xffff0000;
}

