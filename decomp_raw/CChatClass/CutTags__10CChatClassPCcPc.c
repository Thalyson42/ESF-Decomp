// CutTags__10CChatClassPCcPc @0x148630 size=618
typedef struct st_548630_0 {
    struct st_548630_1 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_548630_0;

typedef struct st_548630_2 {
    char padding_0[31];
    char field_1f;
} st_548630_2;

typedef struct st_548630_1 {
    char field_0;
} st_548630_1;

extern st_548630_0 tag1;
extern st_548630_0 tag2;

unsigned int CutTags__10CChatClassPCcPc(int a0, int a1, st_548630_2 *a2)
{
    unsigned int v8;  // edi
    char *v9;  // esi
    char *v18;  // esi
    unsigned int v19;  // ecx
    char *v20;  // edi
    unsigned int v21;  // edi
    char *v22;  // esi
    char *v23;  // edi
    unsigned int v24;  // ecx
    char *v25;  // edi
    char *v26;  // edi
    unsigned int v27;  // ecx
    char *v10;  // edi
    char *v28;  // edi
    char *v29;  // edx
    char *iter;  // ecx
    char *v31;  // edi
    unsigned int v32;  // ecx
    char *v33;  // edi
    unsigned int v11;  // ecx
    char *v12;  // edi
    char *v13;  // edi
    unsigned int v14;  // ecx
    char *v15;  // edi
    char *v16;  // edx
    char *node;  // ecx
    unsigned int v0;  // [bp-0x98]
    st_548630_0 *v1;  // [bp-0x78]
    st_548630_0 *v2;  // [bp-0x74]
    unsigned int v3;  // [bp-0x70]
    char *v4;  // [bp-0x6c]
    int iter1;  // [bp-0x68]
    char v6;  // [bp-0x64]
    char v7;  // [bp-0x44]

    v3 = 0;
    strncpy@GLIBC_2.0(&v6, a1, 31);
    v7 = 0;
    iter1 = 0;
    do
    {
        v2 = &tag1.field_0;
        v8 = iter1 * 4;
        v9 = strstr@GLIBC_2.0(&v6, *(int *)(v8 + (char *)&tag1.field_0));
        if (v9)
        {
            v0 = *(int *)(v8 + (char *)&tag2.field_0);
            v10 = *(int *)(v8 + (char *)v2);
            v11 = 0xffffffff;
            do
            {
                v12 = v10;
            } while (v11 && (v11 -= 1, v10 = v12 + 1, *v12));
            v4 = strstr@GLIBC_2.0(&v9[~v11] - 1);
        }
        else
        {
            v4 = NULL;
        }
        if (v9 && v4 && v9 < v4)
        {
            v13 = (&tag2.field_0)[iter1];
            v14 = 0xffffffff;
            do
            {
                v15 = v13;
            } while (v14 && (v14 -= 1, v13 = v15 + 1, *v15));
            v16 = &v4[~v14] - 1;
            node = v9;
            if (*v16)
            {
                do
                {
                    *node = *v16;
                    v16 += 1;
                    node += 1;
                } while (*v16);
            }
            *node = *v16;
            v3 = 1;
        }
        iter1 += 1;
    } while (iter1 <= 21);
    v18 = &v6;
    strcpy@GLIBC_2.0(a2, &v6);
    CChatClass::CutSpaces(a0, a2, &v6);
    v19 = 0xffffffff;
    do
    {
        v20 = v18;
    } while (v19 && (v19 -= 1, v18 = v20 + 1, *v20));
    if (v19 == 0xfffffffe)
    {
        strncpy@GLIBC_2.0(&v6, a1, 31);
        v7 = 0;
        iter1 = 0;
        do
        {
            v1 = &tag1.field_0;
            v21 = iter1 * 4;
            v22 = strstr@GLIBC_2.0(&v6, *(int *)(v21 + (char *)&tag1.field_0));
            if (v22)
            {
                v0 = *(int *)(v21 + (char *)&tag2.field_0);
                v23 = *(int *)(v21 + (char *)v1);
                v24 = 0xffffffff;
                do
                {
                    v25 = v23;
                } while (v24 && (v24 -= 1, v23 = v25 + 1, *v25));
                v4 = strstr@GLIBC_2.0(&v22[~v24] - 1);
            }
            else
            {
                v4 = NULL;
            }
            if (v22 && v4 && v22 < v4)
            {
                v26 = (&tag1.field_0)[iter1];
                v27 = 0xffffffff;
                do
                {
                    v28 = v26;
                } while (v27 && (v27 -= 1, v26 = v28 + 1, *v28));
                v29 = &v22[~v27] - 1;
                iter = v22;
                if (*v29)
                {
                    do
                    {
                        *iter = *v29;
                        v29 += 1;
                        iter += 1;
                    } while (*v29);
                }
                *iter = *v29;
                v31 = (&tag2.field_0)[iter1];
                v32 = 0xffffffff;
                do
                {
                    v33 = v31;
                } while (v32 && (v32 -= 1, v31 = v33 + 1, *v33));
                v4[1 + -1 * ~v32] = 0;
            }
            iter1 += 1;
        } while (iter1 <= 21);
    }
    CChatClass::CutSpaces(a0, &v6, a2);
    a2->field_1f = 0;
    return v3;
}

