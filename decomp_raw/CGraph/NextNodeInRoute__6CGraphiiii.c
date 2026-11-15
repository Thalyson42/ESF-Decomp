// NextNodeInRoute__6CGraphiiii @0xdf8e0 size=168
typedef struct st_4df8e0_0 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[4];
    unsigned int field_14;
    int field_18;
} st_4df8e0_0;

int NextNodeInRoute__6CGraphiiii(st_4df8e0_0 *a0, int a1, int a2, unsigned int a3, unsigned int a4)
{
    int iter;  // esi
    int i;  // edi
    char *v3;  // ecx
    char v4;  // dl
    char *v5;  // ecx
    unsigned int v0;  // [bp-0x8]

    iter = a1;
    i = a2 + 1;
    v0 = a0->field_c;
    v3 = a0->field_14 + *(int *)(a4 * 4 + a3 * 8 + v0 + iter * 88 + 40);
    while (i > 0)
    {
        v4 = *v3;
        v5 = v3 + 1;
        if (*v3 < 0)
        {
            if (i <= -v4)
                return a2;
            i -= -v4;
            v3 = v5;
        }
        else
        {
            if (i <= v4 + 1)
            {
                iter = a1 + *v5;
                if (iter >= a0->field_18)
                {
                    iter -= a0->field_18;
                }
                else if (iter < 0)
                {
                    iter += a0->field_18;
                }
                i = 0;
            }
            else
            {
                i = i - v4 - 1;
            }
            v3 = v5 + 1;
        }
    }
    return iter;
}

