// Spawn__18CSpecialBeamCannon @0x11f9c0 size=147
int Spawn__18CSpecialBeamCannon(float idx)
{
    unsigned int iter;  // edi
    void* i;  // esi
    unsigned int v3;  // ecx

    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 0x88) = 11;
    *(unsigned int *)(*(unsigned int *)&idx + 192) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 176) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 200) = 21;
    *(unsigned int *)(*(unsigned int *)&idx + 208) = 20;
    *(float *)(*(unsigned int *)&idx + 0xcc) = 0.5f;
    iter = *(unsigned int *)&idx + 212;
    i = "specialbeamcannon";
    for (v3 = 4; v3; i += 4)
    {
        v3 -= 1;
        *(int *)iter = *(int *)i;
        iter += 4;
    }
    *(short *)iter = *(short *)i;
    return CBasePlayerItem::FallInit(idx);
}

