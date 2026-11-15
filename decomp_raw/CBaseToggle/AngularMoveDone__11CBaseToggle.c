// AngularMoveDone__11CBaseToggle @0x123320 size=158
extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;

unsigned int * AngularMoveDone__11CBaseToggle(void* a0)
{
    unsigned int *v0;  // edx
    unsigned int *v1;  // ecx
    unsigned int *v2;  // eax
    unsigned int v3;  // edx

    v0 = *(int *)a0;
    v0[20] = (int)a0[240];
    v0[21] = (int)a0[244];
    v0[22] = (int)a0[248];
    v1 = *(int *)a0;
    v1[23] = g_vecZero;
    v1[24] = g_616790;
    v1[25] = g_616794;
    v2 = *(int *)a0;
    *(float *)&v2[65] = -1.0f;
    if (!(short)a0[222])
        return v2;
    v3 = (short)a0[222];
    return ((int)v3 < 0 ? (int)a0[224] : *(int *)(*(int *)(a0[224] + (char *)a0) + v3 * 4 - 4))((short)a0[220] + a0);
}

