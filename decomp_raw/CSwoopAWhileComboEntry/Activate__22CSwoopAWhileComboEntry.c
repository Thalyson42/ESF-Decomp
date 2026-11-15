// Activate__22CSwoopAWhileComboEntry @0x165fe0 size=51
typedef struct st_565fe0_0 {
    float field_0;
} st_565fe0_0;

extern st_565fe0_0 *gpGlobals;

unsigned int * Activate__22CSwoopAWhileComboEntry(unsigned int *a0)
{
    *(float *)&a0[2] = *(float *)gpGlobals;
    *a0 = 1;
    *(float *)&a0[5] = *(float *)&a0[5] + *(float *)gpGlobals;
    return gpGlobals;
}

