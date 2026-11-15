// CopyToArray__6CStackPi @0xe37d0 size=40
typedef struct st_4e37d0_0 {
    unsigned int field_0;
    char padding_4[396];
    int field_190;
} st_4e37d0_0;

unsigned int CopyToArray__6CStackPi(st_4e37d0_0 *a0, unsigned int *a1)
{
    int idx;  // edx
    unsigned int v1;  // eax

    idx = 0;
    if (0 < a0->field_190)
    {
        do
        {
            v1 = (&a0->field_0)[idx];
            a1[idx] = v1;
            idx += 1;
        } while (idx < a0->field_190);
    }
    return v1;
}

