// CreateShield__13CShieldAttack @0x119cd0 size=134
typedef struct st_519cd0_1 {
    char padding_0[128];
    struct st_519cd0_2 *field_80;
    char padding_84[64];
    unsigned int field_c4;
} st_519cd0_1;

typedef struct st_519cd0_2 {
    struct st_519cd0_0 *field_0;
} st_519cd0_2;

typedef struct st_519cd0_0 {
    char padding_0[520];
    int field_208;
} st_519cd0_0;

int CreateShield__13CShieldAttack(st_519cd0_1 *a0)
{
    a0->field_c4 = sub_48e060(a0->field_80);
    sub_489390(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/shield.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return sub_48d4f0(a0->field_80, "shield_charge.wav");
}

