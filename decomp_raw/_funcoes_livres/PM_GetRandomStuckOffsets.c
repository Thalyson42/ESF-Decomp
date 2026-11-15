// PM_GetRandomStuckOffsets @0x191530 size=123
extern unsigned int rgv3tStuckTable[4];
extern unsigned int rgv3tStuckTable+4[4];
extern unsigned int rgv3tStuckTable+8[4];
extern char rgStuckLast;

int PM_GetRandomStuckOffsets(unsigned int a0, unsigned int a1, unsigned int *a2)
{
    unsigned int idx;  // eax
    int v1;  // edi
    unsigned int index;  // eax

    idx = a1 * 4 + a0 * 8;
    v1 = *(int *)&(&rgStuckLast)[idx];
    *(unsigned int *)&(&rgStuckLast)[idx] = *(int *)&(&rgStuckLast)[idx] + 1;
    index = v1 % 54 * 12;
    *(float *)a2 = *(float *)(index + (char *)&rgv3tStuckTable[0]);
    *(float *)&a2[1] = *(float *)(index + (char *)&rgv3tStuckTable+4[0]);
    *(float *)&a2[2] = *(float *)(index + (char *)&rgv3tStuckTable+8[0]);
    return v1 % 54;
}

