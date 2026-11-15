// Find__16CFuncTrackChange @0xecf00 size=896
typedef struct st_4ecf00_3 {
    char padding_0[256];
    struct st_4ecf00_1 *field_100;
} st_4ecf00_3;

typedef struct st_4ecf00_4 {
    char padding_0[96];
    struct st_4ecf00_3 *field_60;
    char padding_64[28];
    unsigned int field_80;
    char padding_84[160];
    unsigned int field_124;
} st_4ecf00_4;

typedef struct st_4ecf00_2 {
    char padding_0[292];
    int field_124;
    unsigned int field_128;
} st_4ecf00_2;

typedef struct st_4ecf00_1 {
    unsigned int field_0;
} st_4ecf00_1;

typedef struct st_4ecf00_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4ecf00_0;

extern st_4ecf00_1 *g_6167f8;
extern st_4ecf00_1 *g_6168b4;
extern st_4ecf00_1 *g_6168d8;
extern st_4ecf00_0 *gpGlobals;

unsigned int Find__16CFuncTrackChange(float idx)
{
    int v8;  // esi
    unsigned int v9;  // edi
    unsigned int idx1;  // ecx
    unsigned int idx2;  // edx
    double v20;  // mm5
    double v21;  // mm5
    double v22;  // mm5
    st_4ecf00_2 *v23;  // edx
    st_4ecf00_4 *v24;  // ecx
    unsigned int v25;  // eax
    unsigned int *v26;  // esi
    unsigned int *v10;  // esi
    int v11;  // esi
    unsigned int v12;  // edi
    unsigned int v13;  // esi
    unsigned int v14;  // edi
    unsigned int v15;  // eax
    unsigned int v16;  // eax
    unsigned int index;  // eax
    unsigned int v0;  // [bp-0x64]
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]

    v8 = g_6167f8(0, "targetname", *(int *)(*(unsigned int *)&idx + 304) + gpGlobals->field_98);
    v9 = 0;
    if (!v8 || !g_6168d8(v8))
        v9 = 1;
    if (v9)
        return g_6168b4(4, "Can't find top track for track change! %s\n", *(int *)(*(unsigned int *)&idx + 304) + gpGlobals->field_98);
    v10 = (unsigned int *)idx;
    v10[73] = sub_48a5e0(v8);
    v11 = g_6167f8(0, "targetname", v10[77] + gpGlobals->field_98);
    v12 = 0;
    if (!v11 || !g_6168d8(v11))
        v12 = 1;
    if (!v12)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 296) = sub_48a5e0(v11);
        v13 = g_6167f8(0, "targetname", *(int *)(*(unsigned int *)&idx + 312) + gpGlobals->field_98);
        v14 = 0;
        if (!v13 || !g_6168d8(v13))
            v14 = 1;
        if (v14)
        {
            g_6168b4(4, "Can't find train for track change! %s\n", *(int *)(*(unsigned int *)&idx + 312) + gpGlobals->field_98);
            return g_6167f8(0, "targetname", *(int *)(*(unsigned int *)&idx + 312) + gpGlobals->field_98);
        }
        v15 = sub_489170(g_6167f8(0, "targetname", *(int *)(*(unsigned int *)&idx + 312) + gpGlobals->field_98));
        *(unsigned int *)(*(unsigned int *)&idx + 300) = v15;
        if (v15)
        {
            index = *(int *)idx;
            idx1 = index + 196;
            idx2 = index + 208;
            v1 = *(float *)(index + 196) + *(float *)(index + 208);
            v2 = *(float *)(idx1 + 4) + *(float *)(idx2 + 4);
            v3 = *(float *)(idx1 + 8) + *(float *)(idx2 + 8);
            v20 = 0.5 * v1;
            v4 = (float)v20;
            v21 = 0.5 * v2;
            v5 = (float)v21;
            v22 = 0.5 * v3;
            v6 = (float)v22;
            v1 = (float)v20;
            v2 = (float)v21;
            v3 = (float)v22;
            v23 = (st_4ecf00_2 *)idx;
            v23->field_128 = sub_489b20(*(int *)(*(unsigned int *)&idx + 296), &v1);
            v1 = v4;
            v2 = v5;
            v3 = v6;
            v24 = (st_4ecf00_4 *)idx;
            v24->field_124 = sub_489b20(v23->field_124, &v1);
            v25 = v24->field_60->field_100(v24, v24->field_80);
            v26 = (unsigned int *)idx;
            v26[3] = 0;
            v26[4] = 0;
            return v25;
        }
        v0 = *(int *)(*(unsigned int *)&idx + 312) + gpGlobals->field_98;
        v16 = "Can't find train for track change! %s\n";
    }
    else
    {
        v0 = *(int *)(*(unsigned int *)&idx + 308) + gpGlobals->field_98;
        v16 = "Can't find bottom track for track change! %s\n";
    }
    return g_6168b4(4, v16);
}

