// Spawn__16CFuncTrackChange @0xecc50 size=286
extern char Find__16CFuncTrackChange;

int Spawn__16CFuncTrackChange(float idx)
{
    unsigned int idx1;  // edx
    unsigned int index;  // edx
    unsigned int v3;  // eax

    sub_48cb50(idx);
    if (*(char *)(*(int *)idx + 416) & 16)
        *(float *)(*(unsigned int *)&idx + 176) = *(float *)(*(int *)idx + 16);
    sub_48c730(idx);
    if (*(char *)(*(int *)idx + 416) & 8)
    {
        sub_48db50(*(int *)idx, *(unsigned int *)&idx + 168);
        *(unsigned int *)(*(unsigned int *)&idx + 128) = 1;
        idx1 = *(int *)idx;
        *(int *)(idx1 + 80) = *(int *)(*(unsigned int *)&idx + 280);
        *(int *)(idx1 + 84) = *(int *)(*(unsigned int *)&idx + 284);
        *(int *)(idx1 + 88) = *(int *)(*(unsigned int *)&idx + 288);
        *(unsigned int *)(*(unsigned int *)&idx + 320) = 0;
    }
    else
    {
        sub_48db50(*(int *)idx, *(unsigned int *)&idx + 156);
        *(unsigned int *)(*(unsigned int *)&idx + 128) = 0;
        index = *(int *)idx;
        *(int *)(index + 80) = *(int *)(*(unsigned int *)&idx + 268);
        *(int *)(index + 84) = *(int *)(*(unsigned int *)&idx + 272);
        *(int *)(index + 88) = *(int *)(*(unsigned int *)&idx + 276);
        *(unsigned int *)(*(unsigned int *)&idx + 320) = 1;
    }
    *(unsigned int *)(*(unsigned int *)&idx + 324) = 1;
    v3 = *(int *)idx;
    *(float *)(v3 + 260) = (float)(2.0 + *(float *)(v3 + 0x100));
    *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v3, 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &Find__16CFuncTrackChange;
    return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
}

