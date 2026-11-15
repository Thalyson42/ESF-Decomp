// SelectSwoopType__10CSwoopTask @0x14e590 size=3389
typedef struct st_54e590_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_54e590_1;

typedef struct st_54e590_5 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_54e590_5;

typedef struct st_54e590_0 {
    struct st_54e590_1 *field_0;
    char padding_4[2552];
    char field_9fc;
    char padding_9fd[487];
    unsigned int field_be4;
    unsigned int field_be8;
    unsigned int field_bec;
    unsigned int field_bf0;
} st_54e590_0;

typedef struct st_54e590_2 {
    char padding_0[8];
    struct st_54e590_0 *field_8;
    int field_c;
    struct st_54e590_3 *field_10;
    char padding_14[6];
    unsigned short field_1a;
    unsigned short field_1c;
    char padding_1e[2];
    float field_20;
    float field_24;
} st_54e590_2;

typedef struct st_54e590_3 {
    struct st_54e590_1 *field_0;
} st_54e590_3;

typedef struct st_54e590_4 {
    struct st_54e590_5 *field_0;
    struct st_54e590_4 *field_4;
    struct st_54e590_4 *field_8;
} st_54e590_4;

typedef struct st_54e590_6 {
    unsigned int field_0;
} st_54e590_6;

extern unsigned int FindSelection__t12TMultiChoice1Z6VectorPQ2t12TMultiChoice1Z6Vector12SMultiChoicei;
extern float g_vecZero;
extern float g_vecZero+4;
extern float g_vecZero+8;
extern st_54e590_6 *g_engfuncs.pfnRandomLong;

