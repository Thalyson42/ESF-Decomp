// __22CSwoopAWhileComboEntryP4CBotf @0x165f90 size=62
typedef struct st_565f90_0 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[8];
    unsigned int field_10;
    float field_14;
} st_565f90_0;

extern char __vt_22CSwoopAWhileComboEntry;
extern char __vt_18CBaseBotComboEntry;

st_565f90_0 * __22CSwoopAWhileComboEntryP4CBotf(st_565f90_0 *a0, unsigned int a1, float a2)
{
    a0->field_10 = &__vt_18CBaseBotComboEntry;
    a0->field_0 = 0;
    a0->field_4 = a1;
    a0->field_10 = &__vt_22CSwoopAWhileComboEntry;
    a0->field_14 = a2;
    return a0;
}

