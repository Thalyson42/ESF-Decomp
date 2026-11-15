// FillAHalfTeam__11CBotManagerUc @0x13eb40 size=64
typedef struct st_53eb40_0 {
    char padding_0[144];
    int field_90;
} st_53eb40_0;

extern st_53eb40_0 *gpGlobals;

int FillAHalfTeam__11CBotManagerUc(char *a0, char a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    a0[21] = 1;
    a0[23] = a1;
    v0 = gpGlobals->field_90 / 2;
    v1 = _INSERT(v0, 0, (char)v0 - 1);
    a0[24] = (char)v0 - 1;
    return v1;
}

