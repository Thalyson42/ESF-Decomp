// HashInsert__6CGraphiii @0xe4470 size=204
typedef struct st_4e4470_2 {
    unsigned short field_0;
} st_4e4470_2;

typedef struct st_4e4470_1 {
    char padding_0[8316];
    unsigned int field_207c;
    char padding_2080[60];
    struct st_4e4470_2 *field_20bc;
    unsigned int field_20c0;
} st_4e4470_1;

typedef struct st_4e4470_0 {
    unsigned int field_0;
} st_4e4470_0;

extern st_4e4470_0 *g_616918;
extern st_4e4470_0 *g_61691c;
extern st_4e4470_0 *g_616924;

int HashInsert__6CGraphiii(st_4e4470_1 *a0, unsigned short a1, unsigned short a2, unsigned int a3)
{
    unsigned int iter;  // edx
    unsigned int v0;  // [bp-0xc]
    char v1;  // [bp-0x8], Other Possible Types: unsigned int

    *(unsigned short *)&v0 = a1;
    v0 &= 0xffff;
    v0 |= a2 * 0x10000;
    g_616918(&v1);
    g_61691c(&v1, &v0, 4);
    v1 = g_616924(v1);
    for (iter = (v1 >> 4) % a0->field_20c0; *(short *)&a0->field_20bc[iter] != 0xffff; iter -= a0->field_20c0)
    {
        iter += (&a0->field_207c)[v1 & 15];
    }
    *(unsigned short *)&a0->field_20bc[iter] = a3;
    return a3;
}

