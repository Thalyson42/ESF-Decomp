// WaypointRouteInit__Fv @0x18b2d0 size=2378
typedef struct st_58b2d0_2 {
    short field_0;
    char padding_2[6];
    struct st_58b2d0_2 *field_8;
} st_58b2d0_2;

typedef struct st_58b2d0_0 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[136];
    unsigned int field_98;
} st_58b2d0_0;

typedef struct st_58b2d0_1 {
    unsigned int field_0;
} st_58b2d0_1;

extern int shortest_path[4];
extern int from_to[4];
extern st_58b2d0_1 *g_engfuncs.pfnAlertMessage;
extern st_58b2d0_0 *gpGlobals;
extern void waypoints;
extern unsigned int waypoints+4[4];
extern unsigned int num_waypoints;
extern unsigned int paths[4];
extern unsigned int route_num_waypoints;

unsigned int * WaypointRouteInit__Fv(void)
{
    unsigned int v32;  // esi
    unsigned int v33;  // eax
    unsigned int idx;  // edx
    unsigned int idx1;  // esi
    unsigned int j;  // esi
    unsigned int *v45;  // eax
    unsigned int v46;  // eax
    st_58b2d0_2 *iter;  // edi
    unsigned int v48;  // eax
    unsigned int v49;  // esi
    unsigned int v50;  // eax
    float *v51;  // edx
    unsigned int *v34;  // eax
    float *v52;  // eax
    float v53;  // 112
    float v54;  // 112
    float v55;  // 112
    double v56;  // mm7
    double v57;  // mm6
    double v58;  // mm7
    unsigned int v59;  // esi
    unsigned int v60;  // ecx
    unsigned int idx2;  // eax
    unsigned int v35;  // edx
    unsigned int v62;  // eax
    unsigned int v36;  // edx
    unsigned int index;  // edi
    unsigned int v38;  // edi
    unsigned int v39;  // edi
    unsigned int v40;  // eax
    unsigned int v41;  // edx
    unsigned int v0;  // [bp-0x37c]
    unsigned int v1;  // [bp-0x378]
    char *v2;  // [bp-0x354]
    int *v3;  // [bp-0x350]
    int *v4;  // [bp-0x34c]
    int *v5;  // [bp-0x348]
    char *v6;  // [bp-0x344]
    unsigned int *v7;  // [bp-0x340]
    int v8;  // [bp-0x33c]
    int v9;  // [bp-0x338]
    unsigned short *v10;  // [bp-0x334]
    int v11;  // [bp-0x330]
    unsigned int node;  // [bp-0x32c]
    unsigned int v13;  // [bp-0x328]
    unsigned int v14;  // [bp-0x324]
    unsigned short v15;  // [bp-0x320]
    char v16;  // [bp-0x31f]
    char v17;  // [bp-0x31e]
    char v18;  // [bp-0x31d]
    int v19;  // [bp-0x31c]
    unsigned short v20;  // [bp-0x318]
    unsigned short v21;  // [bp-0x316]
    float v22;  // [bp-0x2f8]
    float v23;  // [bp-0x2e4]
    float v24;  // [bp-0x2e0]
    float v25;  // [bp-0x2dc]
    char v26;  // [bp-0x2c4]
    char v27;  // [bp-0x2a4]
    char v28;  // [bp-0x264]
    char v29;  // [bp-0x164]
    char v30;  // [bp-0x64]

    if (!num_waypoints)
        return &num_waypoints;
    route_num_waypoints = num_waypoints;
    strcpy@GLIBC_2.0(&v27, gpGlobals->field_c + gpGlobals->field_98);
    strcat@GLIBC_2.0(&v27, ".ESF_wpt");
    BuildBotFileName(&v29, "waypoints", &v27);
    v15 = 1;
    v17 = 0;
    v18 = 0;
    v32 = 0;
    if (0 < route_num_waypoints)
    {
        do
        {
            v33 = v32 * 16;
            if ((&waypoints)[v33] & 4)
            {
                if ((*(int *)&(&waypoints)[v33] & 3) == 1)
                {
                    v16 = 0;
                    *((char *)&v15 + 1) = v16 | 1;
                }
                if ((*(int *)&(&waypoints)[16 * v32] & 3) == 2)
                {
                    v17 = 0;
                    v17 |= 1;
                }
                if ((*(int *)&(&waypoints)[16 * v32] & 3) == 3)
                {
                    v18 = 0;
                    v18 |= 1;
                }
            }
        } while ((v32 += 1, v32 < route_num_waypoints));
    }
    v13 = route_num_waypoints * route_num_waypoints;
    v14 = 0;
    v6 = &v30;
    do
    {
        v34 = v14;
        if (!*(char *)(&v15 + v34))
            continue;
        v7 = (char *)v34 + 1;
        sprintf@GLIBC_2.0(&v26, ".ESF_wp%d", v7);
        strcpy@GLIBC_2.0(&v27, gpGlobals->field_c + gpGlobals->field_98);
        strcat@GLIBC_2.0(&v27, &v26);
        BuildBotFileName(&v28, "waypoints", &v27);
        v34 = IsValidFile(&v28);
        if ((char)v34 && (v34 = FileIsOlder(&v29, &v28), (char)v34))
        {
            sprintf@GLIBC_2.0(v6, "loading ESF bot waypoint paths for team %d\n", v7);
            g_engfuncs.pfnAlertMessage(1, v6);
            v35 = malloc@GLIBC_2.0(v13 * 2);
            shortest_path[v14] = v35;
            if (!v35)
                g_engfuncs.pfnAlertMessage(4, "ESF_bot - Error allocating memory for shortest path!");
            v36 = malloc@GLIBC_2.0(v13 * 2);
            from_to[v14] = v36;
            if (!v36)
                g_engfuncs.pfnAlertMessage(4, "ESF_bot - Error allocating memory for from to matrix!");
            v8 = fopen@GLIBC_2.1(&v28, "rb");
            if (v8)
            {
                v5 = &shortest_path[0];
                index = v14 * 4;
                if (fread@GLIBC_2.0(*(int *)(index + (char *)&shortest_path[0]), 2, v13, v8) != v13)
                {
                    g_engfuncs.pfnAlertMessage(1, "error reading enough path items, recalculating...\n");
                    free@GLIBC_2.0(*(int *)(index + (char *)v5));
                    *(unsigned int *)(index + (char *)v5) = 0;
                }
                else
                {
                    v4 = &from_to[0];
                    v38 = v14 * 4;
                    if (fread@GLIBC_2.0(*(int *)(v38 + (char *)&from_to[0]), 2, v13, v8) == v13)
                        goto LABEL_58b711;
                    g_engfuncs.pfnAlertMessage(1, "error reading enough path items, recalculating...\n");
                    free@GLIBC_2.0(*(int *)(v38 + (char *)&shortest_path[0]));
                    *(unsigned int *)(v38 + (char *)&shortest_path[0]) = 0;
                    free@GLIBC_2.0(*(int *)(v38 + (char *)v4));
                    *(unsigned int *)(v38 + (char *)v4) = 0;
                    goto LABEL_58b70e;
                }
            }
            else
            {
                g_engfuncs.pfnAlertMessage(1, "ESF_bot - Error reading waypoint paths!\n");
                index = v14 * 4;
                free@GLIBC_2.0(*(int *)(index + (char *)&shortest_path[0]));
                *(unsigned int *)(index + (char *)&shortest_path[0]) = 0;
            }
            free@GLIBC_2.0(*(int *)(index + (char *)&from_to[0]));
            *(unsigned int *)(index + (char *)&from_to[0]) = 0;
LABEL_58b70e:
LABEL_58b711:
            v34 = fclose@GLIBC_2.1(v8);
            goto LABEL_58b723;
        }
        else
        {
LABEL_58b723:
            v3 = &shortest_path[0];
            v39 = v14 * 4;
            if (*(int *)(v39 + (char *)&shortest_path[0]))
                continue;
            sprintf@GLIBC_2.0(v6, "calculating ESF bot waypoint paths for team %d...\n", v14 + 1);
            g_engfuncs.pfnAlertMessage(1, v6);
            v40 = malloc@GLIBC_2.0(v13 * 2);
            *(unsigned int *)(v39 + (char *)v3) = v40;
            if (!v40)
                g_engfuncs.pfnAlertMessage(4, "ESF_bot - Error allocating memory for shortest path!");
            v41 = malloc@GLIBC_2.0(v13 * 2);
            from_to[v14] = v41;
            if (!v41)
                g_engfuncs.pfnAlertMessage(4, "ESF_bot - Error allocating memory for from to matrix!");
            idx = v14 * 4;
            v10 = *(int *)(idx + (char *)&shortest_path[0]);
            v9 = *(int *)(idx + (char *)&from_to[0]);
            idx1 = 0;
            if (0 < v13)
            {
                do
                {
                    v10[idx1] = 0xffff;
                    idx1 += 1;
                } while (idx1 < v13);
            }
            j = 0;
            v45 = &route_num_waypoints;
            if (0 < route_num_waypoints)
            {
                do
                {
                    v10[j + *v45 * j] = 0;
                    j += 1;
                } while (j < *v45);
            }
            node = 0;
            while (node < route_num_waypoints)
            {
                v46 = node * 4;
                if (*(int *)(v46 + (char *)&paths[0]))
                {
                    iter = *(int *)(v46 + (char *)&paths[0]);
                    if (iter)
                    {
                        v2 = &v30;
                        while (1)
                        {
                            v11 = 0;
                            do
                            {
                                v48 = v11 * 2;
                                if (*(short *)(v48 + (char *)iter) != 0xffff)
                                {
                                    v49 = *(short *)(v48 + (char *)iter);
                                    v50 = v49 * 16;
                                    if (!((&waypoints)[v50] & 4) || (*(int *)&(&waypoints)[v50] & 3) == v14)
                                    {
                                        v51 = &waypoints+4[4 * node];
                                        v52 = &waypoints+4[4 * v49];
                                        v53 = *v51 - *v52;
                                        v23 = v53;
                                        v54 = v51[1] - v52[1];
                                        v24 = v54;
                                        v55 = v51[2] - v52[2];
                                        v25 = v55;
                                        v56 = v53 * v53 + v54 * v54 + v55 * v55;
                                        v57 = sqrt(v56);
                                        if (isnan(v57))
                                            sqrt(*(unsigned int *)&v56);
                                        else
                                            v56 = v57;
                                        v22 = (float)v56;
                                        v58 = v22;
                                        if (65534.0 < v58)
                                            v58 = 65534.0;
                                        if (400.0 < v58)
                                        {
                                            v1 = v49;
                                            v0 = node;
                                            sprintf@GLIBC_2.0(v2, "Waypoint path distance > %4.1f at from %d to %d\n", (unsigned int)(400.0 >> 0));
                                            g_engfuncs.pfnAlertMessage(1, v2);
                                        }
                                        else
                                        {
                                            v21 = __fnstcw();
                                            v20 = v21 | 0xc00;
                                            v19 = (int)v58;
                                            v10[v49 + route_num_waypoints * node] = v19;
                                        }
                                    }
                                }
                            } while ((v11 += 1, v11 <= 3));
                            iter = iter->field_8;
                            if (!iter)
                                break;
                        }
                        node += 1;
                    }
                    else
                    {
                        node += 1;
                    }
                }
                else
                {
                    node += 1;
                }
            }
            WaypointFloyds(v10, v9);
            v59 = 0;
            if (0 < route_num_waypoints)
            {
                do
                {
                    v60 = 0;
                    if (0 < route_num_waypoints)
                    {
                        do
                        {
                            idx2 = route_num_waypoints * v59 + v60;
                            if (v10[idx2] == 0xffff)
                                *(unsigned short *)(v9 + idx2 * 2) = 0xffff;
                        } while ((v60 += 1, v60 < route_num_waypoints));
                    }
                } while ((v59 += 1, v59 < route_num_waypoints));
            }
            v8 = fopen@GLIBC_2.1(&v28, "wb");
            if (v8)
            {
                if (fwrite@GLIBC_2.0(shortest_path[v14], 2, v13, v8) != v13)
                {
                    fclose@GLIBC_2.1(v8);
                    remove@GLIBC_2.0(&v28);
                    goto LABEL_58bbbf;
                }
                v62 = fwrite@GLIBC_2.0(from_to[v14], 2, v13, v8);
                fclose@GLIBC_2.1(v8);
                if (v62 == v13)
                    goto LABEL_58bbbf;
                remove@GLIBC_2.0(&v28);
            }
            else
            {
                g_engfuncs.pfnAlertMessage(1, "ESF_bot - Error writing waypoint paths!\n");
            }
LABEL_58bbbf:
            sprintf@GLIBC_2.0(v6, "ESF bot waypoint path calculations for team %d complete!\n", v14 + 1);
            v34 = g_engfuncs.pfnAlertMessage(1, v6);
        }
    } while ((v14 += 1, (int)v14 <= 3));
    return v34;
}