double SelectSwoopType__10CSwoopTask(st_54e590_2 *a0)
{
    unsigned int *v38;  // edx
    unsigned int *v39;  // edx
    st_54e590_4 **v48;  // esi
    st_54e590_4 *v49;  // edi
    st_54e590_4 *v50;  // edi
    st_54e590_4 *v51;  // eax
    unsigned int *v52;  // eax
    st_54e590_4 **v53;  // esi
    st_54e590_4 *v54;  // edi
    st_54e590_4 *v55;  // edi
    st_54e590_4 *v56;  // eax
    unsigned int *v57;  // eax
    float v40;  // 112
    st_54e590_4 **v58;  // esi
    st_54e590_4 *v59;  // edi
    st_54e590_4 *v60;  // edi
    st_54e590_4 *v61;  // eax
    unsigned int *v62;  // eax
    st_54e590_4 **v63;  // esi
    st_54e590_4 *v64;  // edi
    st_54e590_4 *v65;  // edi
    st_54e590_4 *v66;  // eax
    float v41;  // 112
    st_54e590_4 *v68;  // esi
    st_54e590_4 *v69;  // esi
    st_54e590_4 *v70;  // esi
    unsigned int *v71;  // edx
    st_54e590_0 *v72;  // edx
    st_54e590_4 **v73;  // edx
    unsigned int *v74;  // esi
    st_54e590_4 *v75;  // ecx
    st_54e590_4 *v76;  // eax
    unsigned int *v77;  // eax
    float v42;  // 112
    st_54e590_4 **v78;  // edi
    st_54e590_4 *node;  // esi
    st_54e590_4 *v80;  // eax
    double v81;  // mm7
    double v43;  // mm7
    double v44;  // mm6
    st_54e590_0 *v45;  // ecx
    st_54e590_4 **v46;  // eax
    unsigned int *v47;  // eax
    unsigned int v0;  // [bp-0x10c]
    unsigned int v1;  // [bp-0x108]
    char *v2;  // [bp-0xd4]
    unsigned int v3;  // [bp-0xd0]
    unsigned int *v4;  // [bp-0xcc]
    unsigned int v5;  // [bp-0xc8]
    char v6;  // [bp-0xc1]
    st_54e590_4 *v7;  // [bp-0xc0]
    char v8;  // [bp-0xb9]
    unsigned int *v9;  // [bp-0xb8]
    char v10;  // [bp-0xb1]
    st_54e590_4 *v11;  // [bp-0xb0]
    char v12;  // [bp-0xa9]
    unsigned int *v13;  // [bp-0xa8]
    char v14;  // [bp-0xa1]
    st_54e590_4 *v15;  // [bp-0xa0]
    char v16;  // [bp-0x99]
    unsigned int *v17;  // [bp-0x98]
    char v18;  // [bp-0x91]
    st_54e590_4 *v19;  // [bp-0x90]
    char v20;  // [bp-0x89]
    unsigned int *v21;  // [bp-0x88]
    float v22;  // [bp-0x84]
    unsigned int iter;  // [bp-0x80]
    st_54e590_4 **v24;  // [bp-0x7c], Other Possible Types: unsigned int
    int v25;  // [bp-0x78]
    float v26;  // [bp-0x64]
    float v27;  // [bp-0x60]
    float v28;  // [bp-0x5c], Other Possible Types: unsigned int
    float v29;  // [bp-0x58]
    float v30;  // [bp-0x54]
    unsigned int v31;  // [bp-0x50]
    float v32;  // [bp-0x44]
    float v33;  // [bp-0x40]
    float v34;  // [bp-0x3c]
    unsigned int v35;  // [bp-0x24]
    unsigned int v36;  // [bp-0x20]
    unsigned int v37;  // [bp-0x1c]

    if (!a0->field_10)
        return v81;
    v38 = *(int *)a0->field_10 + 8;
    *(float *)&v35 = *(float *)(*(int *)a0->field_10 + 8);
    *(float *)&v36 = *(float *)&v38[1];
    *(float *)&v37 = *(float *)&v38[2];
    v39 = &a0->field_8->field_0->field_8;
    v40 = *(float *)&v35 - *(float *)&a0->field_8->field_0->field_8;
    v32 = v40;
    v41 = *(float *)&v36 - *(float *)&v39[1];
    v33 = v41;
    v42 = *(float *)&v37 - *(float *)&v39[2];
    v34 = v42;
    v43 = v40 * v40 + v41 * v41 + v42 * v42;
    v44 = sqrt(v43);
    if (isnan(v44))
        sqrt(*(unsigned int *)&v43);
    else
        v43 = v44;
    v22 = (float)v43;
    a0->field_8->field_be4 = 0;
    if ((int)g_engfuncs.pfnRandomLong(1, 100) > 70)
    {
        return v43;
    }
    else if (a0->field_8->field_9fc)
    {
        return v43;
    }
    else if (v22 <= 800.0f)
    {
        return v43;
    }
    else if (g_engfuncs.pfnRandomLong(0, 1))
    {
        a0->field_8->field_be4 = 2;
        v45 = a0->field_8;
        *(float *)&v45->field_be8 = g_vecZero;
        *(float *)&v45->field_bec = g_vecZero+4;
        *(float *)&v45->field_bf0 = g_vecZero+8;
        if (g_engfuncs.pfnRandomLong(0, 1))
        {
            v25 = g_engfuncs.pfnRandomLong(16, 18);
            a0->field_20 = (float)v25;
            v1 = 3;
            v0 = 2;
        }
        else
        {
            v25 = g_engfuncs.pfnRandomLong(0xffffffee, 0xfffffff0);
            a0->field_20 = (float)v25;
            v1 = 0xfffffffe;
            v0 = 0xfffffffd;
        }
        a0->field_1a = g_engfuncs.pfnRandomLong(v0, v1);
        if (g_engfuncs.pfnRandomLong(0, 1))
        {
            v25 = g_engfuncs.pfnRandomLong(16, 18);
            a0->field_24 = (float)v25;
            v1 = 3;
            v0 = 2;
        }
        else
        {
            v25 = g_engfuncs.pfnRandomLong(0xffffffee, 0xfffffff0);
            a0->field_24 = (float)v25;
            v1 = 0xfffffffe;
            v0 = 0xfffffffd;
        }
        a0->field_1c = g_engfuncs.pfnRandomLong(v0, v1);
        return v43;
    }
    else
    {
        iter = 0;
        v46 = __builtin_new(8);
        *v46 = NULL;
        v46[1] = NULL;
        v24 = v46;
        v26 = g_vecZero;
        v27 = g_vecZero+4;
        v28 = g_vecZero+8;
        if (!(char)CheckForCollide(a0->field_c, 2, 200.0f))
        {
            v29 = 0;
            v30 = 20.0f;
            v31 = 0;
            v47 = __builtin_new(20);
            *v47 = 0;
            v47[1] = 0;
            v21 = v47;
            *v21 = iter;
            v21[1] = iter + 50;
            *(float *)&v21[2] = v29;
            *(float *)&v21[3] = v30;
            v21[4] = v31;
            v48 = v24;
            if (!*v48)
            {
                v49 = __builtin_new(12);
                v20 = 1;
                v49->field_4 = NULL;
                v49->field_8 = NULL;
                memset@GLIBC_2.0(v49, 0, 4);
                v20 = 0;
                *v48 = v49;
                if (v20)
                    __builtin_delete(v49);
                *v48->field_0 = v21;
                *v48->field_4 = NULL;
                *v48->field_8 = NULL;
                v48[1] = *v48;
            }
            else
            {
                v19 = v48[1];
                v50 = __builtin_new(12);
                v18 = 1;
                v50->field_4 = NULL;
                v50->field_8 = NULL;
                memset@GLIBC_2.0(v50, 0, 4);
                v18 = 0;
                v19->field_4 = v50;
                if (v18)
                    __builtin_delete(v50);
                v48[1]->field_4->field_8 = v48[1];
                v51 = v48[1]->field_4;
                v48[1] = v51;
                v51->field_0 = v21;
                v48[1]->field_4 = NULL;
            }
            iter += 50;
        }
        if (!(char)CheckForCollide(a0->field_c, 4, 200.0f))
        {
            v29 = 0;
            v30 = -20.0f;
            v31 = 0;
            v52 = __builtin_new(20);
            *v52 = 0;
            v52[1] = 0;
            v17 = v52;
            *v17 = iter;
            v17[1] = iter + 50;
            *(float *)&v17[2] = v29;
            *(float *)&v17[3] = v30;
            v17[4] = v31;
            v53 = v24;
            if (!*v53)
            {
                v54 = __builtin_new(12);
                v16 = 1;
                v54->field_4 = NULL;
                v54->field_8 = NULL;
                memset@GLIBC_2.0(v54, 0, 4);
                v16 = 0;
                *v53 = v54;
                if (v16)
                    __builtin_delete(v54);
                *v53->field_0 = v17;
                *v53->field_4 = NULL;
                *v53->field_8 = NULL;
                v53[1] = *v53;
            }
            else
            {
                v15 = v53[1];
                v55 = __builtin_new(12);
                v14 = 1;
                v55->field_4 = NULL;
                v55->field_8 = NULL;
                memset@GLIBC_2.0(v55, 0, 4);
                v14 = 0;
                v15->field_4 = v55;
                if (v14)
                    __builtin_delete(v55);
                v53[1]->field_4->field_8 = v53[1];
                v56 = v53[1]->field_4;
                v53[1] = v56;
                v56->field_0 = v17;
                v53[1]->field_4 = NULL;
            }
            iter += 50;
        }
        if (!(char)CheckForCollide(a0->field_c, 32, 200.0f))
        {
            v29 = 20.0f;
            v30 = 0;
            v31 = 0;
            v57 = __builtin_new(20);
            *v57 = 0;
            v57[1] = 0;
            v13 = v57;
            *v13 = iter;
            v13[1] = iter + 50;
            *(float *)&v13[2] = v29;
            *(float *)&v13[3] = v30;
            v13[4] = v31;
            v58 = v24;
            if (!*v58)
            {
                v59 = __builtin_new(12);
                v12 = 1;
                v59->field_4 = NULL;
                v59->field_8 = NULL;
                memset@GLIBC_2.0(v59, 0, 4);
                v12 = 0;
                *v58 = v59;
                if (v12)
                    __builtin_delete(v59);
                *v58->field_0 = v13;
                *v58->field_4 = NULL;
                *v58->field_8 = NULL;
                v58[1] = *v58;
            }
            else
            {
                v11 = v58[1];
                v60 = __builtin_new(12);
                v10 = 1;
                v60->field_4 = NULL;
                v60->field_8 = NULL;
                memset@GLIBC_2.0(v60, 0, 4);
                v10 = 0;
                v11->field_4 = v60;
                if (v10)
                    __builtin_delete(v60);
                v58[1]->field_4->field_8 = v58[1];
                v61 = v58[1]->field_4;
                v58[1] = v61;
                v61->field_0 = v13;
                v58[1]->field_4 = NULL;
            }
            iter += 50;
        }
        if (!(char)CheckForCollide(a0->field_c, 64, 200.0f))
        {
            v29 = -20.0f;
            v30 = 0;
            v31 = 0;
            v62 = __builtin_new(20);
            *v62 = 0;
            v62[1] = 0;
            v9 = v62;
            *v9 = iter;
            v9[1] = iter + 50;
            *(float *)&v9[2] = v29;
            *(float *)&v9[3] = v30;
            v9[4] = v31;
            v63 = v24;
            if (!*v63)
            {
                v64 = __builtin_new(12);
                v8 = 1;
                v64->field_4 = NULL;
                v64->field_8 = NULL;
                memset@GLIBC_2.0(v64, 0, 4);
                v8 = 0;
                *v63 = v64;
                if (v8)
                    __builtin_delete(v64);
                *v63->field_0 = v9;
                *v63->field_4 = NULL;
                *v63->field_8 = NULL;
                v63[1] = *v63;
            }
            else
            {
                v7 = v63[1];
                v65 = __builtin_new(12);
                v6 = 1;
                v65->field_4 = NULL;
                v65->field_8 = NULL;
                memset@GLIBC_2.0(v65, 0, 4);
                v6 = 0;
                v7->field_4 = v65;
                if (v6)
                    __builtin_delete(v65);
                v63[1]->field_4->field_8 = v63[1];
                v66 = v63[1]->field_4;
                v63[1] = v66;
                v66->field_0 = v9;
                v63[1]->field_4 = NULL;
            }
            iter += 50;
        }
        v5 = g_engfuncs.pfnRandomLong(0, iter);
        v3 = _INSERT(v5, 0, 0) | 0xffff0000;
        v4 = &FindSelection__t12TMultiChoice1Z6VectorPQ2t12TMultiChoice1Z6Vector12SMultiChoicei;
        v68 = *v24;
        if (*v24)
        {
            v2 = (char *)&iter + (unsigned short)v3;
            do
            {
                v69 = v68;
                v70 = v69->field_4;
                if ((char)v4(v2, v69->field_0, v5))
                {
                    v71 = &v69->field_0->field_0;
                    goto LABEL_54f0df;
                }
            } while ((v68 = v70, v69->field_4));
            v71 = NULL;
LABEL_54f0df:
            if (v71)
            {
                *(unsigned int *)&v26 = v71[2];
                *(unsigned int *)&v27 = v71[3];
                v28 = v71[4];
                v72 = a0->field_8;
                v72->field_be8 = v71[2];
                *(float *)&v72->field_bec = v27;
                v72->field_bf0 = v28;
                a0->field_8->field_be4 = 1;
            }
        }
        while (*v24 && (v73 = v24, *v73))
        {
            v74 = &*v73->field_0->field_0;
            v75 = *v73;
            if (v75)
            {
                if (v75 == v73[1])
                    v73[1] = v75->field_4;
                v76 = *v73->field_4;
                *v73 = v76;
                if (v76)
                    v76->field_8 = NULL;
                v75->field_4 = NULL;
                __builtin_delete(v75);
            }
            v77 = v74;
            if (!v77)
                break;
            __builtin_delete(v77);
        }
        if (v24)
        {
            v78 = v24;
            node = *v78;
            if (*v78)
            {
                do
                {
                    v80 = node;
                    node = node->field_4;
                    v80->field_4 = NULL;
                    v80->field_8 = NULL;
                    __builtin_delete(v80);
                } while (node);
            }
            v78[1] = NULL;
            *v78 = NULL;
            __builtin_delete(v78);
        }
        v24 = 0;
        return v43;
    }
}

