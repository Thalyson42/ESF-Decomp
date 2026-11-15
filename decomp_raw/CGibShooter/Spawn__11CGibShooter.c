// Spawn__11CGibShooter @0xb4420 size=168
typedef struct st_4b4420_0 {
    unsigned int field_0;
} st_4b4420_0;

extern st_4b4420_0 *g_engfuncs.pfnModelFrames;

int Spawn__11CGibShooter(float idx)
{
    unsigned int v1;  // eax
    unsigned int *v2;  // eax

    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(int *)idx + 268) = 0;
    *(unsigned int *)(*(int *)idx + 280) = 128;
    if (*(float *)(*(unsigned int *)&idx + 100) == 0.0f)
        *(float *)(*(unsigned int *)&idx + 100) = 0.10000000149011612f;
    if (*(float *)(*(unsigned int *)&idx + 132) == 0.0f)
        *(float *)(*(unsigned int *)&idx + 132) = 25.0f;
    SetMovedir(*(int *)idx);
    v1 = g_engfuncs.pfnModelFrames(*(int *)(*(unsigned int *)&idx + 120));
    v2 = *(int *)idx;
    v2[69] = v1;
    return v2;
}

