// HasWeapons__11CBasePlayer @0xfbcc0 size=44
typedef struct st_4fbcc0_0 {
    char padding_0[2368];
    unsigned int field_940;
} st_4fbcc0_0;

unsigned int HasWeapons__11CBasePlayer(st_4fbcc0_0 *a0)
{
    int v0;  // eax

    v0 = 0;
    while (!(&a0->field_940)[v0])
    {
        v0 += 1;
        if (v0 > 9)
            return 0;
    }
    return 1;
}

