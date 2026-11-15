// SetEndEntity__5CBeami @0xafaf0 size=97
typedef struct st_4afaf0_0 {
    char padding_0[272];
    unsigned int field_110;
    char padding_114[128];
    unsigned int field_194;
} st_4afaf0_0;

typedef struct st_4afaf0_1 {
    unsigned int field_0;
} st_4afaf0_1;

extern st_4afaf0_1 *g_6168e0;

unsigned int * SetEndEntity__5CBeami(st_4afaf0_0 **a0, unsigned int a1)
{
    unsigned int v0;  // eax
    st_4afaf0_0 *v1;  // eax

    *a0->field_110 = a1 & 0xfff | (*a0->field_110 & 0xf000) * 0x1000;
    v0 = g_6168e0(a1);
    v1 = *a0;
    v1->field_194 = v0;
    return v1;
}

