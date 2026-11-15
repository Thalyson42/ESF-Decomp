// GetBestEscapeSwoopDir__4CBotb @0x173bf0 size=3686
typedef struct st_573bf0_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_573bf0_1;

typedef struct st_573bf0_3 {
    struct st_573bf0_0 *field_0;
    char padding_4[2588];
    char field_a20;
    char padding_a21[3];
    struct st_573bf0_4 *field_a24;
    char padding_a28[132];
    char field_aac;
    char padding_aad[191];
    struct st_573bf0_4 *field_b6c;
} st_573bf0_3;

typedef struct st_573bf0_4 {
    struct st_573bf0_1 *field_0;
} st_573bf0_4;

typedef struct st_573bf0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[60];
    char field_50;
    char padding_51[439];
    int field_208;
} st_573bf0_0;

typedef struct st_573bf0_5 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    float field_34;
    float field_38;
    float field_3c;
    float field_40;
    float field_44;
    float field_48;
} st_573bf0_5;

typedef struct st_573bf0_6 {
    unsigned int field_0;
} st_573bf0_6;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_573bf0_6 *g_engfuncs.pfnRandomLong;
extern st_573bf0_5 *gpGlobals;

unsigned int GetBestEscapeSwoopDir__4CBotb(st_573bf0_3 *a0, char a1)
{
    st_573bf0_0 *v51;  // ecx
    unsigned int *v52;  // eax
    float v61;  // 112
    float v62;  // 112
    float v63;  // 112
    double v64;  // mm7
    double v65;  // mm6
    unsigned int *v66;  // edx
    double v67;  // mm5
    double v68;  // mm5
    unsigned int *v69;  // edx
    float v70;  // 112
    unsigned int *v53;  // edx
    float v71;  // 112
    float v72;  // 112
    double v73;  // mm7
    double v74;  // mm6
    unsigned int *v75;  // edx
    double v76;  // mm5
    double v77;  // mm5
    unsigned int *v78;  // edx
    float v79;  // 112
    float v80;  // 112
    unsigned int *v54;  // edx
    float v81;  // 112
    double v82;  // mm7
    double v83;  // mm6
    unsigned int *v84;  // edx
    double v85;  // mm5
    double v86;  // mm5
    unsigned int *v87;  // edx
    float v88;  // 112
    float v89;  // 112
    float v90;  // 112
    unsigned int *v55;  // edx
    double v91;  // mm7
    double v92;  // mm6
    unsigned int *v93;  // edx
    double v94;  // mm5
    double v95;  // mm5
    unsigned int *v96;  // edx
    float v97;  // 112
    float v98;  // 112
    float v99;  // 112
    double v100;  // mm7
    unsigned int *v56;  // edx
    double v101;  // mm6
    unsigned int *v102;  // edx
    double v103;  // mm5
    double v104;  // mm5
    unsigned int *v105;  // edx
    float v106;  // 112
    float v107;  // 112
    float v108;  // 112
    double v109;  // mm7
    double v110;  // mm6
    unsigned int *v57;  // edx
    unsigned int idx;  // esi
    unsigned int *v112;  // edx
    char v113;  // al
    unsigned int v114;  // eax
    int iter;  // edi
    unsigned int *v59;  // edx
    unsigned int *v60;  // edx
    char *v0;  // [bp-0x258], Other Possible Types: int
    int v1;  // [bp-0x254]
    int v2;  // [bp-0x250]
    float v3;  // [bp-0x238]
    int v4;  // [bp-0x234]
    int iter2;  // [bp-0x230]
    int iter1;  // [bp-0x22c]
    int node;  // [bp-0x228]
    float v8;  // [bp-0x224]
    st_573bf0_5 **v9;  // [bp-0x220]
    unsigned int v10;  // [bp-0x21c]
    unsigned int v11;  // [bp-0x218]
    unsigned int v12;  // [bp-0x214]
    float v13;  // [bp-0x210]
    float v14;  // [bp-0x1fc]
    float v15;  // [bp-0x1f8]
    float v16;  // [bp-0x1f4]
    int v17;  // [bp-0x1dc]
    unsigned short v18;  // [bp-0x1d8]
    unsigned short v19;  // [bp-0x1d6]
    float v20;  // [bp-0x1c4]
    float v21;  // [bp-0x1c0]
    float v22;  // [bp-0x1bc]
    float v23;  // [bp-0x1b8]
    float v24;  // [bp-0x1b4]
    float v25;  // [bp-0x1b0]
    float v26;  // [bp-0x1ac]
    float v27;  // [bp-0x1a8]
    float v28;  // [bp-0x1a4]
    float v29;  // [bp-0x1a0]
    float v30;  // [bp-0x19c]
    float v31;  // [bp-0x198]
    float v32;  // [bp-0x194]
    float v33;  // [bp-0x190]
    float v34;  // [bp-0x18c]
    char v35;  // [bp-0x184]
    float v36;  // [bp-0x174]
    char v37;  // [bp-0x144]
    float v38;  // [bp-0x134]
    char v39;  // [bp-0x104]
    float v40;  // [bp-0xf4]
    char v41;  // [bp-0xc4]
    float v42;  // [bp-0xb4]
    char v43;  // [bp-0x84]
    float v44;  // [bp-0x74]
    float v45;  // [bp-0x44]
    float v46;  // [bp-0x40]
    float v47;  // [bp-0x3c]
    float v48;  // [bp-0x24]
    float v49;  // [bp-0x20]
    float v50;  // [bp-0x1c]

    v51 = a0->field_0;
    v52 = &v51->field_8;
    v48 = v51->field_8;
    v49 = *(float *)&v52[1];
    v50 = *(float *)&v52[2];
    v9 = &gpGlobals;
    v53 = &gpGlobals->field_34;
    v8 = 750.0f;
    v20 = (float)(750.0 * gpGlobals->field_34);
    v21 = v8 * *(float *)&v53[1];
    v22 = v8 * *(float *)&v53[2];
    v28 = v48 + v20;
    v29 = v49 + v21;
    v30 = v50 + v22;
    v45 = v28;
    v46 = v29;
    v47 = v30;
    UTIL_TraceHull(&v48, &v45, 0, 1, v51->field_208, &v43);
    v54 = &*v9->field_34;
    v23 = v8 * *v9->field_34;
    v24 = v8 * *(float *)&v54[1];
    v25 = v8 * *(float *)&v54[2];
    v20 = v48 - v23;
    v21 = v49 - v24;
    v22 = v50 - v25;
    v45 = v20;
    v46 = v21;
    v47 = v22;
    UTIL_TraceHull(&v48, &v45, 0, 1, a0->field_0->field_208, &v41);
    v55 = &*v9->field_40;
    v23 = v8 * *v9->field_40;
    v24 = v8 * *(float *)&v55[1];
    v25 = v8 * *(float *)&v55[2];
    v20 = v48 + v23;
    v21 = v49 + v24;
    v22 = v50 + v25;
    v45 = v20;
    v46 = v21;
    v47 = v22;
    UTIL_TraceHull(&v48, &v45, 0, 1, a0->field_0->field_208, &v39);
    v56 = &*v9->field_40;
    v23 = v8 * *v9->field_40;
    v24 = v8 * *(float *)&v56[1];
    v25 = v8 * *(float *)&v56[2];
    v20 = v48 - v23;
    v21 = v49 - v24;
    v22 = v50 - v25;
    v45 = v20;
    v46 = v21;
    v47 = v22;
    v0 = &v37;
    UTIL_TraceHull(&v48, &v45, 0, 1, a0->field_0->field_208, v0);
    v36 = 0;
    if (a1)
    {
        v57 = &*v9->field_28;
        v23 = v8 * *v9->field_28;
        v24 = v8 * *(float *)&v57[1];
        v25 = v8 * *(float *)&v57[2];
        v20 = v48 - v23;
        v21 = v49 - v24;
        v22 = v50 - v25;
        v45 = v20;
        v46 = v21;
        v47 = v22;
        v0 = &v35;
        UTIL_TraceHull(&v48, &v45, 0, 1, a0->field_0->field_208, v0);
    }
    v19 = __fnstcw();
    v18 = v19 | 0xc00;
    node = (int)(10.0 * v44);
    v19 = __fnstcw();
    v18 = v19 | 0xc00;
    iter1 = (int)(10.0 * v42);
    v19 = __fnstcw();
    v18 = v19 | 0xc00;
    iter2 = (int)(10.0 * v40);
    v19 = __fnstcw();
    v18 = v19 | 0xc00;
    v4 = (int)(10.0 * v38);
    v19 = __fnstcw();
    v18 = v19 | 0xc00;
    v17 = (int)(10.0 * v36);
    iter = v17;
    *(unsigned short *)&v1 = 1;
    *(unsigned short *)&v0 = 1;
    if ((char)UTIL_IsValidPlayer(a0->field_b6c, v0, v1) && *(int *)(*(int *)a0->field_b6c + 264) == 11)
    {
        v59 = &a0->field_0->field_8;
        v20 = a0->field_0->field_8;
        v21 = *(float *)&v59[1];
        v22 = *(float *)&v59[2];
        *(unsigned short *)&v2 = 1;
        PredictEntityPos(&v23, a0->field_b6c, 0x3f800000, v2);
        v29 = v23;
        v30 = v24;
        v31 = v25;
        v60 = &a0->field_0->field_8;
        v61 = v29 - a0->field_0->field_8;
        v14 = v61;
        v62 = v30 - *(float *)&v60[1];
        v15 = v62;
        v63 = v31 - *(float *)&v60[2];
        v16 = v63;
        v64 = v61 * v61 + v62 * v62 + v63 * v63;
        v65 = sqrt(v64);
        if (isnan(v65))
            sqrt(*(unsigned int *)&v64);
        else
            v64 = v65;
        v3 = (float)v64;
        UTIL_MakeVectors(&a0->field_0->field_50);
        v66 = &gpGlobals->field_28;
        v67 = 100.0 * gpGlobals->field_28;
        v32 = (float)v67;
        v68 = 100.0 * *(float *)&v66[1];
        v33 = (float)v68;
        v34 = (float)(100.0 * *(float *)&v66[2]);
        v29 = (float)(v20 - v67);
        v30 = (float)(v21 - v68);
        v31 = v22 - v34;
        v26 = v29;
        v27 = v30;
        v28 = v31;
        v69 = &a0->field_0->field_8;
        v70 = v29 - a0->field_0->field_8;
        v14 = v70;
        v71 = v30 - *(float *)&v69[1];
        v15 = v71;
        v72 = v31 - *(float *)&v69[2];
        v16 = v72;
        v73 = v70 * v70 + v71 * v71 + v72 * v72;
        v74 = sqrt(v73);
        if (isnan(v74))
            sqrt(*(unsigned int *)&v73);
        else
            v73 = v74;
        v13 = (float)v73;
        if (v13 - 200.0 < v3)
            iter -= 1;
        v75 = &gpGlobals->field_34;
        v76 = 100.0 * gpGlobals->field_34;
        v32 = (float)v76;
        v77 = 100.0 * *(float *)&v75[1];
        v33 = (float)v77;
        v34 = (float)(100.0 * *(float *)&v75[2]);
        v29 = (float)(v76 + v20);
        v30 = (float)(v77 + v21);
        v31 = v22 + v34;
        v26 = v29;
        v27 = v30;
        v28 = v31;
        v78 = &a0->field_0->field_8;
        v79 = v29 - a0->field_0->field_8;
        v14 = v79;
        v80 = v30 - *(float *)&v78[1];
        v15 = v80;
        v81 = v31 - *(float *)&v78[2];
        v16 = v81;
        v82 = v79 * v79 + v80 * v80 + v81 * v81;
        v83 = sqrt(v82);
        if (isnan(v83))
            sqrt(*(unsigned int *)&v82);
        else
            v82 = v83;
        v13 = (float)v82;
        if (v13 - 200.0 < v3)
            node -= 1;
        v84 = &gpGlobals->field_34;
        v85 = 100.0 * gpGlobals->field_34;
        v32 = (float)v85;
        v86 = 100.0 * *(float *)&v84[1];
        v33 = (float)v86;
        v34 = (float)(100.0 * *(float *)&v84[2]);
        v29 = (float)(v20 - v85);
        v30 = (float)(v21 - v86);
        v31 = v22 - v34;
        v26 = v29;
        v27 = v30;
        v28 = v31;
        v87 = &a0->field_0->field_8;
        v88 = v29 - a0->field_0->field_8;
        v14 = v88;
        v89 = v30 - *(float *)&v87[1];
        v15 = v89;
        v90 = v31 - *(float *)&v87[2];
        v16 = v90;
        v91 = v88 * v88 + v89 * v89 + v90 * v90;
        v92 = sqrt(v91);
        if (isnan(v92))
            sqrt(*(unsigned int *)&v91);
        else
            v91 = v92;
        v13 = (float)v91;
        if (v13 - 200.0 < v3)
            iter1 -= 1;
        v93 = &gpGlobals->field_40;
        v94 = 100.0 * gpGlobals->field_40;
        v32 = (float)v94;
        v95 = 100.0 * *(float *)&v93[1];
        v33 = (float)v95;
        v34 = (float)(100.0 * *(float *)&v93[2]);
        v29 = (float)(v94 + v20);
        v30 = (float)(v95 + v21);
        v31 = v22 + v34;
        v26 = v29;
        v27 = v30;
        v28 = v31;
        v96 = &a0->field_0->field_8;
        v97 = v29 - a0->field_0->field_8;
        v14 = v97;
        v98 = v30 - *(float *)&v96[1];
        v15 = v98;
        v99 = v31 - *(float *)&v96[2];
        v16 = v99;
        v100 = v97 * v97 + v98 * v98 + v99 * v99;
        v101 = sqrt(v100);
        if (isnan(v101))
            sqrt(*(unsigned int *)&v100);
        else
            v100 = v101;
        v13 = (float)v100;
        if (v13 - 200.0 < v3)
            iter2 -= 1;
        v102 = &gpGlobals->field_40;
        v103 = 100.0 * gpGlobals->field_40;
        v32 = (float)v103;
        v104 = 100.0 * *(float *)&v102[1];
        v33 = (float)v104;
        v34 = (float)(100.0 * *(float *)&v102[2]);
        v29 = (float)(v20 - v103);
        v30 = (float)(v21 - v104);
        v31 = v22 - v34;
        v26 = v29;
        v27 = v30;
        v28 = v31;
        v105 = &a0->field_0->field_8;
        v106 = v29 - a0->field_0->field_8;
        v14 = v106;
        v107 = v30 - *(float *)&v105[1];
        v15 = v107;
        v108 = v31 - *(float *)&v105[2];
        v16 = v108;
        v109 = v106 * v106 + v107 * v107 + v108 * v108;
        v110 = sqrt(v109);
        if (isnan(v110))
            sqrt(*(unsigned int *)&v109);
        else
            v109 = v110;
        v13 = (float)v109;
        if (v13 - 200.0 < v3)
            v4 -= 1;
    }
    if (a0->field_a20)
        CBot::MakePlayerList(a0);
    if (a0->field_aac)
    {
        idx = 0;
        if (a0->field_aac)
        {
            do
            {
                v112 = *(int *)(&a0->field_a24)[idx] + 8;
                *(float *)&v10 = *(float *)(*(int *)(&a0->field_a24)[idx] + 8);
                *(float *)&v11 = *(float *)&v112[1];
                *(float *)&v12 = *(float *)&v112[2];
                v113 = UTIL_EntDir(a0, &v10);
                if (v113 & 8)
                    iter -= 1;
                if (v113 & 2)
                    v4 -= 1;
                if (v113 & 4)
                    iter2 -= 1;
                if (v113 & 32)
                    node -= 1;
                if (v113 & 64)
                    iter1 -= 1;
                idx += 1;
            } while ((int)idx < a0->field_aac);
        }
    }
    if (node <= iter1 || node <= iter2 || node <= v4 || node <= iter)
    {
        if (iter1 > node && iter1 > iter2 && iter1 > v4 && iter1 > iter)
            return 64;
        if (iter2 > node && iter2 > iter1 && iter2 > v4 && iter2 > iter)
            return 4;
        if (v4 > node && v4 > iter1 && v4 > iter2 && v4 > iter)
            return 2;
        if (iter > node && iter > iter1 && iter > iter2 && iter > v4)
            return 8;
        v114 = (!a1 ? g_engfuncs.pfnRandomLong(0, 3) : g_engfuncs.pfnRandomLong(0, 4));
        if ((!a1 ? g_engfuncs.pfnRandomLong(0, 3) : g_engfuncs.pfnRandomLong(0, 4)) <= 4)
            goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * (!a1 ? g_engfuncs.pfnRandomLong(0, 3) : g_engfuncs.pfnRandomLong(0, 4))] - 651436)]));
    }
    return 32;
}

