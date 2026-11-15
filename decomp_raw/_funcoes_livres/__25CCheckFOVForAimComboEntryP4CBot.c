// __25CCheckFOVForAimComboEntryP4CBot @0x165d00 size=65
extern char __vt_25CCheckFOVForAimComboEntry;
extern char __vt_18CBaseBotComboEntry;

unsigned int * __25CCheckFOVForAimComboEntryP4CBot(unsigned int *a0, unsigned int a1)
{
    a0[4] = &__vt_18CBaseBotComboEntry;
    *a0 = 0;
    a0[1] = a1;
    a0[4] = &__vt_25CCheckFOVForAimComboEntry;
    *(float *)&a0[5] = 0.25f;
    return a0;
}

