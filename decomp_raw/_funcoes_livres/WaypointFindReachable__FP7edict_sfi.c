// WaypointFindReachable__FP7edict_sfi @0x18a4b0 size=594
typedef struct st_58a4b0_1 {
    float field_0;
    float field_4;
    float field_8;
    unsigned int field_c;
} st_58a4b0_1;

typedef struct st_58a4b0_0 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[352];
    float field_1f4;
    float field_1f8;
    float field_1fc;
    char padding_200[136];
    int field_288;
} st_58a4b0_0;

extern void waypoints;
extern char waypoints+1[4];
extern st_58a4b0_1 waypoints+4;
extern int num_waypoints;

int WaypointFindReachable__FP7edict_sfi(st_58a4b0_0 *a0, float a1, unsigned int a2)
{
    unsigned int v17;  // eax
    float *v18;  // edx
    st_58a4b0_1 *v27;  // esi
    st_58a4b0_0 *v28;  // edx
    unsigned int *v19;  // eax
    float v20;  // 112
    float v21;  // 112
    float v22;  // 112
    double v23;  // mm7
    double v24;  // mm6
    unsigned int *v25;  // edi
    st_58a4b0_0 *v26;  // eax
    char *v0;  // [bp-0xa8]
    float v1;  // [bp-0xa4]
    float v2;  // [bp-0xa0]
    int v3;  // [bp-0x9c]
    int v4;  // [bp-0x98]
    unsigned int v5;  // [bp-0x84]
    float v6;  // [bp-0x84]
    float v7;  // [bp-0x80], Other Possible Types: unsigned int
    float v8;  // [bp-0x7c], Other Possible Types: unsigned int
    float v9;  // [bp-0x78]
    float v10;  // [bp-0x74]
    float v11;  // [bp-0x70]
    float v12;  // [bp-0x64]
    float v13;  // [bp-0x60]
    float v14;  // [bp-0x5c]
    char v15;  // [bp-0x44]
    float v16;  // [bp-0x34]

    v3 = 0;
    v2 = 9999.0f;
    v4 = 0;
    if (v3 < num_waypoints)
    {
        do
        {
            v17 = v4 * 16;
            if (*(int *)&(&waypoints)[v17] >= 0 && !(waypoints+1[v17] & 64) && (a2 == 0xffffffff || !((&waypoints)[v17] & 4) || (*(int *)&(&waypoints)[v17] & 3) == a2))
            {
                v18 = &(&waypoints+4.field_0)[4 * v4];
                v19 = &a0->field_88;
                v20 = *v18 - a0->field_88;
                v12 = v20;
                v21 = v18[1] - *(float *)&v19[1];
                v13 = v21;
                v22 = v18[2] - *(float *)&v19[2];
                v14 = v22;
                v23 = v20 * v20 + v21 * v21 + v22 * v22;
                v24 = sqrt(v23);
                if (isnan(v24))
                    sqrt(*(unsigned int *)&v23);
                else
                    v23 = v24;
                v1 = (float)v23;
                if (v1 < v2)
                {
                    v25 = &a0->field_88;
                    v26 = a0;
                    v6 = v26->field_88 + v26->field_1f4;
                    v7 = *(float *)&v25[1] + v26->field_1f8;
                    v8 = *(float *)&v25[2] + v26->field_1fc;
                    v0 = &v6;
                    v27 = &(&waypoints+4.field_0)[4 * v4];
                    UTIL_TraceLine(v0, v27, 1, a0->field_288, &v15);
                    if (1.0 <= v16)
                    {
                        v28 = a0;
                        *(float *)&v5 = v28->field_88;
                        *(float *)&v7 = *(float *)&v25[1];
                        *(float *)&v8 = *(float *)&v25[2];
                        v9 = v27->field_0;
                        v10 = v27->field_4;
                        v11 = v27->field_8;
                        if ((char)WaypointReachable(v0, &v9, v28))
                        {
                            v3 = v4;
                            v2 = v1;
                        }
                    }
                }
            }
        } while ((v4 += 1, v4 < num_waypoints));
    }
    if (v2 > a1)
        return -0x1;
    return v3;
}

