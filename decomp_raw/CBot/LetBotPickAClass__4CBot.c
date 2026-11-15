// LetBotPickAClass__4CBot @0x13b2f0 size=5261
typedef struct st_53b2f0_1 {
    struct st_53b2f0_0 *field_0;
    char padding_4[2532];
    char field_9e8;
    char padding_9e9[7];
    unsigned short field_9f0;
} st_53b2f0_1;

typedef struct st_53b2f0_0 {
    char padding_0[464];
    unsigned int field_1d0;
} st_53b2f0_0;

typedef struct st_53b2f0_5 {
    struct st_53b2f0_6 *field_0;
    struct st_53b2f0_5 *field_4;
    struct st_53b2f0_5 *field_8;
} st_53b2f0_5;

typedef struct st_53b2f0_6 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
} st_53b2f0_6;

typedef struct st_53b2f0_2 {
    char padding_0[256];
    struct st_53b2f0_3 *field_100;
} st_53b2f0_2;

typedef struct st_53b2f0_7 {
    char padding_0[20];
    struct st_53b2f0_3 *field_14;
} st_53b2f0_7;

typedef struct st_53b2f0_8 {
    char padding_0[152];
    unsigned int field_98;
} st_53b2f0_8;

typedef struct st_53b2f0_3 {
    unsigned int field_0;
} st_53b2f0_3;

typedef struct st_53b2f0_4 {
    char padding_0[68];
    struct st_53b2f0_2 *field_44;
} st_53b2f0_4;

extern unsigned int FindSelection__t12TMultiChoice1ZPCcPQ2t12TMultiChoice1ZPCc12SMultiChoicei;
extern st_53b2f0_4 *g_pGameRules;
extern char _GLOBAL_OFFSET_TABLE_;
extern st_53b2f0_3 *g_616928;
extern st_53b2f0_8 *gpGlobals;
extern int ChatClass;
extern char cout;
extern st_53b2f0_7 *g_625f80;

