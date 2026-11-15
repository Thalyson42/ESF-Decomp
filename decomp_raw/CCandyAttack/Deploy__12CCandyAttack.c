// Deploy__12CCandyAttack @0x9a650 size=623
typedef struct st_49a650_2 {
    char padding_0[196];
    struct st_49a650_3 *field_c4;
} st_49a650_2;

typedef struct st_49a650_7 {
    char padding_0[128];
    struct st_49a650_3 *field_80;
    char padding_84[64];
    struct st_49a650_3 *field_c4;
} st_49a650_7;

typedef struct st_49a650_12 {
    char padding_0[200];
    struct st_49a650_4 *field_c8;
} st_49a650_12;

typedef struct st_49a650_11 {
    char padding_0[128];
    struct st_49a650_3 *field_80;
    char padding_84[68];
    struct st_49a650_3 *field_c8;
} st_49a650_11;

typedef struct st_49a650_0 {
    char padding_0[328];
    unsigned int field_148;
    unsigned int field_14c;
} st_49a650_0;

typedef struct st_49a650_1 {
    char padding_0[328];
    unsigned int field_148;
    float field_14c;
} st_49a650_1;

typedef struct st_49a650_13 {
    char padding_0[328];
    unsigned int field_148;
    char padding_14c[16];
    unsigned int field_15c;
} st_49a650_13;

typedef struct st_49a650_9 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[4];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[124];
    unsigned int field_194;
} st_49a650_9;

typedef struct st_49a650_3 {
    struct st_49a650_1 *field_0;
} st_49a650_3;

typedef struct st_49a650_4 {
    unsigned int field_0;
} st_49a650_4;

extern st_49a650_4 *g_6168dc;

int Deploy__12CCandyAttack(float idx)
{
    st_49a650_0 **v2;  // eax
    st_49a650_2 *v3;  // edx
    unsigned int v12;  // edi
    unsigned int v13;  // eax
    st_49a650_13 **v14;  // edx
    double v15;  // mm7
    st_49a650_12 *v16;  // edx
    int v4;  // eax
    st_49a650_7 *v5;  // ecx
    unsigned int v6;  // eax
    unsigned int *v7;  // ecx
    unsigned int *v8;  // edx
    st_49a650_7 *v9;  // ecx
    st_49a650_9 **v10;  // esi
    st_49a650_11 *v11;  // eax
    int v0;  // [bp-0x24]

    v2 = sub_48b530("sprites/candytrail.spr", 10);
    v3 = (st_49a650_2 *)idx;
    v3->field_c4 = v2;
    *v2->field_148 = 5;
    v0 = 0xff;
    *(float *)(*(int *)v3->field_c4 + 332) = (float)v0;
    v4 = g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520));
    sub_48c910(*(int *)(*(unsigned int *)&idx + 196), v4);
    v5 = (st_49a650_7 *)idx;
    v6 = _INSERT(*(int *)(*(int *)v5->field_c4 + 272) & 0xfff, 1, (char)((*(int *)(*(int *)v5->field_c4 + 272) & 0xfff) >> 8) | 32);
    *(unsigned int *)(*(int *)v5->field_c4 + 272) = v6;
    v7 = *(int *)v5->field_80 + 8;
    v8 = *(int *)v5->field_c4;
    v8[2] = *(int *)(*(int *)v5->field_80 + 8);
    v8[3] = v7[1];
    v8[4] = v7[2];
    *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 196) + 328) = *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 196) + 328) & 240 | 1;
    sub_48bc90(*(int *)(*(unsigned int *)&idx + 196));
    v0 = 10;
    *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 196) + 308) = (float)v0;
    v9 = (st_49a650_7 *)idx;
    *(char *)(*(int *)v9->field_c4 + 280) = *(char *)(*(int *)v9->field_c4 + 280) | 128;
    v10 = sub_48c010("sprites/candystart.spr", *(int *)v9->field_80 + 8, 1);
    v11 = (st_49a650_11 *)idx;
    v11->field_c8 = v10;
    v12 = *(int *)(*(int *)v11->field_80 + 520);
    if (v12)
    {
        v13 = g_6168dc(v12);
        *v10->field_110 = v13;
        *v10->field_114 = 2;
        *v10->field_194 = v12;
        *v10->field_108 = 12;
    }
    v14 = *(int *)(*(unsigned int *)&idx + 200);
    *v14->field_148 = 5;
    v0 = 0xff;
    v15 = (double)v0;
    *(float *)&*v14->padding_14c[4] = (float)v15;
    *(float *)&*v14->padding_14c[8] = (float)v15;
    *(float *)&*v14->padding_14c[12] = (float)v15;
    v0 = 254;
    *(float *)&*v14->padding_14c[0] = (float)v0;
    *v14->field_15c = 19;
    v16 = (st_49a650_12 *)idx;
    *(float *)(*(int *)v16->field_c8 + 312) = 10.0f;
    *(float *)(*(int *)v16->field_c8 + 324) = 0.20000000298023224f;
    sub_48df90(v16->field_c8);
    *(char *)(*(unsigned int *)&idx + 0xcc) = 0;
    return sub_489360(idx, "candyattack");
}

