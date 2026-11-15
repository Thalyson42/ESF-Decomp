// DragonBallPickUp__30CHalfLifeCaptureTheDragonBallsii @0x9b920 size=131
typedef struct st_49b920_0 {
    unsigned int field_0;
} st_49b920_0;

extern unsigned int gmsgDragonBallEnt;
extern st_49b920_0 *g_616878;
extern st_49b920_0 *g_61687c;
extern st_49b920_0 *g_616880;
extern st_49b920_0 *g_616888;

int DragonBallPickUp__30CHalfLifeCaptureTheDragonBallsii(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int idx;  // edi
    unsigned int v1;  // eax

    idx = a1 - 1;
    if (idx > 6)
        return v1;
    *(unsigned int *)(a0 + 632 + idx * 4) = 0;
    g_616878(2, gmsgDragonBallEnt, 0, 0);
    g_616880(idx);
    g_616888(a2);
    return g_61687c();
}

