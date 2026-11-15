// WaypointDelete__FP7edict_s @0x1897e0 size=676
typedef struct st_5897e0_0 {
    char padding_0[8];
    struct st_5897e0_0 *field_8;
} st_5897e0_0;

typedef struct st_5897e0_1 {
    unsigned int field_0;
} st_5897e0_1;

extern st_5897e0_1 *g_616834;
extern void waypoints;
extern char g_626821[4];
extern char g_626822[4];
extern float g_626824[4];
extern int num_waypoints;
extern unsigned int paths[4];
extern unsigned int wp_display_time;

double WaypointDelete__FP7edict_s(float a0)
{
    unsigned int v14;  // eax
    int v15;  // esi
    unsigned int idx;  // ecx
    unsigned int v25;  // eax
    st_5897e0_0 *iter;  // eax
    unsigned int idx1;  // ecx
    double v28;  // mm7
    float *v16;  // edi
    unsigned int v17;  // eax
    unsigned int idx2;  // eax
    float v19;  // 104
    float v20;  // 104
    float v21;  // 104
    double v22;  // mm6
    double v23;  // mm5
    float *v0;  // [bp-0x5c]
    int v1;  // [bp-0x58]
    int v2;  // [bp-0x54]
    unsigned int index;  // [bp-0x50]
    unsigned short v4;  // [bp-0x4c]
    unsigned short v5;  // [bp-0x4a]
    unsigned int v6;  // [bp-0x44]
    unsigned int v7;  // [bp-0x40]
    unsigned int v8;  // [bp-0x3c]
    float v9;  // [bp-0x38]
    float v10;  // [bp-0x24]
    float v11;  // [bp-0x20]
    float v12;  // [bp-0x1c]

    if (num_waypoints <= 0)
        return v28;
    index = sub_48e090(a0, 50.0f, -0x1);
    if (index == 0xffffffff)
        return 50.0;
    v14 = index * 16;
    if (g_626821[v14] & 4 || *(short *)&(&waypoints)[v14] < 0 || g_626822[v14] & 1 || g_626822[v14] & 4)
    {
        v2 = -0x1;
        v1 = 9999;
        v15 = 0;
        if (0 < num_waypoints)
        {
            v0 = &g_626824[0];
            v16 = &g_626824[4 * index];
            do
            {
                v17 = v15 * 16;
                if (*(int *)&(&waypoints)[v17] >= 0 && g_626821[v17] & 64)
                {
                    idx2 = v17 + (char *)v0;
                    v19 = *(float *)idx2 - *v16;
                    v10 = v19;
                    v20 = *(float *)(idx2 + 4) - v16[1];
                    v11 = v20;
                    v21 = *(float *)(idx2 + 8) - v16[2];
                    v12 = v21;
                    v22 = v19 * v19 + v20 * v20 + v21 * v21;
                    v23 = sqrt(v22);
                    if (isnan(v23))
                        sub_487dc0(*(unsigned int *)&v22);
                    else
                        v22 = v23;
                    v9 = (float)v22;
                    if ((double)v1 > v9 && v9 < 40.0f)
                    {
                        v2 = v15;
                        v5 = __fnstcw();
                        v4 = v5 | 0xc00;
                        v1 = (int)v9;
                    }
                }
            } while ((v15 += 1, v15 < num_waypoints));
        }
        if (v2 != 0xffffffff)
        {
            idx = v2 * 16;
            *(unsigned int *)&(&waypoints)[idx] = 0x80000000;
            v6 = 0;
            v7 = 0;
            v8 = 0;
            *(unsigned int *)((char *)&g_626824[0] + idx) = v6;
            *(unsigned int *)((char *)&g_626824[0] + idx + 4) = v7;
            *(unsigned int *)((char *)&g_626824[0] + idx + 8) = v8;
            (&wp_display_time)[v2] = 0;
        }
    }
    sub_489b90((short)index);
    v25 = index * 4;
    if (*(int *)(v25 + (char *)&paths[0]))
    {
        iter = *(int *)(v25 + (char *)&paths[0]);
        if (*(int *)(v25 + (char *)&paths[0]))
        {
            do
            {
                sub_48cf10(iter);
                iter = iter->field_8;
            } while (iter);
        }
        paths[index] = 0;
    }
    idx1 = index * 16;
    *(unsigned int *)&(&waypoints)[idx1] = 0x80000000;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    *(unsigned int *)((char *)&g_626824[0] + idx1) = v6;
    *(unsigned int *)((char *)&g_626824[0] + idx1 + 4) = v7;
    *(unsigned int *)((char *)&g_626824[0] + idx1 + 8) = v8;
    (&wp_display_time)[index] = 0;
    g_616834(a0, 1, "weapons/mine_activate.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return 50.0;
}

