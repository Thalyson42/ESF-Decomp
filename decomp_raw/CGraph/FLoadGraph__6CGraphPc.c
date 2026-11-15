// FLoadGraph__6CGraphPc @0xe3b00 size=1223
typedef struct st_4e3b00_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    char padding_28[6200];
    unsigned int field_1860;
    char padding_1864[2136];
    int field_20bc;
    int field_20c0;
} st_4e3b00_1;

typedef struct st_4e3b00_0 {
    unsigned int field_0;
} st_4e3b00_0;

extern st_4e3b00_0 *g_engfuncs.pfnAlertMessage;
extern st_4e3b00_0 *g_engfuncs.pfnLoadFileForMe;
extern st_4e3b00_0 *g_engfuncs.pfnFreeFile;
extern st_4e3b00_0 *g_engfuncs.pfnGetGameDir;

unsigned int FLoadGraph__6CGraphPc(st_4e3b00_1 *a0, int a1)
{
    unsigned int v10;  // 4107
    unsigned int *v11;  // eax
    unsigned int v20;  // eax
    st_4e3b00_1 *v21;  // edx
    unsigned int v22;  // eax
    st_4e3b00_1 *v23;  // edx
    unsigned int v24;  // eax
    st_4e3b00_1 *v25;  // edx
    unsigned int v26;  // eax
    st_4e3b00_1 *v27;  // edx
    unsigned int v28;  // eax
    st_4e3b00_1 *v29;  // ecx
    unsigned int v12;  // 4107
    st_4e3b00_1 *v30;  // eax
    int j;  // ecx
    st_4e3b00_1 *v32;  // ecx
    st_4e3b00_1 *v33;  // ecx
    unsigned int v34;  // eax
    st_4e3b00_1 *v35;  // edx
    unsigned int v36;  // eax
    st_4e3b00_1 *v37;  // edx
    unsigned int v13;  // ecx
    st_4e3b00_1 *iter;  // edi
    unsigned int *iter1;  // esi
    st_4e3b00_1 *v16;  // eax
    unsigned int v17;  // eax
    unsigned int v18;  // edx
    st_4e3b00_1 *v19;  // ecx
    unsigned int v0;  // [bp-0x203c]
    unsigned int v1;  // [bp-0x2038]
    unsigned int v2;  // [bp-0x2034]
    unsigned int v3;  // [bp-0x2030]
    unsigned int *iter2;  // [bp-0x2010], Other Possible Types: unsigned int, int
    unsigned int *v5;  // [bp-0x200c]
    unsigned int node;  // [bp-0x2008]
    char v7;  // [bp-0x2008], Other Possible Types: unsigned int
    char v8;  // [bp-0x2004]
    char v9[4096];  // [bp-0x1004]

    g_engfuncs.pfnGetGameDir(&v8);
    strcat@GLIBC_2.0(&v8, "/maps");
    mkdir@GLIBC_2.0(&v8, 0x1ff);
    strcat@GLIBC_2.0(&v8, "/graphs");
    mkdir@GLIBC_2.0(&v8, 0x1ff);
    strcpy(v9, "maps/graphs/");
    strcat@GLIBC_2.0(v9, a1);
    strcat@GLIBC_2.0(v9, ".nod");
    v5 = g_engfuncs.pfnLoadFileForMe(v9, &v7);
    iter2 = v5;
    if (!v5)
        return 0;
    node = v7 - 4;
    v10 = _ccall(8, 3, v7, 0xfffffffc, 0);
    if (!(v10 & 1))
    {
        iter2 += 1;
        if (*iter2 != 16)
        {
            v3 = 16;
            v2 = *iter2;
            v1 = "**ERROR** Graph version is %d, expected %d\n";
            v0 = 2;
            v11 = g_engfuncs.pfnAlertMessage;
            goto LABEL_4e3f03;
        }
        node -= 8396;
        v12 = _ccall(8, 3, node, 0xffffdf34, 0);
        if (!(v12 & 1))
        {
            v13 = 2099;
            iter = a0;
            for (iter1 = iter2; v13; iter1 += 1)
            {
                v13 -= 1;
                iter->field_0 = *iter1;
                iter = &iter->field_4;
            }
            iter2 += 2099;
            v16 = a0;
            v16->field_c = 0;
            v16->field_10 = 0;
            v16->field_24 = 0;
            v16->field_14 = 0;
            v16->field_20bc = 0;
            v17 = calloc@GLIBC_2.0(88, v16->field_18);
            a0->field_c = v17;
            if (!v17)
            {
                v2 = a0->field_18;
                v1 = "**ERROR**\nCouldn't malloc %d nodes!\n";
                goto LABEL_4e3efa;
            }
            v18 = a0->field_18 * 88;
            node -= v18;
            if ((int)(node - v18) >= NULL)
            {
                memcpy@GLIBC_2.0(a0->field_c, iter2, a0->field_18 * 88);
                v19 = a0;
                iter2 += v19->field_18 * 88;
                v20 = calloc@GLIBC_2.0(24, v19->field_1c);
                a0->field_10 = v20;
                if (!v20)
                {
                    v2 = a0->field_1c;
                    v1 = "**ERROR**\nCouldn't malloc %d link!\n";
                    goto LABEL_4e3efa;
                }
                v21 = a0;
                v22 = v21->field_1c * 24;
                node -= v22;
                if ((int)(node - v22) >= NULL)
                {
                    memcpy@GLIBC_2.0(v21->field_10, iter2, a0->field_1c * 24);
                    v23 = a0;
                    iter2 += v23->field_1c * 24;
                    v24 = calloc@GLIBC_2.0(16, v23->field_18);
                    a0->field_24 = v24;
                    if (!v24)
                    {
                        v2 = a0->field_18;
                        v1 = "***ERROR**\nCouldn't malloc %d entries sorting nodes!\n";
                        goto LABEL_4e3efa;
                    }
                    v25 = a0;
                    v26 = v25->field_18 * 16;
                    node -= v26;
                    if ((int)(node - v26) >= NULL)
                    {
                        memcpy@GLIBC_2.0(v25->field_24, iter2, a0->field_18 * 16);
                        v27 = a0;
                        iter2 += v27->field_18 * 16;
                        v27->field_8 = 0;
                        v28 = calloc@GLIBC_2.0(1, v27->field_20);
                        v29 = a0;
                        v29->field_14 = v28;
                        if (!v28)
                        {
                            v2 = v29->field_20;
                            v1 = "***ERROR**\nCounldn't malloc %d route bytes!\n";
                            goto LABEL_4e3efa;
                        }
                        else
                        {
                            v30 = a0;
                            v30->field_1860 = 0;
                            j = 0;
                            if (NULL < v30->field_18)
                            {
                                do
                                {
                                    *(unsigned int *)(a0->field_24 + j * 16 + 12) = 0;
                                    j += 1;
                                } while (j < a0->field_18);
                            }
                            v32 = a0;
                            node -= v32->field_20;
                            if ((int)(node - v32->field_20) >= NULL)
                            {
                                memcpy@GLIBC_2.0(v32->field_14, iter2, v32->field_20);
                                iter2 += a0->field_20;
                                v33 = a0;
                                v33->field_8 = 1;
                                v34 = calloc@GLIBC_2.0(2, v33->field_20c0);
                                a0->field_20bc = v34;
                                if (!v34)
                                {
                                    v2 = a0->field_20c0;
                                    v1 = "***ERROR**\nCounldn't malloc %d hash link bytes!\n";
LABEL_4e3efa:
                                    v0 = 2;
                                    v11 = g_engfuncs.pfnAlertMessage;
LABEL_4e3f03:
                                    v11(v0, v1, v2, v3);
                                }
                                else
                                {
                                    v35 = a0;
                                    v36 = v35->field_20c0 * 2;
                                    node -= v36;
                                    if ((int)(node - v36) >= NULL)
                                    {
                                        memcpy@GLIBC_2.0(v35->field_20bc, iter2, a0->field_20c0 * 2);
                                        v37 = a0;
                                        v37->field_0 = 1;
                                        v37->field_4 = 0;
                                        g_engfuncs.pfnFreeFile(v5);
                                        if (!node)
                                            return 1;
                                        g_engfuncs.pfnAlertMessage(2, "***WARNING***:Node graph was longer than expected by %d bytes.!\n", node);
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    g_engfuncs.pfnFreeFile(v5);
    return 0;
}

