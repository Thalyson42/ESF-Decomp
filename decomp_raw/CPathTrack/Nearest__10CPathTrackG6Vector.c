// Nearest__10CPathTrackG6Vector @0xe75e0 size=439
typedef struct st_4e75e0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[440];
    unsigned int field_1cc;
} st_4e75e0_0;

typedef struct st_4e75e0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4e75e0_1;

typedef struct st_4e75e0_2 {
    unsigned int field_0;
} st_4e75e0_2;

extern st_4e75e0_2 *g_engfuncs.pfnAlertMessage;
extern st_4e75e0_1 *gpGlobals;

st_4e75e0_0 ** Nearest__10CPathTrackG6Vector(st_4e75e0_0 **a0, float *a1)
{
    unsigned int *v10;  // edx
    float *v11;  // ecx
    double v12;  // mm7
    double v13;  // mm6
    st_4e75e0_0 **v14;  // edi
    st_4e75e0_0 **v15;  // esi
    unsigned int *v16;  // edx
    float *v17;  // ecx
    double v18;  // mm7
    double v19;  // mm6
    float v0;  // [bp-0x4c]
    int v1;  // [bp-0x48]
    float v2;  // [bp-0x44]
    float v3;  // [bp-0x40]
    float v4;  // [bp-0x3c]
    float v5;  // [bp-0x38]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]
    unsigned int v9;  // [bp-0x1c]

    v10 = &*a0->field_8;
    v11 = a1;
    v2 = *v11 - *a0->field_8;
    v3 = v11[1] - *(float *)&v10[1];
    v4 = v11[2] - *(float *)&v10[2];
    v6 = v2;
    v7 = v3;
    v8 = v4;
    v9 = 0;
    v12 = v6 * v6 + v7 * v7 + 0.0;
    v13 = sqrt(v12);
    if (isnan(v13))
        sqrt(*(unsigned int *)&v12);
    else
        v12 = v13;
    v0 = (float)v12;
    v14 = a0;
    v15 = CPathTrack::GetNext(v14);
    v1 = 0;
    if (v15 && v15 != v14)
    {
        do
        {
            v1 += 1;
            if (v1 > 9999)
            {
                g_engfuncs.pfnAlertMessage(4, "Bad sequence of path_tracks from %s", *a0->field_1cc + gpGlobals->field_98);
                return NULL;
            }
            v16 = &*v15->field_8;
            v17 = a1;
            v2 = *v17 - *v15->field_8;
            v3 = v17[1] - *(float *)&v16[1];
            v4 = v17[2] - *(float *)&v16[2];
            v6 = v2;
            v7 = v3;
            v8 = v4;
            v9 = 0;
            v18 = v6 * v6 + v7 * v7 + 0.0;
            v19 = sqrt(v18);
            if (isnan(v19))
                sqrt(*(unsigned int *)&v18);
            else
                v18 = v19;
            v5 = (float)v18;
            if (v5 < v0)
            {
                v0 = v5;
                v14 = v15;
            }
            v15 = CPathTrack::GetNext(v15);
        } while (v15 && v15 != a0);
    }
    return v14;
}

