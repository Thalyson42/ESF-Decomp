// ResetComboArray__12CPlayerMeleeP17melee_execution_s @0x104680 size=109
int * ResetComboArray__12CPlayerMeleeP17melee_execution_s(unsigned int a0, unsigned int a1)
{
    int i;  // edx
    int *v5;  // eax
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x8]

    i = 0;
    v3 = a1 + 88;
    v2 = a1 + 92;
    v1 = a1 + 96;
    v0 = a1 + 100;
    do
    {
        v5 = i * 24;
        *(int *)((char *)v5 + v3) = i;
        *(unsigned int *)((char *)v5 + v2) = 0;
        *(unsigned int *)((char *)v5 + v1) = 0;
        *(unsigned int *)((char *)v5 + v0) = 0;
        *(unsigned int *)((char *)v5 + a1 + 104) = 0;
        *(unsigned int *)((char *)v5 + a1 + 108) = 0;
        i += 1;
    } while (i <= 31);
    return v5;
}

