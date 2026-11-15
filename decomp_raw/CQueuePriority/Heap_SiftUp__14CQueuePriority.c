// Heap_SiftUp__14CQueuePriority @0xe3a70 size=143
typedef struct st_4e3a70_0 {
    unsigned int field_0;
    char padding_4[4];
    float field_8;
} st_4e3a70_0;

st_4e3a70_0 * Heap_SiftUp__14CQueuePriority(st_4e3a70_0 *a0)
{
    st_4e3a70_0 *v4;  // eax
    unsigned int i;  // ecx
    unsigned int *v7;  // edi
    st_4e3a70_0 *v8;  // edi
    unsigned int v9;  // edx
    st_4e3a70_0 *v10;  // esi
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int *v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x8]

    v4 = a0;
    v3 = v4->field_0 - 1;
    if (v4->field_0 == 1)
        return v4;
    v2 = &v4->field_8;
    do
    {
        i = (v3 - 1) / 2;
        if ((isunordered(*(float *)&v2[2 * i], *(float *)&v2[2 * v3]) ? 0x44 : *(float *)&v2[2 * i] == *(float *)&v2[2 * v3] ? 63 : *(float *)&v2[2 * i] < *(float *)&v2[2 * v3] ? 0 : 0xff) < 64)
            break;
        v7 = &(&a0->field_0)[2 * v3 + 1];
        v0 = *v7;
        v1 = v7[1];
        v8 = a0;
        v9 = *(unsigned int *)&(&v8->field_8)[2 * i];
        *(int *)&(v8->padding_4)[2 * v3] = *(int *)&(v8->padding_4)[2 * i];
        *(unsigned int *)&(&v8->field_8)[2 * v3] = v9;
        v10 = v8;
        *(unsigned int *)&(v10->padding_4)[2 * i] = v0;
        *(unsigned int *)&(&v10->field_8)[2 * i] = v1;
        v3 = i;
    } while (i);
    return v4;
}

