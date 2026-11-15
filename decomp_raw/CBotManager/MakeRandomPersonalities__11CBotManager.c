// MakeRandomPersonalities__11CBotManager @0x173810 size=987
typedef struct st_573810_0 {
    unsigned int field_0;
} st_573810_0;

extern st_573810_0 *g_616928;

unsigned int MakeRandomPersonalities__11CBotManager(unsigned int a0)
{
    unsigned int v1;  // esi
    int v2;  // eax
    unsigned int v3;  // eax
    int idx;  // [bp-0x8]

    idx = 0;
    do
    {
        v1 = idx * 60;
        *(unsigned short *)(v1 + a0 + 3408) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3410) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3412) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3414) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3416) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3418) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3420) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3422) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3424) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3426) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3428) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3430) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3432) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3434) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3436) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3438) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3444) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3440) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3442) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3446) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3448) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3450) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3452) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3454) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3456) = g_616928(0, 100);
        *(unsigned short *)(v1 + a0 + 3458) = g_616928(0, 100);
        v2 = g_616928(0, 2);
        if (v2 == 1)
        {
            *(unsigned int *)(a0 + 3460 + idx * 60) = 1;
        }
        else if (v2 <= 1)
        {
            if (!v2)
                *(unsigned int *)(a0 + 3460 + idx * 60) = 2;
        }
        else
        {
            if (v2 == 2)
                *(unsigned int *)(a0 + 3460 + idx * 60) = 0;
        }
        if (g_616928(0, 1))
        {
            v3 = idx * 15;
            *(char *)(a0 + v3 * 4 + 3464) = 1;
        }
        else
        {
            v3 = idx * 15;
            *(char *)(a0 + v3 * 4 + 3464) = 0;
        }
        idx += 1;
    } while (idx <= 8);
    return v3;
}

