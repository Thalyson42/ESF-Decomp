// WaypointFindNearest__FP7edict_sfi @0x1883e0 size=484
typedef struct st_5883e0_0 {
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
} st_5883e0_0;

extern void waypoints;
extern char g_626821[4];
extern unsigned int g_626824[4];
extern int num_waypoints;

int WaypointFindNearest__FP7edict_sfi(st_5883e0_0 *a0, float a1, unsigned int a2)
{
    int v13;  // esi
    unsigned int *v14;  // edi
    unsigned int v15;  // eax
    float *v16;  // edx
    float v17;  // 112
    float v18;  // 112
    float v19;  // 112
    double v20;  // mm7
    double v21;  // mm6
    char *v0;  // [bp-0xa4]
    float v1;  // [bp-0xa0]
    float v2;  // [bp-0x9c]
    int v3;  // [bp-0x98]
    char v4;  // [bp-0x84]
    float v5;  // [bp-0x84]
    float v6;  // [bp-0x80]
    float v7;  // [bp-0x7c]
    float v8;  // [bp-0x64]
    float v9;  // [bp-0x60]
    float v10;  // [bp-0x5c]
    char v11;  // [bp-0x44]
    float v12;  // [bp-0x34]

    if (num_waypoints <= 0)
        return -0x1;
    v3 = -0x1;
    v2 = 9999.0f;
    v13 = 0;
    if (0 < num_waypoints)
    {
        v14 = &a0->field_88;
        v0 = &v4;
        do
        {
            v15 = v13 * 16;
            if (*(int *)&(&waypoints)[v15] >= 0 && !(g_626821[v15] & 64) && (a2 == 0xffffffff || !((&waypoints)[v15] & 4) || (*(int *)&(&waypoints)[v15] & 3) == a2))
            {
                v16 = &g_626824[4 * v13];
                v17 = *v16 - a0->field_88;
                v8 = v17;
                v18 = v16[1] - *(float *)&v14[1];
                v9 = v18;
                v19 = v16[2] - *(float *)&v14[2];
                v10 = v19;
                v20 = v17 * v17 + v18 * v18 + v19 * v19;
                v21 = sqrt(v20);
                if (isnan(v21))
                    sub_487dc0(*(unsigned int *)&v20);
                else
                    v20 = v21;
                v1 = (float)v20;
                if (v1 < v2 && v1 < a1)
                {
                    v5 = a0->field_88 + a0->field_1f4;
                    v6 = *(float *)&v14[1] + a0->field_1f8;
                    v7 = *(float *)&v14[2] + a0->field_1fc;
                    sub_487b80(v0, &g_626824[4 * v13], 1, a0->field_288, &v11);
                    if (1.0 <= v12)
                    {
                        v3 = v13;
                        v2 = v1;
                    }
                }
            }
        } while ((v13 += 1, v13 < num_waypoints));
    }
    return v3;
}

