// PM_CreateStuckTable @0x193ec0 size=1202
extern unsigned int rgv3tStuckTable;
extern unsigned int g_62cb24;
extern unsigned int g_62cb28;

double PM_CreateStuckTable(void)
{
    unsigned int *node;  // edi
    unsigned int v8;  // ecx
    float v17;  // 88
    double v18;  // mm7
    double v19;  // mm6
    double v20;  // mm5
    double v21;  // mm4
    double v22;  // mm1
    double v23;  // mm3
    unsigned int idx;  // eax
    double v25;  // mm4
    double v26;  // mm3
    unsigned int iter;  // edx
    float v27;  // 88
    double v28;  // mm7
    double v29;  // mm6
    double v30;  // mm5
    double v31;  // mm4
    double v32;  // mm1
    unsigned int idx1;  // eax
    double v34;  // mm4
    double v35;  // mm4
    double v36;  // mm3
    double v10;  // mm7
    float v37;  // 88
    double v38;  // mm6
    double v39;  // mm7
    double v40;  // mm5
    double v41;  // mm4
    double v42;  // mm1
    double v43;  // mm3
    unsigned int idx2;  // eax
    double v45;  // mm3
    double v46;  // mm7
    double v11;  // mm6
    double v47;  // mm5
    double v48;  // mm6
    float v49;  // 104
    double v50;  // mm7
    double v51;  // mm7
    double v52;  // mm6
    int v53;  // ecx
    double v54;  // mm5
    float v55;  // 128
    unsigned int v56;  // eax
    double v12;  // mm5
    double v57;  // mm5
    double v58;  // mm7
    double v59;  // mm6
    double v60;  // mm3
    unsigned int index;  // eax
    double v62;  // mm4
    double v63;  // mm7
    double v64;  // mm6
    double v65;  // mm3
    unsigned int v66;  // eax
    double v13;  // mm4
    double v67;  // mm4
    double v68;  // mm4
    double v69;  // mm6
    int v70;  // ecx
    double v71;  // mm7
    double iter1;  // mm6
    double v73;  // mm3
    double v74;  // mm4
    unsigned int v75;  // eax
    double v76;  // mm4
    double v14;  // mm3
    double v77;  // mm4
    unsigned int v15;  // eax
    double v16;  // mm3
    unsigned int *v0;  // [bp-0x3c]
    unsigned int *v1;  // [bp-0x38]
    float v2;  // [bp-0x28]
    float v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    node = &rgv3tStuckTable;
    for (v8 = 162; v8; node += 1)
    {
        v8 -= 1;
        *node = 0;
    }
    iter = 0;
    v10 = 0.0;
    v11 = 0.0;
    v12 = -0.125;
    v13 = -0.125;
    if ((-0.125 == 0.125 ? 63 : -0.125 < 0.125 ? 0 : 0xff) < 64)
    {
        while (1)
        {
            v14 = v11;
            v15 = iter * 12;
            *(float *)(v15 + (char *)&rgv3tStuckTable) = (float)v14;
            v16 = v10;
            *(float *)(v15 + (char *)&g_62cb24) = (float)v16;
            *(float *)(v15 + (char *)&g_62cb28) = (float)v12;
            iter += 1;
            v2 = (float)(v13 + 0.125);
            v17 = v2;
            if ((isnan(v17) ? 0x44 : v17 == 0.125 ? 63 : v17 < 0.125 ? 0 : 0xff) >= 64)
                break;
            v12 = v17;
            v10 = v16;
            v13 = v17;
            v11 = v14;
        }
    }
    v18 = 0.0;
    v19 = 0.0;
    v20 = -0.125;
    v21 = -0.125;
    v22 = 0.125;
    if ((-0.125 == 0.125 ? 63 : -0.125 < 0.125 ? 0 : 0xff) < 64)
    {
        while (1)
        {
            v23 = v19;
            idx = iter * 12;
            *(float *)(idx + (char *)&rgv3tStuckTable) = (float)v23;
            *(float *)(idx + (char *)&g_62cb24) = (float)v20;
            v25 = v18;
            *(float *)(idx + (char *)&g_62cb28) = (float)v25;
            iter += 1;
            v26 = v22;
            v2 = (float)(v21 + v26);
            v27 = v2;
            if ((isunordered(v27, v26) ? 0x44 : v27 == v26 ? 63 : v27 < v26 ? 0 : 0xff) >= 64)
                break;
            v20 = v27;
            v21 = v27;
            v19 = v23;
            v18 = v25;
            v22 = v26;
        }
    }
    v28 = 0.0;
    v29 = 0.0;
    v30 = -0.125;
    v31 = -0.125;
    v32 = 0.125;
    if ((-0.125 == 0.125 ? 63 : -0.125 < 0.125 ? 0 : 0xff) < 64)
    {
        while (1)
        {
            idx1 = iter * 12;
            *(float *)(idx1 + (char *)&rgv3tStuckTable) = (float)v30;
            v34 = v29;
            *(float *)(idx1 + (char *)&g_62cb24) = (float)v34;
            v35 = v28;
            *(float *)(idx1 + (char *)&g_62cb28) = (float)v35;
            iter += 1;
            v36 = v32;
            v2 = (float)(v31 + v36);
            v37 = v2;
            if ((isunordered(v37, v36) ? 0x44 : v37 == v36 ? 63 : v37 < v36 ? 0 : 0xff) >= 64)
                break;
            v31 = v37;
            v30 = v37;
            v28 = v35;
            v29 = v34;
            v32 = v36;
        }
    }
    v38 = -0.125;
    if ((-0.125 == 0.125 ? 63 : -0.125 < 0.125 ? 0 : 0xff) < 64)
    {
        while (1)
        {
            v39 = -0.125;
            while (1)
            {
                v40 = -0.125;
                v41 = -0.125;
                v42 = 0.125;
                if ((-0.125 == 0.125 ? 63 : -0.125 < 0.125 ? 0 : 0xff) < 64)
                {
                    while (1)
                    {
                        v43 = v38;
                        idx2 = iter * 12;
                        *(float *)(idx2 + (char *)&rgv3tStuckTable) = (float)v43;
                        v45 = v39;
                        v46 = v43;
                        *(float *)(idx2 + (char *)&g_62cb24) = (float)v45;
                        v47 = v45;
                        *(float *)(idx2 + (char *)&g_62cb28) = (float)v40;
                        v48 = v42;
                        iter += 1;
                        v2 = (float)(v41 + 0.25);
                        v49 = v2;
                        v41 = v49;
                        if ((isunordered(v41, v48) ? 0x44 : v41 == v48 ? 63 : v41 < v48 ? 0 : 0xff) >= 64)
                            break;
                        v40 = v49;
                        v39 = v47;
                        v38 = v46;
                        v42 = v48;
                    }
                    v38 = v46;
                    v39 = v47;
                }
                v50 = v38;
                v2 = (float)(v39 + 0.25);
                if ((isnan(v2) ? 0x44 : v2 == 0.125 ? 63 : v2 < 0.125 ? 0 : 0xff) >= 64)
                    break;
                v38 = v50;
                v39 = v2;
            }
            v2 = (float)(v50 + 0.25);
            if (0.125 < v2)
                break;
            v38 = v2;
        }
    }
    v51 = 0.0;
    v52 = 0.0;
    v3 = 0.0f;
    v4 = 0x3f800000;
    v5 = 6.0f;
    v53 = 0;
    v1 = &g_62cb24;
    v0 = &g_62cb28;
    while (1)
    {
        v54 = v51;
        v55 = (&v3)[v53];
        v56 = iter * 12;
        *(float *)(v56 + (char *)&rgv3tStuckTable) = (float)v54;
        v57 = v52;
        *(float *)(v56 + (char *)v1) = (float)v57;
        *(float *)(v56 + (char *)v0) = v55;
        iter += 1;
        v53 += 1;
        if (v53 > 2)
            break;
        v52 = v57;
        v51 = v54;
    }
    v58 = 0.0;
    v59 = 0.0;
    v60 = -2.0;
    if ((-2.0 == 2.0 ? 63 : -2.0 < 2.0 ? 0 : 0xff) < 64)
    {
        do
        {
            index = iter * 12;
            *(float *)(index + (char *)&rgv3tStuckTable) = (float)v59;
            v62 = v60;
            *(float *)(index + (char *)&g_62cb24) = (float)v62;
            *(float *)(index + (char *)&g_62cb28) = (float)v58;
            iter += 1;
            v2 = (float)(v62 + 2.0);
            v60 = v2;
        } while ((isnan(v60) ? 0x44 : v60 == 2.0 ? 63 : v60 < 2.0 ? 0 : 0xff) < 64);
    }
    v63 = 0.0;
    v64 = 0.0;
    v65 = -2.0;
    if ((-2.0 == 2.0 ? 63 : -2.0 < 2.0 ? 0 : 0xff) < 64)
    {
        while (1)
        {
            v66 = iter * 12;
            *(float *)(v66 + (char *)&rgv3tStuckTable) = (float)v65;
            v67 = v64;
            *(float *)(v66 + (char *)&g_62cb24) = (float)v67;
            v68 = v63;
            *(float *)(v66 + (char *)&g_62cb28) = (float)v68;
            iter += 1;
            v69 = v65 + 2.0;
            if (2.0 < v69)
                break;
            v63 = v68;
            v65 = v69;
            v64 = v67;
        }
    }
    v70 = 0;
    do
    {
        v71 = (&v3)[v70];
        iter1 = -2.0;
        if ((-2.0 == 2.0 ? 63 : -2.0 < 2.0 ? 0 : 0xff) < 64)
        {
            do
            {
                v73 = -2.0;
                if ((-2.0 == 2.0 ? 63 : -2.0 < 2.0 ? 0 : 0xff) < 64)
                {
                    do
                    {
                        v74 = iter1;
                        v75 = iter * 12;
                        *(float *)(v75 + (char *)&rgv3tStuckTable) = (float)v74;
                        v76 = v73;
                        iter1 = v74;
                        *(float *)(v75 + (char *)&g_62cb24) = (float)v76;
                        v77 = v71;
                        *(float *)(v75 + (char *)&g_62cb28) = (float)v77;
                        iter += 1;
                        v71 = v77;
                        v2 = (float)(v76 + 2.0);
                        v73 = v2;
                    } while ((isnan(v73) ? 0x44 : v73 == 2.0 ? 63 : v73 < 2.0 ? 0 : 0xff) < 64);
                }
            } while ((iter1 += 2.0, 2.0 >= iter1));
        }
    } while ((v70 += 1, v70 <= 2));
    return v71;
}

