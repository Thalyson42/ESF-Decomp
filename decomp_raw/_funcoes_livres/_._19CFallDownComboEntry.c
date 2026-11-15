// _._19CFallDownComboEntry @0x165b50 size=62
typedef struct st_565b50_0 {
    char padding_0[16];
    unsigned int field_10;
} st_565b50_0;

extern unsigned int __vt_19CFallDownComboEntry;
extern unsigned int __vt_18CBaseBotComboEntry;

unsigned int _._19CFallDownComboEntry(st_565b50_0 *a0, char a1)
{
    unsigned int v0;  // eax

    a0->field_10 = &__vt_19CFallDownComboEntry;
    v0 = &__vt_18CBaseBotComboEntry;
    a0->field_10 = &__vt_18CBaseBotComboEntry;
    if (a1 & 1)
        v0 = __builtin_delete(a0);
    return v0;
}

