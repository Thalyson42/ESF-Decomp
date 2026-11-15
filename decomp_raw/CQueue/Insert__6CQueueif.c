// Insert__6CQueueif @0xe3830 size=114
unsigned int Insert__6CQueueif(unsigned int *a0, unsigned int a1, float a2)
{
    unsigned int v0;  // eax

    if (*a0 == 100)
        return sub_48c360("Queue is full!\n");
    a0[202] = a0[202] + 1;
    if (a0[202] == 100)
        a0[202] = 0;
    a0[1 + 2 * a0[202]] = a1;
    v0 = a0[202] * 8;
    *(float *)(v0 + (char *)a0 + 8) = a2;
    *a0 = *a0 + 1;
    return v0;
}

