// MakeRandomTeleports__9CBotCombo8ETeleDirN21 @0x164fb0 size=2454
typedef struct st_564fb0_8 {
    struct st_564fb0_7 *field_0;
    struct st_564fb0_7 *field_4;
    char padding_8[4];
    struct st_564fb0_2 *field_c;
} st_564fb0_8;

typedef struct st_564fb0_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_564fb0_1;

typedef struct st_564fb0_2 {
    struct st_564fb0_3 *field_0;
    char padding_4[2920];
    struct st_564fb0_4 *field_b6c;
} st_564fb0_2;

typedef struct st_564fb0_5 {
    unsigned int field_0;
    struct st_564fb0_2 *field_4;
    char padding_8[8];
    unsigned int field_10;
    char padding_14[4];
    unsigned int field_18;
    char field_1c;
    char field_1d;
    char field_1e;
} st_564fb0_5;

typedef struct st_564fb0_4 {
    struct st_564fb0_1 *field_0;
} st_564fb0_4;

typedef struct st_564fb0_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[96];
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[392];
    unsigned int field_208;
    char padding_20c[84];
    unsigned int field_260;
} st_564fb0_3;

typedef struct st_564fb0_7 {
    struct st_564fb0_5 *field_0;
    struct st_564fb0_6 *field_4;
    unsigned int field_8;
} st_564fb0_7;

typedef struct st_564fb0_6 {
    struct st_564fb0_5 *field_0;
    unsigned int field_4;
    struct st_564fb0_7 *field_8;
} st_564fb0_6;

typedef struct st_564fb0_9 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_564fb0_9;

typedef struct st_564fb0_0 {
    unsigned int field_0;
} st_564fb0_0;

extern char __vt_19CTeleportComboEntry;
extern char __vt_18CBaseBotComboEntry;
extern st_564fb0_0 *g_engfuncs.pfnRandomLong;
extern st_564fb0_0 *g_engfuncs.pfnRandomFloat;
extern st_564fb0_9 *gpGlobals;

