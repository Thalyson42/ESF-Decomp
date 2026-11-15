// MakeCombo__4CBot10EComboType @0x15aa30 size=202
typedef struct st_55aa30_0 {
    char padding_0[4208];
    int field_1070;
} st_55aa30_0;

unsigned int MakeCombo__4CBot10EComboType(st_55aa30_0 *a0, int a1)
{
    int v1;  // esi
    unsigned int v2;  // eax
    char v0;  // [bp-0x5]

    if (a0->field_1070 && a0->field_1070)
        _._9CBotCombo(a0->field_1070, 3);
    CBot::MakeTask(a0, 12);
    v1 = __builtin_new(24);
    v0 = 1;
    v2 = __9CBotComboP4CBot10EComboType(v1, a0, a1);
    v0 = 0;
    a0->field_1070 = v2;
    if (!v0)
        return v2;
    return __builtin_delete(v1);
}

