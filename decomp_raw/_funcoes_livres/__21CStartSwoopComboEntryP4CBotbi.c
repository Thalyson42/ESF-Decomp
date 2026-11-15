// __21CStartSwoopComboEntryP4CBotbi @0x15c180 size=82
typedef struct st_55c180_0 {
    char padding_0[3068];
    unsigned int field_bfc;
} st_55c180_0;

typedef struct st_55c180_1 {
    unsigned int field_0;
    struct st_55c180_0 *field_4;
    char padding_8[8];
    unsigned int field_10;
    char field_14;
    char padding_15[7];
    unsigned int field_1c;
} st_55c180_1;

extern char __vt_21CStartSwoopComboEntry;
extern char __vt_18CBaseBotComboEntry;

st_55c180_1 * __21CStartSwoopComboEntryP4CBotbi(st_55c180_1 *a0, st_55c180_0 *a1, char a2, unsigned int a3)
{
    a0->field_10 = &__vt_18CBaseBotComboEntry;
    a0->field_0 = 0;
    a0->field_4 = a1;
    a0->field_10 = &__vt_21CStartSwoopComboEntry;
    a0->field_14 = a2;
    a0->field_1c = a3;
    a1->field_bfc = 0x3f800000;
    return a0;
}

