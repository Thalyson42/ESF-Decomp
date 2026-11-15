// CreateExeMove__12CPlayerMeleeiifi18MELEE_COMBO_STATUS14MELEE_STRENGTHPc @0x1045c0 size=182
typedef struct st_5045c0_0 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[4];
    unsigned int field_30;
    unsigned int field_34;
    float field_38;
    unsigned int field_3c;
    unsigned int field_40;
    unsigned int field_44;
    unsigned int field_48;
    unsigned int field_4c;
    unsigned int field_50;
    unsigned int field_54;
    char padding_58[768];
    unsigned int field_358;
    unsigned int field_35c;
} st_5045c0_0;

st_5045c0_0 * CreateExeMove__12CPlayerMeleeiifi18MELEE_COMBO_STATUS14MELEE_STRENGTHPc(int a0, unsigned int a1, unsigned int a2, float a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7)
{
    st_5045c0_0 *v0;  // edi

    v0 = __builtin_new(864);
    v0->field_40 = 0;
    v0->field_44 = 0;
    v0->field_3c = 0;
    v0->field_48 = 1;
    v0->field_20 = a1;
    v0->field_24 = a2;
    v0->field_38 = a3;
    v0->field_34 = 0;
    v0->field_28 = 0;
    v0->field_30 = a4;
    v0->field_54 = 0;
    v0->field_4c = a5;
    v0->field_50 = a6;
    strcpy@GLIBC_2.0(v0, a7);
    v0->field_358 = 0;
    v0->field_35c = 0;
    CPlayerMelee::ResetComboArray(a0, v0);
    return v0;
}

