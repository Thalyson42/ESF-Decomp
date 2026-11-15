// SearchDragonBall__4CBot @0x16a270 size=1039
typedef struct st_56a270_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    int field_208;
} st_56a270_1;

typedef struct st_56a270_0 {
    unsigned int field_0;
} st_56a270_0;

extern unsigned int g_teamplay;
extern st_56a270_0 *g_engfuncs.pfnCVarGetFloat;
extern float GatherDBPosForTeamGood[3];
extern float GatherDBPosForTeamEvil[3];
extern unsigned int num_waypoints;

char SearchDragonBall__4CBot(float idx)
{
    double v28;  // mm0
    st_56a270_1 **v29;  // esi
    double v38;  // mm0
    double v39;  // mm7
    unsigned int *v40;  // edx
    float v41;  // 120
    float v42;  // 120
    float v43;  // 120
    double v44;  // mm0
    double v45;  // mm7
    unsigned int *v46;  // edx
    unsigned int *v47;  // edx
    float *v30;  // edx
    double v48;  // mm0
    unsigned int *v31;  // edx
    unsigned int *v32;  // eax
    unsigned int *v33;  // edx
    unsigned int *v34;  // edx
    float v35;  // 120
    float v36;  // 120
    float v37;  // 120
    int v0;  // [bp-0xac]
    int v1;  // [bp-0xa8]
    int v2;  // [bp-0xa4]
    float v3;  // [bp-0xa0]
    float v4;  // [bp-0x9c]
    st_56a270_1 **v5;  // [bp-0x98]
    float v6;  // [bp-0x84]
    float v7;  // [bp-0x80]
    unsigned int v8;  // [bp-0x7c], Other Possible Types: float
    float v9;  // [bp-0x78]
    float v10;  // [bp-0x74]
    float v11;  // [bp-0x70], Other Possible Types: unsigned int
    float v12;  // [bp-0x64]
    float v13;  // [bp-0x60]
    float v14;  // [bp-0x5c]
    char v15;  // [bp-0x58], Other Possible Types: unsigned int
    unsigned int v16;  // [bp-0x54]
    unsigned int v17;  // [bp-0x50]
    float v18;  // [bp-0x4c]
    float v19;  // [bp-0x48]
    float v20;  // [bp-0x44]
    unsigned int v21;  // [bp-0x44]
    float v22;  // [bp-0x40], Other Possible Types: unsigned int
    unsigned int v23;  // [bp-0x3c]
    float v24;  // [bp-0x24]
    float v25;  // [bp-0x20]
    float v26;  // [bp-0x1c]

    if (!g_teamplay)
        return 0;
    g_engfuncs.pfnCVarGetFloat("mp_gamemode");
    if (v28 == 2.0)
    {
        if (*(int *)(*(unsigned int *)&idx + 1888))
        {
            return 1;
        }
        else if (!(char)UTIL_DBsAreGathered() && (char)UTIL_DBsAreActive())
        {
            v29 = NULL;
            v5 = NULL;
            v3 = 9999.900390625f;
            v1 = -0x1;
            v2 = v1;
            v0 = v2;
            v30 = (*(int *)(*(int *)idx + 428) == 1 ? &GatherDBPosForTeamGood[0] : &GatherDBPosForTeamEvil[0]);
            v24 = *v30;
            v25 = v30[1];
            v26 = v30[2];
            if (num_waypoints)
            {
                v31 = *(int *)idx;
                v32 = v31 + 2;
                *(float *)&v21 = *(float *)&v31[2];
                *(float *)&v22 = *(float *)&v32[1];
                *(float *)&v23 = *(float *)&v32[2];
                v0 = WaypointFindNearest(&v21, v31[130], 1750.0f, v31[107]);
            }
            while (1)
            {
                v29 = UTIL_FindEntityByClassname(v29, "dragonball");
                if (!v29)
                    break;
                if ((char)IsNull(v29))
                    continue;
                v33 = &*v29->field_8;
                v20 = *v29->field_8;
                v22 = *(float *)&v33[1];
                *(float *)&v23 = *(float *)&v33[2];
                v34 = *(int *)idx + 8;
                v35 = v20 - *(float *)(*(int *)idx + 8);
                v12 = v35;
                v36 = v22 - *(float *)&v34[1];
                v13 = v36;
                v37 = *(float *)&v23 - *(float *)&v34[2];
                v14 = v37;
                v38 = v35 * v35 + v36 * v36 + v37 * v37;
                v39 = sqrt(v38);
                if (isnan(v39))
                    sqrt(*(unsigned int *)&v38);
                else
                    v38 = v39;
                v4 = (float)v38;
                if (v4 >= v3)
                    continue;
                v6 = v24;
                v7 = v25;
                v8 = v26;
                v40 = &*v29->field_8;
                v9 = *v29->field_8;
                v10 = *(float *)&v40[1];
                *(float *)&v11 = *(float *)&v40[2];
                v41 = v9 - v6;
                v18 = v41;
                v42 = v10 - v7;
                v19 = v42;
                v43 = *(float *)&v11 - v8;
                v20 = v43;
                v44 = v41 * v41 + v42 * v42 + v43 * v43;
                v45 = sqrt(v44);
                if (isnan(v45))
                    sqrt(*(unsigned int *)&v44);
                else
                    v44 = v45;
                v13 = (float)v44;
                if (v13 < 1000.0f)
                    continue;
                if (!(*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 228))(idx, &*v29->field_8))
                {
                    if (v0 == -0x1)
                        continue;
                    v46 = &*v29->field_8;
                    v6 = *v29->field_8;
                    v7 = *(float *)&v46[1];
                    *(float *)&v8 = *(float *)&v46[2];
                    v2 = WaypointFindNearest(&v6, *v29->field_208, 750.0f, *(int *)(*(int *)idx + 428));
                    if (v2 == -0x1 || (unsigned short)WaypointRouteFromTo(v0, v2, *(int *)(*(int *)idx + 428)) == 0xffff)
                        continue;
                }
                v3 = v4;
                v5 = v29;
                if (v2 != -0x1)
                    v1 = v2;
                v2 = -0x1;
            }
            if (v5)
            {
                *(st_56a270_1 ***)(*(unsigned int *)&idx + 2864) = v5;
                if (v1 == -0x1)
                {
                    v47 = &*v5->field_8;
                    v48 = *v5->field_8;
                    v6 = (float)v48;
                    v7 = *(float *)&v47[1];
                    v8 = *(float *)&v47[2];
                    v9 = (float)v48;
                    v10 = *(float *)&v47[1];
                    v11 = *(float *)&v47[2];
                    CBot::GetAimAngles(&v15, idx, &v9);
                    *(unsigned int *)(*(unsigned int *)&idx + 3088) = v15;
                    *(unsigned int *)(*(unsigned int *)&idx + 3092) = v16;
                    *(unsigned int *)(*(unsigned int *)&idx + 3096) = v17;
                    return 1;
                }
                *(int *)(*(unsigned int *)&idx + 4132) = v1;
                return 1;
            }
        }
    }
    return 0;
}

