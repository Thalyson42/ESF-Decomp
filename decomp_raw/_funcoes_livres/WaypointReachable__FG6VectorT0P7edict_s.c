// WaypointReachable__FG6VectorT0P7edict_s @0x18a3e0 size=198
typedef struct st_58a3e0_0 {
    char padding_0[648];
    int field_288;
} st_58a3e0_0;

char WaypointReachable__FG6VectorT0P7edict_s(float *a0, float *a1, st_58a3e0_0 *a2)
{
    float v6;  // 112
    float v7;  // 112
    float v8;  // 112
    double v9;  // mm7
    double v10;  // mm6
    float v0;  // [bp-0x78]
    float v1;  // [bp-0x64]
    float v2;  // [bp-0x60]
    float v3;  // [bp-0x5c]
    char v4;  // [bp-0x44]
    float v5;  // [bp-0x34]

    v6 = *a1 - *a0;
    v1 = v6;
    v7 = a1[1] - a0[1];
    v2 = v7;
    v8 = a1[2] - a0[2];
    v3 = v8;
    v9 = v6 * v6 + v7 * v7 + v8 * v8;
    v10 = sqrt(v9);
    if (isnan(v10))
        sqrt(*(unsigned int *)&v9);
    else
        v9 = v10;
    v0 = (float)v9;
    if (v0 < 400.0f)
    {
        UTIL_TraceLine(a0, a1, 1, a2->field_288, &v4);
        if (1.0 <= v5)
            return 1;
    }
    return 0;
}

