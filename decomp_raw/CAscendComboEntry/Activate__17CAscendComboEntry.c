// Activate__17CAscendComboEntry @0x165c80 size=51
typedef struct st_565c80_0 {
    float field_0;
} st_565c80_0;

extern st_565c80_0 *gpGlobals;

unsigned int * Activate__17CAscendComboEntry(unsigned int *a0)
{
    *(float *)&a0[2] = *(float *)gpGlobals;
    *a0 = 1;
    *(float *)&a0[5] = *(float *)&a0[5] + *(float *)gpGlobals;
    return gpGlobals;
}

