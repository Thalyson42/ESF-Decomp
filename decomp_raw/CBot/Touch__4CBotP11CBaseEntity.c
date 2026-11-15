// Touch__4CBotP11CBaseEntity @0x13d320 size=86
int Touch__4CBotP11CBaseEntity(void* a0, unsigned int a1)
{
    unsigned int v0;  // ecx
    unsigned int v1;  // eax

    *(unsigned int *)&a0[2752] = a1;
    if (!(short)a0[22])
        return v1;
    v0 = (short)a0[22];
    return ((int)v0 < 0 ? (int)a0[24] : *(int *)(*(int *)(a0[24] + (char *)a0) + v0 * 4 - 4))((short)a0[20] + a0, a1);
}

