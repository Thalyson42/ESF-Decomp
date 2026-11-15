// TaskThink__14CHuntEnemyTask @0x14f750 size=1511
typedef struct st_54f750_4 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_54f750_4;

typedef struct st_54f750_0 {
    char padding_0[228];
    struct st_54f750_1 *field_e4;
} st_54f750_0;

typedef struct st_54f750_7 {
    char padding_0[4];
    unsigned int field_4;
    struct st_54f750_3 *field_8;
    struct st_54f750_6 *field_c;
    char padding_10[8];
    unsigned int field_18;
} st_54f750_7;

typedef struct st_54f750_5 {
    struct st_54f750_2 *field_0;
} st_54f750_5;

typedef struct st_54f750_1 {
    unsigned int field_0;
} st_54f750_1;

typedef struct st_54f750_3 {
    struct st_54f750_4 *field_0;
    char padding_4[92];
    struct st_54f750_0 *field_60;
    char padding_64[2988];
    unsigned int field_c10;
    unsigned int field_c14;
    unsigned int field_c18;
    char padding_c1c[988];
    unsigned int field_ff8;
    unsigned int field_ffc;
    unsigned int field_1000;
    unsigned int field_1004;
    int field_1008;
    char padding_100c[24];
    unsigned int field_1024;
    char padding_1028[12];
    struct st_54f750_5 *field_1034;
    unsigned int field_1038;
    unsigned int field_103c;
    unsigned int field_1040;
    unsigned int field_1044;
    unsigned int field_1048;
    unsigned int field_104c;
    unsigned int field_1050;
    unsigned int field_1054;
    char padding_1058[4];
    float field_105c;
} st_54f750_3;

typedef struct st_54f750_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[500];
    int field_208;
} st_54f750_2;

typedef struct st_54f750_6 {
    char padding_0[556];
    int field_22c;
} st_54f750_6;

extern unsigned int g_teamplay;
extern st_54f750_1 *gpGlobals;
extern unsigned int waypoints+4[4];
extern unsigned int num_waypoints;

