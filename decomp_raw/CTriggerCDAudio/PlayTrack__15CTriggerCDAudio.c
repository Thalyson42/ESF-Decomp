// PlayTrack__15CTriggerCDAudio @0x12c1d0 size=100
int PlayTrack__15CTriggerCDAudio(float idx)
{
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)*(float *)(*(int *)idx + 352);
    PlayCDTrack(v0);
    *(unsigned int *)(*(unsigned int *)&idx + 20) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 24) = 0;
    return UTIL_Remove(idx);
}

