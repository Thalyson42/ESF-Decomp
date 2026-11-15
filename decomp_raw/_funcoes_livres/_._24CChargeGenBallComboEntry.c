// _._24CChargeGenBallComboEntry @0x165e30 size=62
typedef struct st_565e30_0 {
    char padding_0[16];
    unsigned int field_10;
} st_565e30_0;

extern unsigned int __vt_24CChargeGenBallComboEntry;
extern unsigned int __vt_18CBaseBotComboEntry;

unsigned int _._24CChargeGenBallComboEntry(st_565e30_0 *a0, char a1)
{
    unsigned int v0;  // eax

    a0->field_10 = &__vt_24CChargeGenBallComboEntry;
    v0 = &__vt_18CBaseBotComboEntry;
    a0->field_10 = &__vt_18CBaseBotComboEntry;
    if (a1 & 1)
        v0 = __builtin_delete(a0);
    return v0;
}