char MakeRandomTeleports__9CBotCombo8ETeleDirN21(st_564fb0_8 *a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    st_564fb0_2 *v45;  // ecx
    unsigned int *v46;  // edx
    unsigned int v55;  // esi
    unsigned int v56;  // eax
    unsigned int v57;  // esi
    unsigned int v58;  // eax
    unsigned int v59;  // esi
    unsigned int *v60;  // edx
    unsigned int *v61;  // edx
    double v62;  // mm5
    double v63;  // mm5
    unsigned int *v64;  // edx
    unsigned int *v47;  // edx
    double v65;  // mm7
    unsigned int *v66;  // edx
    double v67;  // mm7
    unsigned int *v68;  // edx
    double v69;  // mm7
    unsigned int *v70;  // edx
    double v71;  // mm7
    unsigned int *v72;  // edx
    unsigned int *v73;  // edx
    double v74;  // mm5
    float v48;  // 112
    double v75;  // mm5
    double v76;  // mm7
    double v77;  // mm6
    double v78;  // mm5
    unsigned int *v79;  // edx
    double v80;  // mm7
    unsigned int *v81;  // edx
    unsigned int *v82;  // edx
    double v83;  // mm5
    double v84;  // mm5
    float v49;  // 112
    st_564fb0_5 *v85;  // edi
    st_564fb0_2 *v86;  // edx
    st_564fb0_7 *v87;  // esi
    st_564fb0_8 *v88;  // edx
    st_564fb0_6 *v89;  // esi
    st_564fb0_8 *v90;  // esi
    st_564fb0_6 *v91;  // eax
    unsigned int v92;  // 4111
    float v50;  // 112
    double v51;  // mm7
    double v52;  // mm6
    unsigned int *v53;  // edx
    unsigned int v54;  // eax
    char v0;  // [bp-0xe1]
    st_564fb0_7 *v1;  // [bp-0xe0]
    char v2;  // [bp-0xd9]
    st_564fb0_5 *v3;  // [bp-0xd8]
    char v4;  // [bp-0xd3]
    char v5;  // [bp-0xd2]
    char v6;  // [bp-0xd1]
    char v7;  // [bp-0xd0]
    char v8;  // [bp-0xcf]
    char v9;  // [bp-0xce]
    char v10;  // [bp-0xcd]
    int iter;  // [bp-0xcc]
    unsigned short v12;  // [bp-0xc6]
    int v13;  // [bp-0xc4]
    float v14;  // [bp-0xc0]
    float v15;  // [bp-0xbc]
    float v16;  // [bp-0xb8]
    float v17;  // [bp-0xb4]
    float v18;  // [bp-0xb0]
    float v19;  // [bp-0xac]
    float v20;  // [bp-0xa8]
    float v21;  // [bp-0x9c]
    float v22;  // [bp-0x98]
    float v23;  // [bp-0x94]
    float v24;  // [bp-0x70]
    unsigned short v25;  // [bp-0x68]
    unsigned short v26;  // [bp-0x66]
    unsigned int v27;  // [bp-0x64]
    unsigned int v28;  // [bp-0x60], Other Possible Types: unsigned short
    unsigned short v29;  // [bp-0x5e]
    float v30;  // [bp-0x5c]
    float v31;  // [bp-0x58]
    float v32;  // [bp-0x54]
    float v33;  // [bp-0x50]
    float v34;  // [bp-0x4c], Other Possible Types: unsigned int
    float v35;  // [bp-0x48], Other Possible Types: unsigned int
    float v36;  // [bp-0x44], Other Possible Types: unsigned int
    float v37;  // [bp-0x40]
    float v38;  // [bp-0x3c]
    float v39;  // [bp-0x30]
    unsigned int v40;  // [bp-0x2c]
    unsigned int v41;  // [bp-0x28]
    unsigned int v42;  // [bp-0x24]
    unsigned int v43;  // [bp-0x20]
    unsigned int v44;  // [bp-0x1c]

    if (!a0->field_c->field_b6c)
        return 0;
    v45 = a0->field_c;
    v46 = *(int *)v45->field_b6c + 8;
    *(float *)&v42 = *(float *)(*(int *)v45->field_b6c + 8);
    *(float *)&v43 = *(float *)&v46[1];
    *(float *)&v44 = *(float *)&v46[2];
    v47 = &v45->field_0->field_8;
    v48 = *(float *)&v42 - *(float *)&v45->field_0->field_8;
    v36 = v48;
    v49 = *(float *)&v43 - *(float *)&v47[1];
    v37 = v49;
    v50 = *(float *)&v44 - *(float *)&v47[2];
    v38 = v50;
    v51 = v48 * v48 + v49 * v49 + v50 * v50;
    v52 = sqrt(v51);
    if (isnan(v52))
        sqrt(*(unsigned int *)&v51);
    else
        v51 = v52;
    v14 = (float)v51;
    if (a2 == 3)
    {
        g_engfuncs.pfnRandomFloat(300.0f, 500.0f);
        v26 = __fnstcw();
        v25 = v26 | 0xc00;
        v13 = (int)(v14 / 300.0);
    }
    else
    {
        v13 = g_engfuncs.pfnRandomLong(3, 5);
    }
    while (1)
    {
        v29 = __fnstcw();
        v28 = v29 | 0xc00;
        v27 = (int)*(float *)&a0->field_c->field_0->field_260;
        if (v13 * 150 <= (int)v27)
            break;
        v13 -= 1;
    }
    if (v13)
    {
        v53 = &a0->field_c->field_0->field_8;
        *(float *)&v27 = *(float *)&a0->field_c->field_0->field_8;
        *(float *)&v28 = *(float *)&v53[1];
        v30 = *(float *)&v53[2];
        v12 = 0;
        iter = 0;
        while (iter < v13)
        {
            v10 = 0;
            v9 = 0;
            v8 = 0;
            v7 = 0;
            v6 = 0;
            v5 = 0;
            v4 = 0;
            while (1)
            {
                v54 = 0;
                if (a1 == 6)
                    v54 = g_engfuncs.pfnRandomLong(0, 1);
                if (!a1 || v54)
                    v55 = 2;
                else
                    v55 = 4;
                v56 = 0;
                if (a2 == 6)
                    v56 = g_engfuncs.pfnRandomLong(0, 1);
                if (a2 == 2 || v56)
                    v57 = v55 | 8;
                else
                    v57 = v55 | 16;
                v58 = 0;
                if (a3 == 6)
                    v58 = g_engfuncs.pfnRandomLong(0, 1);
                if (a3 == 5 || v58)
                    v59 = v57 | 64;
                else
                    v59 = v57 | 32;
                if ((v59 & 50) == 50)
                {
                    if (!v10)
                    {
                        v60 = a0->field_c->field_0;
                        v34 = v60[29];
                        v35 = v60[30];
                        v36 = v60[31];
                        v34 = -45.0f;
                        v24 = (float)(45.0 + *(float *)&v35);
                        UTIL_WrapAngle(v24);
                        v35 = v24;
                        UTIL_MakeVectors(&v34);
                        v61 = &gpGlobals->field_28;
                        v62 = 400.0 * gpGlobals->field_28;
                        v15 = (float)v62;
                        v63 = 400.0 * *(float *)&v61[1];
                        v16 = (float)v63;
                        v17 = (float)(400.0 * *(float *)&v61[2]);
                        v21 = (float)(v62 + *(float *)&v27);
                        v22 = (float)(v63 + *(float *)&v28);
                        v23 = v30 + v17;
                        v31 = v21;
                        v32 = v22;
                        v33 = v23;
                        v10 = 1;
                        goto LABEL_565630;
                    }
                    else
                    {
                        iter += 1;
                        break;
                    }
                }
                if ((v59 & 52) == 52)
                {
                    if (!v9)
                    {
                        v9 = 1;
                        v64 = a0->field_c->field_0;
                        v34 = v64[29];
                        v35 = v64[30];
                        v36 = v64[31];
                        v65 = -45.0;
                        goto LABEL_565474;
                    }
                }
                else
                {
                    if ((v59 & 42) == 42)
                    {
                        if (!v8)
                        {
                            v8 = 1;
                            v66 = a0->field_c->field_0;
                            v34 = v66[29];
                            v35 = v66[30];
                            v36 = v66[31];
                            v67 = 45.0;
                            goto LABEL_565534;
                        }
                    }
                    else
                    {
                        if ((v59 & 44) == 44)
                        {
                            v10 = 1;
                            v68 = a0->field_c->field_0;
                            v34 = v68[29];
                            v35 = v68[30];
                            v36 = v68[31];
                            v69 = 45.0;
                            goto LABEL_565584;
                        }
                        else if ((v59 & 82) == 82)
                        {
                            if (!v7)
                            {
                                v7 = 1;
                                v70 = a0->field_c->field_0;
                                v34 = v70[29];
                                v35 = v70[30];
                                v36 = v70[31];
                                v34 = 45.0f;
                                v71 = 45.0;
                                goto LABEL_565480;
                            }
                        }
                        else
                        {
                            if ((v59 & 84) == 84)
                            {
                                if (!v6)
                                {
                                    v6 = 1;
                                    v72 = a0->field_c->field_0;
                                    v34 = v72[29];
                                    v35 = v72[30];
                                    v36 = v72[31];
                                    v65 = 45.0;
LABEL_565474:
                                    v34 = (float)v65;
                                    v71 = -45.0;
LABEL_565480:
                                    v24 = (float)(v71 + *(float *)&v35);
                                    UTIL_WrapAngle(v24);
                                    v35 = v24;
                                    UTIL_MakeVectors(&v34);
                                    v73 = &gpGlobals->field_28;
                                    v74 = 400.0 * gpGlobals->field_28;
                                    v18 = (float)v74;
                                    v75 = 400.0 * *(float *)&v73[1];
                                    v19 = (float)v75;
                                    v20 = (float)(400.0 * *(float *)&v73[2]);
                                    v76 = v74 + *(float *)&v27;
                                    v77 = v75 + *(float *)&v28;
                                    v78 = v30 + v20;
                                    goto LABEL_565601;
                                }
                            }
                            else
                            {
                                if ((v59 & 74) == 74)
                                {
                                    if (!v5)
                                    {
                                        v5 = 1;
                                        v79 = a0->field_c->field_0;
                                        v34 = v79[29];
                                        v35 = v79[30];
                                        v36 = v79[31];
                                        v67 = -45.0;
LABEL_565534:
                                        v34 = (float)v67;
                                        v80 = -45.0;
                                        goto LABEL_565590;
                                    }
                                }
                                else
                                {
                                    if ((v59 & 76) == 76 && !v4)
                                    {
                                        v4 = 1;
                                        v81 = a0->field_c->field_0;
                                        v34 = v81[29];
                                        v35 = v81[30];
                                        v36 = v81[31];
                                        v69 = -45.0;
LABEL_565584:
                                        v34 = (float)v69;
                                        v80 = 45.0;
LABEL_565590:
                                        v24 = (float)(v80 + *(float *)&v35);
                                        UTIL_WrapAngle(v24);
                                        v35 = v24;
                                        UTIL_MakeVectors(&v34);
                                        v82 = &gpGlobals->field_28;
                                        v83 = 400.0 * gpGlobals->field_28;
                                        v18 = (float)v83;
                                        v84 = 400.0 * *(float *)&v82[1];
                                        v19 = (float)v84;
                                        v20 = (float)(400.0 * *(float *)&v82[2]);
                                        v76 = *(float *)&v27 - v83;
                                        v77 = *(float *)&v28 - v84;
                                        v78 = v30 - v20;
LABEL_565601:
                                        v15 = (float)v76;
                                        v16 = (float)v77;
                                        v17 = (float)v78;
                                        v31 = v15;
                                        v32 = v16;
                                        v33 = v17;
LABEL_565630:
                                        UTIL_TraceHull(&v27, &v31, 0, 1, a0->field_c->field_0->field_208, &v37);
                                        if (1.0 <= v39)
                                        {
                                            v85 = __builtin_new(32);
                                            v86 = a0->field_c;
                                            v85->field_10 = &__vt_18CBaseBotComboEntry;
                                            v85->field_0 = 0;
                                            v85->field_4 = v86;
                                            v85->field_10 = &__vt_19CTeleportComboEntry;
                                            *(float *)v85->padding_14 = 0.4000000059604645f;
                                            v85->field_18 = v59;
                                            v85->field_1c = 1;
                                            v85->field_1d = 1;
                                            v85->field_1e = 0;
                                            v3 = v85;
                                            if (!a0->field_0)
                                            {
                                                v87 = __builtin_new(12);
                                                v2 = 1;
                                                v87->field_4 = NULL;
                                                v87->field_8 = 0;
                                                memset@GLIBC_2.0(v87, 0, 4);
                                                v2 = 0;
                                                a0->field_0 = v87;
                                                if (v2)
                                                    __builtin_delete(v87);
                                                v88 = a0;
                                                v88->field_0->field_0 = v3;
                                                v88->field_0->field_4 = NULL;
                                                v88->field_0->field_8 = 0;
                                                v88->field_4 = v88->field_0;
                                            }
                                            else
                                            {
                                                v1 = a0->field_4;
                                                v89 = __builtin_new(12);
                                                v0 = 1;
                                                v89->field_4 = 0;
                                                v89->field_8 = NULL;
                                                memset@GLIBC_2.0(v89, 0, 4);
                                                v0 = 0;
                                                v1->field_4 = v89;
                                                if (v0)
                                                    __builtin_delete(v89);
                                                v90 = a0;
                                                v90->field_4->field_4->field_8 = v90->field_4;
                                                v91 = v90->field_4->field_4;
                                                v90->field_4 = v91;
                                                v91->field_0 = v3;
                                                v90->field_4->field_4 = NULL;
                                            }
                                            v27 = v40;
                                            v28 = v41;
                                            *(unsigned int *)&v30 = v42;
                                            v12 += 1;
                                            iter += 1;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (v10)
                {
                    iter += 1;
                    break;
                }
                else if (v9)
                {
                    iter += 1;
                    break;
                }
                else if (v8)
                {
                    iter += 1;
                    break;
                }
                else if (v7)
                {
                    iter += 1;
                    break;
                }
                else if (v6)
                {
                    iter += 1;
                    break;
                }
                else if (v5)
                {
                    iter += 1;
                    break;
                }
                else if (v4)
                {
                    iter += 1;
                    break;
                }
            }
        }
        v92 = _ccall(15, 5, v12, 0, 0);
        return v92 & 1;
    }
    return 0;
}