int LetBotPickAClass__4CBot(st_53b2f0_1 *a0)
{
    st_53b2f0_5 **v44;  // eax
    unsigned int *v45;  // eax
    st_53b2f0_5 *v54;  // eax
    unsigned int *v55;  // eax
    st_53b2f0_5 **v56;  // esi
    st_53b2f0_5 *v57;  // edi
    st_53b2f0_5 *v58;  // edi
    st_53b2f0_5 *v59;  // eax
    unsigned int *v60;  // eax
    st_53b2f0_5 **v61;  // esi
    st_53b2f0_5 *v62;  // edi
    st_53b2f0_5 *v63;  // edi
    st_53b2f0_5 **v46;  // esi
    st_53b2f0_5 *v64;  // eax
    unsigned int *v65;  // eax
    st_53b2f0_5 **v66;  // esi
    st_53b2f0_5 *v67;  // edi
    st_53b2f0_5 *v68;  // edi
    st_53b2f0_5 *v69;  // eax
    unsigned int *v70;  // eax
    st_53b2f0_5 **v71;  // esi
    st_53b2f0_5 *v72;  // edi
    st_53b2f0_5 *v73;  // edi
    st_53b2f0_5 *v47;  // edi
    st_53b2f0_5 *v74;  // eax
    unsigned int *v75;  // eax
    st_53b2f0_5 **v76;  // esi
    st_53b2f0_5 *v77;  // edi
    st_53b2f0_5 *v78;  // edi
    st_53b2f0_5 *v79;  // eax
    unsigned int *v80;  // eax
    st_53b2f0_5 **v81;  // esi
    st_53b2f0_5 *v82;  // edi
    st_53b2f0_5 *v83;  // edi
    st_53b2f0_5 *v48;  // edi
    st_53b2f0_5 *v84;  // eax
    unsigned int *v85;  // eax
    st_53b2f0_5 **v86;  // esi
    st_53b2f0_5 *v87;  // edi
    st_53b2f0_5 *v88;  // edi
    st_53b2f0_5 *v89;  // eax
    st_53b2f0_5 *v91;  // esi
    st_53b2f0_5 *v92;  // esi
    st_53b2f0_5 *v93;  // esi
    st_53b2f0_5 *v49;  // eax
    unsigned int *v94;  // eax
    st_53b2f0_5 **v95;  // edx
    unsigned int *v96;  // esi
    st_53b2f0_5 *v97;  // ecx
    st_53b2f0_5 *v98;  // eax
    unsigned int *v99;  // eax
    st_53b2f0_5 **v100;  // edi
    st_53b2f0_5 *node;  // esi
    st_53b2f0_5 *v102;  // eax
    int v103;  // eax
    unsigned int *v50;  // eax
    st_53b2f0_5 **v51;  // esi
    st_53b2f0_5 *v52;  // edi
    st_53b2f0_5 *v53;  // edi
    char *v0;  // [bp-0xb4]
    unsigned int v1;  // [bp-0xb0]
    unsigned int *v2;  // [bp-0xac]
    unsigned int v3;  // [bp-0xa8]
    char *v4;  // [bp-0xa4]
    char v5;  // [bp-0x9d]
    st_53b2f0_5 *v6;  // [bp-0x9c]
    char v7;  // [bp-0x95]
    unsigned int *v8;  // [bp-0x94]
    char v9;  // [bp-0x8d]
    st_53b2f0_5 *v10;  // [bp-0x8c]
    char v11;  // [bp-0x85]
    unsigned int *v12;  // [bp-0x84]
    char v13;  // [bp-0x7d]
    st_53b2f0_5 *v14;  // [bp-0x7c]
    char v15;  // [bp-0x75]
    unsigned int *v16;  // [bp-0x74]
    char v17;  // [bp-0x6d]
    st_53b2f0_5 *v18;  // [bp-0x6c]
    char v19;  // [bp-0x65]
    unsigned int *v20;  // [bp-0x64]
    char v21;  // [bp-0x5d]
    st_53b2f0_5 *v22;  // [bp-0x5c]
    char v23;  // [bp-0x55]
    unsigned int *v24;  // [bp-0x54]
    char v25;  // [bp-0x4d]
    st_53b2f0_5 *v26;  // [bp-0x4c]
    char v27;  // [bp-0x45]
    unsigned int *v28;  // [bp-0x44]
    char v29;  // [bp-0x3d]
    st_53b2f0_5 *v30;  // [bp-0x3c]
    char v31;  // [bp-0x35]
    unsigned int *v32;  // [bp-0x34]
    char v33;  // [bp-0x2d]
    st_53b2f0_5 *v34;  // [bp-0x2c]
    char v35;  // [bp-0x25]
    unsigned int *v36;  // [bp-0x24]
    char v37;  // [bp-0x1d]
    st_53b2f0_5 *v38;  // [bp-0x1c]
    char v39;  // [bp-0x15]
    unsigned int *v40;  // [bp-0x14]
    unsigned int v41;  // [bp-0x10]
    unsigned int iter;  // [bp-0xc]
    st_53b2f0_5 **v43;  // [bp-0x8], Other Possible Types: unsigned int

    v41 = 0;
    if (a0->field_9f0 - 1 <= 8)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_9f0] - 886704)]));
    }
    else
    {
        if (v41 && g_pGameRules->field_44->field_100(g_pGameRules, v41, a0))
        {
            sub_48af30(a0, v41);
        }
        else
        {
            iter = 0;
            v44 = sub_48d6a0(8);
            *v44 = NULL;
            v44[1] = NULL;
            v43 = v44;
            if (g_pGameRules->field_44->field_100(g_pGameRules, "buu", a0))
            {
                v45 = sub_48d6a0(12);
                *v45 = 0;
                v45[1] = 0;
                v40 = v45;
                *v40 = iter;
                v40[1] = iter + 50;
                v40[2] = "buu";
                v46 = v43;
                if (!*v46)
                {
                    v47 = sub_48d6a0(12);
                    v39 = 1;
                    v47->field_4 = NULL;
                    v47->field_8 = NULL;
                    sub_48d0e0(v47, 0, 4);
                    v39 = 0;
                    *v46 = v47;
                    if (v39)
                        sub_48d4e0(v47);
                    *v46->field_0 = v40;
                    *v46->field_4 = NULL;
                    *v46->field_8 = NULL;
                    v46[1] = *v46;
                }
                else
                {
                    v38 = v46[1];
                    v48 = sub_48d6a0(12);
                    v37 = 1;
                    v48->field_4 = NULL;
                    v48->field_8 = NULL;
                    sub_48d0e0(v48, 0, 4);
                    v37 = 0;
                    v38->field_4 = v48;
                    if (v37)
                        sub_48d4e0(v48);
                    v46[1]->field_4->field_8 = v46[1];
                    v49 = v46[1]->field_4;
                    v46[1] = v49;
                    v49->field_0 = v40;
                    v46[1]->field_4 = NULL;
                }
                iter += 50;
            }
            if (g_pGameRules->field_44->field_100(g_pGameRules, "goku", a0))
            {
                v50 = sub_48d6a0(12);
                *v50 = 0;
                v50[1] = 0;
                v36 = v50;
                *v36 = iter;
                v36[1] = iter + 50;
                v36[2] = "goku";
                v51 = v43;
                if (!*v51)
                {
                    v52 = sub_48d6a0(12);
                    v35 = 1;
                    v52->field_4 = NULL;
                    v52->field_8 = NULL;
                    sub_48d0e0(v52, 0, 4);
                    v35 = 0;
                    *v51 = v52;
                    if (v35)
                        sub_48d4e0(v52);
                    *v51->field_0 = v36;
                    *v51->field_4 = NULL;
                    *v51->field_8 = NULL;
                    v51[1] = *v51;
                }
                else
                {
                    v34 = v51[1];
                    v53 = sub_48d6a0(12);
                    v33 = 1;
                    v53->field_4 = NULL;
                    v53->field_8 = NULL;
                    sub_48d0e0(v53, 0, 4);
                    v33 = 0;
                    v34->field_4 = v53;
                    if (v33)
                        sub_48d4e0(v53);
                    v51[1]->field_4->field_8 = v51[1];
                    v54 = v51[1]->field_4;
                    v51[1] = v54;
                    v54->field_0 = v36;
                    v51[1]->field_4 = NULL;
                }
                iter += 50;
            }
            if (g_pGameRules->field_44->field_100(g_pGameRules, "gohan", a0))
            {
                v55 = sub_48d6a0(12);
                *v55 = 0;
                v55[1] = 0;
                v32 = v55;
                *v32 = iter;
                v32[1] = iter + 50;
                v32[2] = "gohan";
                v56 = v43;
                if (!*v56)
                {
                    v57 = sub_48d6a0(12);
                    v31 = 1;
                    v57->field_4 = NULL;
                    v57->field_8 = NULL;
                    sub_48d0e0(v57, 0, 4);
                    v31 = 0;
                    *v56 = v57;
                    if (v31)
                        sub_48d4e0(v57);
                    *v56->field_0 = v32;
                    *v56->field_4 = NULL;
                    *v56->field_8 = NULL;
                    v56[1] = *v56;
                }
                else
                {
                    v30 = v56[1];
                    v58 = sub_48d6a0(12);
                    v29 = 1;
                    v58->field_4 = NULL;
                    v58->field_8 = NULL;
                    sub_48d0e0(v58, 0, 4);
                    v29 = 0;
                    v30->field_4 = v58;
                    if (v29)
                        sub_48d4e0(v58);
                    v56[1]->field_4->field_8 = v56[1];
                    v59 = v56[1]->field_4;
                    v56[1] = v59;
                    v59->field_0 = v32;
                    v56[1]->field_4 = NULL;
                }
                iter += 50;
            }
            if (g_pGameRules->field_44->field_100(g_pGameRules, "krillin", a0))
            {
                v60 = sub_48d6a0(12);
                *v60 = 0;
                v60[1] = 0;
                v28 = v60;
                *v28 = iter;
                v28[1] = iter + 50;
                v28[2] = "krillin";
                v61 = v43;
                if (!*v61)
                {
                    v62 = sub_48d6a0(12);
                    v27 = 1;
                    v62->field_4 = NULL;
                    v62->field_8 = NULL;
                    sub_48d0e0(v62, 0, 4);
                    v27 = 0;
                    *v61 = v62;
                    if (v27)
                        sub_48d4e0(v62);
                    *v61->field_0 = v28;
                    *v61->field_4 = NULL;
                    *v61->field_8 = NULL;
                    v61[1] = *v61;
                }
                else
                {
                    v26 = v61[1];
                    v63 = sub_48d6a0(12);
                    v25 = 1;
                    v63->field_4 = NULL;
                    v63->field_8 = NULL;
                    sub_48d0e0(v63, 0, 4);
                    v25 = 0;
                    v26->field_4 = v63;
                    if (v25)
                        sub_48d4e0(v63);
                    v61[1]->field_4->field_8 = v61[1];
                    v64 = v61[1]->field_4;
                    v61[1] = v64;
                    v64->field_0 = v28;
                    v61[1]->field_4 = NULL;
                }
                iter += 50;
            }
            if (g_pGameRules->field_44->field_100(g_pGameRules, "frieza", a0))
            {
                v65 = sub_48d6a0(12);
                *v65 = 0;
                v65[1] = 0;
                v24 = v65;
                *v24 = iter;
                v24[1] = iter + 50;
                v24[2] = "frieza";
                v66 = v43;
                if (!*v66)
                {
                    v67 = sub_48d6a0(12);
                    v23 = 1;
                    v67->field_4 = NULL;
                    v67->field_8 = NULL;
                    sub_48d0e0(v67, 0, 4);
                    v23 = 0;
                    *v66 = v67;
                    if (v23)
                        sub_48d4e0(v67);
                    *v66->field_0 = v24;
                    *v66->field_4 = NULL;
                    *v66->field_8 = NULL;
                    v66[1] = *v66;
                }
                else
                {
                    v22 = v66[1];
                    v68 = sub_48d6a0(12);
                    v21 = 1;
                    v68->field_4 = NULL;
                    v68->field_8 = NULL;
                    sub_48d0e0(v68, 0, 4);
                    v21 = 0;
                    v22->field_4 = v68;
                    if (v21)
                        sub_48d4e0(v68);
                    v66[1]->field_4->field_8 = v66[1];
                    v69 = v66[1]->field_4;
                    v66[1] = v69;
                    v69->field_0 = v24;
                    v66[1]->field_4 = NULL;
                }
                iter += 50;
            }
            if (g_pGameRules->field_44->field_100(g_pGameRules, "piccolo", a0))
            {
                v70 = sub_48d6a0(12);
                *v70 = 0;
                v70[1] = 0;
                v20 = v70;
                *v20 = iter;
                v20[1] = iter + 50;
                v20[2] = "piccolo";
                v71 = v43;
                if (!*v71)
                {
                    v72 = sub_48d6a0(12);
                    v19 = 1;
                    v72->field_4 = NULL;
                    v72->field_8 = NULL;
                    sub_48d0e0(v72, 0, 4);
                    v19 = 0;
                    *v71 = v72;
                    if (v19)
                        sub_48d4e0(v72);
                    *v71->field_0 = v20;
                    *v71->field_4 = NULL;
                    *v71->field_8 = NULL;
                    v71[1] = *v71;
                }
                else
                {
                    v18 = v71[1];
                    v73 = sub_48d6a0(12);
                    v17 = 1;
                    v73->field_4 = NULL;
                    v73->field_8 = NULL;
                    sub_48d0e0(v73, 0, 4);
                    v17 = 0;
                    v18->field_4 = v73;
                    if (v17)
                        sub_48d4e0(v73);
                    v71[1]->field_4->field_8 = v71[1];
                    v74 = v71[1]->field_4;
                    v71[1] = v74;
                    v74->field_0 = v20;
                    v71[1]->field_4 = NULL;
                }
                iter += 50;
            }
            if (g_pGameRules->field_44->field_100(g_pGameRules, "trunks", a0))
            {
                v75 = sub_48d6a0(12);
                *v75 = 0;
                v75[1] = 0;
                v16 = v75;
                *v16 = iter;
                v16[1] = iter + 50;
                v16[2] = "trunks";
                v76 = v43;
                if (!*v76)
                {
                    v77 = sub_48d6a0(12);
                    v15 = 1;
                    v77->field_4 = NULL;
                    v77->field_8 = NULL;
                    sub_48d0e0(v77, 0, 4);
                    v15 = 0;
                    *v76 = v77;
                    if (v15)
                        sub_48d4e0(v77);
                    *v76->field_0 = v16;
                    *v76->field_4 = NULL;
                    *v76->field_8 = NULL;
                    v76[1] = *v76;
                }
                else
                {
                    v14 = v76[1];
                    v78 = sub_48d6a0(12);
                    v13 = 1;
                    v78->field_4 = NULL;
                    v78->field_8 = NULL;
                    sub_48d0e0(v78, 0, 4);
                    v13 = 0;
                    v14->field_4 = v78;
                    if (v13)
                        sub_48d4e0(v78);
                    v76[1]->field_4->field_8 = v76[1];
                    v79 = v76[1]->field_4;
                    v76[1] = v79;
                    v79->field_0 = v16;
                    v76[1]->field_4 = NULL;
                }
                iter += 50;
            }
            if (g_pGameRules->field_44->field_100(g_pGameRules, "vegeta", a0))
            {
                v80 = sub_48d6a0(12);
                *v80 = 0;
                v80[1] = 0;
                v12 = v80;
                *v12 = iter;
                v12[1] = iter + 50;
                v12[2] = "vegeta";
                v81 = v43;
                if (!*v81)
                {
                    v82 = sub_48d6a0(12);
                    v11 = 1;
                    v82->field_4 = NULL;
                    v82->field_8 = NULL;
                    sub_48d0e0(v82, 0, 4);
                    v11 = 0;
                    *v81 = v82;
                    if (v11)
                        sub_48d4e0(v82);
                    *v81->field_0 = v12;
                    *v81->field_4 = NULL;
                    *v81->field_8 = NULL;
                    v81[1] = *v81;
                }
                else
                {
                    v10 = v81[1];
                    v83 = sub_48d6a0(12);
                    v9 = 1;
                    v83->field_4 = NULL;
                    v83->field_8 = NULL;
                    sub_48d0e0(v83, 0, 4);
                    v9 = 0;
                    v10->field_4 = v83;
                    if (v9)
                        sub_48d4e0(v83);
                    v81[1]->field_4->field_8 = v81[1];
                    v84 = v81[1]->field_4;
                    v81[1] = v84;
                    v84->field_0 = v12;
                    v81[1]->field_4 = NULL;
                }
                iter += 50;
            }
            if (g_pGameRules->field_44->field_100(g_pGameRules, "cell", a0))
            {
                v85 = sub_48d6a0(12);
                *v85 = 0;
                v85[1] = 0;
                v8 = v85;
                *v8 = iter;
                v8[1] = iter + 50;
                v8[2] = "cell";
                v86 = v43;
                if (!*v86)
                {
                    v87 = sub_48d6a0(12);
                    v7 = 1;
                    v87->field_4 = NULL;
                    v87->field_8 = NULL;
                    sub_48d0e0(v87, 0, 4);
                    v7 = 0;
                    *v86 = v87;
                    if (v7)
                        sub_48d4e0(v87);
                    *v86->field_0 = v8;
                    *v86->field_4 = NULL;
                    *v86->field_8 = NULL;
                    v86[1] = *v86;
                }
                else
                {
                    v6 = v86[1];
                    v88 = sub_48d6a0(12);
                    v5 = 1;
                    v88->field_4 = NULL;
                    v88->field_8 = NULL;
                    sub_48d0e0(v88, 0, 4);
                    v5 = 0;
                    v6->field_4 = v88;
                    if (v5)
                        sub_48d4e0(v88);
                    v86[1]->field_4->field_8 = v86[1];
                    v89 = v86[1]->field_4;
                    v86[1] = v89;
                    v89->field_0 = v8;
                    v86[1]->field_4 = NULL;
                }
                iter += 50;
            }
            v4 = &v41;
            v3 = g_616928(0, iter);
            v1 = _INSERT(v3, 0, 0) | 0xffff0000;
            v2 = &FindSelection__t12TMultiChoice1ZPCcPQ2t12TMultiChoice1ZPCc12SMultiChoicei;
            v91 = *v43;
            if (*v43)
            {
                v0 = (char *)&iter + (unsigned short)v1;
                do
                {
                    v92 = v91;
                    v93 = v92->field_4;
                    if ((char)v2(v0, v92->field_0, v3))
                    {
                        v94 = &v92->field_0->field_0;
                        goto LABEL_53c4df;
                    }
                } while ((v91 = v93, v92->field_4));
                v94 = NULL;
LABEL_53c4df:
                if (!v94 || (v41 = v94[2], !g_pGameRules->field_44->field_100(g_pGameRules, v41, a0)))
                    goto LABEL_53c530;
                sub_48af30(a0, v41);
            }
            else
            {
LABEL_53c530:
                g_625f80->field_14(&cout, "Error: Bot ");
                g_625f80->field_14(&cout, a0->field_0->field_1d0 + gpGlobals->field_98);
                g_625f80->field_14(&cout, " couldn't pick a class!\n");
            }
            while (*v43 && (v95 = v43, *v95))
            {
                v96 = &*v95->field_0->field_0;
                v97 = *v95;
                if (v97)
                {
                    if (v97 == v95[1])
                        v95[1] = v97->field_4;
                    v98 = *v95->field_4;
                    *v95 = v98;
                    if (v98)
                        v98->field_8 = NULL;
                    v97->field_4 = NULL;
                    sub_48d4e0(v97);
                }
                v99 = v96;
                if (!v99)
                    break;
                sub_48d4e0(v99);
            }
            if (v43)
            {
                v100 = v43;
                node = *v100;
                if (*v100)
                {
                    do
                    {
                        v102 = node;
                        node = node->field_4;
                        v102->field_4 = NULL;
                        v102->field_8 = NULL;
                        sub_48d4e0(v102);
                    } while (node);
                }
                v100[1] = NULL;
                *v100 = NULL;
                sub_48d4e0(v100);
            }
            v43 = 0;
        }
        a0->field_9e8 = 0;
        v103 = g_616928(1, 100);
        if (v103 > 50)
            return v103;
        return sub_488920(&ChatClass, a0);
    }
}

