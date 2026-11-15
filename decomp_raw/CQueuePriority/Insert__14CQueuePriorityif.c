// Insert__14CQueuePriorityif @0xe3910 size=90
int Insert__14CQueuePriorityif(unsigned int *a0, unsigned int a1, float a2)
{
    if (*a0 != 100)
    {
        *(float *)&a0[2 + 2 * *a0] = a2;
        a0[1 + 2 * *a0] = a1;
        *a0 = *a0 + 1;
        return CQueuePriority::Heap_SiftUp(a0);
    }
    return printf@GLIBC_2.0("Queue is full!\n");
}

