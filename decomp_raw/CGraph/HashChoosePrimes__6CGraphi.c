// HashChoosePrimes__6CGraphi @0xe4640 size=351
typedef struct st_4e4640_0 {
    unsigned int field_0;
} st_4e4640_0;

extern unsigned int Primes[4];
extern int g_5c11bc;
extern st_4e4640_0 *g_616928;

unsigned int HashChoosePrimes__6CGraphi(int *a0, unsigned int a1)
{
    int v4;  // eax
    unsigned int v5;  // edi
    unsigned int *v14;  // esi
    unsigned int v15;  // eax
    unsigned int idx;  // esi
    unsigned int v7;  // ecx
    int index;  // ecx
    int idx1;  // edx
    int *v10;  // edi
    unsigned int v11;  // esi
    unsigned int *v12;  // edx
    unsigned int v13;  // ecx
    int *v0;  // [bp-0x14]
    int iter;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    int v3;  // [bp-0x8]

    v4 = a1 / 2;
    if (v4 > g_5c11bc)
        v4 = g_5c11bc;
    if (v4 < 0)
        v4 += 15;
    v3 = v4 >> 4;
    v2 = 1;
    iter = 0;
    do
    {
        v5 = Primes;
        idx = 0;
        if (Primes)
        {
            v0 = a0 + 2079;
            do
            {
                if (idx && !(a1 % Primes[idx]))
                    continue;
                v7 = Primes[idx];
                if ((int)v5 > (int)v2 || (int)v2 > (int)v7)
                {
                    v5 = v7;
                }
                else if ((int)(v2 - v5) <= (int)(v7 - v2))
                {
                    index = iter;
                    v0[index] = v5;
                    iter = index + 1;
                    break;
                }
                else
                {
                    idx1 = iter;
                    v0[idx1] = v7;
                    iter = idx1 + 1;
                    break;
                }
            } while ((idx += 1, Primes[idx]));
        }
    } while ((v2 += v3, iter <= 15));
    iter = 0;
    do
    {
        a0[2079 + iter] = a1 - a0[2079 + iter];
        iter += 2;
    } while (iter <= 15);
    iter = 0;
    v10 = a0 + 2079;
    do
    {
        v11 = 15 - iter;
        v12 = g_616928(0, v11) * 4;
        v13 = *(int *)(v12 + v10);
        v14 = v11 * 4;
        v15 = *(int *)(v14 + v10);
        *(unsigned int *)(v12 + v10) = v15;
        *(unsigned int *)(v14 + v10) = v13;
        iter += 1;
    } while (iter <= 14);
    return v15;
}

