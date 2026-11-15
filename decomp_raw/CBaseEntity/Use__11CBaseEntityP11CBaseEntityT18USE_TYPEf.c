// Use__11CBaseEntityP11CBaseEntityT18USE_TYPEf @0x9e000 size=93
int Use__11CBaseEntityP11CBaseEntityT18USE_TYPEf(void* a0, unsigned int a1, unsigned int a2, unsigned int a3, float a4)
{
    unsigned int v0;  // ecx
    unsigned int v1;  // eax

    if (!(short)a0[30])
        return v1;
    v0 = (short)a0[30];
    return ((int)v0 < 0 ? (int)a0[32] : *(int *)(*(int *)(a0[32] + (char *)a0) + v0 * 4 - 4))((short)a0[28] + a0, a1, a2, a3, a4);
}

