// LinearMoveDone__11CBaseToggle @0x1230d0 size=155
extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;

int LinearMoveDone__11CBaseToggle(float a0)
{
    unsigned int idx;  // ecx
    unsigned int v2;  // eax
    unsigned int v3;  // edx

    sub_48db50(*(int *)a0, *(unsigned int *)&a0 + 228);
    idx = *(int *)a0;
    *(unsigned int *)(idx + 32) = g_vecZero;
    *(unsigned int *)(idx + 36) = g_616790;
    *(unsigned int *)(idx + 40) = g_616794;
    v2 = *(int *)a0;
    *(float *)(v2 + 260) = -1.0f;
    if (!*(short *)(*(unsigned int *)&a0 + 222))
        return v2;
    v3 = *(short *)(*(unsigned int *)&a0 + 222);
    return ((int)v3 < 0 ? *(int *)(*(unsigned int *)&a0 + 224) : *(int *)(*(int *)(*(short *)(*(unsigned int *)&a0 + 224) + *(unsigned int *)&a0) + v3 * 4 - 4))(*(short *)(*(unsigned int *)&a0 + 220) + *(unsigned int *)&a0);
}

