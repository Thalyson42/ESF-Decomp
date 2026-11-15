// __19CTeleportComboEntryP4CBotfibN24 @0x1659d0 size=88
typedef struct st_5659d0_0 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[8];
    unsigned int field_10;
    float field_14;
    unsigned int field_18;
    char field_1c;
    char field_1d;
    char field_1e;
} st_5659d0_0;

extern char __vt_19CTeleportComboEntry;
extern char __vt_18CBaseBotComboEntry;

char __19CTeleportComboEntryP4CBotfibN24(st_5659d0_0 *a0, unsigned int a1, float a2, unsigned int a3, char a4, char a5, char a6)
{
    a0->field_10 = &__vt_18CBaseBotComboEntry;
    a0->field_0 = 0;
    a0->field_4 = a1;
    a0->field_10 = &__vt_19CTeleportComboEntry;
    a0->field_14 = a2;
    a0->field_18 = a3;
    a0->field_1c = a4;
    a0->field_1d = a5;
    a0->field_1e = a6;
    return (char)a0;
}

