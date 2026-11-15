// TaskThink__10CComboTask @0x1859a0 size=132
typedef struct st_5859a0_0 {
    char padding_0[16];
    unsigned int field_10;
    unsigned int field_14;
    char padding_18[4176];
    unsigned int field_1068;
    char padding_106c[4];
    struct st_5859a0_0 *field_1070;
} st_5859a0_0;

typedef struct st_5859a0_1 {
    char padding_0[4];
    unsigned int field_4;
    struct st_5859a0_0 *field_8;
} st_5859a0_1;

st_5859a0_0 * TaskThink__10CComboTask(st_5859a0_1 *a0)
{
    st_5859a0_0 *v0;  // eax
    st_5859a0_0 *v1;  // eax

    v0 = a0->field_8;
    if (v0->field_1070)
    {
        if (!v0->field_1070->field_10)
            CBotCombo::Activate(v0->field_1070);
        CBotCombo::ExcuteCombo(a0->field_8->field_1070);
        v1 = a0->field_8->field_1070;
        if (v1->field_10 != 2)
            return v1;
        a0->field_8->field_1068 = v1->field_14;
        v0 = CBot::DeleteCombos(a0->field_8);
    }
    a0->field_4 = 2;
    return v0;
}

