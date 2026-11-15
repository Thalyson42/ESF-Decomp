// MakeMonster__13CMonsterMaker @0xd3650 size=666
typedef struct st_4d3650_1 {
    char padding_0[280];
    struct st_4d3650_2 *field_118;
} st_4d3650_1;

typedef struct st_4d3650_2 {
    unsigned int field_0;
} st_4d3650_2;

typedef struct st_4d3650_4 {
    char padding_0[8];
    char field_8;
    char padding_9[7];
    unsigned int field_10;
    char padding_14[436];
    unsigned int field_1c8;
    char padding_1cc[4];
    unsigned int field_1d0;
} st_4d3650_4;

typedef struct st_4d3650_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[60];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[36];
    char field_80;
    char padding_81[279];
    unsigned int field_198;
    char padding_19c[4];
    char field_1a0;
    char padding_1a1[2];
    char field_1a3;
    char padding_1a4[40];
    unsigned int field_1cc;
    char padding_1d0[56];
    int field_208;
} st_4d3650_0;

typedef struct st_4d3650_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4d3650_3;

extern st_4d3650_1 g_engfuncs;
extern st_4d3650_2 *g_61681c;
extern st_4d3650_2 *g_6168b4;
extern st_4d3650_3 *gpGlobals;

unsigned int MakeMonster__13CMonsterMaker(float idx)
{
    st_4d3650_4 *v19;  // edx
    unsigned int *v20;  // ecx
    unsigned int v29;  // 4099
    st_4d3650_4 *v21;  // edx
    unsigned int *v22;  // eax
    unsigned int v23;  // eax
    st_4d3650_0 *v24;  // esi
    st_4d3650_0 *v25;  // esi
    st_4d3650_4 *v26;  // edx
    st_4d3650_4 *v27;  // edx
    unsigned int v28;  // eax
    unsigned int v0;  // [bp-0x94]
    st_4d3650_1 *v1;  // [bp-0x90]
    char v2;  // [bp-0x8c]
    float v3;  // [bp-0x84]
    float v4;  // [bp-0x80]
    float v5;  // [bp-0x7c]
    unsigned int v6;  // [bp-0x7c]
    float v7;  // [bp-0x78]
    float v8;  // [bp-0x74]
    float v9;  // [bp-0x70]
    unsigned int v10;  // [bp-0x70]
    float v11;  // [bp-0x6c]
    float v12;  // [bp-0x68]
    float v13;  // [bp-0x64]
    float v14;  // [bp-0x60]
    float v15;  // [bp-0x5c]
    char v16;  // [bp-0x44]
    unsigned int v17;  // [bp-0x28]

    if (*(int *)(*(unsigned int *)&idx + 692) > 0 && *(int *)(*(unsigned int *)&idx + 688) >= *(int *)(*(unsigned int *)&idx + 692))
        return *(int *)(*(unsigned int *)&idx + 688);
    if (*(float *)(*(unsigned int *)&idx + 696) == 0.0f)
    {
        v3 = 0;
        v4 = 0;
        v5 = 2048.0f;
        v19 = *(int *)idx;
        v20 = &v19->field_8;
        v13 = *(float *)&v19->field_8 - v3;
        v14 = *(float *)&v20[1] - v4;
        v15 = *(float *)&v20[2] - v5;
        sub_487b80(v20, &v13, 1, *(int *)&v19[1].padding_14[32], &v16);
        *(unsigned int *)(*(unsigned int *)&idx + 696) = v17;
    }
    v7 = 34.0f;
    v8 = 34.0f;
    v9 = 0;
    v21 = *(int *)idx;
    v22 = &v21->field_8;
    v3 = *(float *)&v21->field_8 - v7;
    v4 = *(float *)&v22[1] - v8;
    v5 = *(float *)&v22[2] - v9;
    v11 = 34.0f;
    v12 = 34.0f;
    v13 = 0;
    v7 = *(float *)&v21->field_8 + v11;
    v8 = *(float *)&v22[1] + v12;
    v9 = *(float *)&v22[2] + v13;
    *(float *)&v10 = *(float *)&v21->field_10;
    *(float *)&v6 = *(float *)(*(unsigned int *)&idx + 696);
    v23 = sub_48dfd0(&v2, 2, &v3, &v7, 40);
    if (v23)
        return v23;
    v1 = &g_engfuncs.padding_0[0];
    v24 = g_61681c(*(int *)(*(unsigned int *)&idx + 680));
    v0 = 0;
    if (!v24 || !v1->field_118(v24))
        v0 = 1;
    if (v0)
        return g_6168b4(1, "NULL Ent in MonsterMaker!\n");
    if (*(int *)(*(int *)idx + 456))
        sub_48c1b0(*(int *)(*(int *)idx + 456) + gpGlobals->field_98, idx, idx, 3, 0);
    v25 = (!v24 ? NULL : (struct st_4d3650_0 *)&v24->field_80);
    v26 = *(int *)idx;
    v25->field_8 = *(int *)&v26->field_8;
    v25->field_c = *(int *)&v26->padding_9[3];
    v25->field_10 = v26->field_10;
    v27 = *(int *)idx;
    v25->field_50 = *(int *)&v27->padding_14[60];
    v25->field_54 = *(int *)&v27->padding_14[64];
    v25->field_58 = *(int *)&v27->padding_14[0x44];
    v25->field_1a3 = v25->field_1a3 | 128;
    if (*(char *)(*(int *)idx + 416) & 8)
        v25->field_1a0 = v25->field_1a0 | 4;
    sub_488ec0(v25->field_208);
    v25->field_198 = *(int *)(*(int *)idx + 520);
    v28 = *(int *)(*(int *)idx + 464);
    if (v28)
        v25->field_1cc = v28;
    *(unsigned int *)(*(unsigned int *)&idx + 688) = *(int *)(*(unsigned int *)&idx + 688) + 1;
    v29 = *(int *)(*(unsigned int *)&idx + 684);
    *(unsigned int *)(*(unsigned int *)&idx + 684) = *(int *)(*(unsigned int *)&idx + 684) - 1;
    if (v29 != 1)
        return v28;
    *(unsigned int *)(*(unsigned int *)&idx + 12) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 16) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 28) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 32) = 0;
    return v28;
}

