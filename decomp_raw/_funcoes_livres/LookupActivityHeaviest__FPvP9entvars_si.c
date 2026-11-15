// LookupActivityHeaviest__FPvP9entvars_si @0x8ef90 size=106
typedef struct st_48ef90_0 {
    char padding_0[164];
    int field_a4;
    unsigned int field_a8;
} st_48ef90_0;

int LookupActivityHeaviest__FPvP9entvars_si(st_48ef90_0 *a0, unsigned int a1, unsigned int a2)
{
    st_48ef90_0 *v2;  // ecx
    int v3;  // edx
    unsigned int v4;  // eax
    int v0;  // [bp-0xc]
    int v1;  // [bp-0x8]

    if (!a0)
        return 0;
    v2 = &a0->padding_0[a0->field_a8];
    v0 = 0;
    v1 = -0x1;
    v3 = 0;
    if (NULL < a0->field_a4)
    {
        do
        {
            v4 = v3 * 176;
            if (*(int *)&v2->padding_0[40 + v4] == a2 && *(int *)&v2->padding_0[44 + v4] > v0)
            {
                v0 = *(int *)&v2->padding_0[44 + v4];
                v1 = v3;
            }
        } while ((v3 += 1, v3 < a0->field_a4));
    }
    return v1;
}

