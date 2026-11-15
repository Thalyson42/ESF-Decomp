// GetEndPos__5CBeam @0xafbc0 size=110
typedef struct st_4afbc0_1 {
    char padding_0[136];
    char field_88;
    char padding_89[55];
    unsigned int field_c0;
    char padding_c4[52];
    unsigned int field_f8;
} st_4afbc0_1;

typedef struct st_4afbc0_0 {
    char padding_0[80];
    char field_50;
    char padding_51[191];
    unsigned int field_110;
    char padding_114[52];
    unsigned int field_148;
} st_4afbc0_0;

typedef struct st_4afbc0_2 {
    unsigned int field_0;
} st_4afbc0_2;

extern st_4afbc0_2 *g_engfuncs.pfnPEntityOfEntIndex;

st_4afbc0_1 * GetEndPos__5CBeam(st_4afbc0_0 **a0)
{
    st_4afbc0_1 *v0;  // eax

    if (*a0->field_148 & 15 && (*a0->field_148 & 15) != 3)
    {
        v0 = g_engfuncs.pfnPEntityOfEntIndex(*a0->field_110 & 0xfff);
        return (!v0 ? (struct st_4afbc0_0 *)&*a0->field_50 : (struct st_4afbc0_1 *)&v0->field_88);
    }
    return &*a0->field_50;
}

