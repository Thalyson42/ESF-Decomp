// Remove__14CQueuePriorityRf @0xe3970 size=74
unsigned int Remove__14CQueuePriorityRf(unsigned int *a0, unsigned int *a1)
{
    unsigned int v0;  // esi
    unsigned int v1;  // edx

    v0 = a0[1];
    *(float *)a1 = *(float *)&a0[2];
    *a0 = *a0 - 1;
    v1 = a0[2 + 2 * *a0];
    a0[1] = a0[1 + 2 * *a0];
    a0[2] = v1;
    CQueuePriority::Heap_SiftDown(a0, 0);
    return v0;
}

