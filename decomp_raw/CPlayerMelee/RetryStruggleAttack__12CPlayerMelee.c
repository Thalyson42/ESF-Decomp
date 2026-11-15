// RetryStruggleAttack__12CPlayerMelee @0x10aec0 size=126
typedef struct st_50aec0_1 {
    char padding_0[108];
    unsigned int field_6c;
    unsigned int field_70;
    char padding_74[4];
    unsigned int field_78;
    unsigned int field_7c;
} st_50aec0_1;

typedef struct st_50aec0_0 {
    char padding_0[108];
    unsigned int field_6c;
    unsigned int field_70;
    char field_74;
    char padding_75[187];
    struct st_50aec0_1 *field_130;
} st_50aec0_0;

typedef struct st_50aec0_2 {
    float field_0;
} st_50aec0_2;

extern float g_5bd298;
extern st_50aec0_2 *gpGlobals;

unsigned int * RetryStruggleAttack__12CPlayerMelee(st_50aec0_0 *a0)
{
    unsigned int *v0;  // eax

    *(float *)&a0->field_70 = *(float *)gpGlobals + g_5bd298;
    a0->field_6c = 0;
    memset(&a0->field_74, 0, 12);
    a0->field_130->field_6c = 0;
    a0->field_130->field_70 = 0;
    a0->field_130->field_78 = 0;
    v0 = a0->field_130;
    v0[31] = 0;
    return v0;
}

