// add_fdes @0x196138 size=120
typedef struct st_596138_1 {
    unsigned int *field_0;
} st_596138_1;

typedef struct st_596138_0 {
    struct st_596138_1 *field_0;
    unsigned int field_4;
} st_596138_0;

unsigned int * add_fdes(unsigned int *a0, st_596138_0 *a1, unsigned int *a2, unsigned int *a3)
{
    unsigned int *v2;  // esi
    unsigned int v3;  // ecx
    unsigned int v4;  // eax
    unsigned int *v5;  // eax
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v2 = a0;
    v1 = *a2;
    v0 = *a3;
    if (*v2)
    {
        do
        {
            if (v2[1])
            {
                v3 = v2[2];
                if (v3)
                {
                    *(unsigned int **)&a1->field_0[a1->field_4] = v2;
                    a1->field_4 = a1->field_4 + 1;
                    if (v3 < v1)
                        v1 = v3;
                    v4 = v3 + v2[3];
                    if (v4 > v0)
                        v0 = v4;
                }
            }
        } while ((v5 = (char *)v2 + *v2, v2 = v5 + 1, v5[1]));
    }
    *a2 = v1;
    *a3 = v0;
    return a3;
}

