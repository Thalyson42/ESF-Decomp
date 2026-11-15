// FillATeam__11CBotManagerUc @0x13eb80 size=53
typedef struct st_53eb80_0 {
    char padding_0[144];
    char field_90;
} st_53eb80_0;

extern st_53eb80_0 *gpGlobals;

int FillATeam__11CBotManagerUc(char *a0, char a1)
{
    unsigned int v0;  // eax

    a0[22] = 1;
    a0[23] = a1;
    v0 = _INSERT(gpGlobals, 0, gpGlobals->field_90 - 1);
    a0[24] = gpGlobals->field_90 - 1;
    return v0;
}

