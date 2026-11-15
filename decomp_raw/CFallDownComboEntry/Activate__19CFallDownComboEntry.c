// Activate__19CFallDownComboEntry @0x165b10 size=51
typedef struct st_565b10_0 {
    float field_0;
} st_565b10_0;

extern st_565b10_0 *gpGlobals;

unsigned int * Activate__19CFallDownComboEntry(unsigned int *a0)
{
    *(float *)&a0[2] = *(float *)gpGlobals;
    *a0 = 1;
    *(float *)&a0[5] = *(float *)&a0[5] + *(float *)gpGlobals;
    return gpGlobals;
}

