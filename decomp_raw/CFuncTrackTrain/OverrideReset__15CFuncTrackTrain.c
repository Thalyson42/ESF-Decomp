// OverrideReset__15CFuncTrackTrain @0xec4e0 size=89
extern char NearestPath__15CFuncTrackTrain;

short OverrideReset__15CFuncTrackTrain(float idx)
{
    unsigned int v2;  // eax
    float v0;  // [bp-0x8]

    v0 = (float)(0.1 + *(float *)(*(int *)idx + 0x100));
    v2 = _INSERT(sub_4885e0(idx, v0, 0), 0, 0);
    *(unsigned int *)(*(unsigned int *)&idx + 12) = v2 | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &NearestPath__15CFuncTrackTrain;
    return v2;
}

