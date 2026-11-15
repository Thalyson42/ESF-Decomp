// _._18CPowerupComboEntry @0x165be0 size=62
typedef struct st_565be0_0 {
    char padding_0[16];
    unsigned int field_10;
} st_565be0_0;

extern unsigned int __vt_18CPowerupComboEntry;
extern unsigned int __vt_18CBaseBotComboEntry;

unsigned int _._18CPowerupComboEntry(st_565be0_0 *a0, char a1)
{
    unsigned int v0;  // eax

    a0->field_10 = &__vt_18CPowerupComboEntry;
    v0 = &__vt_18CBaseBotComboEntry;
    a0->field_10 = &__vt_18CBaseBotComboEntry;
    if (a1 & 1)
        v0 = __builtin_delete(a0);
    return v0;
}

