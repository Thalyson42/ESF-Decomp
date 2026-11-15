// CheckForHuntEnemy__4CBot @0x154290 size=1649
typedef struct st_554290_2 {
    struct st_554290_1 *field_0;
    char padding_4[4180];
    float field_1058;
} st_554290_2;

typedef struct st_554290_3 {
    char padding_0[420];
    unsigned int field_1a4;
} st_554290_3;

typedef struct st_554290_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[408];
    int field_1ac;
} st_554290_1;

typedef struct st_554290_0 {
    float field_0;
    char padding_4[140];
    int field_90;
} st_554290_0;

extern unsigned int g_teamplay;
extern st_554290_0 *gpGlobals;
extern char BotManager+3398;
extern unsigned int num_waypoints;

int CheckForHuntEnemy__4CBot(float a0)
{
    st_554290_2 *v38;  // edx
    st_554290_1 *v39;  // ecx
    double v48;  // mm7
    double v49;  // mm6
    unsigned int *v50;  // edx
    unsigned short v51;  // dx
    unsigned int v52;  // esi
    unsigned int v53;  // edx
    unsigned int *v54;  // eax
    float v55;  // 112
    float v56;  // 112
    float v57;  // 112
    unsigned int *v40;  // edx
    double v58;  // mm7
    double v59;  // mm6
    float v60;  // 128
    float v61;  // 128
    float v62;  // 128
    unsigned int *v63;  // edx
    unsigned int *v64;  // ecx
    unsigned int v65;  // eax
    unsigned int v66;  // eax
    unsigned int *v67;  // edx
    int v41;  // edx
    unsigned int *v68;  // eax
    unsigned int *v69;  // ecx
    unsigned int *v70;  // edx
    float v42;  // edi
    unsigned int *v43;  // edx
    st_554290_3 *v44;  // edx
    float v45;  // 112
    float v46;  // 112
    float v47;  // 112
    char *v0;  // [bp-0x11c], Other Possible Types: int, unsigned long long
    float v1;  // [bp-0x114]
    unsigned int v2;  // [bp-0xf8]
    int v3;  // [bp-0xf4]
    int v4;  // [bp-0xf4]
    int i;  // [bp-0xf0]
    float v6;  // [bp-0xec]
    float v7;  // [bp-0xe8]
    float v8;  // [bp-0xe4]
    unsigned short v9;  // [bp-0xe0]
    unsigned short v10;  // [bp-0xde]
    unsigned int v11;  // [bp-0xdc]
    float v12;  // [bp-0xd8]
    unsigned int v13;  // [bp-0xd4]
    unsigned int v14;  // [bp-0xd0]
    unsigned int v15;  // [bp-0xcc]
    float v16;  // [bp-0xb4]
    float v17;  // [bp-0xb0]
    float v18;  // [bp-0xac]
    unsigned int v19;  // [bp-0x84]
    float v20;  // [bp-0x84]
    unsigned int v21;  // [bp-0x80]
    float v22;  // [bp-0x7c], Other Possible Types: unsigned int
    unsigned int v23;  // [bp-0x78]
    unsigned int v24;  // [bp-0x74]
    unsigned int v25;  // [bp-0x70]
    float v26;  // [bp-0x6c]
    unsigned int v27;  // [bp-0x68]
    float v28;  // [bp-0x64]
    float v29;  // [bp-0x60]
    float v30;  // [bp-0x5c]
    unsigned int v31;  // [bp-0x44]
    unsigned int v32;  // [bp-0x40]
    unsigned int v33;  // [bp-0x3c]
    unsigned int v34;  // [bp-0x24]
    unsigned int v35;  // [bp-0x20]
    unsigned int v36;  // [bp-0x1c]

    if (!*(int *)(*(unsigned int *)&a0 + 800) || !BotManager+3398 || *(float *)(*(unsigned int *)&a0 + 4184) > gpGlobals->field_0)
        return v66;
    v38 = (st_554290_2 *)a0;
    v38->field_1058 = (float)(gpGlobals->field_0 + 1.25);
    v12 = 0;
    v39 = v38->field_0;
    v40 = &v39->field_8;
    *(float *)&v34 = *(float *)&v39->field_8;
    *(float *)&v35 = *(float *)&v40[1];
    *(float *)&v36 = *(float *)&v40[2];
    v11 = 0xffff;
    v10 = v11;
    v9 = v10;
    v8 = 9999.900390625f;
    v7 = 9999.900390625f;
    if (num_waypoints)
    {
        *(float *)&v31 = *(float *)&v39->field_8;
        *(float *)&v32 = *(float *)&v40[1];
        *(float *)&v33 = *(float *)&v40[2];
        v41 = -0x1;
        if (g_teamplay)
            v41 = v39->field_1ac;
        v1 = 1750.0f;
        *(int *)((char *)&v0 + 4) = *(int *)(*(int *)a0 + 520);
        v10 = WaypointFindNearest(&v31, *(unsigned int *)((void*)&v0 + 4), v1, v41);
    }
    i = 1;
    if (i <= gpGlobals->field_90)
    {
        do
        {
            v0 = i;
            v42 = __int_as_float(UTIL_PlayerByIndex(v0));
            if (__float_as_int(v42) == *(unsigned int *)&a0 || !(*(unsigned short *)&v1 = 1, v0 = _INSERT(CONCAT(v0, 0), 4, 1), *(float *)&v0 = v42, (char)UTIL_IsValidPlayer(v0, *(unsigned int *)((void*)&v0 + 4), v1) && (!g_teamplay || *(int *)(*(int *)a0 + 428) != *(int *)(*(int *)v42 + 428))))
                continue;
            v43 = *(int *)v42 + 8;
            *(float *)&v31 = *(float *)(*(int *)v42 + 8);
            *(float *)&v32 = *(float *)&v43[1];
            *(float *)&v33 = *(float *)&v43[2];
            v44 = *(int *)a0 + 8;
            v45 = *(float *)&v31 - *(float *)(*(int *)a0 + 8);
            v28 = v45;
            v46 = *(float *)&v32 - *(float *)&v44->padding_0[4];
            v29 = v46;
            v47 = *(float *)&v33 - *(float *)&v44->padding_0[8];
            v30 = v47;
            v48 = v45 * v45 + v46 * v46 + v47 * v47;
            v49 = sqrt(v48);
            if (isnan(v49))
                sqrt(*(unsigned int *)&v48);
            else
                v48 = v49;
            v6 = (float)v48;
            if (v6 > v8)
                continue;
            if (v10 != 0xffff)
            {
                v50 = *(int *)v42 + 8;
                *(float *)&v19 = *(float *)(*(int *)v42 + 8);
                *(float *)&v21 = *(float *)&v50[1];
                *(float *)&v22 = *(float *)&v50[2];
                v1 = 750.0f;
                v51 = WaypointFindNearest(&v19, CONCAT(*(int *)(*(int *)v42 + 520), &v19) >> 32, v1, *(int *)(*(int *)a0 + 428));
                if (v51 != 0xffff && !(*(int *)&v1 = *(int *)(*(int *)a0 + 428), (unsigned short)WaypointRouteFromTo(v10, (unsigned int)(CONCAT(v51, v10)) >> 32, v1) == 0xffff))
                {
                    v9 = v51;
                    v8 = v6;
                    v12 = v42;
                    continue;
                }
            }
            v3 = 4;
            do
            {
                v4 = v3;
                v52 = 1;
                v53 = v4 * 16;
                v54 = __float_as_int(v42) + v53 + 1748;
                v20 = *(float *)v54;
                *(float *)&v21 = *(float *)&v54[1];
                v22 = *(float *)&v54[2];
                if (gpGlobals->field_0 - 15.0 <= *(float *)(v53 + __float_as_int(v42) + 1760))
                {
                    v23 = v34;
                    v24 = v35;
                    v25 = v36;
                    v26 = *(float *)v54;
                    *(float *)&v27 = *(float *)&v54[1];
                    v28 = *(float *)&v54[2];
                    v55 = *(float *)v54 - *(float *)&v23;
                    v16 = v55;
                    v56 = *(float *)&v54[1] - *(float *)&v24;
                    v17 = v56;
                    v57 = *(float *)&v54[2] - *(float *)&v25;
                    v18 = v57;
                    v58 = v55 * v55 + v56 * v56 + v57 * v57;
                    v59 = sqrt(v58);
                    if (isnan(v59))
                        sqrt(*(unsigned int *)&v58);
                    else
                        v58 = v59;
                    v6 = (float)v58;
                    v60 = v6;
                    if (v60 <= 6000.0f && v60 >= 300.0f)
                    {
                        v61 = v6;
                        if (v61 < v8)
                        {
                            v8 = v61;
                            v52 = 2;
                        }
                        v62 = v6;
                        if (v62 < v7)
                        {
                            v7 = v62;
                            v52 += 1;
                        }
                        v63 = __float_as_int(v42) + v4 * 16 + 1748;
                        v2 = 0;
                        if (*(float *)v63 == *(float *)(*(unsigned int *)&a0 + 4168) && *(float *)&v63[1] == *(float *)(*(unsigned int *)&a0 + 4172))
                            v2 = *(float *)&v63[2] == *(float *)(*(unsigned int *)&a0 + 4176);
                        if (!v2 && (unsigned short)v52 >= *(unsigned short *)((void*)&v11 + 2) && (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 228))(a0, &v20))
                        {
                            v11 = CONCAT((unsigned short)v52, (unsigned short)v4);
                            v9 = 0xffff;
                            v12 = v42;
                            goto LABEL_55477d;
                        }
                    }
                }
LABEL_55477d:
                v3 = v4 - 1;
            } while (v4 - 1 >= 0);
            i += 1;
        } while (i <= gpGlobals->field_90);
    }
    if (*(unsigned int *)&v12)
    {
        v64 = (unsigned int *)a0;
        *(float *)&v64[1037] = v12;
        if (v9 != 0xffff)
        {
            v64[1033] = v9;
            v65 = v10;
            v64[1026] = v65;
            v66 = _INSERT(v65, 0, 1);
            return v66;
        }
        else if ((unsigned short)v11 != 0xffff)
        {
            v67 = (unsigned int *)a0;
            v67[1042] = v67[1038];
            v67[1043] = v67[1039];
            v67[1044] = v67[1040];
            v67[1045] = v67[1041];
            v68 = (short)v11 * 16 + v67[1037];
            v69 = (unsigned int *)a0;
            v69[1038] = v68[437];
            v69[1039] = v68[438];
            v69[1040] = v68[439];
            v69[1041] = v68[440];
            v69[1047] = 0;
            *(float *)&v13 = *(float *)&v69[1038];
            *(float *)&v14 = *(float *)&v69[1039];
            *(float *)&v15 = *(float *)&v69[1040];
            *(float *)&v19 = *(float *)&v69[1038];
            *(float *)&v21 = *(float *)&v69[1039];
            *(float *)&v22 = *(float *)&v69[1040];
            v0 = &v28;
            CBot::GetAimAngles(v0, v69, &v19);
            v70 = (unsigned int *)a0;
            *(float *)&v70[772] = v28;
            *(float *)&v70[773] = v29;
            *(float *)&v70[774] = v30;
            *(unsigned short *)&v0 = 1;
            CBot::ToggleTurbo(v70, v0);
            return v66;
        }
    }
    return v66;
}

