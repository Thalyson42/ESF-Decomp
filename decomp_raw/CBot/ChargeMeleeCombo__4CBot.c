// ChargeMeleeCombo__4CBot @0x156040 size=2717
typedef struct st_556040_7 {
    char padding_0[296];
    unsigned int field_128;
    char padding_12c[1360];
    char field_67c;
    char padding_67d[7];
    struct st_556040_4 *field_684;
    char padding_688[388];
    struct st_556040_8 *field_80c;
    unsigned int field_810;
} st_556040_7;

typedef struct st_556040_8 {
    struct st_556040_6 *field_0;
} st_556040_8;

typedef struct st_556040_4 {
    char padding_0[52];
    unsigned int field_34;
} st_556040_4;

typedef struct st_556040_6 {
    char padding_0[4];
    struct st_556040_5 *field_4;
} st_556040_6;

typedef struct st_556040_5 {
    char padding_0[8];
    unsigned int field_8;
} st_556040_5;

typedef struct st_556040_2 {
    struct st_556040_3 *field_0;
    struct st_556040_2 *field_4;
    struct st_556040_2 *field_8;
} st_556040_2;

typedef struct st_556040_3 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
} st_556040_3;

typedef struct st_556040_0 {
    float field_0;
} st_556040_0;

typedef struct st_556040_1 {
    unsigned int field_0;
} st_556040_1;

extern unsigned int FindSelection__t12TMultiChoice1Z14MELEE_STRENGTHPQ2t12TMultiChoice1Z14MELEE_STRENGTH12SMultiChoicei;
extern st_556040_1 *g_616928;
extern st_556040_0 *gpGlobals;

