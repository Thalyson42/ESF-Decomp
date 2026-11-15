// WaypointAdd__FP7edict_s @0x1891f0 size=902
typedef struct st_5891f0_3 {
    char padding_0[136];
    float field_88;
} st_5891f0_3;

typedef struct st_5891f0_0 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[244];
    unsigned int field_188;
} st_5891f0_0;

typedef struct st_5891f0_1 {
    float field_0;
} st_5891f0_1;

typedef struct st_5891f0_2 {
    unsigned int field_0;
} st_5891f0_2;

extern char g_waypoint_on;
extern char g_path_waypoint_enable;
extern st_5891f0_2 *g_616834;
extern st_5891f0_1 *gpGlobals;
extern void waypoints;
extern char g_626821[4];
extern unsigned int g_626824[4];
extern unsigned int last_waypoint;
extern unsigned int g_62a824;
extern unsigned int g_62a828;
extern int num_waypoints;
extern unsigned int wp_display_time;

int * WaypointAdd__FP7edict_s(float a0)
{
    unsigned int idx;  // ecx
    st_5891f0_0 *v20;  // edi
    unsigned int *v21;  // eax
    int v22;  // esi
    unsigned int *v23;  // edi
    unsigned int v24;  // edx
    st_5891f0_3 *v25;  // ecx
    unsigned int index;  // eax
    float *v27;  // edx
    st_5891f0_3 *v28;  // eax
    char v0;  // [bp-0x8a]
    char v1;  // [bp-0x89]
    int idx1;  // [bp-0x88]
    float v3;  // [bp-0x84]
    unsigned int v4;  // [bp-0x80], Other Possible Types: float
    unsigned int v5;  // [bp-0x7c], Other Possible Types: float
    float v6;  // [bp-0x78]
    unsigned int v7;  // [bp-0x74], Other Possible Types: float
    unsigned int v8;  // [bp-0x70], Other Possible Types: float
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    float v12;  // [bp-0x44]
    float v13;  // [bp-0x40]
    float v14;  // [bp-0x3c]
    float v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]

    if (num_waypoints > 0x3ff)
        return &num_waypoints;
    idx1 = 0;
    if (idx1 < num_waypoints && *(int *)&(&waypoints)[idx1] >= 0)
    {
        do
        {
            idx1 += 1;
        } while (idx1 < num_waypoints && *(int *)&(&waypoints)[16 * idx1] >= 0);
    }
    idx = idx1 * 16;
    *(unsigned int *)&(&waypoints)[idx] = 0;
    v20 = (st_5891f0_0 *)a0;
    *(float *)((char *)&g_626824[0] + idx) = v20->field_88;
    *(float *)((char *)&g_626824[0] + idx + 4) = v20->field_8c;
    *(float *)((char *)&g_626824[0] + idx + 8) = v20->field_90;
    *(float *)&last_waypoint = v20->field_88;
    *(float *)&g_62a824 = v20->field_8c;
    *(float *)&g_62a828 = v20->field_90;
    *(float *)&(&wp_display_time)[idx1] = *(float *)gpGlobals;
    v3 = 0;
    v4 = 0;
    v5 = 34.0f;
    v21 = &v20->field_88;
    v9 = v20->field_88 - v3;
    v10 = *(float *)&v21[1] - v4;
    v11 = *(float *)&v21[2] - v5;
    v15 = v9;
    v16 = v10;
    v17 = v11;
    v6 = 0;
    v7 = 0;
    v8 = 68.0f;
    v3 = v15 + v6;
    v4 = v16 + v7;
    v5 = v17 + v8;
    v12 = v3;
    v13 = v4;
    v14 = v5;
    if (v20->field_188 == 5)
        (&waypoints)[idx] = (&waypoints)[idx] | 16;
    v3 = v15;
    v4 = v16;
    v5 = v17;
    v6 = v12;
    v7 = v13;
    v8 = v14;
    sub_48a5d0(a0, &v3, &v6, 30, 0, 0, 0, 0xff, 250, 5);
    if (g_waypoint_on)
        g_616834(a0, 1, "weapons/xbow_hit1.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    if (idx1 == num_waypoints)
        num_waypoints = num_waypoints + 1;
    v22 = 0;
    if (0 >= num_waypoints)
        return &num_waypoints;
    v23 = *(unsigned int *)&a0 + 0x88;
    do
    {
        if (v22 != idx1)
        {
            v24 = v22 * 16;
            if (!(g_626821[v24] & 64))
            {
                v1 = 0;
                v25 = (st_5891f0_3 *)a0;
                v3 = v25->field_88;
                *(float *)&v4 = *(float *)&v23[1];
                *(float *)&v5 = *(float *)&v23[2];
                index = v24 + (char *)&g_626824[0];
                v6 = *(float *)index;
                v7 = *(float *)(index + 4);
                v8 = *(float *)(index + 8);
                if ((char)sub_48c5f0(&v3, &v6, v25))
                    v1 = g_path_waypoint_enable != 0;
                if (v1)
                    sub_48bc80((short)idx1, (short)v22);
                v0 = 0;
                v27 = &g_626824[4 * v22];
                v3 = *v27;
                v4 = v27[1];
                v5 = v27[2];
                v28 = (st_5891f0_3 *)a0;
                v6 = v28->field_88;
                *(float *)&v7 = *(float *)&v23[1];
                *(float *)&v8 = *(float *)&v23[2];
                if ((char)sub_48c5f0(&v3, &v6, v28))
                    v0 = g_path_waypoint_enable != 0;
                if (v0)
                    sub_48bc80((short)v22, (short)idx1);
            }
        }
    } while ((v22 += 1, v22 < num_waypoints));
    return &num_waypoints;
}

