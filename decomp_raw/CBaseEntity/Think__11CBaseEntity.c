// Think__11CBaseEntity @0x9df60 size=72
int Think__11CBaseEntity(void* a0)
{
    unsigned int v0;  // ecx
    unsigned int v1;  // eax

    if (!(short)a0[14])
        return v1;
    v0 = (short)a0[14];
    return ((int)v0 < 0 ? (int)a0[16] : *(int *)(*(int *)(a0[16] + (char *)a0) + v0 * 4 - 4))((short)a0[12] + a0);
}