double ChargeMeleeCombo__4CBot(float idx)
{
    st_556040_6 **v31;  // edx
    int *v32;  // esi
    st_556040_2 *v41;  // edi
    st_556040_2 *v42;  // edi
    st_556040_2 *v43;  // eax
    unsigned int *v44;  // eax
    st_556040_2 **v45;  // esi
    st_556040_2 *v46;  // edi
    st_556040_2 *v47;  // edi
    st_556040_2 *v48;  // eax
    unsigned int *v49;  // eax
    st_556040_2 **v50;  // esi
    st_556040_6 *v33;  // ecx
    st_556040_2 *v51;  // edi
    st_556040_2 *v52;  // edi
    st_556040_2 *v53;  // eax
    st_556040_2 *v55;  // esi
    st_556040_2 *v56;  // esi
    st_556040_2 *v57;  // esi
    unsigned int *v58;  // eax
    unsigned short v59;  // ax
    unsigned short v60;  // ax
    st_556040_5 *v34;  // eax
    st_556040_2 **v61;  // edx
    unsigned int *v62;  // esi
    st_556040_2 *v63;  // ecx
    st_556040_2 *v64;  // eax
    unsigned int *v65;  // eax
    st_556040_2 **v66;  // edi
    st_556040_2 *iter;  // esi
    st_556040_2 *v68;  // eax
    double v69;  // mm7
    float v35;  // 128
    unsigned int v36;  // eax
    st_556040_2 **v37;  // eax
    st_556040_7 *v38;  // esi
    unsigned int *v39;  // eax
    st_556040_2 **v40;  // esi
    unsigned int v0;  // [bp-0x98]
    char *v1;  // [bp-0x70]
    unsigned int v2;  // [bp-0x6c]
    unsigned int *v3;  // [bp-0x68]
    unsigned int v4;  // [bp-0x64]
    char *v5;  // [bp-0x60]
    char v6;  // [bp-0x59]
    st_556040_2 *v7;  // [bp-0x58]
    char v8;  // [bp-0x51]
    unsigned int *v9;  // [bp-0x50]
    char v10;  // [bp-0x49]
    st_556040_2 *v11;  // [bp-0x48]
    char v12;  // [bp-0x41]
    unsigned int *v13;  // [bp-0x40]
    char v14;  // [bp-0x39]
    st_556040_2 *v15;  // [bp-0x38]
    char v16;  // [bp-0x31]
    unsigned int *v17;  // [bp-0x30]
    float v18;  // [bp-0x2c]
    float v19;  // [bp-0x28]
    short v20;  // [bp-0x22]
    short v21;  // [bp-0x20]
    short v22;  // [bp-0x1e]
    int v23;  // [bp-0x1c]
    unsigned int v24;  // [bp-0x18]
    int v25;  // [bp-0x14]
    unsigned short v26;  // [bp-0x10]
    unsigned short v27;  // [bp-0xe]
    unsigned int node;  // [bp-0xc]
    st_556040_2 **v29;  // [bp-0x8], Other Possible Types: unsigned int

    if (!*(int *)(*(unsigned int *)&idx + 2956))
    {
        v35 = *(float *)(*(unsigned int *)&idx + 2960);
        if (v35 < *(float *)gpGlobals)
        {
            v23 = 0;
            v36 = g_616928(1, 2);
            if (v36 != 1)
            {
                if (v36 == 2)
                    v23 = 0x800;
            }
            else
            {
                v23 = 1;
            }
            node = 0;
            v37 = sub_48d6a0(8);
            *v37 = NULL;
            v37[1] = NULL;
            v29 = v37;
            v22 = 50;
            v21 = 50;
            v20 = 50;
            if ((char)*(char *)(*(unsigned int *)&idx + 2556) > 2)
            {
                v22 = 75;
                v21 = 25;
            }
            else
            {
                v19 = 0;
                if (*(int *)(*(unsigned int *)&idx + 1192))
                {
                    sub_487b30(*(int *)(*(unsigned int *)&idx + 1192) + 896);
                    v19 = v35;
                }
                if (0.0 < v19)
                {
                    v38 = *(unsigned int *)&idx + 896;
                    sub_48bbe0(v38);
                    v18 = (float)(v19 - 0.0);
                    if (v18 <= *(float *)(sub_48cc40(v38) + 12))
                        v20 = 150;
                }
            }
            if (*(int *)(*(int *)(*(unsigned int *)&idx + 2564) + 52) == 2)
            {
                v27 = __fnstcw();
                v26 = v27 | 0xc00;
                v25 = (int)((double)v20 * 1.2);
                v20 = v25;
            }
            else
            {
                if (!*(int *)(*(int *)(*(unsigned int *)&idx + 2564) + 52))
                {
                    v27 = __fnstcw();
                    v26 = v27 | 0xc00;
                    v25 = (int)((double)v22 * 1.2);
                    v22 = v25;
                }
            }
            if (v22)
            {
                v39 = sub_48d6a0(12);
                *v39 = 0;
                v39[1] = 0;
                v17 = v39;
                *v17 = node;
                v17[1] = v22 + node;
                v17[2] = 0;
                v40 = v29;
                if (!*v40)
                {
                    v41 = sub_48d6a0(12);
                    v16 = 1;
                    v41->field_4 = NULL;
                    v41->field_8 = NULL;
                    sub_48d0e0(v41, 0, 4);
                    v16 = 0;
                    *v40 = v41;
                    if (v16)
                        sub_48d4e0(v41);
                    *v40->field_0 = v17;
                    *v40->field_4 = NULL;
                    *v40->field_8 = NULL;
                    v40[1] = *v40;
                }
                else
                {
                    v15 = v40[1];
                    v42 = sub_48d6a0(12);
                    v14 = 1;
                    v42->field_4 = NULL;
                    v42->field_8 = NULL;
                    sub_48d0e0(v42, 0, 4);
                    v14 = 0;
                    v15->field_4 = v42;
                    if (v14)
                        sub_48d4e0(v42);
                    v40[1]->field_4->field_8 = v40[1];
                    v43 = v40[1]->field_4;
                    v40[1] = v43;
                    v43->field_0 = v17;
                    v40[1]->field_4 = NULL;
                }
                node += v22;
            }
            if (v21)
            {
                v44 = sub_48d6a0(12);
                *v44 = 0;
                v44[1] = 0;
                v13 = v44;
                *v13 = node;
                v13[1] = v21 + node;
                v13[2] = 1;
                v45 = v29;
                if (!*v45)
                {
                    v46 = sub_48d6a0(12);
                    v12 = 1;
                    v46->field_4 = NULL;
                    v46->field_8 = NULL;
                    sub_48d0e0(v46, 0, 4);
                    v12 = 0;
                    *v45 = v46;
                    if (v12)
                        sub_48d4e0(v46);
                    *v45->field_0 = v13;
                    *v45->field_4 = NULL;
                    *v45->field_8 = NULL;
                    v45[1] = *v45;
                }
                else
                {
                    v11 = v45[1];
                    v47 = sub_48d6a0(12);
                    v10 = 1;
                    v47->field_4 = NULL;
                    v47->field_8 = NULL;
                    sub_48d0e0(v47, 0, 4);
                    v10 = 0;
                    v11->field_4 = v47;
                    if (v10)
                        sub_48d4e0(v47);
                    v45[1]->field_4->field_8 = v45[1];
                    v48 = v45[1]->field_4;
                    v45[1] = v48;
                    v48->field_0 = v13;
                    v45[1]->field_4 = NULL;
                }
                node += v21;
            }
            if (v20)
            {
                v49 = sub_48d6a0(12);
                *v49 = 0;
                v49[1] = 0;
                v9 = v49;
                *v9 = node;
                v9[1] = v20 + node;
                v9[2] = 2;
                v50 = v29;
                if (!*v50)
                {
                    v51 = sub_48d6a0(12);
                    v8 = 1;
                    v51->field_4 = NULL;
                    v51->field_8 = NULL;
                    sub_48d0e0(v51, 0, 4);
                    v8 = 0;
                    *v50 = v51;
                    if (v8)
                        sub_48d4e0(v51);
                    *v50->field_0 = v9;
                    *v50->field_4 = NULL;
                    *v50->field_8 = NULL;
                    v50[1] = *v50;
                }
                else
                {
                    v7 = v50[1];
                    v52 = sub_48d6a0(12);
                    v6 = 1;
                    v52->field_4 = NULL;
                    v52->field_8 = NULL;
                    sub_48d0e0(v52, 0, 4);
                    v6 = 0;
                    v7->field_4 = v52;
                    if (v6)
                        sub_48d4e0(v52);
                    v50[1]->field_4->field_8 = v50[1];
                    v53 = v50[1]->field_4;
                    v50[1] = v53;
                    v53->field_0 = v9;
                    v50[1]->field_4 = NULL;
                }
                node += v20;
            }
            v24 = 0;
            v5 = &v24;
            v4 = g_616928(0, node);
            v2 = _INSERT(v4, 0, 0) | 0xffff0000;
            v3 = &FindSelection__t12TMultiChoice1Z14MELEE_STRENGTHPQ2t12TMultiChoice1Z14MELEE_STRENGTH12SMultiChoicei;
            v55 = *v29;
            if (*v29)
            {
                v1 = (char *)&node + (unsigned short)v2;
                do
                {
                    v56 = v55;
                    v57 = v56->field_4;
                    if ((char)v3(v1, v56->field_0, v4))
                    {
                        v58 = &v56->field_0->field_0;
                        goto LABEL_556824;
                    }
                } while ((v55 = v57, v56->field_4));
                v58 = NULL;
LABEL_556824:
                if (v58)
                    v24 = v58[2];
            }
            v59 = g_616928(0, 2);
            if (!v59)
            {
                v23 |= 8;
            }
            else
            {
                if (v59 == 1)
                    v23 |= 16;
            }
            if (v59 == 2)
                v0 = 1;
            else
                v0 = 2;
            v60 = g_616928(0);
            if (!v60)
            {
                *((char *)&v23 + 1) = *(char *)((void*)&v23 + 1) | 2;
            }
            else
            {
                if (v60 == 1)
                    *((char *)&v23 + 1) = *(char *)((void*)&v23 + 1) | 4;
            }
            sub_48ded0(idx, v24, v23);
            while (*v29 && (v61 = v29, *v61))
            {
                v62 = &*v61->field_0->field_0;
                v63 = *v61;
                if (v63)
                {
                    if (v63 == v61[1])
                        v61[1] = v63->field_4;
                    v64 = *v61->field_4;
                    *v61 = v64;
                    if (v64)
                        v64->field_8 = NULL;
                    v63->field_4 = NULL;
                    sub_48d4e0(v63);
                }
                v65 = v62;
                if (!v65)
                    break;
                sub_48d4e0(v65);
            }
            if (v29)
            {
                v66 = v29;
                iter = *v66;
                if (*v66)
                {
                    do
                    {
                        v68 = iter;
                        iter = iter->field_4;
                        v68->field_4 = NULL;
                        v68->field_8 = NULL;
                        sub_48d4e0(v68);
                    } while (iter);
                }
                v66[1] = NULL;
                *v66 = NULL;
                sub_48d4e0(v66);
            }
            v29 = 0;
        }
    }
    else if (*(float *)(*(unsigned int *)&idx + 2960) < *(float *)gpGlobals && *(int *)*(int *)(*(unsigned int *)&idx + 2956))
    {
        v31 = *(int *)(*(unsigned int *)&idx + 2956);
        if (!*v31)
        {
            v32 = NULL;
        }
        else
        {
            v32 = (int *)*v31->padding_0;
            v33 = *v31;
            if (v33)
            {
                if (v33 == v31[1])
                    v31[1] = v33->field_4;
                v34 = *v31->field_4;
                *v31 = v34;
                if (v34)
                    v34->field_8 = 0;
                v33->field_4 = NULL;
                sub_48d4e0(v33);
            }
        }
        sub_48ded0(idx, *v32, v32[1]);
        sub_48d4e0(v32);
    }
    *(int *)(*(int *)idx + 384) = *(int *)(*(unsigned int *)&idx + 2972);
    v69 = *(float *)(*(unsigned int *)&idx + 2976);
    if (v69 > *(float *)gpGlobals)
    {
        *(int *)(*(int *)idx + 384) = *(int *)(*(int *)idx + 384) | *(int *)(*(unsigned int *)&idx + 2968);
    }
    else
    {
        v69 = *(float *)(*(unsigned int *)&idx + 2976);
        if (v69 <= *(float *)gpGlobals)
            *(int *)(*(int *)idx + 384) = *(int *)(*(int *)idx + 384) | *(int *)(*(unsigned int *)&idx + 2964);
    }
    return v69;
}

