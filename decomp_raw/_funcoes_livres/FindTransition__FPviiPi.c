// FindTransition__FPviiPi @0x8f880 size=391
typedef struct st_48f880_0 {
    char padding_0[164];
    int field_a4;
    unsigned int field_a8;
    char padding_ac[64];
    unsigned int field_ec;
    unsigned int field_f0;
} st_48f880_0;

typedef struct st_48f880_1 {
    unsigned int field_0;
} st_48f880_1;

extern st_48f880_1 *g_6168b4;

int FindTransition__FPviiPi(st_48f880_0 *a0, unsigned int a1, int a2, int *a3)
{
    st_48f880_0 *v1;  // esi
    unsigned int v2;  // edi
    unsigned int v3;  // ecx
    int iter;  // edx
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    st_48f880_0 *v0;  // [bp-0xc]

    if (!a0)
        return a2;
    v1 = &a0->padding_0[a0->field_a8];
    if (*(int *)&v1->padding_0[176 * a1 + 160] && *(int *)&v1->padding_0[176 * a2 + 160])
    {
        v2 = (*a3 <= 0 ? *(int *)&v1->padding_0[176 * a1 + 160] : (&v1->field_a4)[44 * a1]);
        if (v2 == *(int *)&v1->padding_0[176 * a2 + 160])
        {
            *a3 = 1;
        }
        else
        {
            v0 = &a0->padding_0[a0->field_f0];
            v3 = *(&v0->padding_0[a0->field_ec * (v2 - 1) + *(int *)&v1->padding_0[176 * a2 + 160]] - 1);
            if (v3)
            {
                iter = 0;
                while (iter < a0->field_a4)
                {
                    v5 = iter * 176;
                    if (*(int *)&v1->padding_0[160 + v5] == v2 && *(int *)&v1->padding_0[v5 + 164] == v3)
                    {
                        *a3 = 1;
                        return iter;
                    }
                    v6 = iter * 176;
                    if (!*(int *)&v1->padding_0[v6 + 168])
                    {
                        iter += 1;
                    }
                    else if (*(int *)&v1->padding_0[v6 + 164] == v2)
                    {
                        if (*(int *)&v1->padding_0[160 + v6] == v3)
                        {
                            *a3 = 0xffffffff;
                            return iter;
                        }
                        iter += 1;
                    }
                    else
                    {
                        iter += 1;
                    }
                }
                g_6168b4(1, "error in transition graph");
            }
        }
    }
    return a2;
}