unsigned int TaskThink__14CHuntEnemyTask(st_54f750_7 *a0)
{
    unsigned int v28;  // eax
    unsigned int v29;  // edx
    float v38;  // 112
    float v39;  // 112
    double v40;  // mm7
    double v41;  // mm6
    char v42;  // dl
    unsigned int v43;  // esi
    st_54f750_3 *v44;  // ecx
    float *v45;  // edx
    unsigned int *v46;  // eax
    float v47;  // 104
    st_54f750_3 *v30;  // esi
    double v48;  // mm3
    unsigned int v49;  // cc_dep1
    unsigned int *v50;  // edx
    float v51;  // 112
    float v52;  // 112
    float v53;  // 112
    double v54;  // mm7
    double v55;  // mm6
    float v56;  // 128
    unsigned int v57;  // cc_op
    unsigned int v31;  // edx
    unsigned int v58;  // cc_dep2
    st_54f750_3 *v59;  // edx
    unsigned int v60;  // ecx
    unsigned int v61;  // eax
    float v62;  // 128
    float v63;  // 128
    unsigned int v64;  // 4105
    unsigned int v65;  // 4112
    st_54f750_3 *v66;  // eax
    st_54f750_3 *v67;  // ecx
    unsigned int *v32;  // edx
    unsigned int *v68;  // eax
    st_54f750_3 *v69;  // esi
    unsigned short v33;  // dx
    unsigned int v34;  // esi
    st_54f750_3 *v35;  // eax
    unsigned int *v36;  // edx
    float v37;  // 112
    char *v0;  // [bp-0xbc], Other Possible Types: int
    int v1;  // [bp-0xb8]
    int v2;  // [bp-0xb4]
    unsigned int *v3;  // [bp-0x8c]
    short v4;  // [bp-0x86]
    short v5;  // [bp-0x86]
    float v6;  // [bp-0x84]
    float v7;  // [bp-0x80]
    short v8;  // [bp-0x7c]
    unsigned short v9;  // [bp-0x7a]
    float v10;  // [bp-0x78]
    unsigned int v11;  // [bp-0x64]
    unsigned int v12;  // [bp-0x60]
    unsigned int v13;  // [bp-0x5c]
    unsigned int v14;  // [bp-0x58]
    unsigned int v15;  // [bp-0x54]
    unsigned int v16;  // [bp-0x50]
    float v17;  // [bp-0x44]
    float v18;  // [bp-0x40]
    float v19;  // [bp-0x3c]
    unsigned int v20;  // [bp-0x38]
    unsigned int v21;  // [bp-0x34]
    unsigned int v22;  // [bp-0x30]
    float v23;  // [bp-0x2c]
    float v24;  // [bp-0x28]
    float v25;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v26;  // [bp-0x20]
    unsigned int v27;  // [bp-0x1c]

    *(unsigned short *)&v2 = 1;
    *(unsigned short *)&v1 = 1;
    v28 = UTIL_IsValidPlayer(a0->field_8->field_1034, v1, v2);
    if ((char)v28)
    {
        if (a0->field_8->field_1024 == 0xffffffff || !num_waypoints)
        {
            v35 = a0->field_8;
            *(float *)&v25 = *(float *)&v35->field_1038;
            *(float *)&v26 = *(float *)&v35->field_103c;
            *(float *)&v27 = *(float *)&v35->field_1040;
            v36 = &v35->field_0->field_8;
            v37 = *(float *)&v25 - *(float *)&v35->field_0->field_8;
            v17 = v37;
            v38 = *(float *)&v26 - *(float *)&v36[1];
            v18 = v38;
            v39 = *(float *)&v27 - *(float *)&v36[2];
            v19 = v39;
            v40 = v37 * v37 + v38 * v38 + v39 * v39;
            v41 = sqrt(v40);
            if (isnan(v41))
                sqrt(*(unsigned int *)&v40);
            else
                v40 = v41;
            v10 = (float)v40;
            v42 = 0;
            if (v10 < 60.0f)
                v42 = 1;
            if (0.0 < a0->field_8->field_105c && v10 > a0->field_8->field_105c)
                v42 = 1;
            a0->field_8->field_105c = v10;
            if (!v42)
            {
                if (*(float *)&a0->field_18 < *(float *)gpGlobals)
                {
                    *(float *)&a0->field_18 = (float)(0.8 + *(float *)gpGlobals);
                    v9 = 0;
                    v8 = -0x1;
                    v7 = 9999.900390625f;
                    v6 = 9999.900390625f;
                    v4 = 4;
                    do
                    {
                        v43 = 1;
                        v44 = a0->field_8;
                        v45 = v4 * 16;
                        v46 = v45 + v44->field_1034 + 1748;
                        *(float *)&v11 = *(float *)v46;
                        *(float *)&v12 = *(float *)&v46[1];
                        *(float *)&v13 = *(float *)&v46[2];
                        v47 = *(float *)(v45 + v44->field_1034 + 440);
                        v48 = *(float *)gpGlobals - 15.0;
                        v49 = (isunordered(v48, v47) ? 69 : v48 == v47 ? 64 : v48 < v47);
                        if (v48 <= *(float *)(v45 + v44->field_1034 + 440))
                        {
                            *(float *)&v14 = *(float *)v46;
                            *(float *)&v15 = *(float *)&v46[1];
                            *(float *)&v16 = *(float *)&v46[2];
                            v50 = &v44->field_0->field_8;
                            v51 = *(float *)v46 - *(float *)&v44->field_0->field_8;
                            v23 = v51;
                            v52 = *(float *)&v46[1] - *(float *)&v50[1];
                            v24 = v52;
                            v53 = *(float *)&v46[2] - *(float *)&v50[2];
                            v25 = v53;
                            v54 = v51 * v51 + v52 * v52 + v53 * v53;
                            v55 = sqrt(v54);
                            if (isnan(v55))
                                sqrt(*(unsigned int *)&v54);
                            else
                                v54 = v55;
                            v10 = (float)v54;
                            v56 = v10;
                            v49 = (isnan(v56) ? 69 : v56 == 6000.0 ? 64 : v56 < 6000.0);
                            if (v56 <= 6000.0f)
                            {
                                v57 = 4;
                                v49 = (isnan(v56) ? 69 : v56 == 300.0 ? 64 : v56 < 300.0);
                                v58 = 1;
                                if (v56 >= 300.0f)
                                {
                                    v59 = a0->field_8;
                                    v3 = &v59->field_1034[4 * v4 + 437];
                                    v60 = 0;
                                    if (*(float *)v3 == *(float *)&v59->field_1048 && *(float *)&v3[1] == *(float *)&v59->field_104c)
                                        v60 = *(float *)&v3[2] == *(float *)&v59->field_1050;
                                    v57 = 15;
                                    v49 = v60;
                                    v58 = 0;
                                    if (!v60)
                                    {
                                        v61 = a0->field_8->field_60->field_e4(a0->field_8, &v11);
                                        v57 = 15;
                                        v49 = v61;
                                        v58 = 0;
                                        if (v61)
                                        {
                                            v62 = v10;
                                            if (v62 < v7)
                                            {
                                                v7 = v62;
                                                v43 = 2;
                                            }
                                            v63 = v10;
                                            if (v63 < v6)
                                            {
                                                v6 = v63;
                                                v43 += 1;
                                            }
                                            v57 = 5;
                                            v49 = (unsigned short)v43;
                                            v58 = v9;
                                            if ((unsigned short)v43 >= v9)
                                            {
                                                v9 = v43;
                                                v8 = v4;
                                                goto LABEL_54fc0f;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        v57 = 13;
                        v58 = 0;
LABEL_54fc0f:
                        v5 = v4 - 1;
                        v64 = _ccall(v57, v49, v58, 0);
                        v65 = _ccall(8, 20, v4 - 1, 0, v64);
                        v4 = v5;
                    } while (!(v65 & 1));
                    if (v8 > -0x1)
                    {
                        v66 = a0->field_8;
                        v66->field_1048 = v66->field_1038;
                        v66->field_104c = v66->field_103c;
                        v66->field_1050 = v66->field_1040;
                        v66->field_1054 = v66->field_1044;
                        v67 = a0->field_8;
                        v68 = &v67->field_1034[4 * v8];
                        v67->field_1038 = v68[437];
                        v67->field_103c = v68[438];
                        v67->field_1040 = v68[439];
                        v67->field_1044 = v68[440];
                    }
                }
                v69 = a0->field_8;
                *(float *)&v11 = *(float *)&v69->field_1038;
                *(float *)&v12 = *(float *)&v69->field_103c;
                *(float *)&v13 = *(float *)&v69->field_1040;
                *(float *)&v14 = *(float *)&v69->field_1038;
                *(float *)&v15 = *(float *)&v69->field_103c;
                *(float *)&v16 = *(float *)&v69->field_1040;
                v0 = &v20;
                CBot::GetAimAngles(v0, v69, &v14);
                v69->field_c10 = v20;
                v69->field_c14 = v21;
                v69->field_c18 = v22;
                *(unsigned short *)&v0 = 1;
                return CBot::ToggleTurbo(a0->field_8, v0);
            }
            v28 = CBot::CheckForHuntEnemy(a0->field_8);
            goto LABEL_54fcac;
        }
        v28 = CBot::ReachedGoalWP(a0->field_8);
        if (!(char)v28)
        {
            if (!(char)CBot::CurrentWPIsValid(a0->field_8))
            {
                v28 = WaypointFindReachable(a0->field_c, 1250.0f, a0->field_c->field_22c);
                v29 = v28;
                if (v29 != 0xffffffff)
                {
                    a0->field_8->field_1008 = v29;
                    v30 = a0->field_8;
                    v31 = v29 * 16;
                    v30->field_ff8 = *(int *)((char *)&waypoints+4[0] + v31);
                    v30->field_ffc = *(int *)((char *)&waypoints+4[0] + v31 + 4);
                    v30->field_1000 = *(int *)((char *)&waypoints+4[0] + v31 + 8);
                    *(float *)&a0->field_8->field_1004 = *(float *)gpGlobals;
                    goto LABEL_54f84f;
                }
            }
            else
            {
LABEL_54f84f:
                if (*(float *)&a0->field_18 < *(float *)gpGlobals)
                {
                    *(float *)&a0->field_18 = (float)(*(float *)gpGlobals + 1.5);
                    v32 = *(int *)a0->field_8->field_1034 + 8;
                    *(float *)&v25 = *(float *)(*(int *)a0->field_8->field_1034 + 8);
                    *(float *)&v26 = *(float *)&v32[1];
                    *(float *)&v27 = *(float *)&v32[2];
                    v33 = WaypointFindNearest(&v25, *(int *)(*(int *)a0->field_8->field_1034 + 520), 750.0f, (!g_teamplay ? 0xffffffff : a0->field_c->field_22c));
                    if (v33 != -0x1)
                    {
                        v34 = v33;
                        if ((unsigned short)WaypointRouteFromTo(a0->field_8->field_1008, v34, a0->field_c->field_22c) != -0x1)
                            a0->field_8->field_1024 = v34;
                    }
                }
                v28 = CBot::HeadToWaypoint(a0->field_8);
LABEL_54fcac:
                if ((char)v28)
                    return v28;
            }
        }
    }
    a0->field_4 = 2;
    return v28;
}

