// Find__15CFuncTrackTrain @0xec010 size=478
typedef struct st_4ec010_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4ec010_0;

typedef struct st_4ec010_2 {
    unsigned int field_0;
    char padding_4[4];
    float field_8;
    float field_c;
    float field_10;
} st_4ec010_2;

typedef struct st_4ec010_3 {
    char padding_0[80];
    unsigned int field_50;
} st_4ec010_3;

typedef struct st_4ec010_1 {
    unsigned int field_0;
} st_4ec010_1;

extern char Next__10CFuncTrain;
extern st_4ec010_1 *g_6167f8;
extern st_4ec010_1 *g_6168b4;
extern st_4ec010_0 *gpGlobals;

st_4ec010_2 ** Find__15CFuncTrackTrain(float idx)
{
    st_4ec010_2 **v15;  // eax
    st_4ec010_2 *v16;  // esi
    st_4ec010_2 **v17;  // eax
    unsigned int *v18;  // eax
    st_4ec010_3 *v19;  // esi
    st_4ec010_0 **v0;  // [bp-0x98]
    float v1;  // [bp-0x88]
    float v2;  // [bp-0x84]
    float v3;  // [bp-0x80]
    float v4;  // [bp-0x7c]
    char v5;  // [bp-0x64], Other Possible Types: unsigned int
    unsigned int v6;  // [bp-0x60]
    unsigned int v7;  // [bp-0x5c]
    float v8;  // [bp-0x44]
    float v9;  // [bp-0x40]
    float iter;  // [bp-0x3c]
    float v11;  // [bp-0x24]
    float v12;  // [bp-0x20]
    float v13;  // [bp-0x1c]

    v0 = &gpGlobals;
    v15 = sub_48a5e0(g_6167f8(0, "targetname", *(int *)(*(int *)idx + 456) + gpGlobals->field_98));
    *(st_4ec010_2 ***)(*(unsigned int *)&idx + 100) = v15;
    if (!v15)
        return v15;
    v16 = *v15;
    if (sub_488af0(v16->field_0 + *v0->field_98, "path_track"))
    {
        v17 = g_6168b4(4, "func_track_train must be on a path of path_track\n");
        *(unsigned int *)(*(unsigned int *)&idx + 100) = 0;
        return v17;
    }
    v18 = &v16->field_8;
    v11 = v16->field_8;
    v12 = *(float *)&v18[1];
    v13 = *(float *)&v18[2];
    v13 = *(float *)&v18[2] + *(float *)(*(unsigned int *)&idx + 108);
    v8 = v16->field_8;
    v9 = *(float *)&v18[1];
    iter = v13;
    iter -= *(float *)(*(unsigned int *)&idx + 108);
    sub_48c0e0(*(int *)(*(unsigned int *)&idx + 100), &v8, *(float *)(*(unsigned int *)&idx + 104), 0);
    iter += *(float *)(*(unsigned int *)&idx + 108);
    v19 = *(int *)idx;
    v2 = v8 - v11;
    v3 = v9 - v12;
    v4 = iter - v13;
    sub_488860(&v5, &v2);
    v19->field_50 = v5;
    *(unsigned int *)&v19[1].padding_0[0] = v6;
    *(unsigned int *)&v19[1].padding_0[4] = v7;
    *(float *)(*(int *)idx + 84) = (float)(*(float *)(*(int *)idx + 84) + 180.0);
    if (*(char *)(*(int *)idx + 416) & 1)
        *(unsigned int *)(*(int *)idx + 80) = 0;
    sub_48db50(*(int *)idx, &v11);
    v1 = (float)(0.1 + *(float *)(*(int *)idx + 0x100));
    *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(sub_4885e0(idx, v1, 0), 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &Next__10CFuncTrain;
    *(float *)(*(int *)idx + 504) = *(float *)(*(unsigned int *)&idx + 120);
    return sub_48c9a0(idx);
}

