// MakeAttackAvoidChainSwoop__4CBot @0x158280 size=2670
typedef struct st_558280_3 {
    struct st_558280_2 *field_0;
    char padding_4[1280];
    unsigned int field_504;
} st_558280_3;

typedef struct st_558280_2 {
    char padding_0[520];
    unsigned int field_208;
} st_558280_2;

typedef struct st_558280_0 {
    struct st_558280_1 *field_0;
    struct st_558280_0 *field_4;
    struct st_558280_0 *field_8;
} st_558280_0;

typedef struct st_558280_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
} st_558280_1;

typedef struct st_558280_4 {
    unsigned int field_0;
} st_558280_4;

extern unsigned int FindSelection__t12TMultiChoice1Z10EComboTypePQ2t12TMultiChoice1Z10EComboType12SMultiChoicei;
extern st_558280_4 *g_engfuncs.pfnRandomLong;

unsigned int MakeAttackAvoidChainSwoop__4CBot(st_558280_3 *a0)
{
    st_558280_0 **v27;  // eax
    unsigned int *v28;  // eax
    st_558280_0 *v37;  // eax
    unsigned int *v38;  // eax
    st_558280_0 **v39;  // esi
    st_558280_0 *v40;  // edi
    st_558280_0 *v41;  // edi
    st_558280_0 *v42;  // eax
    unsigned int *v43;  // eax
    st_558280_0 **v44;  // esi
    st_558280_0 *v45;  // edi
    st_558280_0 *v46;  // edi
    st_558280_0 **v29;  // esi
    st_558280_0 *v47;  // eax
    st_558280_0 *v49;  // esi
    st_558280_0 *v50;  // esi
    st_558280_0 *v51;  // esi
    unsigned int *v52;  // eax
    st_558280_0 **v53;  // edx
    unsigned int *v54;  // esi
    st_558280_0 *v55;  // ecx
    st_558280_0 *v56;  // eax
    st_558280_0 *v30;  // edi
    unsigned int *v57;  // eax
    st_558280_0 **v58;  // edi
    st_558280_0 *node;  // esi
    st_558280_0 *v60;  // eax
    st_558280_0 **v61;  // edx
    unsigned int *v62;  // esi
    st_558280_0 *v63;  // ecx
    st_558280_0 *v64;  // eax
    unsigned int *v65;  // eax
    st_558280_0 **v66;  // edi
    st_558280_0 *v31;  // edi
    st_558280_0 *iter;  // esi
    st_558280_0 *v68;  // eax
    st_558280_0 *v32;  // eax
    unsigned int *v33;  // eax
    st_558280_0 **v34;  // esi
    st_558280_0 *v35;  // edi
    st_558280_0 *v36;  // edi
    unsigned int v0;  // [bp-0x70]
    char *v1;  // [bp-0x6c]
    unsigned int v2;  // [bp-0x68]
    unsigned int *v3;  // [bp-0x64]
    unsigned int v4;  // [bp-0x60]
    char *v5;  // [bp-0x5c]
    char v6;  // [bp-0x55]
    st_558280_0 *v7;  // [bp-0x54]
    char v8;  // [bp-0x4d]
    unsigned int *v9;  // [bp-0x4c]
    char v10;  // [bp-0x45]
    st_558280_0 *v11;  // [bp-0x44]
    char v12;  // [bp-0x3d]
    unsigned int *v13;  // [bp-0x3c]
    char v14;  // [bp-0x35]
    st_558280_0 *v15;  // [bp-0x34]
    char v16;  // [bp-0x2d]
    unsigned int *v17;  // [bp-0x2c]
    char v18;  // [bp-0x25]
    st_558280_0 *v19;  // [bp-0x24]
    char v20;  // [bp-0x1d]
    unsigned int *v21;  // [bp-0x1c]
    unsigned int v22;  // [bp-0x18]
    unsigned int v23;  // [bp-0x14]
    char v24;  // [bp-0x10], Other Possible Types: unsigned int
    unsigned int iter1;  // [bp-0xc]
    st_558280_0 **v26;  // [bp-0x8], Other Possible Types: unsigned int

    iter1 = 0;
    v27 = __builtin_new(8);
    *v27 = NULL;
    v27[1] = NULL;
    v26 = v27;
    v23 = a0->field_0->field_208;
    v22 = a0->field_504;
    if (a0->field_504 != 2 && !(char)CheckForCollide(a0->field_0->field_208, 2, 650.0f))
    {
        v28 = __builtin_new(12);
        *v28 = 0;
        v28[1] = 0;
        v21 = v28;
        *v21 = iter1;
        v21[1] = iter1 + 50;
        v21[2] = 29;
        v29 = v26;
        if (!*v29)
        {
            v30 = __builtin_new(12);
            v20 = 1;
            v30->field_4 = NULL;
            v30->field_8 = NULL;
            memset@GLIBC_2.0(v30, 0, 4);
            v20 = 0;
            *v29 = v30;
            if (v20)
                __builtin_delete(v30);
            *v29->field_0 = v21;
            *v29->field_4 = NULL;
            *v29->field_8 = NULL;
            v29[1] = *v29;
        }
        else
        {
            v19 = v29[1];
            v31 = __builtin_new(12);
            v18 = 1;
            v31->field_4 = NULL;
            v31->field_8 = NULL;
            memset@GLIBC_2.0(v31, 0, 4);
            v18 = 0;
            v19->field_4 = v31;
            if (v18)
                __builtin_delete(v31);
            v29[1]->field_4->field_8 = v29[1];
            v32 = v29[1]->field_4;
            v29[1] = v32;
            v32->field_0 = v21;
            v29[1]->field_4 = NULL;
        }
        iter1 += 50;
    }
    if (v22 != 3 && !(char)CheckForCollide(v23, 4, 650.0f))
    {
        v33 = __builtin_new(12);
        *v33 = 0;
        v33[1] = 0;
        v17 = v33;
        *v17 = iter1;
        v17[1] = iter1 + 50;
        v17[2] = 30;
        v34 = v26;
        if (!*v34)
        {
            v35 = __builtin_new(12);
            v16 = 1;
            v35->field_4 = NULL;
            v35->field_8 = NULL;
            memset@GLIBC_2.0(v35, 0, 4);
            v16 = 0;
            *v34 = v35;
            if (v16)
                __builtin_delete(v35);
            *v34->field_0 = v17;
            *v34->field_4 = NULL;
            *v34->field_8 = NULL;
            v34[1] = *v34;
        }
        else
        {
            v15 = v34[1];
            v36 = __builtin_new(12);
            v14 = 1;
            v36->field_4 = NULL;
            v36->field_8 = NULL;
            memset@GLIBC_2.0(v36, 0, 4);
            v14 = 0;
            v15->field_4 = v36;
            if (v14)
                __builtin_delete(v36);
            v34[1]->field_4->field_8 = v34[1];
            v37 = v34[1]->field_4;
            v34[1] = v37;
            v37->field_0 = v17;
            v34[1]->field_4 = NULL;
        }
        iter1 += 50;
    }
    if (v22 && !(char)CheckForCollide(v23, 32, 650.0f))
    {
        v38 = __builtin_new(12);
        *v38 = 0;
        v38[1] = 0;
        v13 = v38;
        *v13 = iter1;
        v13[1] = iter1 + 50;
        v13[2] = 31;
        v39 = v26;
        if (!*v39)
        {
            v40 = __builtin_new(12);
            v12 = 1;
            v40->field_4 = NULL;
            v40->field_8 = NULL;
            memset@GLIBC_2.0(v40, 0, 4);
            v12 = 0;
            *v39 = v40;
            if (v12)
                __builtin_delete(v40);
            *v39->field_0 = v13;
            *v39->field_4 = NULL;
            *v39->field_8 = NULL;
            v39[1] = *v39;
        }
        else
        {
            v11 = v39[1];
            v41 = __builtin_new(12);
            v10 = 1;
            v41->field_4 = NULL;
            v41->field_8 = NULL;
            memset@GLIBC_2.0(v41, 0, 4);
            v10 = 0;
            v11->field_4 = v41;
            if (v10)
                __builtin_delete(v41);
            v39[1]->field_4->field_8 = v39[1];
            v42 = v39[1]->field_4;
            v39[1] = v42;
            v42->field_0 = v13;
            v39[1]->field_4 = NULL;
        }
        iter1 += 50;
    }
    if (v22 != 1 && !(char)CheckForCollide(v23, 64, 650.0f))
    {
        v43 = __builtin_new(12);
        *v43 = 0;
        v43[1] = 0;
        v9 = v43;
        *v9 = iter1;
        v9[1] = iter1 + 50;
        v9[2] = 32;
        v44 = v26;
        if (!*v44)
        {
            v45 = __builtin_new(12);
            v8 = 1;
            v45->field_4 = NULL;
            v45->field_8 = NULL;
            memset@GLIBC_2.0(v45, 0, 4);
            v8 = 0;
            *v44 = v45;
            if (v8)
                __builtin_delete(v45);
            *v44->field_0 = v9;
            *v44->field_4 = NULL;
            *v44->field_8 = NULL;
            v44[1] = *v44;
        }
        else
        {
            v7 = v44[1];
            v46 = __builtin_new(12);
            v6 = 1;
            v46->field_4 = NULL;
            v46->field_8 = NULL;
            memset@GLIBC_2.0(v46, 0, 4);
            v6 = 0;
            v7->field_4 = v46;
            if (v6)
                __builtin_delete(v46);
            v44[1]->field_4->field_8 = v44[1];
            v47 = v44[1]->field_4;
            v44[1] = v47;
            v47->field_0 = v9;
            v44[1]->field_4 = NULL;
        }
        iter1 += 50;
    }
    v5 = &v24;
    v4 = g_engfuncs.pfnRandomLong(0, iter1);
    v2 = _INSERT(v4, 0, 0) | 0xffff0000;
    v3 = &FindSelection__t12TMultiChoice1Z10EComboTypePQ2t12TMultiChoice1Z10EComboType12SMultiChoicei;
    v49 = *v26;
    if (*v26)
    {
        v1 = (char *)&iter1 + (unsigned short)v2;
        do
        {
            v50 = v49;
            v51 = v50->field_4;
            if ((char)v3(v1, v50->field_0, v4))
            {
                v52 = &v50->field_0->field_0;
                goto LABEL_558a63;
            }
        } while ((v49 = v51, v50->field_4));
        v52 = NULL;
LABEL_558a63:
        if (v52)
        {
            v24 = v52[2];
            v0 = v24;
            while (*v26 && (v53 = v26, *v53))
            {
                v54 = &*v53->field_0->field_0;
                v55 = *v53;
                if (v55)
                {
                    if (v55 == v53[1])
                        v53[1] = v55->field_4;
                    v56 = *v53->field_4;
                    *v53 = v56;
                    if (v56)
                        v56->field_8 = NULL;
                    v55->field_4 = NULL;
                    __builtin_delete(v55);
                }
                v57 = v54;
                if (!v57)
                    break;
                __builtin_delete(v57);
            }
            if (v26)
            {
                v58 = v26;
                node = *v58;
                if (*v58)
                {
                    do
                    {
                        v60 = node;
                        node = node->field_4;
                        v60->field_4 = NULL;
                        v60->field_8 = NULL;
                        __builtin_delete(v60);
                    } while (node);
                }
                v58[1] = NULL;
                *v58 = NULL;
                __builtin_delete(v58);
            }
            v26 = 0;
            return v0;
        }
    }
    while (*v26 && (v61 = v26, *v61))
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
            __builtin_delete(v63);
        }
        v65 = v62;
        if (!v65)
            break;
        __builtin_delete(v65);
    }
    if (v26)
    {
        v66 = v26;
        iter = *v66;
        if (*v66)
        {
            do
            {
                v68 = iter;
                iter = iter->field_4;
                v68->field_4 = NULL;
                v68->field_8 = NULL;
                __builtin_delete(v68);
            } while (iter);
        }
        v66[1] = NULL;
        *v66 = NULL;
        __builtin_delete(v66);
    }
    v26 = 0;
    return 38;
}

