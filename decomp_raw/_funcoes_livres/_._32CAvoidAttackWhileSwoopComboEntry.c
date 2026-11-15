// _._32CAvoidAttackWhileSwoopComboEntry @0x165f50 size=62
typedef struct st_565f50_0 {
    char padding_0[16];
    unsigned int field_10;
} st_565f50_0;

extern unsigned int __vt_32CAvoidAttackWhileSwoopComboEntry;
extern unsigned int __vt_18CBaseBotComboEntry;

unsigned int _._32CAvoidAttackWhileSwoopComboEntry(st_565f50_0 *a0, char a1)
{
    unsigned int v0;  // eax

    a0->field_10 = &__vt_32CAvoidAttackWhileSwoopComboEntry;
    v0 = &__vt_18CBaseBotComboEntry;
    a0->field_10 = &__vt_18CBaseBotComboEntry;
    if (a1 & 1)
        v0 = sub_48d4e0(a0);
    return v0;
}

