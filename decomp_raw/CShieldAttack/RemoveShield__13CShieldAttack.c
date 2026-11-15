// RemoveShield__13CShieldAttack @0x119540 size=82
typedef struct st_519540_0 {
    char padding_0[1724];
    unsigned int field_6bc;
} st_519540_0;

typedef struct st_519540_1 {
    char padding_0[128];
    struct st_519540_0 *field_80;
    char padding_84[64];
    int field_c4;
} st_519540_1;

st_519540_0 * RemoveShield__13CShieldAttack(st_519540_1 *a0)
{
    st_519540_0 *v0;  // eax

    if (a0->field_c4)
    {
        sub_48b9c0(a0->field_c4);
        a0->field_c4 = 0;
    }
    v0 = a0->field_80;
    v0->field_6bc = 0;
    return v0;
}

