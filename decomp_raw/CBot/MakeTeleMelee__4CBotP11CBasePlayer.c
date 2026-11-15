// MakeTeleMelee__4CBotP11CBasePlayer @0x15ab50 size=5486
typedef struct st_55ab50_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_55ab50_0;

typedef struct st_55ab50_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_55ab50_1;

typedef struct st_55ab50_2 {
    struct st_55ab50_3 *field_0;
    char padding_4[2920];
    struct st_55ab50_4 *field_b6c;
} st_55ab50_2;

typedef struct st_55ab50_4 {
    struct st_55ab50_1 *field_0;
} st_55ab50_4;

typedef struct st_55ab50_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[500];
    unsigned int field_208;
} st_55ab50_3;

typedef struct st_55ab50_5 {
    struct st_55ab50_6 *field_0;
    struct st_55ab50_5 *field_4;
    struct st_55ab50_5 *field_8;
} st_55ab50_5;

typedef struct st_55ab50_6 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
} st_55ab50_6;

typedef struct st_55ab50_7 {
    unsigned int field_0;
} st_55ab50_7;

extern unsigned int FindSelection__t12TMultiChoice1Z10EComboTypePQ2t12TMultiChoice1Z10EComboType12SMultiChoicei;
extern st_55ab50_7 *g_engfuncs.pfnRandomLong;

