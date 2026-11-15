// SetSequenceBox__14CBaseAnimating @0x8eb50 size=714
float SetSequenceBox__14CBaseAnimating(float a0)
{
    float v37;  // 120
    double v38;  // mm6
    double v47;  // mm0
    double v48;  // mm0
    double v49;  // mm0
    double v50;  // mm0
    double v51;  // mm0
    double v52;  // mm0
    double v53;  // mm0
    float v54;  // mm7
    unsigned int v39;  // eax
    unsigned int i;  // eax
    int idx;  // edi
    float v43;  // 96
    int index;  // esi
    int l;  // ecx
    double v46;  // mm1
    int v0;  // [bp-0x15c]
    int v1;  // [bp-0x158]
    int v2;  // [bp-0x154]
    float v3;  // [bp-0x13c]
    float v4;  // [bp-0x134]
    float v5;  // [bp-0x130]
    float v6;  // [bp-0x12c]
    float v7;  // [bp-0x114]
    float v8;  // [bp-0x110]
    float v9;  // [bp-0x10c]
    float v10;  // [bp-0xf4]
    float v11;  // [bp-0xf0]
    float v12;  // [bp-0xec]
    unsigned int v13;  // [bp-0xec]
    float v14;  // [bp-0xd4]
    float v15;  // [bp-0xd0]
    float v16;  // [bp-0xcc]
    unsigned int v17;  // [bp-0xcc]
    float v18;  // [bp-0xb4]
    float v19;  // [bp-0xb0]
    float v20;  // [bp-0xac]
    unsigned int v21;  // [bp-0xa8]
    unsigned int v22;  // [bp-0xa4]
    unsigned int v23;  // [bp-0xa0]
    float v24;  // [bp-0x94]
    float v25;  // [bp-0x90]
    float v26;  // [bp-0x74]
    float v27;  // [bp-0x70]
    float v28;  // [bp-0x48]
    char v29;  // [bp-0x44], Other Possible Types: unsigned int
    unsigned int v30;  // [bp-0x40]
    unsigned int v31;  // [bp-0x3c]
    char v32;  // [bp-0x24]
    float v33;  // [bp-0x24]
    float v34;  // [bp-0x20]
    float v35;  // [bp-0x1c]

    if (!sub_489440(a0, *(int *)(*(int *)a0 + 296), &v32, &v29, v0, v1, v2))
        return v54;
    v28 = (float)(0.017453292519943295 * *(float *)(*(int *)a0 + 84));
    v37 = v28;
    v3 = v37;
    sub_48a9e0(*(unsigned int *)&v3, *(unsigned int *)((void*)&v3 + 4));
    v26 = v37;
    sub_48aeb0(*(unsigned int *)&v3, *(unsigned int *)((void*)&v3 + 4));
    v27 = v37;
    sub_48aeb0(*(unsigned int *)&v3, *(unsigned int *)((void*)&v3 + 4));
    v38 = -v37;
    v24 = (float)v38;
    sub_48a9e0(*(unsigned int *)&v3, *(unsigned int *)((void*)&v3 + 4));
    v25 = (float)v38;
    v39 = 1;
    do
    {
        i = v39;
        v39 = i - 1;
    } while (i >= 1);
    v18 = v33;
    v19 = v34;
    v20 = v35;
    v21 = v29;
    v22 = v30;
    v23 = v31;
    v14 = 9999.0f;
    v15 = 9999.0f;
    v16 = 9999.0f;
    v10 = -9999.0f;
    v11 = -9999.0f;
    v12 = -9999.0f;
    idx = 0;
    do
    {
        v43 = (&v18)[3 * idx];
        v7 = v43;
        index = 0;
        do
        {
            v8 = (&v19)[3 * index];
            l = 0;
            v46 = v24 * v8 + v26 * v43;
            do
            {
                v47 = (&v20)[3 * l];
                v9 = (float)v47;
                v48 = v46;
                v4 = (float)v48;
                v5 = v25 * v8 + v43 * v27;
                v6 = (float)v47;
                if (v46 < v14)
                    v14 = (float)v46;
                v49 = v4;
                if (v49 > v10)
                    v10 = (float)v49;
                v50 = v5;
                if (v50 < v15)
                    v15 = (float)v50;
                v51 = v5;
                if (v51 > v11)
                    v11 = (float)v51;
                v52 = v6;
                if (v52 < v16)
                    v16 = (float)v52;
                v53 = v6;
                if (v53 > v12)
                    v12 = (float)v53;
                l += 1;
            } while (l <= 1);
            index += 1;
        } while (index <= 1);
        idx += 1;
    } while (idx <= 1);
    v17 = 0;
    v13 = 0x3f800000;
    sub_48a0d0(*(int *)a0, &v14, &v10);
    return v25 * v8 + v43 * v27;
}

