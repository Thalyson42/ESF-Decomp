// Activate__19CTeleportComboEntry @0x165a30 size=51
typedef struct st_565a30_0 {
    float field_0;
} st_565a30_0;

extern st_565a30_0 *gpGlobals;

unsigned int * Activate__19CTeleportComboEntry(unsigned int *a0)
{
    *(float *)&a0[2] = *(float *)gpGlobals;
    *a0 = 1;
    *(float *)&a0[5] = *(float *)&a0[5] + *(float *)gpGlobals;
    return gpGlobals;
}

