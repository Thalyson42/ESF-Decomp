// FindNearestNode__6CGraphRC6Vectori @0xe04b0 size=2043
typedef struct st_4e04b0_0 {
    unsigned int field_0;
} st_4e04b0_0;

extern st_4e04b0_0 *g_6168b4;
extern st_4e04b0_0 *g_616918;
extern st_4e04b0_0 *g_61691c;
extern st_4e04b0_0 *g_616924;

unsigned int FindNearestNode__6CGraphRC6Vectori(void* a0, float *a1, unsigned int a2)
{
    unsigned int *v25;  // edx
    unsigned int v34;  // ecx
    unsigned int v35;  // edx
    unsigned int v36;  // eax
    unsigned int v37;  // eax
    float *v38;  // ecx
    int *v39;  // eax
    unsigned int v40;  // esi
    unsigned int v41;  // ecx
    unsigned int v42;  // edx
    unsigned int v43;  // eax
    unsigned int v26;  // esi
    unsigned int v44;  // eax
    float *v45;  // edx
    int *v46;  // eax
    unsigned int v47;  // esi
    unsigned int v48;  // ecx
    unsigned int v49;  // edx
    unsigned int v50;  // eax
    unsigned int v51;  // eax
    float *v52;  // ecx
    int *v53;  // eax
    float *v27;  // ecx
    unsigned int v54;  // esi
    unsigned int v55;  // ecx
    unsigned int v56;  // edx
    unsigned int v57;  // eax
    unsigned int v58;  // eax
    float *v59;  // edx
    int *v60;  // eax
    unsigned int v61;  // esi
    unsigned int v62;  // ecx
    unsigned int v63;  // edx
    unsigned int v28;  // 4096
    unsigned int v64;  // eax
    unsigned int v65;  // eax
    float *v66;  // ecx
    int *v67;  // eax
    unsigned int v68;  // esi
    unsigned int v69;  // ecx
    unsigned int v70;  // edx
    unsigned int v71;  // eax
    unsigned int v72;  // eax
    float *v73;  // edx
    unsigned int v29;  // 4105
    unsigned int v74;  // ecx
    void* v75;  // edx
    float *v76;  // esi
    unsigned int v30;  // 4111
    unsigned int i;  // ecx
    int *v32;  // eax
    unsigned int v33;  // esi
    unsigned int *v0;  // [bp-0xb8]
    unsigned int *v1;  // [bp-0xb4]
    unsigned int *v2;  // [bp-0xb0]
    unsigned int *v3;  // [bp-0xac]
    unsigned int *v4;  // [bp-0xa8]
    unsigned int *v5;  // [bp-0xa4]
    unsigned int v6;  // [bp-0xa0]
    unsigned int *v7;  // [bp-0x9c]
    unsigned int v8;  // [bp-0x98]
    unsigned int *v9;  // [bp-0x94]
    unsigned int v10;  // [bp-0x90]
    unsigned int *v11;  // [bp-0x8c]
    unsigned int v12;  // [bp-0x88]
    unsigned int *v13;  // [bp-0x84]
    unsigned int v14;  // [bp-0x80]
    unsigned int *v15;  // [bp-0x7c]
    unsigned int v16;  // [bp-0x78]
    unsigned int *v17;  // [bp-0x74]
    unsigned int v18;  // [bp-0x70]
    unsigned int iter;  // [bp-0x6c]
    char v20;  // [bp-0x68], Other Possible Types: unsigned int
    unsigned int v21;  // [bp-0x64]
    float v22;  // [bp-0x60]
    unsigned int v23;  // [bp-0x5c]

    if (*(int *)a0 && (int)a0[4])
    {
        g_616918(&v20);
        g_61691c(&v20, a1, 12);
        v18 = g_616924(v20) & 127;
        v25 = a0 + v18 * 16 + 6268;
        v26 = 0;
        v27 = a1;
        if (*v27 == *(float *)v25 && v27[1] == *(float *)&v25[1])
            v26 = v27[2] == *(float *)&v25[2];
        if (v26)
            return *(short *)(16 * v18 + (char *)a0 + 6280);
        v28 = (int)a0[6240];
        *(unsigned int *)&a0[6240] = (int)a0[6240] + 1;
        v29 = _ccall(15, v26, 0, 0);
        v30 = _ccall(4, 18, v28 + 1, 0, v29);
        if (v30 & 1)
        {
            i = 0;
            if (0 < (int)a0[24])
            {
                do
                {
                    *(unsigned int *)((int)a0[36] + i * 16 + 12) = 0;
                    i += 1;
                } while ((int)i < (int)a0[24]);
                *(unsigned int *)&a0[6240] = (int)a0[6240] + 1;
            }
            else
            {
                *(unsigned int *)&a0[6240] = (int)a0[6240] + 1;
            }
        }
        *(unsigned int *)&a0[6188] = 0xffffffff;
        *(float *)&a0[6184] = 999999.0f;
        *(unsigned int *)&a0[6192] = 0;
        *(unsigned int *)&a0[6204] = 0xff;
        *(unsigned int *)&a0[6196] = 0;
        *(unsigned int *)&a0[6208] = 0xff;
        *(unsigned int *)&a0[6200] = 0;
        *(unsigned int *)&a0[6212] = 0xff;
        *(unsigned int *)&a0[6216] = 0;
        *(unsigned int *)&a0[6228] = 0xff;
        *(unsigned int *)&a0[6220] = 0;
        *(unsigned int *)&a0[6232] = 0xff;
        *(unsigned int *)&a0[6224] = 0;
        *(unsigned int *)&a0[6236] = 0xff;
        iter = 127;
        v5 = a0 + 3112;
        do
        {
            v32 = iter * 4;
            v33 = *(int *)(v32 + a0 + 40);
            if (*(int *)(v32 + a0 + 40) <= *(int *)(v32 + v5))
            {
                do
                {
                    v17 = (int)a0[36];
                    v16 = v33 * 16;
                    v34 = (int)a0[12];
                    v35 = *(int *)((int)a0[36] + v16) * 88;
                    if (!(a2 & *(int *)(v34 + v35 + 28)))
                        continue;
                    v36 = *(char *)(v34 + v35 + 25);
                    if ((int)v36 > (int)a0[6232])
                        break;
                    if ((int)v36 >= (int)a0[6220])
                    {
                        v37 = *(char *)(v34 + v35 + 26);
                        if ((int)v37 >= (int)a0[6224] && (int)v37 <= (int)a0[6236])
                        {
                            v38 = a1;
                            *(float *)&v21 = *v38;
                            v22 = v38[1];
                            *(float *)&v23 = v38[2];
                            sub_48bae0(a0, &v21, *(int *)((char *)v17 + v16));
                        }
                    }
                } while ((v33 += 1, (int)v33 <= (int)v5[iter]));
            }
        } while ((iter -= 1, (int)iter >= (int)a0[6192]));
        iter = 128;
        if (128 < (int)a0[6196])
            iter = (int)a0[6196];
        if ((int)iter <= (int)a0[6208])
        {
            v4 = a0 + 4136;
            do
            {
                v39 = iter * 4;
                v40 = *(int *)(v39 + a0 + 1064);
                if (*(int *)(v39 + a0 + 1064) <= *(int *)(v39 + v4))
                {
                    do
                    {
                        v15 = (int)a0[36];
                        v14 = v40 * 16;
                        v41 = (int)a0[12];
                        v42 = *(int *)((int)a0[36] + v14 + 4) * 88;
                        if (!(a2 & *(int *)(v41 + v42 + 28)))
                            continue;
                        v43 = *(char *)(v41 + v42 + 26);
                        if ((int)v43 > (int)a0[6236])
                            break;
                        if ((int)v43 >= (int)a0[6224])
                        {
                            v44 = *(char *)(v41 + v42 + 24);
                            if ((int)v44 >= (int)a0[6216] && (int)v44 <= (int)a0[6228])
                            {
                                v45 = a1;
                                *(float *)&v21 = *v45;
                                v22 = v45[1];
                                *(float *)&v23 = v45[2];
                                sub_48bae0(a0, &v21, *(int *)((char *)v15 + v14 + 4));
                            }
                        }
                    } while ((v40 += 1, (int)v40 <= (int)v4[iter]));
                }
            } while ((iter += 1, (int)iter <= (int)a0[6208]));
        }
        iter = 127;
        if ((int)iter > (int)a0[6212])
            iter = (int)a0[6212];
        if ((int)iter >= (int)a0[6200])
        {
            v3 = a0 + 5160;
            do
            {
                v46 = iter * 4;
                v47 = *(int *)(v46 + a0 + 2088);
                if (*(int *)(v46 + a0 + 2088) <= *(int *)(v46 + v3))
                {
                    do
                    {
                        v13 = (int)a0[36];
                        v12 = v47 * 16;
                        v48 = (int)a0[12];
                        v49 = *(int *)((int)a0[36] + v12 + 8) * 88;
                        if (!(a2 & *(int *)(v48 + v49 + 28)))
                            continue;
                        v50 = *(char *)(v48 + v49 + 24);
                        if ((int)v50 > (int)a0[6228])
                            break;
                        if ((int)v50 >= (int)a0[6216])
                        {
                            v51 = *(char *)(v48 + v49 + 25);
                            if ((int)v51 >= (int)a0[6220] && (int)v51 <= (int)a0[6232])
                            {
                                v52 = a1;
                                *(float *)&v21 = *v52;
                                v22 = v52[1];
                                *(float *)&v23 = v52[2];
                                sub_48bae0(a0, &v21, *(int *)((char *)v13 + v12 + 8));
                            }
                        }
                    } while ((v47 += 1, (int)v47 <= (int)v3[iter]));
                }
            } while ((iter -= 1, (int)iter >= (int)a0[6200]));
        }
        iter = 128;
        if ((int)iter < (int)a0[6192])
            iter = (int)a0[6192];
        if ((int)iter <= (int)a0[6204])
        {
            v2 = a0 + 3112;
            do
            {
                v53 = iter * 4;
                v54 = *(int *)(v53 + a0 + 40);
                if (*(int *)(v53 + a0 + 40) <= *(int *)(v53 + v2))
                {
                    do
                    {
                        v11 = (int)a0[36];
                        v10 = v54 * 16;
                        v55 = (int)a0[12];
                        v56 = *(int *)((int)a0[36] + v10) * 88;
                        if (!(a2 & *(int *)(v55 + v56 + 28)))
                            continue;
                        v57 = *(char *)(v55 + v56 + 25);
                        if ((int)v57 > (int)a0[6232])
                            break;
                        if ((int)v57 >= (int)a0[6220])
                        {
                            v58 = *(char *)(v55 + v56 + 26);
                            if ((int)v58 >= (int)a0[6224] && (int)v58 <= (int)a0[6236])
                            {
                                v59 = a1;
                                *(float *)&v21 = *v59;
                                v22 = v59[1];
                                *(float *)&v23 = v59[2];
                                sub_48bae0(a0, &v21, *(int *)((char *)v11 + v10));
                            }
                        }
                    } while ((v54 += 1, (int)v54 <= (int)v2[iter]));
                }
            } while ((iter += 1, (int)iter <= (int)a0[6204]));
        }
        iter = 127;
        if ((int)iter > (int)a0[6208])
            iter = (int)a0[6208];
        if ((int)iter >= (int)a0[6196])
        {
            v1 = a0 + 4136;
            do
            {
                v60 = iter * 4;
                v61 = *(int *)(v60 + a0 + 1064);
                if (*(int *)(v60 + a0 + 1064) <= *(int *)(v60 + v1))
                {
                    do
                    {
                        v9 = (int)a0[36];
                        v8 = v61 * 16;
                        v62 = (int)a0[12];
                        v63 = *(int *)((int)a0[36] + v8 + 4) * 88;
                        if (!(a2 & *(int *)(v62 + v63 + 28)))
                            continue;
                        v64 = *(char *)(v62 + v63 + 26);
                        if ((int)v64 > (int)a0[6236])
                            break;
                        if ((int)v64 >= (int)a0[6224])
                        {
                            v65 = *(char *)(v62 + v63 + 24);
                            if ((int)v65 >= (int)a0[6216] && (int)v65 <= (int)a0[6228])
                            {
                                v66 = a1;
                                *(float *)&v21 = *v66;
                                v22 = v66[1];
                                *(float *)&v23 = v66[2];
                                sub_48bae0(a0, &v21, *(int *)((char *)v9 + v8 + 4));
                            }
                        }
                    } while ((v61 += 1, (int)v61 <= (int)v1[iter]));
                }
            } while ((iter -= 1, (int)iter >= (int)a0[6196]));
        }
        iter = 128;
        if (128 < (int)a0[6200])
            iter = (int)a0[6200];
        if ((int)iter <= (int)a0[6212])
        {
            v0 = a0 + 5160;
            do
            {
                v67 = iter * 4;
                v68 = *(int *)(v67 + a0 + 2088);
                if (*(int *)(v67 + a0 + 2088) <= *(int *)(v67 + v0))
                {
                    do
                    {
                        v7 = (int)a0[36];
                        v6 = v68 * 16;
                        v69 = (int)a0[12];
                        v70 = *(int *)((int)a0[36] + v6 + 8) * 88;
                        if (!(a2 & *(int *)(v69 + v70 + 28)))
                            continue;
                        v71 = *(char *)(v69 + v70 + 24);
                        if ((int)v71 > (int)a0[6228])
                            break;
                        if ((int)v71 >= (int)a0[6216])
                        {
                            v72 = *(char *)(v69 + v70 + 25);
                            if ((int)v72 >= (int)a0[6220] && (int)v72 <= (int)a0[6232])
                            {
                                v73 = a1;
                                *(float *)&v21 = *v73;
                                v22 = v73[1];
                                *(float *)&v23 = v73[2];
                                sub_48bae0(a0, &v21, *(int *)((char *)v7 + v6 + 8));
                            }
                        }
                    } while ((v68 += 1, (int)v68 <= (int)v0[iter]));
                }
            } while ((iter += 1, (int)iter <= (int)a0[6212]));
        }
        v74 = v18 * 16;
        v75 = a0 + v74;
        v76 = a1;
        *(float *)&v75[6268] = *v76;
        *(float *)&v75[6272] = v76[1];
        *(float *)&v75[6276] = v76[2];
        *(short *)(v74 + (char *)a0 + 6280) = (short)a0[6188];
        return (int)a0[6188];
    }
    g_6168b4(2, "Graph not ready!\n");
    return 0xffffffff;
}

