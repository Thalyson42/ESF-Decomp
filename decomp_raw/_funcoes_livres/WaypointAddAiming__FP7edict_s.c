// WaypointAddAiming__FP7edict_s @0x189580 size=593
typedef struct st_589580_1 {
    char padding_0[136];
    float field_88;
} st_589580_1;

typedef struct st_589580_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_589580_0;

typedef struct st_589580_2 {
    unsigned int field_0;
} st_589580_2;

extern st_589580_2 *g_616834;
extern st_589580_0 *gpGlobals;
extern unsigned int waypoints[4];
extern unsigned int g_626824;
extern int num_waypoints;
extern unsigned int wp_display_time;

int * WaypointAddAiming__FP7edict_s(float a0)
{
    unsigned int index;  // edi
    float *v20;  // eax
    unsigned int *v21;  // edx
    double v22;  // mm5
    double v23;  // mm5
    unsigned int idx;  // ecx
    st_589580_1 *v25;  // esi
    unsigned int v0;  // [bp-0x88]
    int idx1;  // [bp-0x68]
    float v2;  // [bp-0x64]
    float v3;  // [bp-0x60]
    float v4;  // [bp-0x5c]
    float v5;  // [bp-0x58]
    float v6;  // [bp-0x54]
    float v7;  // [bp-0x50]
    float v8;  // [bp-0x4c]
    float v9;  // [bp-0x48]
    float v10;  // [bp-0x44]
    float v11;  // [bp-0x40]
    float v12;  // [bp-0x3c]
    float v13;  // [bp-0x38]
    float v14;  // [bp-0x24]
    unsigned int v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    unsigned int v17;  // [bp-0x1c]

    if (num_waypoints > 0x3ff)
        return &num_waypoints;
    idx1 = 0;
    if (idx1 < num_waypoints && *(int *)(idx1 + (char *)&waypoints[0]) >= 0)
    {
        do
        {
            idx1 += 1;
        } while (idx1 < num_waypoints && (int)waypoints[4 * idx1] >= 0);
    }
    index = idx1 * 16;
    *(unsigned int *)(index + (char *)&waypoints[0]) = 0x4000;
    v20 = (float *)a0;
    v14 = v20[61];
    v16 = v20[62];
    v15 = 0;
    v17 = 0;
    sub_48a800(&v15);
    v21 = &gpGlobals->field_28;
    v22 = 25.0 * gpGlobals->field_28;
    v2 = (float)v22;
    v23 = 25.0 * *(float *)&v21[1];
    v3 = (float)v23;
    v4 = (float)(25.0 * *(float *)&v21[2]);
    idx = *(unsigned int *)&a0 + 0x88;
    v10 = (float)(v22 + *(float *)(*(unsigned int *)&a0 + 0x88));
    v11 = (float)(v23 + *(float *)(idx + 4));
    v12 = *(float *)(idx + 8) + v4;
    *(float *)((char *)&g_626824 + index) = v10;
    *(float *)((char *)&g_626824 + index + 4) = v11;
    *(float *)((char *)&g_626824 + index + 8) = v12;
    *(float *)&(&wp_display_time)[idx1] = gpGlobals->field_0;
    v11 = 0;
    v12 = 0;
    v13 = 10.0f;
    v25 = (st_589580_1 *)a0;
    v8 = v25->field_88 - v11;
    v9 = *(float *)(idx + 4) - v12;
    v10 = *(float *)(idx + 8) - v13;
    v2 = v8;
    v3 = v9;
    v4 = v10;
    v11 = 0;
    v12 = 0;
    v13 = 14.0f;
    v8 = v2 + v11;
    v9 = v3 + v12;
    v10 = v4 + v13;
    v5 = v8;
    v6 = v9;
    v7 = v10;
    v8 = v2;
    v9 = v3;
    v10 = v4;
    v11 = v5;
    v12 = v6;
    v13 = v7;
    v0 = 5;
    sub_48a5d0(v25, &v8, &v11, 30, 0, 0, 0, 0xff, 250);
    g_616834(v25, 1, "weapons/xbow_hit1.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    if (idx1 != num_waypoints)
        return &num_waypoints;
    num_waypoints = num_waypoints + 1;
    return &num_waypoints;
}

