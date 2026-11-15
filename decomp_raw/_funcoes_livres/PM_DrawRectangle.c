// PM_DrawRectangle @0x18ce80 size=128
int PM_DrawRectangle(int a0, int a1, int a2, int a3, int a4, int a5)
{
    PM_ParticleLine(a0, a1, a4, a5, 0);
    PM_ParticleLine(a1, a3, a4, a5, 0);
    PM_ParticleLine(a3, a2, a4, a5, 0);
    return PM_ParticleLine(a2, a0, a4, a5, 0);
}

