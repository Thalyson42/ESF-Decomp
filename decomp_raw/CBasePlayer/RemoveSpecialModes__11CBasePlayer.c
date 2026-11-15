// RemoveSpecialModes__11CBasePlayer @0xf3b30 size=784
typedef struct st_4f3b30_1 {
    char padding_0[328];
    unsigned int field_148;
} st_4f3b30_1;

typedef struct st_4f3b30_0 {
    unsigned int field_0;
} st_4f3b30_0;

extern int gmsgStopTransformFX;
extern st_4f3b30_0 *g_616878;
extern st_4f3b30_0 *g_61687c;
extern st_4f3b30_0 *g_616880;
extern st_4f3b30_0 *g_6168dc;

unsigned int RemoveSpecialModes__11CBasePlayer(float idx)
{
    unsigned int *v8;  // eax
    unsigned int *v9;  // eax
    st_4f3b30_1 *v10;  // eax
    int index;  // ecx
    unsigned int *v12;  // edx
    unsigned int v13;  // eax
    unsigned int v0;  // [bp-0x4c]
    int v1;  // [bp-0x48]
    float v2;  // [bp-0x24]
    unsigned int v3;  // [bp-0x24]
    float v4;  // [bp-0x20], Other Possible Types: unsigned int
    float v5;  // [bp-0x1c], Other Possible Types: unsigned int

    if (*(int *)(*(unsigned int *)&idx + 836))
    {
        v2 = 255.0f;
        v4 = 255.0f;
        v5 = 255.0f;
        v1 = 0;
        sub_48df50(idx, &v2, 0, 0, 0xff, v1);
    }
    if (*(int *)(*(unsigned int *)&idx + 1904))
    {
        *(unsigned short *)&v1 = 1;
        sub_4886c0(idx, v1);
        v1 = gmsgStopTransformFX;
        g_616878(2, v1, *(int *)idx + 8, 0);
        v0 = g_6168dc(*(int *)(*(int *)idx + 520));
        g_616880(v0);
        g_61687c(v0);
        sub_48b090(g_6168dc(*(int *)(*(int *)idx + 520)));
    }
    if (*(int *)(*(unsigned int *)&idx + 816))
        sub_48ba60(idx);
    if (*(int *)(*(unsigned int *)&idx + 812))
        sub_4895a0(idx);
    if (*(int *)(*(unsigned int *)&idx + 800))
        sub_48c5a0(idx);
    if (*(int *)(*(unsigned int *)&idx + 804))
        sub_48dbc0(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 840) = 0;
    if (*(int *)(*(unsigned int *)&idx + 1288))
        sub_48a7a0(idx);
    sub_48dd20(*(int *)(*(unsigned int *)&idx + 1900));
    *(unsigned int *)(*(unsigned int *)&idx + 1900) = 0;
    while ((*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 32))(*(int *)(*(unsigned int *)&idx + 1892)))
    {
        *(unsigned short *)&v1 = 1;
        sub_4886c0(idx, v1);
    }
    if (*(int *)(*(unsigned int *)&idx + 892))
    {
        if (*(int *)(*(unsigned int *)&idx + 936))
            sub_48d400(*(unsigned int *)&idx + 896);
        v8 = *(unsigned int *)&idx + 896;
        if (v8[81] && v8[78])
            sub_48a700(v8, 0);
        if (*(int *)(*(unsigned int *)&idx + 1736))
            sub_48daa0(idx);
        *(unsigned int *)(*(unsigned int *)&idx + 892) = 0;
    }
    v9 = *(unsigned int *)&idx + 896;
    if (!v9[81])
        sub_48b000(v9);
    v10 = *(int *)idx;
    if (v10[1].padding_0[89] & 16)
        v10[1].padding_0[89] = v10[1].padding_0[89] & 239;
    index = 0;
    do
    {
        v12 = *(unsigned int *)&idx + index * 12;
        v3 = 0;
        v4 = 0;
        v5 = 0;
        v12[425] = v3;
        v12[426] = v4;
        v13 = v5;
        v12[427] = v13;
        *(float *)(*(unsigned int *)&idx + 1424 + index * 4) = -1.0f;
        index += 1;
    } while (index <= 1);
    *(unsigned int *)(*(unsigned int *)&idx + 1724) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1436) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 888) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1432) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1412) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1408) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1728) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 844) = 0;
    if (*(int *)(*(unsigned int *)&idx + 848))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 848) = 0;
        *(unsigned int *)(*(int *)idx + 328) = 0;
        v13 = *(int *)idx;
        *(unsigned int *)(v13 + 348) = 0;
    }
    return v13;
}

