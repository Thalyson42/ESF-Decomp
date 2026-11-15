// BuildNodeGraph__9CTestHull @0xe20c0 size=5193
typedef struct st_4e20c0_2 {
    void* field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4e20c0_2;

typedef struct st_4e20c0_5 {
    float field_0;
    float field_4;
    float field_8;
    char padding_c[16];
    char field_1c;
    char padding_1d[3];
    int field_20;
    unsigned int field_24;
} st_4e20c0_5;

typedef struct st_4e20c0_4 {
    char padding_0[551];
    char field_227;
} st_4e20c0_4;

typedef struct st_4e20c0_1 {
    float field_0;
} st_4e20c0_1;

typedef struct st_4e20c0_0 {
    float field_0;
    char padding_4[8];
    unsigned int field_c;
    char padding_10[136];
    unsigned int field_98;
} st_4e20c0_0;

typedef struct st_4e20c0_3 {
    unsigned int field_0;
} st_4e20c0_3;

extern char ShowBadNode__9CTestHull;
extern char SUB_Remove__11CBaseEntity;
extern unsigned int _GLOBAL_OFFSET_TABLE_;
extern st_4e20c0_3 *g_engfuncs.pfnWalkMove;
extern st_4e20c0_3 *g_engfuncs.pfnAlertMessage;
extern st_4e20c0_3 *g_engfuncs.pfnGetGameDir;
extern st_4e20c0_0 *gpGlobals;
extern unsigned int WorldGraph;
extern unsigned int WorldGraph+4;
extern unsigned int WorldGraph+8;
extern st_4e20c0_1 *WorldGraph+12;
extern unsigned int WorldGraph+16;
extern int WorldGraph+24;
extern unsigned int WorldGraph+28;
extern int g_pBodyQueueHead;

unsigned int BuildNodeGraph__9CTestHull(st_4e20c0_2 *a0)
{
    unsigned int v64;  // edi
    double v74;  // mm7
    st_4e20c0_2 *v76;  // ecx
    void* v77;  // esi
    unsigned int v78;  // eax
    unsigned int v79;  // eax
    int v80;  // edi
    st_4e20c0_2 *v81;  // edi
    float *v82;  // ecx
    void* v83;  // eax
    st_4e20c0_2 *v66;  // ecx
    st_4e20c0_2 *v84;  // edi
    void* v85;  // edx
    void* v86;  // edx
    float v87;  // 112
    float v88;  // 112
    double v89;  // mm7
    double v90;  // mm6
    unsigned int v91;  // edi
    int v92;  // esi
    unsigned int v93;  // 128
    unsigned int v67;  // eax
    double v94;  // mm6
    void* v96;  // edx
    float v97;  // 112
    float v98;  // 112
    float v99;  // 112
    double v100;  // mm7
    double v101;  // mm6
    unsigned int v102;  // eax
    unsigned int v103;  // eax
    unsigned int v68;  // esi
    unsigned int v104;  // eax
    unsigned int *v105;  // eax
    st_4e20c0_5 *v106;  // ecx
    unsigned int v107;  // eax
    st_4e20c0_5 *v108;  // edi
    unsigned int v109;  // eax
    unsigned int *iter;  // edi
    unsigned int *l;  // esi
    unsigned int v112;  // ecx
    unsigned int v113;  // eax
    unsigned int v69;  // esi
    unsigned int v114;  // eax
    unsigned int v115;  // eax
    unsigned int v116;  // eax
    unsigned int *iter1;  // edi
    unsigned int *m;  // esi
    unsigned int v119;  // ecx
    float *v120;  // edx
    unsigned int v121;  // eax
    unsigned int k;  // eax
    int v123;  // edi
    unsigned int v70;  // esi
    int v124;  // eax
    unsigned int v125;  // edi
    int v126;  // edi
    unsigned int v127;  // eax
    float *v71;  // eax
    float *v72;  // eax
    unsigned int v73;  // eax
    unsigned int v0;  // [bp-0x1224]
    unsigned int v1;  // [bp-0x1214]
    unsigned int v2;  // [bp-0x1210]
    unsigned int v3;  // [bp-0x120c]
    char *v4;  // [bp-0x1208]
    unsigned int v5;  // [bp-0x1204]
    unsigned int v6;  // [bp-0x1200]
    char *v7;  // [bp-0x11fc]
    char *v8;  // [bp-0x11f8]
    char *v9;  // [bp-0x11f4]
    float v10;  // [bp-0x11f0]
    float v11;  // [bp-0x11ec]
    unsigned int iter2;  // [bp-0x11e8]
    int v13;  // [bp-0x11e4]
    int node;  // [bp-0x11e0]
    int i;  // [bp-0x11dc]
    unsigned int v16;  // [bp-0x11d8]
    unsigned int v17;  // [bp-0x11d4]
    st_4e20c0_5 *v18;  // [bp-0x11d0]
    int v19;  // [bp-0x11cc]
    int v20;  // [bp-0x11c8]
    char v21;  // [bp-0x11c4], Other Possible Types: unsigned int
    char v22;  // [bp-0x11c0], Other Possible Types: unsigned int
    float v23;  // [bp-0x11bc]
    float v24;  // [bp-0x11b8]
    float v25;  // [bp-0x11b4]
    char v26;  // [bp-0x11b0]
    float v27;  // [bp-0x11ac]
    float v28;  // [bp-0x11a4]
    float v29;  // [bp-0x119c]
    float v30;  // [bp-0x1198]
    float v31;  // [bp-0x1194]
    char v32;  // [bp-0x1184]
    float v33;  // [bp-0x1184]
    float v34;  // [bp-0x1180]
    uint96_t v35;  // [bp-0x117c], Other Possible Types: char
    float v36;  // [bp-0x117c]
    float v37;  // [bp-0x1178]
    float v38;  // [bp-0x1174]
    float v39;  // [bp-0x1170]
    float v40;  // [bp-0x116c]
    unsigned int v41;  // [bp-0x1168]
    float v42;  // [bp-0x1168]
    unsigned int v43;  // [bp-0x1164]
    float v44;  // [bp-0x1164]
    float v45;  // [bp-0x1160]
    float v46;  // [bp-0x115c]
    float v47;  // [bp-0x1158]
    float v48;  // [bp-0x1154]
    st_4e20c0_4 *v49;  // [bp-0x114c]
    char v50;  // [bp-0x113c]
    float v51;  // [bp-0x112c]
    unsigned int v52;  // [bp-0x1128]
    unsigned int v53;  // [bp-0x1124]
    float v54;  // [bp-0x1120]
    int v55;  // [bp-0x10ec]
    int v56;  // [bp-0x10ec]
    int v57;  // [bp-0x10ec]
    unsigned short v58;  // [bp-0x10e8]
    unsigned short v59;  // [bp-0x10e6]
    float v60;  // [bp-0x10e4]
    float v61;  // [bp-0x10e0]
    float v62;  // [bp-0x10dc]
    char v63;  // [bp-0x1044]

    v0 = v64;
    v66 = a0;
    v66->field_c = _INSERT(0, 0, 0) | 0xffff0000;
    v66->field_10 = &SUB_Remove__11CBaseEntity;
    *(float *)&v66->field_0[260] = gpGlobals->field_0;
    v19 = calloc@GLIBC_2.0(24, WorldGraph+24 * 128);
    if (!v19)
        return g_engfuncs.pfnAlertMessage(2, "**Could not malloc TempPool!\n");
    g_engfuncs.pfnGetGameDir(&v63);
    strcat@GLIBC_2.0(&v63, "/maps");
    mkdir@GLIBC_2.0(&v63, 0x1ff);
    strcat@GLIBC_2.0(&v63, "/graphs");
    mkdir@GLIBC_2.0(&v63, 0x1ff);
    strcat@GLIBC_2.0(&v63, "/");
    strcat@GLIBC_2.0(&v63, gpGlobals->field_c + gpGlobals->field_98);
    strcat@GLIBC_2.0(&v63, ".nrp");
    v20 = fopen@GLIBC_2.1(&v63, "w+");
    if (!v20)
    {
        v67 = g_engfuncs.pfnAlertMessage(2, "Couldn't create %s!\n", &v63);
        return free@GLIBC_2.0(v19);
    }
    fprintf@GLIBC_2.0(v20, "Node Graph Report for map:  %s.bsp\n", gpGlobals->field_c + gpGlobals->field_98);
    fprintf@GLIBC_2.0(v20, "%d Total Nodes\n\n", WorldGraph+24);
    i = 0;
    if (i < WorldGraph+24)
    {
        do
        {
            v68 = i * 88;
            *(unsigned int *)((char *)WorldGraph+12 + v68 + 32) = 0;
            *(unsigned int *)((char *)WorldGraph+12 + v68 + 36) = 0;
            memset@GLIBC_2.0(v68 + (char *)WorldGraph+12 + 40, 0, 32);
            fprintf@GLIBC_2.0(v20, "Node#         %4d\n", i);
            v59 = __fnstcw();
            v58 = v59 | 0xc00;
            v57 = (int)*(float *)((char *)WorldGraph+12 + v68 + 8);
            v59 = __fnstcw();
            v58 = v59 | 0xc00;
            v56 = (int)*(float *)((char *)WorldGraph+12 + v68 + 4);
            v59 = __fnstcw();
            v58 = v59 | 0xc00;
            v55 = (int)*(float *)((char *)WorldGraph+12 + v68);
            fprintf@GLIBC_2.0(v20, "Location      %4d,%4d,%4d\n", v55, v56, v57);
            fprintf@GLIBC_2.0(v20, "HintType:     %4d\n", *(short *)((char *)WorldGraph+12 + v68 + 80));
            fprintf@GLIBC_2.0(v20, "HintActivity: %4d\n", *(short *)((char *)WorldGraph+12 + v68 + 82));
            fprintf@GLIBC_2.0(v20, "HintYaw:      %4f\n", (unsigned int)(*(float *)((char *)WorldGraph+12 + v68 + 84) >> 0));
            fprintf@GLIBC_2.0(v20, "-------------------------------------------------------------------------------\n");
            i += 1;
        } while (i < WorldGraph+24);
    }
    fprintf@GLIBC_2.0(v20, "\n\n");
    i = 0;
    if (i < WorldGraph+24)
    {
        v9 = &v35;
        do
        {
            v69 = i * 88;
            if (!(*((char *)WorldGraph+12 + v69 + 28) & 2))
            {
                if (UTIL_PointContents((char *)WorldGraph+12 + v69) == 0xfffffffd)
                {
                    *((char *)WorldGraph+12 + v69 + 28) = *((char *)WorldGraph+12 + v69 + 28) | 4;
                }
                else
                {
                    v70 = i * 88;
                    *((char *)WorldGraph+12 + v70 + 28) = *((char *)WorldGraph+12 + v70 + 28) | 1;
                    *(unsigned int *)&v35 = 0;
                    *(unsigned int *)((char *)&v35 + 4) = 0;
                    v38 = 384.0f;
                    v71 = v70 + (char *)WorldGraph+12;
                    v46 = *v71 - *(unsigned int *)&v35;
                    v47 = v71[1] - *(unsigned int *)((void*)&v35 + 4);
                    v48 = v71[2] - *(unsigned int *)((void*)&v35 + 8);
                    UTIL_TraceLine(v70 + (char *)WorldGraph+12, &v46, 1, g_pBodyQueueHead, &v50);
                    v23 = 0;
                    v24 = 0;
                    v25 = 384.0f;
                    v72 = v70 + (char *)WorldGraph+12;
                    v29 = *v72 - (unsigned int)v23;
                    v30 = v72[1] - v24;
                    v31 = v72[2] - v25;
                    UTIL_TraceLine(v70 + (char *)WorldGraph+12, &v29, 0, g_pBodyQueueHead, v9);
                    if (v40 < v51 && v49 && v49->field_227 & 2)
                    {
                        v52 = v41;
                        v53 = v43;
                        v54 = v45;
                    }
                    v73 = i * 88;
                    v74 = v54 + 8.0;
                    *(float *)((char *)WorldGraph+12 + v73 + 8) = (float)v74;
                    *(float *)((char *)WorldGraph+12 + v73 + 20) = (float)v74;
                }
            }
        } while ((i += 1, i < WorldGraph+24));
    }
    iter2 = CGraph::LinkVisibleNodes(&WorldGraph, v19, v20, &v22);
    if (!iter2)
    {
        v76 = a0;
        v76->field_c = _INSERT(g_engfuncs.pfnAlertMessage(2, "**ConnectVisibleNodes FAILED!\n"), 0, 0) | 0xffff0000;
        v76->field_10 = &ShowBadNode__9CTestHull;
        v77 = v76->field_0;
        v78 = v22 * 88;
        *(int *)&v77[8] = *(int *)((char *)WorldGraph+12 + v78);
        *(int *)&v77[12] = *(int *)((char *)WorldGraph+12 + v78 + 4);
        v79 = *(int *)((char *)WorldGraph+12 + v78 + 8);
        *(unsigned int *)&v77[16] = v79;
        if (v19)
            v79 = free@GLIBC_2.0(v19);
        if (!v20)
            return v79;
        return fclose@GLIBC_2.1(v20);
    }
    else
    {
        fprintf@GLIBC_2.0(v20, "----------------------------------------------------------------------------\n");
        fprintf@GLIBC_2.0(v20, "Walk Rejection:\n");
        i = 0;
        if (i < WorldGraph+24)
        {
            v4 = &v32;
            do
            {
                v18 = &WorldGraph+12[22 * i];
                v80 = v20;
                fprintf@GLIBC_2.0(v80, "-------------------------------------------------------------------------------\n");
                fprintf@GLIBC_2.0(v80, "Node %4d:\n\n", i);
                node = 0;
                if (node < v18->field_20)
                {
                    v8 = &v23;
                    v7 = &v26;
                    do
                    {
                        *(unsigned int *)(v19 + (node + v18->field_24) * 24 + 16) = 15;
                        v17 = 0;
                        v13 = 0;
                        do
                        {
                            if (v17 && (unsigned int)(v13 - 1) <= 1)
                                continue;
                            if ((unsigned int)v13 <= 3)
                                goto *((void *)((unsigned int *)((char *)&_GLOBAL_OFFSET_TABLE_ - *(int *)((char *)&(&_GLOBAL_OFFSET_TABLE_)[v13] - 1249836))));
                            v81 = a0;
                            UTIL_SetOrigin(v81->field_0, v18);
                            if (!((char)v81->field_0[421] & 2))
                                g_engfuncs.pfnAlertMessage(2, "OFFGROUND!\n");
                            if (node < 0)
                            {
                                v113 = g_engfuncs.pfnAlertMessage(2, "**** j = %d ****\n", node);
                                if (v19)
                                    v113 = free@GLIBC_2.0(v19);
                                if (!v20)
                                    return v113;
                                return fclose@GLIBC_2.1(v20);
                            }
                            v82 = &WorldGraph+12[22 * *(int *)(v19 + (node + v18->field_24) * 24 + 4)];
                            v60 = *v82;
                            v61 = v82[1];
                            v62 = v82[2];
                            if (v13 <= 2)
                            {
                                v83 = a0->field_0;
                                v6 = (int)v83[420];
                                v5 = 1;
                                if (v18->field_1c & 4)
                                {
                                    *(char *)&v83[420] = (char)v83[420] | 2;
                                    v5 = 0;
                                }
                                v84 = a0;
                                v85 = v84->field_0 + 8;
                                v23 = *v82 - (float)v84->field_0[8];
                                v24 = v82[1] - (float)v85[4];
                                v25 = v82[2] - (float)v85[8];
                                UTIL_VecToYaw(v8);
                                v11 = v25;
                                v86 = v84->field_0 + 8;
                                v87 = v60 - (float)v84->field_0[8];
                                v23 = v87;
                                v88 = v61 - (float)v86[4];
                                v24 = v88;
                                v25 = v62 - (float)v86[8];
                                v89 = v87 * v87 + v88 * v88;
                                v90 = sqrt(v89);
                                if (isnan(v90))
                                    sqrt(*(unsigned int *)&v89);
                                else
                                    v89 = v90;
                                v10 = (float)v89;
                                v91 = 0;
                                v92 = 0;
                                if (0.0 < v10)
                                {
                                    do
                                    {
                                        v93 = 0;
                                        v55 = v92;
                                        v94 = (double)v55;
                                        if ((isunordered(v10 - 1.0, v94 + 16.0) ? 0x44 : v10 - 1.0 == v94 + 16.0 ? 63 : v10 - 1.0 < v94 + 16.0 ? 0 : 0xff) < 64)
                                            v93 = __double_as_longlong((double)v10 - v94 - 1.0);
                                        if (!g_engfuncs.pfnWalkMove((int)a0->field_0[520], v11, v93, v5))
                                            goto LABEL_4e2d38;
                                    } while ((v92 += 16, v55 = v92, (double)v55 < v10));
                                }
                                v96 = a0->field_0 + 8;
                                v97 = (float)a0->field_0[8] - v60;
                                v23 = v97;
                                v98 = (float)v96[4] - v61;
                                v24 = v98;
                                v99 = (float)v96[8] - v62;
                                v25 = v99;
                                v100 = v97 * v97 + v98 * v98 + v99 * v99;
                                v101 = sqrt(v100);
                                if (isnan(v101))
                                    sqrt(*(unsigned int *)&v100);
                                else
                                    v100 = v101;
                                v28 = (float)v100;
                                if (v28 > 64.0f)
                                    v91 = 1;
                                if (!v91)
                                    goto LABEL_4e2e1a;
LABEL_4e2d38:
                                if (v13 == 1)
                                {
                                    fprintf@GLIBC_2.0(v20, "NODE_HUMAN_HULL step %f\n", v92);
                                    v104 = node + v18->field_24;
                                    *(char *)(v19 + v104 * 24 + 16) = *(char *)(v19 + v104 * 24 + 16) & 249;
                                    v17 = 1;
                                }
                                else if (v13 <= 1)
                                {
                                    if (v13)
                                        goto LABEL_4e2e1a;
                                    fprintf@GLIBC_2.0(v20, "NODE_SMALL_HULL step %f\n", v92);
                                    v102 = node + v18->field_24;
                                    *(char *)(v19 + v102 * 24 + 16) = *(char *)(v19 + v102 * 24 + 16) & 248;
                                    v17 = 1;
                                }
                                else
                                {
                                    if (v13 != 2)
                                        goto LABEL_4e2e1a;
                                    fprintf@GLIBC_2.0(v20, "NODE_LARGE_HULL step %f\n", v92);
                                    v103 = node + v18->field_24;
                                    *(char *)(v19 + v103 * 24 + 16) = *(char *)(v19 + v103 * 24 + 16) & 251;
                                }
LABEL_4e2e1a:
                                *(unsigned int *)&a0->field_0[420] = v6;
                                continue;
                            }
                            else
                            {
                                v37 = 0;
                                v38 = 0;
                                v39 = 32.0f;
                                v105 = v82 + 3;
                                v33 = v82[3] + v37;
                                v34 = *(float *)&v105[1] + v38;
                                v36 = (float)(*(float *)&v105[2] + 32.0);
                                v45 = 0;
                                v46 = 0;
                                v47 = 32.0f;
                                v106 = v18;
                                v40 = v106->field_0 + v45;
                                v42 = v106->field_4 + v46;
                                v44 = (float)(32.0 + v106->field_8);
                                UTIL_TraceHull(&v40, v4, 1, 2, (int)a0->field_0[520], v8);
                                if (*(unsigned int *)&v24 || 1.0 > v27)
                                {
                                    v107 = node + v18->field_24;
                                    *(char *)(v19 + v107 * 24 + 16) = *(char *)(v19 + v107 * 24 + 16) & 247;
                                }
                            }
                        } while ((v13 += 1, v13 <= 3));
                        v108 = v18;
                        v109 = (node + v108->field_24) * 24;
                        if (!*(int *)(v19 + v109 + 16))
                        {
                            fprintf@GLIBC_2.0(v20, "Rejected Node %3d - Unreachable by ", *(int *)(v19 + v109 + 4));
                            iter = v19 + (node + v108->field_24) * 24;
                            l = v19 + (v108->field_24 + v108->field_20) * 24 - 24;
                            for (v112 = 6; v112; l += 1)
                            {
                                v112 -= 1;
                                *iter = *l;
                                iter += 1;
                            }
                            fprintf@GLIBC_2.0(v20, "Any Hull\n");
                            v18->field_20 = v18->field_20 - 1;
                            iter2 -= 1;
                            node -= 1;
                        }
                        node += 1;
                    } while (node < v18->field_20);
                }
            } while ((i += 1, i < WorldGraph+24));
        }
        fprintf@GLIBC_2.0(v20, "-------------------------------------------------------------------------------\n\n\n");
        iter2 -= CGraph::RejectInlineLinks(&WorldGraph, v19, v20);
        WorldGraph+16 = calloc@GLIBC_2.0(24, iter2);
        if (!WorldGraph+16)
        {
            v114 = g_engfuncs.pfnAlertMessage(2, "Couldn't malloc LinkPool!\n");
            if (v19)
                v114 = free@GLIBC_2.0(v19);
            if (!v20)
                return v114;
            return fclose@GLIBC_2.1(v20);
        }
        else
        {
            WorldGraph+28 = iter2;
            v3 = 0;
            for (i = 0; i < WorldGraph+24; i += 1)
            {
                v115 = i * 4;
                v116 = (i + (v115 + i) * 2) * 8;
                v2 = *(int *)((char *)WorldGraph+12 + v116 + 36);
                *(unsigned int *)((char *)WorldGraph+12 + v116 + 36) = v3;
                node = 0;
                if (node < *(int *)((char *)WorldGraph+12 + v116 + 32))
                {
                    v1 = (i + (i + v115) * 2) * 8;
                    do
                    {
                        iter1 = v3 * 24 + WorldGraph+16;
                        m = v19 + (v2 + node) * 24;
                        for (v119 = 6; v119; m += 1)
                        {
                            v119 -= 1;
                            *iter1 = *m;
                            iter1 += 1;
                        }
                        v3 += 1;
                        node += 1;
                    } while (node < *(int *)((char *)WorldGraph+12 + v1 + 32));
                }
            }
            CGraph::SortNodes(&WorldGraph);
            CGraph::BuildLinkLookups(&WorldGraph);
            v16 = 1;
            fprintf@GLIBC_2.0(v20, "\n\n-------------------------------------------------------------------------------\n");
            fprintf@GLIBC_2.0(v20, "Link Pairings:\n");
            i = 0;
            if (i < WorldGraph+24)
            {
                do
                {
                    node = 0;
                    v120 = WorldGraph+12;
                    k = i * 5;
                    for (v123 = i; node < (int)*(unsigned int *)&v120[8 + 4 * k + 2 * v123]; k = i + i * 4)
                    {
                        v124 = i;
                        v125 = (i + (v124 + v121) * 2) * 8;
                        CGraph::HashSearch(&WorldGraph, *(int *)(WorldGraph+16 + (node + *(int *)(v125 + (char *)WorldGraph+12 + 36)) * 24 + 4), v124, &v21);
                        if ((int)v21 < 0)
                        {
                            v16 = 0;
                            fprintf@GLIBC_2.0(v20, "WARNING: Node %3d does not connect back to Node %3d\n", *(int *)(WorldGraph+16 + (node + *(int *)(v125 + (char *)WorldGraph+12 + 36)) * 24 + 4), i);
                        }
                        node += 1;
                        v120 = WorldGraph+12;
                    }
                    i += 1;
                } while (i < WorldGraph+24);
            }
            if (v16)
                fprintf@GLIBC_2.0(v20, "\nAll Connections are Paired!\n");
            v126 = v20;
            fprintf@GLIBC_2.0(v126, "-------------------------------------------------------------------------------\n");
            fprintf@GLIBC_2.0(v126, "\n\n-------------------------------------------------------------------------------\n");
            fprintf@GLIBC_2.0(v126, "Total Number of Connections in Pool: %d\n", iter2);
            fprintf@GLIBC_2.0(v126, "-------------------------------------------------------------------------------\n");
            fprintf@GLIBC_2.0(v126, "Connection Pool: %d bytes\n", iter2 * 24);
            fprintf@GLIBC_2.0(v126, "-------------------------------------------------------------------------------\n");
            g_engfuncs.pfnAlertMessage(2, "%d Nodes, %d Connections\n", WorldGraph+24, iter2);
            CGraph::BuildRegionTables(&WorldGraph);
            i = 0;
            if (i < WorldGraph+24)
            {
                do
                {
                    v127 = i * 88;
                    if (*((char *)WorldGraph+12 + v127 + 28) & 1)
                        *(float *)((char *)WorldGraph+12 + v127 + 8) = (float)(*(float *)((char *)WorldGraph+12 + v127 + 8) - 8.0);
                } while ((i += 1, i < WorldGraph+24));
            }
            if (v19)
                free@GLIBC_2.0(v19);
            if (v20)
                fclose@GLIBC_2.1(v20);
            WorldGraph = 1;
            WorldGraph+4 = 1;
            WorldGraph+8 = 0;
            CGraph::ComputeStaticRoutingTables(&WorldGraph);
            CGraph::FSaveGraph(&WorldGraph, gpGlobals->field_c + gpGlobals->field_98);
            return g_engfuncs.pfnAlertMessage(1, "Done.\n");
        }
    }
}

