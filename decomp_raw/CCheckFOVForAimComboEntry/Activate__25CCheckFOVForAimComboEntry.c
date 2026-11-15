// Activate__25CCheckFOVForAimComboEntry @0x165d60 size=51
typedef struct st_565d60_0 {
    float field_0;
} st_565d60_0;

extern st_565d60_0 *gpGlobals;

unsigned int * Activate__25CCheckFOVForAimComboEntry(unsigned int *a0)
{
    *(float *)&a0[2] = *(float *)gpGlobals;
    *a0 = 1;
    *(float *)&a0[5] = *(float *)&a0[5] + *(float *)gpGlobals;
    return gpGlobals;
}

