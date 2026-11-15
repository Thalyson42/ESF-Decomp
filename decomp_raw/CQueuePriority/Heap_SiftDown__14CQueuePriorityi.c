// Heap_SiftDown__14CQueuePriorityi @0xe39c0 size=167
typedef struct st_4e39c0_0 {
    int field_0;
    char padding_4[4];
    float field_8;
} st_4e39c0_0;

int Heap_SiftDown__14CQueuePriorityi(st_4e39c0_0 *a0, int a1)
{
    int v4;  // esi
    int i;  // ecx
    st_4e39c0_0 *v6;  // edi
    unsigned int v8;  // edx
    st_4e39c0_0 *v9;  // edi
    st_4e39c0_0 *v10;  // ecx
    unsigned int *v0;  // [bp-0x20]
    int v1;  // [bp-0x14]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0xc]

    v4 = a1;
    i = v4 * 2 + 1;
    v6 = a0;
    v3 = CONCAT(*(unsigned int *)&(&v6->field_8)[2 * v4], *(int *)&(v6->padding_4)[2 * v4]);
    if (i < v6->field_0)
    {
        v0 = &v6->field_8;
        v2 = &v3;
        do
        {
            v1 = v4 * 2 + 2;
            if (v1 < a0->field_0 && *(float *)&v0[2 * v1] < *(float *)&v0[2 * i])
                i = v1;
            if ((isunordered(*(float *)((char *)&v3 + 4), *(float *)&v0[2 * i]) ? 0x44 : *(float *)((char *)&v3 + 4) == *(float *)&v0[2 * i] ? 63 : *(float *)((char *)&v3 + 4) < *(float *)&v0[2 * i] ? 0 : 0xff) < 64)
                break;
            v8 = *(unsigned int *)&(&a0->field_8)[2 * i];
            v9 = a0;
            *(int *)&(v9->padding_4)[2 * v4] = *(int *)&(a0->padding_4)[2 * i];
            *(unsigned int *)&(&v9->field_8)[2 * v4] = v8;
            v4 = i;
            i = v4 * 2 + 1;
        } while (i < v9->field_0);
    }
    v10 = a0;
    *(unsigned int *)&(v10->padding_4)[2 * v4] = v3;
    *(unsigned int *)&(&v10->field_8)[2 * v4] = *(unsigned int *)((void*)&v3 + 4);
    return v3;
}

