// GetPowerLevel__11CBasePlayer @0xf5ff0 size=76
typedef struct st_4f5ff0_0 {
    char padding_0[804];
    unsigned int field_324;
    char padding_328[1052];
    int field_744;
} st_4f5ff0_0;

int GetPowerLevel__11CBasePlayer(st_4f5ff0_0 *a0)
{
    double v1;  // mm7
    int v0;  // [bp-0x8]

    v1 = (double)a0->field_744;
    if (a0->field_324)
        v1 *= 1.25;
    __fnstcw();
    v0 = (int)v1;
    return v0;
}

