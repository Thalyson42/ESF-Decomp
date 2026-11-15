// BuildLinkLookups__6CGraph @0xe4a90 size=202
typedef struct st_4e4a90_0 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[8];
    int field_1c;
    char padding_20[8348];
    unsigned int field_20bc;
    int field_20c0;
} st_4e4a90_0;

typedef struct st_4e4a90_1 {
    unsigned int field_0;
} st_4e4a90_1;

extern st_4e4a90_1 *g_6168b4;

unsigned int BuildLinkLookups__6CGraph(st_4e4a90_0 *a0)
{
    int v0;  // eax
    unsigned int v1;  // eax
    int idx;  // esi
    int j;  // esi
    int *v4;  // edx
    unsigned int v5;  // eax

    v0 = a0->field_1c * 3 / 2 + 3;
    a0->field_20c0 = v0;
    sub_4891a0(a0, v0);
    v1 = sub_48ccc0(2, a0->field_20c0);
    a0->field_20bc = v1;
    if (!v1)
        return g_6168b4(2, "Couldn't allocated Link Lookup Table.\n");
    idx = 0;
    if (0 < a0->field_20c0)
    {
        do
        {
            v1 = a0->field_20bc;
            *(unsigned short *)(v1 + idx * 2) = 0xffff;
            idx += 1;
        } while (idx < a0->field_20c0);
    }
    j = 0;
    if (0 >= a0->field_1c)
        return v1;
    do
    {
        v4 = a0->field_10 + j * 24;
        v5 = sub_48c660(a0, *v4, v4[1], j);
        j += 1;
    } while (j < a0->field_1c);
    return v5;
}

