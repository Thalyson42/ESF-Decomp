// extract_cie_info @0x196384 size=332
int extract_cie_info(void* a0, void* a1)
{
    char *v8;  // ebx
    unsigned int v9;  // ebx
    char *v18;  // edi
    unsigned int v19;  // 4101
    unsigned int v20;  // 4109
    char *v21;  // edx
    unsigned int v22;  // ecx
    unsigned int v23;  // cc_op
    unsigned int v24;  // cc_dep1
    unsigned int v25;  // cc_dep2
    unsigned int v26;  // eax
    void* v27;  // esi
    char *v10;  // edi
    char *v28;  // edi
    unsigned int v29;  // 4101
    unsigned int v30;  // 4109
    void* v31;  // esi
    void* v32;  // eax
    void* iter;  // edx
    unsigned int v34;  // eax
    unsigned int v35;  // 4101
    unsigned int v36;  // eax
    void* v37;  // edx
    unsigned int v11;  // ecx
    void* v38;  // edx
    unsigned int v39;  // ecx
    unsigned int v40;  // cc_op
    unsigned int v41;  // cc_dep1
    unsigned int v42;  // cc_dep2
    void* v43;  // esi
    char *v44;  // edi
    unsigned int v45;  // 4101
    char *v46;  // edx
    int v47;  // edx
    unsigned int v12;  // cc_op
    unsigned int v13;  // cc_dep1
    unsigned int v14;  // cc_dep2
    unsigned int v15;  // eax
    void* v16;  // esi
    void* v17;  // esi
    int v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]
    int v2;  // [bp-0x24]
    void* v3;  // [bp-0x18]
    void* v4;  // [bp-0x14]
    char *v5;  // [bp-0x10]
    void* v6;  // [bp-0xc]
    char v7;  // [bp-0x8]

    sub_596380(v0, v1, v2);
    v9 = v8 + 513866;
    v10 = v9 - 392017;
    v11 = 1;
    v6 = a0 - ((int)a0[4] - 4);
    v4 = v6 + 9;
    *(void* *)a1 = v4;
    v12 = 15;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = v4;
    do
    {
        v17 = v16;
        v18 = v10;
        if (!v11)
            break;
        v11 -= 1;
        v12 = 4;
        v13 = *(char *)v17;
        v14 = *v18;
        v10 = v18 + 1;
        v16 = v17 + 1;
    } while (*(char *)v17 == *v18);
    v19 = _ccall(4, v12, v13, v14, 0);
    if (!(v19 & 1))
    {
        v20 = _ccall(v12, v13, v14, 0);
        v15 = -(v20 & 1) | 1;
    }
    v21 = v9 - 392016;
    v5 = v21;
    if (v15)
    {
        v22 = 3;
        v23 = 15;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        do
        {
            v27 = v4;
            v28 = v21;
            if (!v22)
                break;
            v22 -= 1;
            v23 = 4;
            v24 = *(char *)v27;
            v25 = *v28;
            v21 = v28 + 1;
            v4 = v27 + 1;
        } while (*(char *)v27 == *v28);
        v29 = _ccall(4, v23, v24, v25, 0);
        if (!(v29 & 1))
        {
            v30 = _ccall(v23, v24, v25, 0);
            v26 = -(v30 & 1) | 1;
        }
        if (v26 && (char)v6[9] != 122)
            return 0;
    }
    v31 = *(int *)a1;
    v32 = v31;
    iter = v31;
    v34 = v32 & 3;
    if (v32 & 0x3)
    {
        v35 = _ccall(10, 15, v32 & 3, 0, 0);
        if (!(v35 & 1))
        {
            if (v34 != 2)
            {
                if (*(char *)iter == *(char *)((void*)&v34 + 1))
                    goto LABEL_596449;
                iter += 1;
            }
            if (*(char *)iter == *(char *)((void*)&v34 + 1))
                goto LABEL_596449;
            iter += 1;
        }
        if (*(char *)iter == *(char *)((void*)&v34 + 1))
            goto LABEL_596449;
        iter += 1;
        goto LABEL_596429;
    }
    else
    {
        while (1)
        {
LABEL_596429:
            v36 = *(int *)iter;
            if (!(char)v36)
                break;
            if (!*(char *)((void*)&v36 + 1))
            {
LABEL_596448:
                iter += 1;
                break;
            }
            if (v36 & 0xff0000)
            {
                iter += 4;
                if (!(v36 & 0xff000000))
                {
                    v37 = iter - 2;
                    goto LABEL_596448;
                }
            }
            else
            {
                v37 = iter + 1;
LABEL_596448:
                iter = v37 + 1;
                break;
            }
        }
    }
LABEL_596449:
    v3 = iter;
    v38 = iter + 1;
    v39 = 3;
    v40 = 13;
    v41 = 0;
    v42 = 0;
    do
    {
        v43 = v31;
        v44 = v5;
        if (!v39)
            break;
        v39 -= 1;
        v40 = 4;
        v41 = *(char *)v43;
        v42 = *v44;
        v5 = v44 + 1;
        v31 = v43 + 1;
    } while (*(char *)v43 == *v44);
    v45 = _ccall(4, v40, v41, v42, 0);
    if (v45 & 1)
    {
        *(int *)&a1[4] = (int)v3[1];
        v38 = v3 + 5;
    }
    else
    {
        *(unsigned int *)&a1[4] = 0;
    }
    v46 = decode_sleb128(decode_uleb128(v38, a1 + 8), a1 + 12);
    *(unsigned int *)&a1[16] = *v46;
    v47 = v46 + 1;
    if (*(char *)*(int *)a1 == 122)
        v47 = decode_uleb128(v47, &v7) + v7;
    return v47;
}

