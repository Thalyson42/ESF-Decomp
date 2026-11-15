// __19CFallDownComboEntryP4CBot @0x165ab0 size=65
extern char __vt_19CFallDownComboEntry;
extern char __vt_18CBaseBotComboEntry;

unsigned int * __19CFallDownComboEntryP4CBot(unsigned int *a0, unsigned int a1)
{
    a0[4] = &__vt_18CBaseBotComboEntry;
    *a0 = 0;
    a0[1] = a1;
    a0[4] = &__vt_19CFallDownComboEntry;
    *(float *)&a0[5] = 1.5f;
    return a0;
}