char MakeTeleMelee__4CBotP11CBasePlayer(st_55ab50_2 *a0, st_55ab50_0 **a1)
{
    unsigned int *v52;  // edx
    unsigned int *v53;  // edx
    st_55ab50_5 *v62;  // edi
    st_55ab50_5 *v63;  // edi
    st_55ab50_5 *v64;  // eax
    unsigned int *v65;  // eax
    st_55ab50_5 **v66;  // esi
    st_55ab50_5 *v67;  // edi
    st_55ab50_5 *v68;  // edi
    st_55ab50_5 *v69;  // eax
    unsigned int *v70;  // eax
    st_55ab50_5 **v71;  // esi
    float v54;  // 112
    st_55ab50_5 *v72;  // edi
    st_55ab50_5 *v73;  // edi
    st_55ab50_5 *v74;  // eax
    unsigned int *v75;  // eax
    st_55ab50_5 **v76;  // esi
    st_55ab50_5 *v77;  // edi
    st_55ab50_5 *v78;  // edi
    st_55ab50_5 *v79;  // eax
    unsigned int *v80;  // eax
    st_55ab50_5 **v81;  // esi
    float v55;  // 112
    st_55ab50_5 *v82;  // edi
    st_55ab50_5 *v83;  // edi
    st_55ab50_5 *v84;  // eax
    unsigned int *v85;  // eax
    st_55ab50_5 **v86;  // esi
    st_55ab50_5 *v87;  // edi
    st_55ab50_5 *v88;  // edi
    st_55ab50_5 *v89;  // eax
    unsigned int *v90;  // eax
    st_55ab50_5 **v91;  // esi
    float v56;  // 112
    st_55ab50_5 *v92;  // edi
    st_55ab50_5 *v93;  // edi
    st_55ab50_5 *v94;  // eax
    unsigned int *v95;  // eax
    st_55ab50_5 **v96;  // esi
    st_55ab50_5 *v97;  // edi
    st_55ab50_5 *v98;  // edi
    st_55ab50_5 *v99;  // eax
    unsigned int *v100;  // eax
    st_55ab50_5 **v101;  // esi
    double v57;  // mm7
    st_55ab50_5 *v102;  // edi
    st_55ab50_5 *v103;  // edi
    st_55ab50_5 *v104;  // eax
    st_55ab50_5 *v106;  // esi
    st_55ab50_5 *v107;  // esi
    st_55ab50_5 *v108;  // esi
    unsigned int *v109;  // eax
    st_55ab50_5 **v110;  // edx
    unsigned int *v111;  // esi
    double v58;  // mm6
    st_55ab50_5 *v112;  // ecx
    st_55ab50_5 *v113;  // eax
    unsigned int *v114;  // eax
    st_55ab50_5 **v115;  // edi
    st_55ab50_5 *node;  // esi
    st_55ab50_5 *v117;  // eax
    st_55ab50_5 **v118;  // edx
    unsigned int *v119;  // esi
    st_55ab50_5 *v120;  // ecx
    st_55ab50_5 *v121;  // eax
    st_55ab50_5 **v59;  // eax
    unsigned int *v122;  // eax
    st_55ab50_5 **v123;  // edi
    st_55ab50_5 *iter;  // esi
    st_55ab50_5 *v125;  // eax
    unsigned int *v60;  // eax
    st_55ab50_5 **v61;  // esi
    char *v0;  // [bp-0x11c]
    unsigned int v1;  // [bp-0x118]
    unsigned int *v2;  // [bp-0x114]
    unsigned int v3;  // [bp-0x110]
    char *v4;  // [bp-0x10c]
    char v5;  // [bp-0x105]
    st_55ab50_5 *v6;  // [bp-0x104]
    char v7;  // [bp-0xfd]
    unsigned int *v8;  // [bp-0xfc]
    char v9;  // [bp-0xf5]
    st_55ab50_5 *v10;  // [bp-0xf4]
    char v11;  // [bp-0xed]
    unsigned int *v12;  // [bp-0xec]
    char v13;  // [bp-0xe5]
    st_55ab50_5 *v14;  // [bp-0xe4]
    char v15;  // [bp-0xdd]
    unsigned int *v16;  // [bp-0xdc]
    char v17;  // [bp-0xd5]
    st_55ab50_5 *v18;  // [bp-0xd4]
    char v19;  // [bp-0xcd]
    unsigned int *v20;  // [bp-0xcc]
    char v21;  // [bp-0xc5]
    st_55ab50_5 *v22;  // [bp-0xc4]
    char v23;  // [bp-0xbd]
    unsigned int *v24;  // [bp-0xbc]
    char v25;  // [bp-0xb5]
    st_55ab50_5 *v26;  // [bp-0xb4]
    char v27;  // [bp-0xad]
    unsigned int *v28;  // [bp-0xac]
    char v29;  // [bp-0xa5]
    st_55ab50_5 *v30;  // [bp-0xa4]
    char v31;  // [bp-0x9d]
    unsigned int *v32;  // [bp-0x9c]
    char v33;  // [bp-0x95]
    st_55ab50_5 *v34;  // [bp-0x94]
    char v35;  // [bp-0x8d]
    unsigned int *v36;  // [bp-0x8c]
    char v37;  // [bp-0x85]
    st_55ab50_5 *v38;  // [bp-0x84]
    char v39;  // [bp-0x7d]
    unsigned int *v40;  // [bp-0x7c]
    unsigned int v41;  // [bp-0x78]
    float v42;  // [bp-0x74]
    char v43;  // [bp-0x70], Other Possible Types: int, unsigned int
    unsigned int iter1;  // [bp-0x6c]
    st_55ab50_5 **v45;  // [bp-0x68], Other Possible Types: unsigned int
    float v46;  // [bp-0x44]
    float v47;  // [bp-0x40]
    float v48;  // [bp-0x3c]
    float v49;  // [bp-0x24]
    float v50;  // [bp-0x20]
    float v51;  // [bp-0x1c]

    v52 = &*a1->field_8;
    v49 = *a1->field_8;
    v50 = *(float *)&v52[1];
    v51 = *(float *)&v52[2];
    v53 = &a0->field_0->field_8;
    v54 = v49 - *(float *)&a0->field_0->field_8;
    v46 = v54;
    v55 = v50 - *(float *)&v53[1];
    v47 = v55;
    v56 = v51 - *(float *)&v53[2];
    v48 = v56;
    v57 = v54 * v54 + v55 * v55 + v56 * v56;
    v58 = sqrt(v57);
    if (isnan(v58))
        sqrt(*(unsigned int *)&v57);
    else
        v57 = v58;
    v42 = (float)v57;
    v41 = a0->field_0->field_208;
    iter1 = 0;
    v59 = __builtin_new(8);
    *v59 = NULL;
    v59[1] = NULL;
    v45 = v59;
    if (v42 > 450.0f)
    {
        if (!(char)CheckForCollide(v41, 2, 650.0f))
        {
            v60 = __builtin_new(12);
            *v60 = 0;
            v60[1] = 0;
            v40 = v60;
            *v40 = iter1;
            v40[1] = iter1 + 40;
            v40[2] = 14;
            v61 = v45;
            if (!*v61)
            {
                v62 = __builtin_new(12);
                v39 = 1;
                v62->field_4 = NULL;
                v62->field_8 = NULL;
                memset@GLIBC_2.0(v62, 0, 4);
                v39 = 0;
                *v61 = v62;
                if (v39)
                    __builtin_delete(v62);
                *v61->field_0 = v40;
                *v61->field_4 = NULL;
                *v61->field_8 = NULL;
                v61[1] = *v61;
            }
            else
            {
                v38 = v61[1];
                v63 = __builtin_new(12);
                v37 = 1;
                v63->field_4 = NULL;
                v63->field_8 = NULL;
                memset@GLIBC_2.0(v63, 0, 4);
                v37 = 0;
                v38->field_4 = v63;
                if (v37)
                    __builtin_delete(v63);
                v61[1]->field_4->field_8 = v61[1];
                v64 = v61[1]->field_4;
                v61[1] = v64;
                v64->field_0 = v40;
                v61[1]->field_4 = NULL;
            }
            iter1 += 40;
        }
        if (!(char)CheckForCollide(v41, 4, 650.0f))
        {
            v65 = __builtin_new(12);
            *v65 = 0;
            v65[1] = 0;
            v36 = v65;
            *v36 = iter1;
            v36[1] = iter1 + 40;
            v36[2] = 15;
            v66 = v45;
            if (!*v66)
            {
                v67 = __builtin_new(12);
                v35 = 1;
                v67->field_4 = NULL;
                v67->field_8 = NULL;
                memset@GLIBC_2.0(v67, 0, 4);
                v35 = 0;
                *v66 = v67;
                if (v35)
                    __builtin_delete(v67);
                *v66->field_0 = v36;
                *v66->field_4 = NULL;
                *v66->field_8 = NULL;
                v66[1] = *v66;
            }
            else
            {
                v34 = v66[1];
                v68 = __builtin_new(12);
                v33 = 1;
                v68->field_4 = NULL;
                v68->field_8 = NULL;
                memset@GLIBC_2.0(v68, 0, 4);
                v33 = 0;
                v34->field_4 = v68;
                if (v33)
                    __builtin_delete(v68);
                v66[1]->field_4->field_8 = v66[1];
                v69 = v66[1]->field_4;
                v66[1] = v69;
                v69->field_0 = v36;
                v66[1]->field_4 = NULL;
            }
            iter1 += 40;
        }
        if (!(char)CheckForCollide(v41, 8, 650.0f))
        {
            v70 = __builtin_new(12);
            *v70 = 0;
            v70[1] = 0;
            v32 = v70;
            *v32 = iter1;
            v32[1] = iter1 + 40;
            v32[2] = 13;
            v71 = v45;
            if (!*v71)
            {
                v72 = __builtin_new(12);
                v31 = 1;
                v72->field_4 = NULL;
                v72->field_8 = NULL;
                memset@GLIBC_2.0(v72, 0, 4);
                v31 = 0;
                *v71 = v72;
                if (v31)
                    __builtin_delete(v72);
                *v71->field_0 = v32;
                *v71->field_4 = NULL;
                *v71->field_8 = NULL;
                v71[1] = *v71;
            }
            else
            {
                v30 = v71[1];
                v73 = __builtin_new(12);
                v29 = 1;
                v73->field_4 = NULL;
                v73->field_8 = NULL;
                memset@GLIBC_2.0(v73, 0, 4);
                v29 = 0;
                v30->field_4 = v73;
                if (v29)
                    __builtin_delete(v73);
                v71[1]->field_4->field_8 = v71[1];
                v74 = v71[1]->field_4;
                v71[1] = v74;
                v74->field_0 = v32;
                v71[1]->field_4 = NULL;
            }
            iter1 += 40;
        }
    }
    if (!(char)CheckForCollide(v41, 32, 650.0f))
    {
        v75 = __builtin_new(12);
        *v75 = 0;
        v75[1] = 0;
        v28 = v75;
        *v28 = iter1;
        v28[1] = iter1 + 75;
        v28[2] = 16;
        v76 = v45;
        if (!*v76)
        {
            v77 = __builtin_new(12);
            v27 = 1;
            v77->field_4 = NULL;
            v77->field_8 = NULL;
            memset@GLIBC_2.0(v77, 0, 4);
            v27 = 0;
            *v76 = v77;
            if (v27)
                __builtin_delete(v77);
            *v76->field_0 = v28;
            *v76->field_4 = NULL;
            *v76->field_8 = NULL;
            v76[1] = *v76;
        }
        else
        {
            v26 = v76[1];
            v78 = __builtin_new(12);
            v25 = 1;
            v78->field_4 = NULL;
            v78->field_8 = NULL;
            memset@GLIBC_2.0(v78, 0, 4);
            v25 = 0;
            v26->field_4 = v78;
            if (v25)
                __builtin_delete(v78);
            v76[1]->field_4->field_8 = v76[1];
            v79 = v76[1]->field_4;
            v76[1] = v79;
            v79->field_0 = v28;
            v76[1]->field_4 = NULL;
        }
        iter1 += 75;
    }
    if (!(char)CheckForCollide(v41, 64, 650.0f))
    {
        v80 = __builtin_new(12);
        *v80 = 0;
        v80[1] = 0;
        v24 = v80;
        *v24 = iter1;
        v24[1] = iter1 + 75;
        v24[2] = 0x11;
        v81 = v45;
        if (!*v81)
        {
            v82 = __builtin_new(12);
            v23 = 1;
            v82->field_4 = NULL;
            v82->field_8 = NULL;
            memset@GLIBC_2.0(v82, 0, 4);
            v23 = 0;
            *v81 = v82;
            if (v23)
                __builtin_delete(v82);
            *v81->field_0 = v24;
            *v81->field_4 = NULL;
            *v81->field_8 = NULL;
            v81[1] = *v81;
        }
        else
        {
            v22 = v81[1];
            v83 = __builtin_new(12);
            v21 = 1;
            v83->field_4 = NULL;
            v83->field_8 = NULL;
            memset@GLIBC_2.0(v83, 0, 4);
            v21 = 0;
            v22->field_4 = v83;
            if (v21)
                __builtin_delete(v83);
            v81[1]->field_4->field_8 = v81[1];
            v84 = v81[1]->field_4;
            v81[1] = v84;
            v84->field_0 = v24;
            v81[1]->field_4 = NULL;
        }
        iter1 += 75;
    }
    if (!(char)CheckForCollide(v41, 0x40000, 650.0f))
    {
        v85 = __builtin_new(12);
        *v85 = 0;
        v85[1] = 0;
        v20 = v85;
        *v20 = iter1;
        v20[1] = iter1 + 40;
        v20[2] = 11;
        v86 = v45;
        if (!*v86)
        {
            v87 = __builtin_new(12);
            v19 = 1;
            v87->field_4 = NULL;
            v87->field_8 = NULL;
            memset@GLIBC_2.0(v87, 0, 4);
            v19 = 0;
            *v86 = v87;
            if (v19)
                __builtin_delete(v87);
            *v86->field_0 = v20;
            *v86->field_4 = NULL;
            *v86->field_8 = NULL;
            v86[1] = *v86;
        }
        else
        {
            v18 = v86[1];
            v88 = __builtin_new(12);
            v17 = 1;
            v88->field_4 = NULL;
            v88->field_8 = NULL;
            memset@GLIBC_2.0(v88, 0, 4);
            v17 = 0;
            v18->field_4 = v88;
            if (v17)
                __builtin_delete(v88);
            v86[1]->field_4->field_8 = v86[1];
            v89 = v86[1]->field_4;
            v86[1] = v89;
            v89->field_0 = v20;
            v86[1]->field_4 = NULL;
        }
        iter1 += 40;
    }
    if (!(char)CheckForCollide(v41, 0x80000, 650.0f))
    {
        v90 = __builtin_new(12);
        *v90 = 0;
        v90[1] = 0;
        v16 = v90;
        *v16 = iter1;
        v16[1] = iter1 + 40;
        v16[2] = 12;
        v91 = v45;
        if (!*v91)
        {
            v92 = __builtin_new(12);
            v15 = 1;
            v92->field_4 = NULL;
            v92->field_8 = NULL;
            memset@GLIBC_2.0(v92, 0, 4);
            v15 = 0;
            *v91 = v92;
            if (v15)
                __builtin_delete(v92);
            *v91->field_0 = v16;
            *v91->field_4 = NULL;
            *v91->field_8 = NULL;
            v91[1] = *v91;
        }
        else
        {
            v14 = v91[1];
            v93 = __builtin_new(12);
            v13 = 1;
            v93->field_4 = NULL;
            v93->field_8 = NULL;
            memset@GLIBC_2.0(v93, 0, 4);
            v13 = 0;
            v14->field_4 = v93;
            if (v13)
                __builtin_delete(v93);
            v91[1]->field_4->field_8 = v91[1];
            v94 = v91[1]->field_4;
            v91[1] = v94;
            v94->field_0 = v16;
            v91[1]->field_4 = NULL;
        }
        iter1 += 40;
    }
    if (v42 < 600.0f)
    {
        if (!(char)CheckForCollide(v41, 0x40000, 650.0f))
        {
            v95 = __builtin_new(12);
            *v95 = 0;
            v95[1] = 0;
            v12 = v95;
            *v12 = iter1;
            v12[1] = iter1 + 45;
            v12[2] = 18;
            v96 = v45;
            if (!*v96)
            {
                v97 = __builtin_new(12);
                v11 = 1;
                v97->field_4 = NULL;
                v97->field_8 = NULL;
                memset@GLIBC_2.0(v97, 0, 4);
                v11 = 0;
                *v96 = v97;
                if (v11)
                    __builtin_delete(v97);
                *v96->field_0 = v12;
                *v96->field_4 = NULL;
                *v96->field_8 = NULL;
                v96[1] = *v96;
            }
            else
            {
                v10 = v96[1];
                v98 = __builtin_new(12);
                v9 = 1;
                v98->field_4 = NULL;
                v98->field_8 = NULL;
                memset@GLIBC_2.0(v98, 0, 4);
                v9 = 0;
                v10->field_4 = v98;
                if (v9)
                    __builtin_delete(v98);
                v96[1]->field_4->field_8 = v96[1];
                v99 = v96[1]->field_4;
                v96[1] = v99;
                v99->field_0 = v12;
                v96[1]->field_4 = NULL;
            }
            iter1 += 45;
        }
        if (!(char)CheckForCollide(v41, 0x80000, 650.0f))
        {
            v100 = __builtin_new(12);
            *v100 = 0;
            v100[1] = 0;
            v8 = v100;
            *v8 = iter1;
            v8[1] = iter1 + 45;
            v8[2] = 19;
            v101 = v45;
            if (!*v101)
            {
                v102 = __builtin_new(12);
                v7 = 1;
                v102->field_4 = NULL;
                v102->field_8 = NULL;
                memset@GLIBC_2.0(v102, 0, 4);
                v7 = 0;
                *v101 = v102;
                if (v7)
                    __builtin_delete(v102);
                *v101->field_0 = v8;
                *v101->field_4 = NULL;
                *v101->field_8 = NULL;
                v101[1] = *v101;
            }
            else
            {
                v6 = v101[1];
                v103 = __builtin_new(12);
                v5 = 1;
                v103->field_4 = NULL;
                v103->field_8 = NULL;
                memset@GLIBC_2.0(v103, 0, 4);
                v5 = 0;
                v6->field_4 = v103;
                if (v5)
                    __builtin_delete(v103);
                v101[1]->field_4->field_8 = v101[1];
                v104 = v101[1]->field_4;
                v101[1] = v104;
                v104->field_0 = v8;
                v101[1]->field_4 = NULL;
            }
            iter1 += 45;
        }
    }
    v4 = &v43;
    v3 = g_engfuncs.pfnRandomLong(0, iter1);
    v1 = _INSERT(v3, 0, 0) | 0xffff0000;
    v2 = &FindSelection__t12TMultiChoice1Z10EComboTypePQ2t12TMultiChoice1Z10EComboType12SMultiChoicei;
    v106 = *v45;
    if (*v45)
    {
        v0 = (char *)&iter1 + (unsigned short)v1;
        do
        {
            v107 = v106;
            v108 = v107->field_4;
            if ((char)v2(v0, v107->field_0, v3))
            {
                v109 = &v107->field_0->field_0;
                goto LABEL_55be1f;
            }
        } while ((v106 = v108, v107->field_4));
        v109 = NULL;
LABEL_55be1f:
        if (v109)
        {
            v43 = v109[2];
            a0->field_b6c = a1;
            CBot::MakeCombo(a0, v43);
            while (*v45 && (v110 = v45, *v110))
            {
                v111 = &*v110->field_0->field_0;
                v112 = *v110;
                if (v112)
                {
                    if (v112 == v110[1])
                        v110[1] = v112->field_4;
                    v113 = *v110->field_4;
                    *v110 = v113;
                    if (v113)
                        v113->field_8 = NULL;
                    v112->field_4 = NULL;
                    __builtin_delete(v112);
                }
                v114 = v111;
                if (!v114)
                    break;
                __builtin_delete(v114);
            }
            if (v45)
            {
                v115 = v45;
                node = *v115;
                if (*v115)
                {
                    do
                    {
                        v117 = node;
                        node = node->field_4;
                        v117->field_4 = NULL;
                        v117->field_8 = NULL;
                        __builtin_delete(v117);
                    } while (node);
                }
                v115[1] = NULL;
                *v115 = NULL;
                __builtin_delete(v115);
            }
            v45 = 0;
            return 1;
        }
    }
    while (*v45 && (v118 = v45, *v118))
    {
        v119 = &*v118->field_0->field_0;
        v120 = *v118;
        if (v120)
        {
            if (v120 == v118[1])
                v118[1] = v120->field_4;
            v121 = *v118->field_4;
            *v118 = v121;
            if (v121)
                v121->field_8 = NULL;
            v120->field_4 = NULL;
            __builtin_delete(v120);
        }
        v122 = v119;
        if (!v122)
            break;
        __builtin_delete(v122);
    }
    if (v45)
    {
        v123 = v45;
        iter = *v123;
        if (*v123)
        {
            do
            {
                v125 = iter;
                iter = iter->field_4;
                v125->field_4 = NULL;
                v125->field_8 = NULL;
                __builtin_delete(v125);
            } while (iter);
        }
        v123[1] = NULL;
        *v123 = NULL;
        __builtin_delete(v123);
    }
    v45 = 0;
    return 0;
}

