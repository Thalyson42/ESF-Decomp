// FindWaypoint__4CBot @0x1708a0 size=763
typedef struct st_5708a0_1 {
    struct st_5708a0_0 *field_0;
    char padding_4[4084];
    unsigned int field_ff8;
    unsigned int field_ffc;
    unsigned int field_1000;
    unsigned int field_1004;
    int field_1008;
    int field_100c;
    int field_1010;
    int field_1014;
    int field_1018;
    int field_101c;
    float field_1020;
} st_5708a0_1;

typedef struct st_5708a0_4 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[408];
    unsigned short field_1a4;
} st_5708a0_4;

typedef struct st_5708a0_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[408];
    unsigned short field_1ac;
} st_5708a0_0;

typedef struct st_5708a0_2 {
    float field_0;
} st_5708a0_2;

typedef struct st_5708a0_3 {
    unsigned int field_0;
} st_5708a0_3;

extern unsigned int g_teamplay;
extern st_5708a0_3 *g_engfuncs.pfnRandomLong;
extern st_5708a0_2 *gpGlobals;
extern unsigned int waypoints+4[4];

double FindWaypoint__4CBot(st_5708a0_1 *a0)
{
    int i;  // esi
    unsigned int v19;  // eax
    double v28;  // mm6
    unsigned int *v29;  // eax
    unsigned int idx;  // esi
    unsigned int v31;  // edx
    unsigned int v32;  // edx
    float v33;  // 128
    double v20;  // mm7
    int v21;  // esi
    float *v22;  // edx
    st_5708a0_4 *v23;  // edx
    float v24;  // 112
    float v25;  // 112
    float v26;  // 112
    double v27;  // mm7
    unsigned int v0;  // [bp-0xec]
    unsigned int v1;  // [bp-0xe8]
    short v2;  // [bp-0xbe]
    unsigned int v3;  // [bp-0xbc]
    char v4;  // [bp-0xb8]
    float v5;  // [bp-0x98]
    float v6;  // [bp-0x84]
    float v7;  // [bp-0x80]
    float v8;  // [bp-0x7c]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    int v12;  // [bp-0x44]
    int v13;  // [bp-0x40]
    int v14;  // [bp-0x3c]
    float v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]

    v2 = (!g_teamplay ? -0x1 : a0->field_0->field_1ac);
    v3 = 0;
    i = 0;
    do
    {
        v19 = i * 4;
        v20 = 9999.0;
        *(float *)(v19 + (char *)&v15) = 9999.0f;
        *(unsigned int *)(v19 + (char *)&v12) = 0xffffffff;
        i += 1;
    } while (i <= 2);
    while (1)
    {
        v21 = WaypointFindPath(&v3, &v4, a0->field_1008, v2);
        if (v21 == -0x1)
            break;
        if (v21 != a0->field_1008 && v21 != a0->field_100c && v21 != a0->field_1010 && v21 != a0->field_1014 && v21 != a0->field_1018 && v21 != a0->field_101c)
        {
            v22 = &waypoints+4[4 * v21];
            v9 = *v22;
            v10 = v22[1];
            v11 = v22[2];
            v23 = &a0->field_0->field_8;
            v24 = v9 - *(float *)&a0->field_0->field_8;
            v6 = v24;
            v25 = v10 - *(float *)&v23->field_4;
            v7 = v25;
            v26 = v11 - *(float *)&v23->field_8;
            v8 = v26;
            v27 = v24 * v24 + v25 * v25 + v26 * v26;
            v28 = sqrt(v27);
            if (isnan(v28))
                sqrt(*(unsigned int *)&v27);
            else
                v27 = v28;
            v5 = (float)v27;
            v20 = v5;
            if (v20 < v15)
            {
                v17 = v16;
                v14 = v13;
                v16 = v15;
                v13 = v12;
                v15 = (float)v20;
                v12 = v21;
            }
            else if (v20 < v16)
            {
                v17 = v16;
                v14 = v13;
                v16 = (float)v20;
                v13 = v21;
            }
            else if (v20 < v17)
            {
                v17 = (float)v20;
                v14 = v21;
            }
        }
    }
    if ((int)g_engfuncs.pfnRandomLong(1, 100) > 20 || (v20 = a0->field_1020, v20 > *(float *)gpGlobals))
    {
        v31 = v12;
LABEL_570b08:
        if (v31 != -0x1)
        {
            a0->field_101c = a0->field_1018;
            a0->field_1018 = a0->field_1014;
            a0->field_1014 = a0->field_1010;
            a0->field_1010 = a0->field_100c;
            a0->field_100c = a0->field_1008;
            a0->field_1008 = v31;
            v32 = v31 * 16;
            a0->field_ff8 = *(int *)((char *)&waypoints+4[0] + v32);
            a0->field_ffc = *(int *)((char *)&waypoints+4[0] + v32 + 4);
            a0->field_1000 = *(int *)((char *)&waypoints+4[0] + v32 + 8);
            v33 = *(float *)gpGlobals;
            *(float *)&a0->field_1004 = v33;
            return v33;
        }
        return v20;
    }
    v20 = 10.0 + *(float *)gpGlobals;
    a0->field_1020 = (float)v20;
    if (v14 != -0x1)
    {
        v1 = 2;
        v0 = 0;
        v29 = g_engfuncs.pfnRandomLong;
        goto LABEL_570aef;
    }
    else
    {
        if (v13 != -0x1)
        {
            v1 = 1;
            v0 = 0;
            v29 = g_engfuncs.pfnRandomLong;
LABEL_570aef:
            idx = v29(v0, v1);
        }
        else if (v12 != -0x1)
        {
            idx = 0;
        }
        else
        {
            return v20;
        }
        v31 = (&v12)[idx];
        goto LABEL_570b08;
    }
}

