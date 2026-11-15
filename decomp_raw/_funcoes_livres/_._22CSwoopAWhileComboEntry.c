// _._22CSwoopAWhileComboEntry @0x166020 size=62
typedef struct st_566020_0 {
    char padding_0[16];
    unsigned int field_10;
} st_566020_0;

extern unsigned int __vt_22CSwoopAWhileComboEntry;
extern unsigned int __vt_18CBaseBotComboEntry;

unsigned int _._22CSwoopAWhileComboEntry(st_566020_0 *a0, char a1)
{
    unsigned int v0;  // eax

    a0->field_10 = &__vt_22CSwoopAWhileComboEntry;
    v0 = &__vt_18CBaseBotComboEntry;
    a0->field_10 = &__vt_18CBaseBotComboEntry;
    if (a1 & 1)
        v0 = __builtin_delete(a0);
    return v0;
}

