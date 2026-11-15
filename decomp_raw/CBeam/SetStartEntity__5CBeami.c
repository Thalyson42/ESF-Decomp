// SetStartEntity__5CBeami @0xafa80 size=97
typedef struct st_4afa80_0 {
    char padding_0[296];
    unsigned int field_128;
    char padding_12c[108];
    unsigned int field_198;
} st_4afa80_0;

typedef struct st_4afa80_1 {
    unsigned int field_0;
} st_4afa80_1;

extern st_4afa80_1 *g_6168e0;

unsigned int * SetStartEntity__5CBeami(st_4afa80_0 **a0, unsigned int a1)
{
    unsigned int v0;  // eax
    st_4afa80_0 *v1;  // eax

    *a0->field_128 = a1 & 0xfff | (*a0->field_128 & 0xf000) * 0x1000;
    v0 = g_6168e0(a1);
    v1 = *a0;
    v1->field_198 = v0;
    return v1;
}

