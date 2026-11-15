// GetStartPos__5CBeam @0xafb60 size=91
typedef struct st_4afb60_1 {
    char padding_0[136];
    char field_88;
    char padding_89[151];
    unsigned int field_120;
    char padding_124[28];
    unsigned int field_140;
} st_4afb60_1;

typedef struct st_4afb60_0 {
    char padding_0[8];
    char field_8;
    char padding_9[287];
    unsigned int field_128;
    char padding_12c[28];
    unsigned int field_148;
} st_4afb60_0;

typedef struct st_4afb60_2 {
    unsigned int field_0;
} st_4afb60_2;

extern st_4afb60_2 *g_6168e0;

st_4afb60_1 * GetStartPos__5CBeam(st_4afb60_0 **a0)
{
    return ((*a0->field_148 & 15) == 2 ? g_6168e0(*a0->field_128 & 0xfff) + 0x88 : (struct st_4afb60_0 *)&*a0->field_8);
}

