// Holster__13CShieldAttacki @0x1195a0 size=138
typedef struct st_5195a0_1 {
    char padding_0[820];
    unsigned int field_334;
    char padding_338[4];
    unsigned int field_33c;
    char padding_340[1044];
    unsigned int field_754;
} st_5195a0_1;

typedef struct st_5195a0_0 {
    char padding_0[128];
    struct st_5195a0_1 *field_80;
    char padding_84[68];
    char field_c8;
    char padding_c9[11];
    int field_d4;
} st_5195a0_0;

unsigned int * Holster__13CShieldAttacki(st_5195a0_0 *a0)
{
    unsigned int *v0;  // eax
    unsigned int *v1;  // eax

    if (a0->field_d4 <= 0)
        return v1;
    CShieldAttack::RemoveShield(a0);
    a0->field_d4 = 0;
    a0->field_80->field_33c = 0;
    a0->field_80->field_334 = 0;
    v0 = a0->field_80;
    v0[469] = 0x3f800000;
    memset(&a0->field_c8, 0, 12);
    return v0;
}

