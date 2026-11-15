// HasTarget__13CMultiManageri @0x12b4f0 size=118
typedef struct st_52b4f0_0 {
    char padding_0[260];
    int field_104;
    char padding_108[8];
    unsigned int field_110;
} st_52b4f0_0;

typedef struct st_52b4f0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_52b4f0_1;

extern st_52b4f0_1 *gpGlobals;

unsigned int HasTarget__13CMultiManageri(st_52b4f0_0 *a0, unsigned int a1)
{
    int v1;  // esi
    unsigned int *v0;  // [bp-0x8]

    v1 = 0;
    if (0 < a0->field_104)
    {
        v0 = &a0->field_110;
        do
        {
            if (!strcmp@GLIBC_2.0(a1 + gpGlobals->field_98, gpGlobals->field_98 + v0[v1]))
                return 1;
        } while ((v1 += 1, v1 < a0->field_104));
    }
    return 0;
}

