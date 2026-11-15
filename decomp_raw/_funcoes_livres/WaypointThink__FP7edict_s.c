// WaypointThink__FP7edict_s @0x18aa50 size=1755
typedef struct st_58aa50_3 {
    char padding_0[124];
    struct st_58aa50_4 *field_7c;
} st_58aa50_3;

typedef struct st_58aa50_4 {
    struct st_58aa50_2 *field_0;
} st_58aa50_4;

typedef struct st_58aa50_2 {
    char padding_0[520];
    int field_208;
} st_58aa50_2;

typedef struct st_58aa50_5 {
    char padding_0[8];
    struct st_58aa50_5 *field_8;
} st_58aa50_5;

typedef struct st_58aa50_6 {
    struct st_58aa50_5 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_58aa50_6;

typedef struct st_58aa50_0 {
    float field_0;
} st_58aa50_0;

typedef struct st_58aa50_1 {
    unsigned int field_0;
} st_58aa50_1;

extern char g_waypoint_on;
extern char g_auto_waypoint;
extern char g_path_waypoint;
extern unsigned int f_path_time;
extern st_58aa50_1 *g_6168d4;
extern st_58aa50_1 *g_61698c;
extern st_58aa50_0 *gpGlobals;
extern st_58aa50_3 *g_62468c;
extern void waypoints;
extern char g_626821[4];
extern unsigned int g_626824[4];
extern float last_waypoint;
extern float g_62a824;
extern float g_62a828;
extern int num_waypoints;
extern st_58aa50_6 paths;
extern float wp_display_time[4];

double WaypointThink__FP7edict_s(float idx)
{
    unsigned int *v22;  // edx
    float v23;  // 112
    float v32;  // 112
    float v33;  // 112
    double v34;  // mm7
    double v35;  // mm6
    double v36;  // mm7
    unsigned int v37;  // edx
    unsigned int idx1;  // eax
    unsigned int *v39;  // edx
    float v40;  // 112
    float v41;  // 112
    float v24;  // 112
    float v42;  // 112
    double v43;  // mm7
    double v44;  // mm6
    unsigned int v45;  // edx
    unsigned int idx2;  // eax
    double v47;  // mm7
    unsigned int v48;  // edx
    unsigned int v49;  // eax
    float *v50;  // edx
    st_58aa50_3 *v51;  // eax
    float v25;  // 112
    st_58aa50_2 **v52;  // eax
    double v53;  // mm7
    st_58aa50_5 *node;  // edi
    short *v55;  // ecx
    float *v56;  // eax
    float *v57;  // eax
    st_58aa50_3 *v58;  // eax
    st_58aa50_2 **v59;  // eax
    double v26;  // mm7
    double v27;  // mm6
    unsigned int v28;  // edx
    unsigned int *v29;  // edi
    unsigned int index;  // esi
    float v31;  // 112
    int v0;  // [bp-0xa0]
    int iter;  // [bp-0x9c]
    double v2;  // [bp-0x98], Other Possible Types: float
    unsigned int v3;  // [bp-0x84], Other Possible Types: float
    unsigned int v4;  // [bp-0x80], Other Possible Types: float
    unsigned int v5;  // [bp-0x7c], Other Possible Types: float
    float v6;  // [bp-0x78]
    float v7;  // [bp-0x74]
    float v8;  // [bp-0x70]
    float v9;  // [bp-0x6c]
    float v10;  // [bp-0x68]
    float v11;  // [bp-0x64]
    float v12;  // [bp-0x60]
    float v13;  // [bp-0x5c]
    float v14;  // [bp-0x58]
    float v15;  // [bp-0x44]
    float v16;  // [bp-0x40]
    float v17;  // [bp-0x3c]
    float v18;  // [bp-0x24]
    float v19;  // [bp-0x20]
    float v20;  // [bp-0x1c]

    v0 = 0;
    if (g_auto_waypoint)
    {
        v22 = *(unsigned int *)&idx + 0x88;
        v23 = last_waypoint - *(float *)(*(unsigned int *)&idx + 0x88);
        v11 = v23;
        v24 = g_62a824 - *(float *)&v22[1];
        v12 = v24;
        v25 = g_62a828 - *(float *)&v22[2];
        v13 = v25;
        v26 = v23 * v23 + v24 * v24 + v25 * v25;
        v27 = sqrt(v26);
        if (isnan(v27))
            sub_487dc0(*(unsigned int *)&v26);
        else
            v26 = v27;
        v6 = (float)v26;
        if (v6 > 200.0f)
        {
            v2 = 9999.0f;
            iter = 0;
            while (iter < num_waypoints)
            {
                v28 = iter * 16;
                if (*(int *)&(&waypoints)[v28] < NULL)
                {
                    iter += 1;
                }
                else if (!(g_626821[v28] & 64))
                {
                    v29 = *(unsigned int *)&idx + 0x88;
                    *(float *)&v3 = *(float *)(*(unsigned int *)&idx + 0x88);
                    *(float *)&v4 = *(float *)&v29[1];
                    *(float *)&v5 = *(float *)&v29[2];
                    index = v28 + (char *)&g_626824[0];
                    v6 = *(float *)index;
                    v7 = *(float *)(index + 4);
                    v8 = *(float *)(index + 8);
                    if ((char)sub_48c5f0(&v3, &v6, idx))
                    {
                        v31 = *(float *)index - *(float *)(*(unsigned int *)&idx + 0x88);
                        v3 = v31;
                        v32 = *(float *)(index + 4) - *(float *)&v29[1];
                        v4 = v32;
                        v33 = *(float *)(index + 8) - *(float *)&v29[2];
                        v5 = v33;
                        v34 = v31 * v31 + v32 * v32 + v33 * v33;
                        v35 = sqrt(v34);
                        if (isnan(v35))
                            sub_487dc0(*(unsigned int *)&v34);
                        else
                            v34 = v35;
                        v9 = (float)v34;
                        if (v9 < v2)
                        {
                            v2 = v9;
                            iter += 1;
                        }
                        else
                        {
                            iter += 1;
                        }
                    }
                    else
                    {
                        iter += 1;
                    }
                }
                else
                {
                    iter += 1;
                }
            }
            if (v2 >= 200.0f)
                sub_48af70(idx);
        }
    }
    v36 = 9999.0;
    v2 = 9999.0f;
    if (!g_waypoint_on)
        return 9999.0;
    iter = 0;
    if (iter < num_waypoints)
    {
        do
        {
            v37 = iter * 16;
            if (*(int *)&(&waypoints)[v37] >= NULL)
            {
                idx1 = v37 + (char *)&g_626824[0];
                v39 = *(unsigned int *)&idx + 0x88;
                v40 = *(float *)idx1 - *(float *)(*(unsigned int *)&idx + 0x88);
                v3 = v40;
                v41 = *(float *)(idx1 + 4) - *(float *)&v39[1];
                v4 = v41;
                v42 = *(float *)(idx1 + 8) - *(float *)&v39[2];
                v5 = v42;
                v43 = v40 * v40 + v41 * v41 + v42 * v42;
                v44 = sqrt(v43);
                if (isnan(v44))
                    sub_487dc0(*(unsigned int *)&v43);
                else
                    v43 = v44;
                v9 = (float)v43;
                v36 = v9;
                if (v36 < 500.0)
                {
                    if (v36 < v2)
                    {
                        v0 = iter;
                        v2 = (float)v36;
                    }
                    v36 = 1.0 + wp_display_time[iter];
                    if (v36 < *(float *)gpGlobals)
                    {
                        v45 = iter * 16;
                        if ((&waypoints)[v45] & 8)
                        {
                            v6 = 0;
                            v7 = 0;
                            v8 = 17.0f;
                            idx2 = v45 + (char *)&g_626824[0];
                            v3 = *(float *)idx2 - v6;
                            v4 = *(float *)(idx2 + 4) - v7;
                            v5 = *(float *)(idx2 + 8) - v8;
                            v18 = v3;
                            v19 = v4;
                            v20 = v5;
                            v47 = 34.0;
                        }
                        else
                        {
                            v48 = iter * 16;
                            if (g_626821[v48] & 64)
                            {
                                v6 = 0;
                                v7 = 0;
                                v8 = 10.0f;
                                v49 = v48 + (char *)&g_626824[0];
                                v3 = *(float *)v49 + v6;
                                v4 = *(float *)(v49 + 4) + v7;
                                v5 = *(float *)(v49 + 8) + v8;
                                v18 = v3;
                                v19 = v4;
                                v20 = v5;
                                v47 = 14.0;
                            }
                            else
                            {
                                v6 = 0;
                                v7 = 0;
                                v8 = 34.0f;
                                v50 = &g_626824[4 * iter];
                                v3 = *v50 - v6;
                                v4 = v50[1] - v7;
                                v5 = v50[2] - v8;
                                v18 = v3;
                                v19 = v4;
                                v20 = v5;
                                v47 = 68.0;
                            }
                        }
                        v6 = 0;
                        v7 = 0;
                        v8 = (float)v47;
                        v3 = v18 + v6;
                        v4 = v19 + v7;
                        v5 = v20 + v8;
                        v15 = v3;
                        v16 = v4;
                        v17 = v5;
                        v3 = v18;
                        v4 = v19;
                        v5 = v20;
                        v6 = v15;
                        v7 = v16;
                        v8 = v17;
                        if (!g_61698c(&v3, &v6, 30, 0, 0, 0, 0xff, 250, 5) && !(v51 = g_62468c, !g_62468c && !(v51 = g_6168d4(0), v51)))
                            v52 = v51->field_7c;
                        else
                            v52 = NULL;
                        sub_48a5d0(*v52->field_208);
                        v36 = *(float *)gpGlobals;
                        wp_display_time[iter] = (float)v36;
                    }
                }
            }
        } while ((iter += 1, iter < num_waypoints));
    }
    if (!g_path_waypoint)
    {
        return v36;
    }
    else if (v2 > 50.0f)
    {
        return v2;
    }
    else if (*(float *)&f_path_time <= *(float *)gpGlobals)
    {
        v53 = 1.0 + *(float *)gpGlobals;
        *(float *)&f_path_time = (float)v53;
        node = (&paths.field_0)[v0];
        if (!(&paths.field_0)[v0])
            return v53;
        do
        {
            iter = 0;
            do
            {
                v55 = iter * 2;
                if (*(short *)(v55 + node) != -0x1)
                {
                    v56 = &g_626824[4 * v0];
                    v3 = *v56;
                    v4 = v56[1];
                    v5 = v56[2];
                    v57 = &g_626824[4 * *(short *)(v55 + node)];
                    v6 = *v57;
                    v7 = v57[1];
                    v8 = v57[2];
                    v53 = v57[2];
                    v9 = *v56;
                    v10 = v56[1];
                    v11 = v56[2];
                    v12 = *v57;
                    v13 = v57[1];
                    v14 = (float)v53;
                    if (!g_61698c(&v9, &v12, 10, 2, 250, 250, 250, 200, 10) && !(v58 = g_62468c, !g_62468c && !(v58 = g_6168d4(0), v58)))
                        v59 = v58->field_7c;
                    else
                        v59 = NULL;
                    sub_48a5d0(*v59->field_208);
                }
            } while ((iter += 1, iter <= 3));
            node = node->field_8;
        } while (node);
        return v53;
    }
    else
    {
        return *(float *)&f_path_time;
    }
}

