// HashSearch__6CGraphiiRi @0xe4540 size=245
typedef struct st_4e4540_2 {
    short field_0;
} st_4e4540_2;

typedef struct st_4e4540_1 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[8296];
    unsigned int field_207c;
    char padding_2080[60];
    struct st_4e4540_2 *field_20bc;
    unsigned int field_20c0;
} st_4e4540_1;

typedef struct st_4e4540_0 {
    unsigned int field_0;
} st_4e4540_0;

extern st_4e4540_0 *g_616918;
extern st_4e4540_0 *g_61691c;
extern st_4e4540_0 *g_616924;

unsigned int * HashSearch__6CGraphiiRi(st_4e4540_1 *a0, unsigned int a1, unsigned int a2, unsigned int *a3)
{
    unsigned int iter;  // edx
    unsigned int *v5;  // eax
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    char v3;  // [bp-0x8], Other Possible Types: unsigned int

    *(unsigned short *)&v2 = a1;
    v2 &= 0xffff;
    v2 |= a2 * 0x10000;
    g_616918(&v3);
    g_61691c(&v3, &v2, 4);
    v3 = g_616924(v3);
    v1 = (&a0->field_207c)[v3 & 15];
    iter = (v3 >> 4) % a0->field_20c0;
    if (*(short *)&a0->field_20bc[iter] != 0xffff)
    {
        v0 = a0->field_10;
        do
        {
            v5 = v0 + *(short *)&a0->field_20bc[iter] * 24;
            if (a1 == *v5 && a2 == v5[1])
                break;
            iter += v1;
            if ((int)iter >= (int)a0->field_20c0)
                iter -= a0->field_20c0;
        } while (*(short *)&a0->field_20bc[iter] != 0xffff);
    }
    *a3 = *(short *)&a0->field_20bc[iter];
    return a3;
}

