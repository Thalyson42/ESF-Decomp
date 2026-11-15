// Blocked__11CBaseEntityP11CBaseEntity @0x9e060 size=76
int Blocked__11CBaseEntityP11CBaseEntity(void* a0, unsigned int a1)
{
    unsigned int v0;  // ecx
    unsigned int v1;  // eax

    if (!(short)a0[38])
        return v1;
    v0 = (short)a0[38];
    return ((int)v0 < 0 ? (int)a0[40] : *(int *)(*(int *)(a0[40] + (char *)a0) + v0 * 4 - 4))((short)a0[36] + a0, a1);
}

