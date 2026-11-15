// ComputeStaticRoutingTables__6CGraph @0xe5260 size=1664
typedef struct st_4e5260_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[4];
    struct st_4e5260_0 *field_14;
    int field_18;
    char padding_1c[4];
    struct st_4e5260_0 *field_20;
} st_4e5260_1;

typedef struct st_4e5260_0 {
    char field_0;
} st_4e5260_0;

typedef struct st_4e5260_2 {
    unsigned int field_0;
} st_4e5260_2;

extern st_4e5260_2 *g_6168b4;

st_4e5260_1 * ComputeStaticRoutingTables__6CGraph(st_4e5260_1 *a0)
{
    st_4e5260_1 *v23;  // edi
    int k;  // edx
    unsigned int v33;  // ecx
    unsigned int v34;  // edi
    int v35;  // ecx
    unsigned int v36;  // edx
    unsigned int v37;  // ecx
    unsigned int v38;  // edi
    st_4e5260_1 *v39;  // edx
    char *v40;  // esi
    unsigned int v41;  // cc_op
    unsigned int v42;  // cc_dep1
    st_4e5260_1 *v25;  // edi
    unsigned int v43;  // cc_dep2
    char *v44;  // edi
    char *v45;  // ecx
    char *v46;  // esi
    char *v47;  // edi
    unsigned int v48;  // 4101
    char *v49;  // esi
    unsigned int v50;  // cc_op
    unsigned int v51;  // cc_dep1
    unsigned int v52;  // cc_dep2
    int idx;  // esi
    char *v53;  // edi
    char *v54;  // ecx
    char *v55;  // esi
    char *v56;  // edi
    unsigned int v57;  // 4101
    char *v58;  // esi
    st_4e5260_1 *v59;  // edi
    st_4e5260_1 *v60;  // ecx
    char *v61;  // eax
    int idx1;  // edx
    st_4e5260_1 *v28;  // edx
    int index;  // edx
    int v30;  // edx
    char *iter;  // esi
    unsigned int v32;  // edx
    unsigned int v0;  // [bp-0x60]
    unsigned int v1;  // [bp-0x60]
    int v2;  // [bp-0x58], Other Possible Types: unsigned int
    st_4e5260_0 **v3;  // [bp-0x54]
    char *v4;  // [bp-0x50]
    char *v5;  // [bp-0x4c]
    unsigned int v6;  // [bp-0x48]
    int m;  // [bp-0x44]
    unsigned int node;  // [bp-0x40]
    int v9;  // [bp-0x3c]
    int v10;  // [bp-0x38]
    unsigned int v11;  // [bp-0x34]
    unsigned int v12;  // [bp-0x30]
    int v13;  // [bp-0x2c]
    int iter1;  // [bp-0x28]
    int v15;  // [bp-0x24]
    int j;  // [bp-0x20]
    int i;  // [bp-0x1c]
    unsigned int iter2;  // [bp-0x18]
    char *v19;  // [bp-0x14]
    unsigned short *v20;  // [bp-0x10]
    unsigned int *v21;  // [bp-0xc]
    unsigned short *v22;  // [bp-0x8]

    v22 = sub_48c340(a0->field_18 * a0->field_18 * 2);
    v21 = sub_48c340(a0->field_18 * 4);
    v23 = a0;
    v20 = sub_48c340(v23->field_18 * 2);
    v19 = sub_48c340(v23->field_18 * 2);
    if (v22)
    {
        if (v21 && v20 && v19)
        {
            iter2 = 0;
            i = 0;
            do
            {
                j = 0;
                do
                {
                    if (!j)
                    {
                        v15 = 0;
                    }
                    else if (j == 1)
                    {
                        v15 = 832;
                    }
                    iter1 = 0;
                    if (iter1 < a0->field_18)
                    {
                        do
                        {
                            k = 0;
                            if (NULL < a0->field_18)
                            {
                                do
                                {
                                    v25 = a0;
                                    v22[k + v25->field_18 * iter1] = 0xffff;
                                    k += 1;
                                } while (k < v25->field_18);
                            }
                        } while ((iter1 += 1, iter1 < a0->field_18));
                    }
                    iter1 = 0;
                    if (iter1 < a0->field_18)
                    {
                        do
                        {
                            v0 = a0->field_18 - 1;
                            if (a0->field_18 - 1 >= NULL)
                            {
                                do
                                {
                                    v1 = v0;
                                    if (v22[v1 + a0->field_18 * iter1] == 0xffff)
                                    {
                                        v2 = sub_48ad80(a0, v21, iter1, v1, i, v15);
                                        if (v2 > 1)
                                        {
                                            idx = 0;
                                            if (NULL < v2 - 1)
                                            {
                                                v13 = v2 - 1;
                                                do
                                                {
                                                    v12 = v21[idx];
                                                    v11 = v21[1 + idx];
                                                    idx1 = idx + 1;
                                                    if (idx1 < v2)
                                                    {
                                                        do
                                                        {
                                                            v22[v21[idx1] + a0->field_18 * v12] = v11;
                                                            idx1 += 1;
                                                        } while (idx1 < v2);
                                                    }
                                                } while ((idx += 1, idx < v13));
                                            }
                                        }
                                        else
                                        {
                                            v28 = a0;
                                            v22[v1 + v28->field_18 * iter1] = iter1;
                                            v22[iter1 + v28->field_18 * v1] = v1;
                                        }
                                    }
                                } while ((v0 = v1 - 1, (int)(v1 - 1) >= 0));
                            }
                        } while ((iter1 += 1, iter1 < a0->field_18));
                    }
                    iter1 = 0;
                    if (iter1 < a0->field_18)
                    {
                        v3 = i * 8 + j * 4;
                        do
                        {
                            for (index = 0; index < a0->field_18; index += 1)
                            {
                                v20[index] = v22[index + a0->field_18 * iter1];
                            }
                            v10 = 9999999;
                            v9 = 0;
                            v30 = 0;
                            node = 0;
                            iter = v19;
                            m = 0;
                            if (NULL < a0->field_18)
                            {
                                do
                                {
                                    v2 = 0;
                                    if (v20[m] == v10)
                                        v2 = v30 <= 126;
                                    v6 = 0;
                                    if (v20[m] == m)
                                        v6 = v9 <= 127;
                                    if (v30)
                                    {
                                        if (!v2)
                                        {
                                            node += 2;
                                            *iter = (char)v30 - 1;
                                            iter += 1;
                                            v32 = v10 - iter1;
                                            v33 = v32 + a0->field_18;
                                            v34 = v32 - a0->field_18;
                                            if (v32 + 128 <= 0xff)
                                            {
                                                *iter = v32;
                                                iter += 1;
                                            }
                                            else if (v33 + 128 <= 0xff)
                                            {
                                                *iter = v33;
                                                iter += 1;
                                            }
                                            else if (v34 + 128 <= 0xff)
                                            {
                                                *iter = v34;
                                                iter += 1;
                                            }
                                            else
                                            {
                                                g_6168b4(2, "Nodes need sorting (%d,%d)!\n", v10, iter1);
                                            }
                                            v30 = 0;
                                            if (!v6)
                                            {
                                                v30 = 1;
                                                continue;
                                            }
                                        }
                                        else
                                        {
                                            v30 += 1;
                                            continue;
                                        }
                                        goto LABEL_4e561a;
                                    }
                                    if (v9)
                                    {
                                        if (!v6)
                                        {
                                            if (v9 == 1 && v2)
                                            {
                                                v30 = 2;
                                                v9 = 0;
                                                goto LABEL_4e5621;
                                            }
                                            else
                                            {
                                                node += 1;
                                                *iter = -(char)v9;
                                                iter += 1;
                                                v9 = 0;
                                                v30 = 1;
                                                goto LABEL_4e5621;
                                            }
                                        }
                                        goto LABEL_4e561a;
                                    }
                                    else if (v6)
                                    {
LABEL_4e561a:
                                        v9 += 1;
                                        continue;
                                    }
                                    else
                                    {
                                        v30 = 1;
                                    }
LABEL_4e5621:
                                    v35 = m;
                                    v10 = v20[v35];
                                    m = v35 + 1;
                                } while (m < a0->field_18);
                            }
                            if (v30)
                            {
                                node += 2;
                                *iter = (char)v30 - 1;
                                iter += 1;
                                v36 = v10 - iter1;
                                v37 = v36 + a0->field_18;
                                v38 = v36 - a0->field_18;
                                if (v36 + 128 <= 0xff)
                                {
                                    *iter = v36;
                                    iter += 1;
                                }
                                else if (v37 + 128 <= 0xff)
                                {
                                    *iter = v37;
                                    iter += 1;
                                }
                                else if (v38 + 128 <= 0xff)
                                {
                                    *iter = v38;
                                    iter += 1;
                                }
                                else
                                {
                                    g_6168b4(2, "Nodes need sorting (%d,%d)!\n", v10, iter1);
                                }
                            }
                            if (v9)
                            {
                                node += 1;
                                *iter = -(char)v9;
                                iter += 1;
                            }
                            v5 = iter - v19;
                            v39 = a0;
                            if (v39->field_14)
                            {
                                v4 = NULL;
                                if (v4 < v39->field_20 - v5)
                                {
                                    v40 = v39->field_14;
                                    v41 = 13;
                                    v42 = 0;
                                    v43 = 0;
                                    v44 = v19;
                                    v45 = v5;
                                    do
                                    {
                                        v46 = v40;
                                        v47 = v44;
                                        if (!v45)
                                            break;
                                        v45 -= 1;
                                        v41 = 4;
                                        v42 = *v46;
                                        v43 = *v47;
                                        v44 = v47 + 1;
                                        v40 = v46 + 1;
                                    } while (*v46 == *v47);
                                    v48 = _ccall(4, v41, v42, v43, 0);
                                    if (!(v48 & 1))
                                    {
                                        do
                                        {
                                            v4 += 1;
                                            if (v4 >= v39->field_20 - v5)
                                                goto LABEL_4e5760;
                                            v49 = v4 + a0->field_14;
                                            v50 = 13;
                                            v51 = 0;
                                            v52 = 0;
                                            v53 = v19;
                                            v54 = v5;
                                            do
                                            {
                                                v55 = v49;
                                                v56 = v53;
                                                if (!v54)
                                                    break;
                                                v54 -= 1;
                                                v50 = 4;
                                                v51 = *v55;
                                                v52 = *v56;
                                                v53 = v56 + 1;
                                                v49 = v55 + 1;
                                            } while (*v55 == *v56);
                                            v57 = _ccall(4, v50, v51, v52, 0);
                                        } while (!(v57 & 1));
                                    }
                                    if (v4 < a0->field_20 - v5)
                                    {
                                        *(char **)((char *)v3 + a0->field_c + 88 * iter1 + 40) = v4;
                                        continue;
                                    }
                                }
LABEL_4e5760:
                                v58 = sub_48ccc0(1, v5 + a0->field_20);
                                v59 = a0;
                                sub_48c4b0(v58, v59->field_14, v59->field_20);
                                sub_48cf10(v59->field_14);
                                v59->field_14 = v58;
                                sub_48c4b0(v58 + v59->field_20, v19, v5);
                                v60 = a0;
                                *(struct st_4e5260_0 **)((char *)v3 + v59->field_c + 88 * iter1 + 40) = v60->field_20;
                                v60->field_20 = v60->field_20 + v5;
                                iter2 += node;
                            }
                            else
                            {
                                a0->field_20 = v5;
                                v61 = sub_48ccc0(1, v5);
                                a0->field_14 = v61;
                                sub_48c4b0(v61, v19, v5);
                                *(unsigned int *)((char *)v3 + a0->field_c + 88 * iter1 + 40) = 0;
                                iter2 += node;
                            }
                        } while ((iter1 += 1, iter1 < a0->field_18));
                    }
                    j += 1;
                } while (j <= 1);
                i += 1;
            } while (i <= 3);
            g_6168b4(2, "Size of Routes = %d\n", iter2);
        }
        if (v22)
            sub_48d4e0(v22);
    }
    if (v20)
        sub_48d4e0(v20);
    if (v19)
        sub_48d4e0(v19);
    if (v21)
        sub_48d4e0(v21);
    a0->field_8 = 1;
    return a0;
}

