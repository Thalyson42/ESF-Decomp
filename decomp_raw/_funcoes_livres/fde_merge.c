// fde_merge @0x195e74 size=164
typedef struct st_595e74_2 {
    struct st_595e74_0 *field_0;
} st_595e74_2;

typedef struct st_595e74_1 {
    struct st_595e74_2 *field_0;
    unsigned int field_4;
} st_595e74_1;

typedef struct st_595e74_0 {
    char padding_0[8];
    unsigned int field_8;
} st_595e74_0;

unsigned int fde_merge(st_595e74_1 *a0, st_595e74_1 *a1)
{
    unsigned int v2;  // ecx
    unsigned int v3;  // ecx
    st_595e74_0 **v4;  // edi
    unsigned int *iter;  // esi
    unsigned int v6;  // eax
    unsigned int v0;  // [bp-0xc]
    unsigned int idx;  // [bp-0x8]

    idx = a1->field_4;
    if (!idx)
        return idx;
    v2 = a0->field_4;
    do
    {
        idx -= 1;
        v0 = *(int *)&a1->field_0[idx];
        v3 = v2;
        if (v3)
        {
            v3 = v2;
            if (*(int *)(*(int *)((char *)&a0->field_0[v3].field_0 - 4) + 8) - *(int *)(v0 + 8) > 0)
            {
                v4 = a0->field_0;
                iter = &v4[idx + v2];
                do
                {
                    *iter = *(int *)((char *)&v4[v2] - 4);
                    iter = (char *)iter - 4;
                    v3 = v2 - 1;
                } while (v2 != 1 && (v2 = v3, *(int *)(*(int *)((char *)&v4[v2] - 4) + 8) - *(int *)(v0 + 8) > 0));
            }
        }
    } while ((v2 = v3, *(unsigned int *)&a0->field_0[v2 + idx] = v0, idx));
    v6 = a1->field_4;
    a0->field_4 = a0->field_4 + v6;
    return v6;
}

