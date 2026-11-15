// CheckNode__6CGraphG6Vectori @0xdfe10 size=1627
typedef struct st_4dfe10_0 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[20];
    unsigned int field_24;
    char padding_28[6144];
    float field_1828;
    unsigned int field_182c;
    int field_1830;
    int field_1834;
    int field_1838;
    int field_183c;
    int field_1840;
    int field_1844;
    unsigned int field_1848;
    unsigned int field_184c;
    unsigned int field_1850;
    unsigned int field_1854;
    unsigned int field_1858;
    unsigned int field_185c;
    unsigned int field_1860;
    unsigned int field_1864;
    unsigned int field_1868;
    unsigned int field_186c;
    unsigned int field_1870;
    unsigned int field_1874;
    unsigned int field_1878;
} st_4dfe10_0;

float CheckNode__6CGraphG6Vectori(st_4dfe10_0 *a0, float *a1, unsigned int a2)
{
    unsigned int v29;  // edx
    unsigned int *v30;  // eax
    int v39;  // eax
    int v40;  // edx
    unsigned int v41;  // edi
    unsigned int v42;  // ecx
    int v43;  // eax
    unsigned int v44;  // edi
    unsigned int v45;  // ecx
    int v46;  // eax
    float *v47;  // edi
    float *v48;  // edi
    float *v31;  // ecx
    float v49;  // 128
    float v50;  // mm7
    float v32;  // 112
    float v33;  // 112
    float v34;  // 112
    double v35;  // mm7
    double v36;  // mm6
    unsigned int v37;  // edi
    int v38;  // ecx
    int v0;  // [bp-0xa8], Other Possible Types: unsigned int
    char *v1;  // [bp-0xa4]
    char *v2;  // [bp-0xa0]
    unsigned int *v3;  // [bp-0x9c]
    unsigned int *v4;  // [bp-0x98]
    char *v5;  // [bp-0x94]
    char *v6;  // [bp-0x90]
    unsigned int *v7;  // [bp-0x8c]
    unsigned int *v8;  // [bp-0x88]
    char *v9;  // [bp-0x84]
    unsigned int *v10;  // [bp-0x80]
    unsigned int *v11;  // [bp-0x7c]
    float v12;  // [bp-0x78]
    char v13;  // [bp-0x74], Other Possible Types: int, unsigned int
    char v14;  // [bp-0x70], Other Possible Types: int, unsigned int
    char v15;  // [bp-0x6c], Other Possible Types: int, unsigned int
    char v16;  // [bp-0x68], Other Possible Types: int, unsigned int
    int v17;  // [bp-0x64]
    char v18;  // [bp-0x60], Other Possible Types: int
    int v19;  // [bp-0x5c]
    int v20;  // [bp-0x5c]
    int v21;  // [bp-0x5c]
    unsigned short v22;  // [bp-0x58]
    unsigned short v23;  // [bp-0x56]
    char v24;  // [bp-0x44]
    float v25;  // [bp-0x34]
    float v26;  // [bp-0x24]
    float v27;  // [bp-0x20]
    float v28;  // [bp-0x1c]

    v29 = a2 * 16;
    if (*(int *)(a0->field_24 + v29 + 12) == a0->field_1860)
        return v50;
    *(unsigned int *)(a0->field_24 + v29 + 12) = a0->field_1860;
    v30 = a0->field_c + a2 * 88 + 12;
    v31 = a1;
    v32 = *v31 - *(float *)v30;
    v26 = v32;
    v33 = v31[1] - *(float *)&v30[1];
    v27 = v33;
    v34 = v31[2] - *(float *)&v30[2];
    v28 = v34;
    v35 = v32 * v32 + v33 * v33 + v34 * v34;
    v36 = sqrt(v35);
    if (isnan(v36))
        sqrt(*(unsigned int *)&v35);
    else
        v35 = v36;
    v12 = (float)v35;
    if (v12 >= a0->field_1828)
        return v12;
    v37 = a2 * 88;
    UTIL_TraceLine(a1, v37 + a0->field_c + 12, 1, 0, &v24);
    if (v25 != 1.0f)
        return v25;
    a0->field_182c = a2;
    a0->field_1828 = v12;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v0 = (int)*a1;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v19 = (int)*(float *)&a0->field_1864;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v20 = (int)*(float *)&a0->field_1870;
    v38 = (v0 - v19) * 0x100 / (v20 - v19 + 1);
    v11 = &a0->field_1830;
    v10 = &a0->field_183c;
    v39 = *(char *)(a0->field_c + v37 + 24);
    v9 = &v18;
    v40 = v38 * 2 - v39;
    if (v39 > v38)
    {
        if (v40 < 0)
            v40 = 0;
        v18 = v40;
        v17 = v39;
    }
    else
    {
        if (v40 > 0xff)
            v40 = 0xff;
        v17 = v40;
        v18 = v39;
    }
    if (v17 < (int)*v10)
        *v10 = v17;
    if ((int)*v11 < v18)
        *v11 = v18;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v19 = (int)a1[1];
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v20 = (int)*(float *)&a0->field_1868;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v21 = (int)*(float *)&a0->field_1874;
    v41 = (v19 - v20) * 0x100 / (v21 - v20 + 1);
    v8 = &a0->field_1834;
    v7 = &a0->field_1840;
    v42 = *(char *)(a0->field_c + a2 * 88 + 25);
    v6 = &v16;
    v5 = &v15;
    v43 = v41 * 2 - v42;
    if ((int)v42 > (int)v41)
    {
        if (v43 < 0)
            v43 = 0;
        v16 = v43;
        v15 = v42;
    }
    else
    {
        if (v43 > 0xff)
            v43 = 0xff;
        v15 = v43;
        v16 = v42;
    }
    if (v15 < (int)*v7)
        *v7 = v15;
    if ((int)*v8 < v16)
        *v8 = v16;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v19 = (int)a1[2];
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v20 = (int)*(float *)&a0->field_186c;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v21 = (int)*(float *)&a0->field_1878;
    v44 = (v19 - v20) * 0x100 / (v21 - v20 + 1);
    v4 = &a0->field_1838;
    v3 = &a0->field_1844;
    v45 = *(char *)(a0->field_c + a2 * 88 + 26);
    v2 = &v14;
    v1 = &v13;
    v46 = v44 * 2 - v45;
    if ((int)v45 > (int)v44)
    {
        if (v46 < 0)
            v46 = 0;
        v14 = v46;
        v13 = v45;
    }
    else
    {
        if (v46 > 0xff)
            v46 = 0xff;
        v13 = v46;
        v14 = v45;
    }
    if (v13 < (int)*v3)
        *v3 = v13;
    if ((int)*v4 < v14)
        *v4 = v14;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v19 = (int)(*a1 - v12);
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v20 = (int)*(float *)&a0->field_1864;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v21 = (int)*(float *)&a0->field_1870;
    v0 = v21 - v20 + 1;
    a0->field_1848 = (v19 - v20) * 0x100 / v0;
    v47 = a1;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v19 = (int)(v12 + *v47);
    a0->field_1854 = (v19 - v20) * 0x100 / v0;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v19 = (int)(v47[1] - v12);
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v20 = (int)*(float *)&a0->field_1868;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v21 = (int)*(float *)&a0->field_1874;
    v0 = v21 - v20 + 1;
    a0->field_184c = (v19 - v20) * 0x100 / v0;
    v48 = a1;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v19 = (int)(v12 + v48[1]);
    a0->field_1858 = (v19 - v20) * 0x100 / v0;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v21 = (int)(v48[2] - v12);
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v19 = (int)*(float *)&a0->field_186c;
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v20 = (int)*(float *)&a0->field_1878;
    v0 = v20 - v19 + 1;
    a0->field_1850 = (v21 - v19) * 0x100 / v0;
    v49 = v12 + a1[2];
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v20 = (int)v49;
    a0->field_185c = (v20 - v19) * 0x100 / v0;
    return v49;
}

