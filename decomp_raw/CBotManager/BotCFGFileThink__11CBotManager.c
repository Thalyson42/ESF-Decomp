// BotCFGFileThink__11CBotManager @0x141710 size=5996
typedef struct st_541710_4 {
    char padding_0[26];
    unsigned short field_1a;
} st_541710_4;

typedef struct st_541710_5 {
    char padding_0[28];
    unsigned short field_1c;
} st_541710_5;

typedef struct st_541710_1 {
    char padding_0[56];
    int field_38;
} st_541710_1;

typedef struct st_541710_2 {
    char padding_0[20];
    struct st_541710_3 *field_14;
} st_541710_2;

typedef struct st_541710_0 {
    float field_0;
} st_541710_0;

typedef struct st_541710_3 {
    unsigned int field_0;
} st_541710_3;

extern unsigned int g_teamplay;
extern st_541710_3 *g_engfuncs.pfnServerCommand;
extern st_541710_0 *gpGlobals;
extern int server_cmd.2935;
extern char cout;
extern st_541710_2 *cout+512;

double BotCFGFileThink__11CBotManager(float idx)
{
    double v16;  // 128
    st_541710_1 *v17;  // edx
    unsigned int v26;  // edi
    char *v116;  // edi
    unsigned int v117;  // 4101
    char *v118;  // ecx
    double v119;  // mm6
    char *v120;  // esi
    char *v121;  // edi
    unsigned int v122;  // ecx
    unsigned int v123;  // cc_op
    unsigned int v124;  // cc_dep1
    unsigned int v125;  // cc_dep2
    char *v27;  // esi
    char *v126;  // esi
    char *v127;  // edi
    unsigned int v128;  // 4101
    char *v129;  // edi
    unsigned int v130;  // ecx
    unsigned int v131;  // cc_op
    unsigned int v132;  // cc_dep1
    unsigned int v133;  // cc_dep2
    char *v134;  // esi
    char *v135;  // esi
    char *v28;  // edi
    char *v136;  // edi
    unsigned int v137;  // 4101
    char *v138;  // edi
    unsigned int v139;  // ecx
    unsigned int v140;  // cc_op
    unsigned int v141;  // cc_dep1
    unsigned int v142;  // cc_dep2
    char *v143;  // esi
    char *v144;  // esi
    char *v145;  // edi
    unsigned int v29;  // ecx
    unsigned int v146;  // 4101
    char *v147;  // edi
    unsigned int v148;  // ecx
    unsigned int v149;  // cc_op
    unsigned int v150;  // cc_dep1
    unsigned int v151;  // cc_dep2
    char *v152;  // esi
    char *v153;  // esi
    char *v154;  // edi
    unsigned int v155;  // 4101
    unsigned int v30;  // cc_op
    char *v156;  // edi
    unsigned int v157;  // ecx
    unsigned int v158;  // cc_op
    unsigned int v159;  // cc_dep1
    unsigned int v160;  // cc_dep2
    char *v161;  // esi
    char *v162;  // esi
    char *v163;  // edi
    unsigned int v164;  // 4101
    char *v165;  // edi
    unsigned int v31;  // cc_dep1
    unsigned int v166;  // ecx
    unsigned int v167;  // cc_op
    unsigned int v168;  // cc_dep1
    unsigned int v169;  // cc_dep2
    char *v170;  // esi
    char *v171;  // esi
    char *v172;  // edi
    unsigned int v173;  // 4101
    char *v174;  // edx
    unsigned int v32;  // cc_dep2
    char *v33;  // esi
    char *v34;  // edi
    unsigned int v35;  // 4101
    char *v18;  // edi
    short v36;  // si
    char *v37;  // edx
    char *v38;  // ecx
    char *v39;  // eax
    char *v40;  // edx
    float *v41;  // ecx
    double v42;  // mm7
    char *v43;  // esi
    char *v44;  // edi
    unsigned int v45;  // ecx
    int v19;  // eax
    unsigned int v46;  // cc_op
    unsigned int v47;  // cc_dep1
    unsigned int v48;  // cc_dep2
    char *v49;  // esi
    char *v50;  // edi
    unsigned int v51;  // 4101
    short v52;  // si
    char *v53;  // eax
    char *v54;  // edx
    char *v55;  // ecx
    unsigned int v20;  // eax
    char *v56;  // eax
    double v57;  // mm7
    char *v58;  // esi
    char *v59;  // edi
    unsigned int v60;  // ecx
    unsigned int v61;  // cc_op
    unsigned int v62;  // cc_dep1
    unsigned int v63;  // cc_dep2
    char *v64;  // esi
    char *v65;  // edi
    unsigned int *v21;  // ecx
    unsigned int v66;  // 4101
    unsigned int v67;  // edx
    char *v68;  // esi
    char *v69;  // edi
    unsigned int v70;  // ecx
    unsigned int v71;  // cc_op
    unsigned int v72;  // cc_dep1
    unsigned int v73;  // cc_dep2
    char *v74;  // esi
    char *v75;  // edi
    unsigned int v22;  // edi
    unsigned int v76;  // 4101
    char *v77;  // ecx
    char *v78;  // esi
    char *v79;  // edi
    unsigned int v80;  // ecx
    unsigned int v81;  // cc_op
    unsigned int v82;  // cc_dep1
    unsigned int v83;  // cc_dep2
    char *v84;  // esi
    char *v85;  // edi
    unsigned int v23;  // edi
    unsigned int v86;  // 4101
    char *v87;  // esi
    char *v88;  // edi
    unsigned int v89;  // ecx
    unsigned int v90;  // cc_op
    unsigned int v91;  // cc_dep1
    unsigned int v92;  // cc_dep2
    char *v93;  // esi
    char *v94;  // edi
    unsigned int v95;  // 4101
    unsigned int v24;  // edi
    unsigned short v96;  // ax
    st_541710_4 *v97;  // edx
    char *v98;  // esi
    char *v99;  // edi
    unsigned int v100;  // ecx
    unsigned int v101;  // cc_op
    unsigned int v102;  // cc_dep1
    unsigned int v103;  // cc_dep2
    char *v104;  // esi
    char *v105;  // edi
    unsigned int v25;  // edi
    unsigned int v106;  // 4101
    unsigned short v107;  // ax
    st_541710_5 *v108;  // edx
    char *v109;  // esi
    char *v110;  // edi
    unsigned int v111;  // ecx
    unsigned int v112;  // cc_op
    unsigned int v113;  // cc_dep1
    unsigned int v114;  // cc_dep2
    char *v115;  // esi
    char *v0;  // [bp-0x200]
    short v1;  // [bp-0x1fc]
    short v2;  // [bp-0x1fa]
    char *v3;  // [bp-0x1f8]
    short v4;  // [bp-0x1f2]
    short v5;  // [bp-0x1f0]
    short v6;  // [bp-0x1ee]
    char *v7;  // [bp-0x1ec]
    char *v8;  // [bp-0x1e8]
    char *v9;  // [bp-0x1e4]
    char *v10;  // [bp-0x1e0]
    char *v11;  // [bp-0x1dc]
    char *v12;  // [bp-0x1d8]
    char v13;  // [bp-0x1c4]
    char v14;  // [bp-0x104]

    v16 = *(float *)(*(unsigned int *)&idx + 52);
    if (v16 > *(float *)gpGlobals)
        return v16;
    v17 = (st_541710_1 *)idx;
    if (!v17->field_38)
        return v16;
    v18 = NULL;
    v14 = 0;
    v19 = v17->field_38;
    while (1)
    {
        v20 = fgetc@GLIBC_2.0(v19);
        if (v20 != 32)
            break;
        v19 = *(int *)(*(unsigned int *)&idx + 56);
    }
    if (v20 == 0xffffffff)
        goto LABEL_54180d;
    switch (v20)
    {
    case 10:
LABEL_54180d:
        if (v20 != 13)
            break;
    case 13:
LABEL_541812:
        v20 = fgetc@GLIBC_2.0(*(int *)(*(unsigned int *)&idx + 56));
        break;
    default:
        v7 = &v14;
        while (1)
        {
            if (v20 == 9)
                v20 = 32;
            *(char *)(v18 + v7) = v20;
            v20 = fgetc@GLIBC_2.0(*(int *)(*(unsigned int *)&idx + 56));
            if (*(char *)(v18 + v7) == 32 && v20 == 32)
            {
                do
                {
                    v20 = fgetc@GLIBC_2.0(*(int *)(*(unsigned int *)&idx + 56));
                } while (*(char *)(v18 + &v14) == 32 && v20 == 32);
            }
            v18 += 1;
            if (v20 == 0xffffffff)
                break;
            if (v20 == 13)
                goto LABEL_541812;
            if (v20 == 10)
                break;
        }
        goto LABEL_54180d;
    }
    if (v20 == 0xffffffff)
    {
        fclose@GLIBC_2.1(*(int *)(*(unsigned int *)&idx + 56));
        v21 = (unsigned int *)idx;
        v21[14] = 0;
        v21[13] = 0;
    }
    *(char *)(v18 + &v14) = 0;
    strcpy@GLIBC_2.0(&server_cmd.2935, &v14);
    strcat@GLIBC_2.0(&server_cmd.2935, "\n");
    v22 = 0;
    v8 = NULL;
    v9 = NULL;
    v10 = NULL;
    v11 = NULL;
    v12 = NULL;
    switch (v14)
    {
    case 32:
LABEL_5418cb:
        (&v14)[v22] = 0;
        v23 = v22 + 1;
        v12 = &(&v14)[v23];
        if ((&v14)[v23] != 32)
        {
            if ((&v14)[v23])
            {
                do
                {
                    v23 += 1;
                    if ((&v14)[v23] == 32)
                        goto LABEL_54190b;
                } while ((&v14)[v23]);
            }
            if ((&v14)[v23] != 32)
                break;
        }
LABEL_54190b:
        (&v14)[v23] = 0;
        v24 = v23 + 1;
        v11 = &(&v14)[v24];
        if ((&v14)[v24] != 32)
        {
            if ((&v14)[v24])
            {
                do
                {
                    v24 += 1;
                    if ((&v14)[v24] == 32)
                        goto LABEL_54194b;
                } while ((&v14)[v24]);
            }
            if ((&v14)[v24] != 32)
                break;
        }
LABEL_54194b:
        (&v14)[v24] = 0;
        v25 = v24 + 1;
        v10 = &(&v14)[v25];
        if ((&v14)[v25] != 32)
        {
            if ((&v14)[v25])
            {
                do
                {
                    v25 += 1;
                    if ((&v14)[v25] == 32)
                        goto LABEL_541987;
                } while ((&v14)[v25]);
            }
            if ((&v14)[v25] != 32)
                break;
        }
LABEL_541987:
        (&v14)[v25] = 0;
        v26 = v25 + 1;
        v9 = &(&v14)[v26];
        if ((&v14)[v26] != 32)
        {
            if ((&v14)[v26])
            {
                do
                {
                    v26 += 1;
                    if ((&v14)[v26] == 32)
                        goto LABEL_5419c7;
                } while ((&v14)[v26]);
            }
            if ((&v14)[v26] != 32)
                break;
        }
LABEL_5419c7:
        (&v14)[v26] = 0;
        v8 = &(&v14)[1 + v26];
        break;
    case 0:
LABEL_5418bd:
        if ((&v14)[v22] == 32)
            goto LABEL_5418cb;
        else
            goto LABEL_5419db;
    default:
        do
        {
            v22 += 1;
            if ((&v14)[v22] == 32)
                goto LABEL_5418cb;
        } while ((&v14)[v22]);
        goto LABEL_5418bd;
    }
LABEL_5419db:
    if (*&v14 == 35)
    {
        return v16;
    }
    else if (!*&v14)
    {
        return v16;
    }
    else if (!v12)
    {
        return v16;
    }
    else if (*v12)
    {
        v27 = &v14;
        v28 = "addbot";
        v29 = 7;
        v30 = 13;
        v31 = 0;
        v32 = 0;
        do
        {
            v33 = v27;
            v34 = v28;
            if (!v29)
                break;
            v29 -= 1;
            v30 = 4;
            v31 = *v33;
            v32 = *v34;
            v28 = v34 + 1;
            v27 = v33 + 1;
        } while (*v33 == *v34);
        v35 = _ccall(4, v30, v31, v32, 0);
        if (v35 & 1)
        {
            v36 = -0x1;
            v6 = -0x1;
            v5 = -0x1;
            v4 = -0x1;
            v3 = NULL;
            if (v10)
            {
                v37 = v10;
                if (*v37 && *v37 != 42)
                    v3 = v37;
            }
            if (v12)
            {
                v38 = v12;
                if (*v38)
                {
                    if (g_teamplay)
                        v36 = __strtol_internal@GLIBC_2.0(v38, 0, 10, 0);
                    else
                        v36 = -0x1;
                }
            }
            if (v11)
            {
                v39 = v11;
                if (*v39)
                    v6 = __strtol_internal@GLIBC_2.0(v39, 0, 10, 0);
            }
            if (v9)
            {
                v40 = v9;
                if (*v40)
                    v5 = __strtol_internal@GLIBC_2.0(v40, 0, 10, 0);
            }
            if (v8 && *v8)
                v4 = __strtol_internal@GLIBC_2.0(v8, 0, 10, 0);
            CBotManager::CreateBot(idx, v36, v6, v3, v5, v4);
            v41 = (float *)idx;
            v41[13] = (float)(2.0 + *(float *)gpGlobals);
            v42 = 5.0 + *(float *)gpGlobals;
            v41[4] = (float)v42;
            return v42;
        }
        else
        {
            v43 = &v14;
            v44 = "addsbot";
            v45 = 8;
            v46 = 13;
            v47 = 0;
            v48 = 0;
            do
            {
                v49 = v43;
                v50 = v44;
                if (!v45)
                    break;
                v45 -= 1;
                v46 = 4;
                v47 = *v49;
                v48 = *v50;
                v44 = v50 + 1;
                v43 = v49 + 1;
            } while (*v49 == *v50);
            v51 = _ccall(4, v46, v47, v48, 0);
            if (!(v51 & 1))
            {
                v58 = &v14;
                v59 = "botskill";
                v60 = 9;
                v61 = 13;
                v62 = 0;
                v63 = 0;
                do
                {
                    v64 = v58;
                    v65 = v59;
                    if (!v60)
                        break;
                    v60 -= 1;
                    v61 = 4;
                    v62 = *v64;
                    v63 = *v65;
                    v59 = v65 + 1;
                    v58 = v64 + 1;
                } while (*v64 == *v65);
                v66 = _ccall(4, v61, v62, v63, 0);
                if (v66 & 1)
                {
                    v67 = __strtol_internal@GLIBC_2.0(v12, 0, 10, 0);
                    if (v67 - 1 > 4)
                        return v16;
                    CBotManager::ChangeBotSkill(idx, (short)v67);
                    return v16;
                }
                else
                {
                    v68 = &v14;
                    v69 = "shouldbotschat";
                    v70 = 15;
                    v71 = 13;
                    v72 = 0;
                    v73 = 0;
                    do
                    {
                        v74 = v68;
                        v75 = v69;
                        if (!v70)
                            break;
                        v70 -= 1;
                        v71 = 4;
                        v72 = *v74;
                        v73 = *v75;
                        v69 = v75 + 1;
                        v68 = v74 + 1;
                    } while (*v74 == *v75);
                    v76 = _ccall(4, v71, v72, v73, 0);
                    if (v76 & 1)
                    {
                        if (__strtol_internal@GLIBC_2.0(v12, 0, 10, 0))
                        {
                            *(char *)(*(unsigned int *)&idx + 3405) = 1;
                            return v16;
                        }
                        *(char *)(*(unsigned int *)&idx + 3405) = 0;
                        return v16;
                    }
                    else
                    {
                        if (!strcmp@GLIBC_2.0(&v14, "botsusediscs"))
                        {
                            if (v12)
                            {
                                v77 = v12;
                                if (!*v77)
                                    return v16;
                                if (__strtol_internal@GLIBC_2.0(v77, 0, 10, 0))
                                {
                                    *(char *)(*(unsigned int *)&idx + 3401) = 1;
                                    return v16;
                                }
                                *(char *)(*(unsigned int *)&idx + 3401) = 0;
                                return v16;
                            }
                            else
                            {
                                return v16;
                            }
                        }
                        else
                        {
                            v78 = &v14;
                            v79 = "botshoot";
                            v80 = 9;
                            v81 = 13;
                            v82 = 0;
                            v83 = 0;
                            do
                            {
                                v84 = v78;
                                v85 = v79;
                                if (!v80)
                                    break;
                                v80 -= 1;
                                v81 = 4;
                                v82 = *v84;
                                v83 = *v85;
                                v79 = v85 + 1;
                                v78 = v84 + 1;
                            } while (*v84 == *v85);
                            v86 = _ccall(4, v81, v82, v83, 0);
                            if (v86 & 1)
                            {
                                if (__strtol_internal@GLIBC_2.0(v12, 0, 10, 0))
                                {
                                    *(char *)(*(unsigned int *)&idx + 3399) = 1;
                                    return v16;
                                }
                                *(char *)(*(unsigned int *)&idx + 3399) = 0;
                                return v16;
                            }
                            else
                            {
                                v87 = &v14;
                                v88 = "min_bots";
                                v89 = 9;
                                v90 = 13;
                                v91 = 0;
                                v92 = 0;
                                do
                                {
                                    v93 = v87;
                                    v94 = v88;
                                    if (!v89)
                                        break;
                                    v89 -= 1;
                                    v90 = 4;
                                    v91 = *v93;
                                    v92 = *v94;
                                    v88 = v94 + 1;
                                    v87 = v93 + 1;
                                } while (*v93 == *v94);
                                v95 = _ccall(4, v90, v91, v92, 0);
                                if (v95 & 1)
                                {
                                    v96 = __strtol_internal@GLIBC_2.0(v12, 0, 10, 0);
                                    v97 = (st_541710_4 *)idx;
                                    v97->field_1a = v96;
                                    if (v96 <= 31)
                                        return v16;
                                    v97->field_1a = 0xffff;
                                    return v16;
                                }
                                else
                                {
                                    v98 = &v14;
                                    v99 = "max_bots";
                                    v100 = 9;
                                    v101 = 13;
                                    v102 = 0;
                                    v103 = 0;
                                    do
                                    {
                                        v104 = v98;
                                        v105 = v99;
                                        if (!v100)
                                            break;
                                        v100 -= 1;
                                        v101 = 4;
                                        v102 = *v104;
                                        v103 = *v105;
                                        v99 = v105 + 1;
                                        v98 = v104 + 1;
                                    } while (*v104 == *v105);
                                    v106 = _ccall(4, v101, v102, v103, 0);
                                    if (v106 & 1)
                                    {
                                        v107 = __strtol_internal@GLIBC_2.0(v12, 0, 10, 0);
                                        v108 = (st_541710_5 *)idx;
                                        v108->field_1c = v107;
                                        if (v107 <= 31)
                                            return v16;
                                        v108->field_1c = 0xffff;
                                        return v16;
                                    }
                                    else
                                    {
                                        v109 = &v14;
                                        v110 = "pause";
                                        v111 = 6;
                                        v112 = 13;
                                        v113 = 0;
                                        v114 = 0;
                                        do
                                        {
                                            v115 = v109;
                                            v116 = v110;
                                            if (!v111)
                                                break;
                                            v111 -= 1;
                                            v112 = 4;
                                            v113 = *v115;
                                            v114 = *v116;
                                            v110 = v116 + 1;
                                            v109 = v115 + 1;
                                        } while (*v115 == *v116);
                                        v117 = _ccall(4, v112, v113, v114, 0);
                                        if (v117 & 1)
                                        {
                                            if (v12)
                                            {
                                                v118 = v12;
                                                if (!*v118)
                                                    return v16;
                                                __strtod_internal@GLIBC_2.0(v118, 0, 0);
                                                *(float *)(*(unsigned int *)&idx + 52) = (float)(v119 + *(float *)gpGlobals);
                                                return v16;
                                            }
                                            else
                                            {
                                                return v16;
                                            }
                                        }
                                        else
                                        {
                                            v120 = &v14;
                                            v121 = "bot_fill";
                                            v122 = 9;
                                            v123 = 13;
                                            v124 = 0;
                                            v125 = 0;
                                            do
                                            {
                                                v126 = v120;
                                                v127 = v121;
                                                if (!v122)
                                                    break;
                                                v122 -= 1;
                                                v123 = 4;
                                                v124 = *v126;
                                                v125 = *v127;
                                                v121 = v127 + 1;
                                                v120 = v126 + 1;
                                            } while (*v126 == *v127);
                                            v128 = _ccall(4, v123, v124, v125, 0);
                                            if (v128 & 1)
                                            {
                                                v129 = "full";
                                                v130 = 5;
                                                v131 = 13;
                                                v132 = 0;
                                                v133 = 0;
                                                v134 = v12;
                                                do
                                                {
                                                    v135 = v134;
                                                    v136 = v129;
                                                    if (!v130)
                                                        break;
                                                    v130 -= 1;
                                                    v131 = 4;
                                                    v132 = *v135;
                                                    v133 = *v136;
                                                    v129 = v136 + 1;
                                                    v134 = v135 + 1;
                                                } while (*v135 == *v136);
                                                v137 = _ccall(4, v131, v132, v133, 0);
                                                if (v137 & 1)
                                                {
                                                    CBotManager::FillServer(idx);
                                                    return v16;
                                                }
                                                v138 = "half_good";
                                                v139 = 10;
                                                v140 = 13;
                                                v141 = 0;
                                                v142 = 0;
                                                v143 = v12;
                                                do
                                                {
                                                    v144 = v143;
                                                    v145 = v138;
                                                    if (!v139)
                                                        break;
                                                    v139 -= 1;
                                                    v140 = 4;
                                                    v141 = *v144;
                                                    v142 = *v145;
                                                    v138 = v145 + 1;
                                                    v143 = v144 + 1;
                                                } while (*v144 == *v145);
                                                v146 = _ccall(4, v140, v141, v142, 0);
                                                if (v146 & 1)
                                                {
                                                    CBotManager::FillAHalfTeam(idx, 1);
                                                    return v16;
                                                }
                                                v147 = "half_evil";
                                                v148 = 10;
                                                v149 = 13;
                                                v150 = 0;
                                                v151 = 0;
                                                v152 = v12;
                                                do
                                                {
                                                    v153 = v152;
                                                    v154 = v147;
                                                    if (!v148)
                                                        break;
                                                    v148 -= 1;
                                                    v149 = 4;
                                                    v150 = *v153;
                                                    v151 = *v154;
                                                    v147 = v154 + 1;
                                                    v152 = v153 + 1;
                                                } while (*v153 == *v154);
                                                v155 = _ccall(4, v149, v150, v151, 0);
                                                if (v155 & 1)
                                                {
                                                    CBotManager::FillAHalfTeam(idx, 2);
                                                    return v16;
                                                }
                                                v156 = "full_good";
                                                v157 = 10;
                                                v158 = 13;
                                                v159 = 0;
                                                v160 = 0;
                                                v161 = v12;
                                                do
                                                {
                                                    v162 = v161;
                                                    v163 = v156;
                                                    if (!v157)
                                                        break;
                                                    v157 -= 1;
                                                    v158 = 4;
                                                    v159 = *v162;
                                                    v160 = *v163;
                                                    v156 = v163 + 1;
                                                    v161 = v162 + 1;
                                                } while (*v162 == *v163);
                                                v164 = _ccall(4, v158, v159, v160, 0);
                                                if (v164 & 1)
                                                {
                                                    CBotManager::FillATeam(idx, 1);
                                                    return v16;
                                                }
                                                v165 = "full_evil";
                                                v166 = 10;
                                                v167 = 13;
                                                v168 = 0;
                                                v169 = 0;
                                                v170 = v12;
                                                do
                                                {
                                                    v171 = v170;
                                                    v172 = v165;
                                                    if (!v166)
                                                        break;
                                                    v166 -= 1;
                                                    v167 = 4;
                                                    v168 = *v171;
                                                    v169 = *v172;
                                                    v165 = v172 + 1;
                                                    v170 = v171 + 1;
                                                } while (*v171 == *v172);
                                                v173 = _ccall(4, v167, v168, v169, 0);
                                                if (v173 & 1)
                                                {
                                                    CBotManager::FillATeam(idx, 2);
                                                    return v16;
                                                }
                                            }
                                            if (strcmp@GLIBC_2.0(&v14, "bot_balanceteams"))
                                            {
                                                sprintf@GLIBC_2.0(&v13, "executing server command: %s\n", &server_cmd.2935);
                                                UTIL_Printf(&v13, 1, 0);
                                                g_engfuncs.pfnServerCommand(&server_cmd.2935);
                                                return v16;
                                            }
                                            if (v12)
                                            {
                                                v174 = v12;
                                                if (!*v174)
                                                    return v16;
                                                if (__strtol_internal@GLIBC_2.0(v174, 0, 10, 0))
                                                {
                                                    *(char *)(*(unsigned int *)&idx + 3404) = 1;
                                                    return v16;
                                                }
                                                *(char *)(*(unsigned int *)&idx + 3404) = 0;
                                                return v16;
                                            }
                                            else
                                            {
                                                return v16;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if (!g_teamplay)
            {
                cout+512->field_14(&cout, "Cannot create Super Bots in free fight!\n");
                return v16;
            }
            else
            {
                v52 = -0x1;
                v2 = -0x1;
                v1 = -0x1;
                v0 = NULL;
                if (v9)
                {
                    v53 = v9;
                    if (*v53 && *v53 != 42)
                        v0 = v53;
                }
                if (v12)
                {
                    v54 = v12;
                    if (*v54 && *v54 != 42)
                        v1 = __strtol_internal@GLIBC_2.0(v54, 0, 10, 0);
                }
                if (v11)
                {
                    v55 = v11;
                    if (*v55 && *v55 != 42)
                        v52 = __strtol_internal@GLIBC_2.0(v55, 0, 10, 0);
                }
                if (v10)
                {
                    v56 = v10;
                    if (*v56 && *v56 != 42)
                        v2 = __strtol_internal@GLIBC_2.0(v56, 0, 10, 0);
                }
                CBotManager::CreateSuperBot(idx, v52, v0, v2, v1);
                *(float *)(*(unsigned int *)&idx + 52) = (float)(2.0 + *(float *)gpGlobals);
                v57 = 5.0 + *(float *)gpGlobals;
                *(float *)(*(unsigned int *)&idx + 16) = (float)v57;
                return v57;
            }
        }
    }
    else
    {
        return v16;
    }
}

