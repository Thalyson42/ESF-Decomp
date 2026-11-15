// FillInNames__10CChatClassP4CBotPCcPcT2T2 @0x1480f0 size=1102
typedef struct st_5480f0_0 {
    char field_0;
    char field_1;
    char field_2;
    char padding_3[141];
    int field_90;
    char padding_94[4];
    unsigned int field_98;
} st_5480f0_0;

typedef struct st_5480f0_2 {
    struct st_5480f0_1 *field_0;
    char padding_4[2560];
    int field_a04;
    char padding_a08[24];
    char field_a20;
    char padding_a21[135];
    unsigned int field_aa8;
} st_5480f0_2;

typedef struct st_5480f0_1 {
    char padding_0[464];
    unsigned int field_1d0;
} st_5480f0_1;

typedef struct st_5480f0_3 {
    unsigned int field_0;
} st_5480f0_3;

extern st_5480f0_3 *g_616928;
extern st_5480f0_0 *gpGlobals;

st_5480f0_0 * FillInNames__10CChatClassP4CBotPCcPcT2T2(int a0, st_5480f0_2 *a1, st_5480f0_0 *a2, char *a3, char *a4, int a5)
{
    unsigned int v14;  // edi
    st_5480f0_0 *v15;  // eax
    char *v24;  // eax
    char *v25;  // edi
    char *v26;  // edi
    st_5480f0_0 *v27;  // esi
    st_5480f0_0 *v28;  // eax
    st_5480f0_2 *v16;  // esi
    unsigned int v17;  // edi
    char *v18;  // esi
    int v19;  // esi
    char *v20;  // eax
    char *v21;  // esi
    unsigned int iter;  // ecx
    char *v23;  // edi
    st_5480f0_0 *v0;  // [bp-0x4bc]
    int v1;  // [bp-0x4b8]
    int v2;  // [bp-0x4a8]
    int v3;  // [bp-0x4a4]
    char *v4;  // [bp-0x484]
    int v5;  // [bp-0x480]
    int iter1;  // [bp-0x47c]
    char v7;  // [bp-0x475]
    int v8;  // [bp-0x474]
    unsigned int v9;  // [bp-0x470]
    char *node;  // [bp-0x46c]
    st_5480f0_0 *iter2;  // [bp-0x468]
    char v12;  // [bp-0x464]
    char v13;  // [bp-0x44]

    v8 = 0;
    iter2 = NULL;
    node = NULL;
    *a3 = 0;
    v2 = "%n";
    v14 = sub_48b210(a2, v2);
    v1 = "%r";
    v0 = a2;
    while (1)
    {
        v9 = sub_48b210(v0, v1);
        if (!v14)
        {
            if (!v9)
                break;
            if (1)
                goto LABEL_548163;
        }
        v8 = v14 - (char *)a2;
LABEL_548163:
        if (!v9 || v8 < v9 - (char *)a2 && v14)
        {
            for (; a2 + iter2 < v14; node += 1)
            {
                *(char *)(node + a3) = *(char *)(iter2 + a2);
                iter2 = &iter2->field_1;
            }
            v24 = a3;
            *(char *)(node + v24) = 0;
            iter2 = &iter2->field_2;
            sub_48c150(v24, a4);
            iter = 0xffffffff;
            v25 = a4;
            do
            {
                v26 = v25;
            } while (iter && (iter -= 1, v25 = v26 + 1, *v26));
        }
        else
        {
            v5 = 0;
            iter1 = 1;
            v15 = gpGlobals;
            if (iter1 <= gpGlobals->field_90)
            {
                do
                {
                    v16 = sub_48a500(iter1);
                    if (v16 == a1)
                        continue;
                    if (!a1->field_a20)
                    {
                        *(unsigned short *)&v3 = 0;
                        *(unsigned short *)&v2 = 0;
                        if (!(char)sub_489a70(v16, v2, v3))
                            continue;
                    }
                    else if (!(1 << ((char)(iter1 - 1) & 31) & a1->field_aa8))
                    {
                        continue;
                    }
                    v2 = v16->field_0->field_1d0 + gpGlobals->field_98;
                    sub_48e110(&(&v12)[33 * v5], v2);
                    v5 += 1;
                } while ((iter1 += 1, v15 = gpGlobals, iter1 <= gpGlobals->field_90));
            }
            if (v5 <= 1)
                return v15;
            v17 = g_616928(0, v5 - 1);
            v7 = 0;
            v18 = &(&v12)[33 * v17];
            if (!sub_488af0(v18, a4) || !sub_488af0(v18, a5))
                v7 = 1;
            iter1 = 0;
            if (v7)
            {
                v4 = &v12;
                do
                {
                    v17 = g_616928(0, v5 - 1);
                    v7 = 0;
                    v19 = &v4[33 * v17];
                    if (!sub_488af0(v19, a4) || !sub_488af0(v19, a5))
                        v7 = 1;
                } while ((iter1 += 1, v7 && iter1 <= 19));
            }
            sub_48a7c0(a0, a1->field_a04, &(&v12)[33 * v17], &v13);
            for (; a2 + iter2 < v9; node += 1)
            {
                *(char *)(node + a3) = *(char *)(iter2 + a2);
                iter2 = &iter2->field_1;
            }
            v20 = a3;
            *(char *)(node + v20) = 0;
            iter2 = &iter2->field_2;
            v21 = &v13;
            sub_48c150(v20, &v13);
            iter = 0xffffffff;
            do
            {
                v23 = v21;
            } while (iter && (iter -= 1, v21 = v23 + 1, *v23));
        }
        node = &node[~iter] - 1;
        *(char *)(node + a3) = 0;
        v2 = "%n";
        v27 = a2 + iter2;
        v14 = sub_48b210(v27, v2);
        v1 = "%r";
        v0 = v27;
    }
    v28 = a2;
    if (*(char *)(iter2 + v28))
    {
        do
        {
            *(char *)(node + a3) = *(char *)(iter2 + a2);
            iter2 = &iter2->field_1;
            node += 1;
            v28 = iter2;
        } while (*(char *)(v28 + a2));
    }
    *(char *)(node + a3) = 0;
    return v28;
}

