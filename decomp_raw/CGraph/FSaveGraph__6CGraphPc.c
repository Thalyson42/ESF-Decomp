// FSaveGraph__6CGraphPc @0xe3fd0 size=533
typedef struct st_4e3fd0_0 {
    char padding_0[244];
    struct st_4e3fd0_1 *field_f4;
} st_4e3fd0_0;

typedef struct st_4e3fd0_1 {
    unsigned int field_0;
} st_4e3fd0_1;

typedef struct st_4e3fd0_2 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[4];
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    char padding_28[8340];
    int field_20bc;
    int field_20c0;
} st_4e3fd0_2;

extern st_4e3fd0_0 g_engfuncs;
extern st_4e3fd0_1 *g_6168b4;
extern st_4e3fd0_1 *g_61694c;

unsigned int FSaveGraph__6CGraphPc(st_4e3fd0_2 *a0, int a1)
{
    int v6;  // edi
    unsigned int *v7;  // eax
    st_4e3fd0_2 *v8;  // eax
    st_4e3fd0_2 *v9;  // eax
    unsigned int v0;  // [bp-0x103c]
    unsigned int v1;  // [bp-0x1038]
    char *v2;  // [bp-0x1034]
    st_4e3fd0_0 *v3;  // [bp-0x100c]
    unsigned int v4;  // [bp-0x1008]
    char v5;  // [bp-0x1004]

    v4 = 16;
    if (!a0->field_0 || !a0->field_4)
    {
        v1 = "Graph not ready!\n";
        v0 = 2;
        v7 = g_6168b4;
    }
    else
    {
        v3 = &g_engfuncs.padding_0[0];
        g_61694c(&v5);
        sub_48c150(&v5, "/maps");
        sub_487e20(&v5, 0x1ff);
        sub_48c150(&v5, "/graphs");
        sub_487e20(&v5, 0x1ff);
        sub_48c150(&v5, "/");
        sub_48c150(&v5, a1);
        sub_48c150(&v5, ".nod");
        v6 = sub_48d440(&v5, "wb");
        v3->field_f4(2, "Created: %s\n", &v5);
        if (!v6)
        {
            v2 = &v5;
            v1 = "Couldn't Create: %s\n";
            v0 = 2;
            v7 = v3->field_f4;
        }
        else
        {
            sub_48d9f0(&v4, 4, 1, v6);
            sub_48d9f0(a0, 8396, 1, v6);
            sub_48d9f0(a0->field_c, 88, a0->field_18, v6);
            sub_48d9f0(a0->field_10, 24, a0->field_1c, v6);
            sub_48d9f0(a0->field_24, 16, a0->field_18, v6);
            v8 = a0;
            if (v8->field_14 && v8->field_20)
                sub_48d9f0(a0->field_14, 1, v8->field_20, v6);
            v9 = a0;
            if (v9->field_20bc && v9->field_20c0)
                sub_48d9f0(a0->field_20bc, 2, v9->field_20c0, v6);
            sub_48c560(v6);
            return 1;
        }
    }
    v7(v0, v1);
    return 0;
}

