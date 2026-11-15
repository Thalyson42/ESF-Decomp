// StrangleThink__15CBodyPartAttack @0x93d00 size=356
typedef struct st_493d00_0 {
    float field_0;
} st_493d00_0;

typedef struct st_493d00_1 {
    unsigned int field_0;
} st_493d00_1;

extern st_493d00_1 *g_6168b4;
extern st_493d00_0 *gpGlobals;
extern char g_800000;

unsigned int * StrangleThink__15CBodyPartAttack(float idx)
{
    unsigned int v3;  // eax
    float v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x3c]

    if (!*(int *)(*(int *)(*(unsigned int *)&idx + 684) + 864))
    {
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 684) + 864) = 1;
        sub_48d680(*(int *)(*(unsigned int *)&idx + 684), 10);
        *(unsigned int *)(*(int *)idx + 300) = 0;
        *(unsigned int *)(*(int *)idx + 304) = 0;
        v3 = sub_48afe0(idx, "struggle");
        *(unsigned int *)(*(int *)idx + 296) = v3;
        sub_488850(idx);
    }
    if (750.0f < *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 684) + 608))
    {
        g_6168b4(1, "unstrangled\n");
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 684) + 864) = 0;
LABEL_493dec:
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 508))(idx);
    }
    else
    {
        if (!(*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 684) + 96) + 140))(*(int *)(*(unsigned int *)&idx + 684)))
            goto LABEL_493dec;
        v1 = &g_800000;
        v0 = 2.0f;
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 684) + 96) + 52))(*(int *)(*(unsigned int *)&idx + 684), *(int *)idx, (!*(int *)(*(int *)idx + 408) ? 0 : *(int *)(*(int *)idx + 408) + 128));
    }
    *(float *)(*(int *)idx + 260) = (float)(0.2 + *(float *)gpGlobals);
    return gpGlobals;
}

