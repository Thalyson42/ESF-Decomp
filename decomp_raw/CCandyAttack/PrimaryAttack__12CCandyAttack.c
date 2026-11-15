// PrimaryAttack__12CCandyAttack @0x9aa70 size=714
typedef struct st_49aa70_7 {
    char padding_0[124];
    struct st_49aa70_6 *field_7c;
} st_49aa70_7;

typedef struct st_49aa70_4 {
    char padding_0[52];
    struct st_49aa70_5 *field_34;
    char padding_38[104];
    struct st_49aa70_5 *field_a0;
} st_49aa70_4;

typedef struct st_49aa70_9 {
    char padding_0[196];
    struct st_49aa70_2 *field_c4;
} st_49aa70_9;

typedef struct st_49aa70_1 {
    char padding_0[128];
    struct st_49aa70_2 *field_80;
    char padding_84[72];
    char field_cc;
} st_49aa70_1;

typedef struct st_49aa70_8 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[260];
    char field_118;
} st_49aa70_8;

typedef struct st_49aa70_2 {
    struct st_49aa70_0 *field_0;
} st_49aa70_2;

typedef struct st_49aa70_5 {
    unsigned int field_0;
} st_49aa70_5;

typedef struct st_49aa70_0 {
    char padding_0[520];
    int field_208;
} st_49aa70_0;

typedef struct st_49aa70_6 {
    char padding_0[96];
    struct st_49aa70_4 *field_60;
    char padding_64[896];
    unsigned int field_3e4;
} st_49aa70_6;

typedef struct st_49aa70_3 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_49aa70_3;

extern st_49aa70_5 *g_6168d4;
extern st_49aa70_3 *gpGlobals;

double PrimaryAttack__12CCandyAttack(float idx)
{
    double v21;  // mm7
    st_49aa70_1 *v22;  // ecx
    st_49aa70_9 *v31;  // ecx
    st_49aa70_8 *v32;  // edx
    double v33;  // mm0
    unsigned int *v23;  // edx
    double v24;  // mm5
    double v25;  // mm5
    double v26;  // mm7
    st_49aa70_7 *v27;  // eax
    st_49aa70_6 *v28;  // eax
    st_49aa70_6 *v29;  // edi
    unsigned int v30;  // eax
    unsigned int v0;  // [bp-0x100]
    float v1;  // [bp-0xd8]
    float v2;  // [bp-0xc4]
    float v3;  // [bp-0xc0]
    float v4;  // [bp-0xbc]
    float v5;  // [bp-0xa4]
    float v6;  // [bp-0xa0]
    float v7;  // [bp-0x9c]
    char v8;  // [bp-0x84]
    unsigned int v9;  // [bp-0x70]
    unsigned int v10;  // [bp-0x6c]
    unsigned int v11;  // [bp-0x68]
    st_49aa70_7 *v12;  // [bp-0x54]
    char v13;  // [bp-0x44]
    float v14;  // [bp-0x44]
    float v15;  // [bp-0x40]
    float v16;  // [bp-0x3c]
    float v17;  // [bp-0x24]
    float v18;  // [bp-0x20]
    float v19;  // [bp-0x1c]

    if (!sub_48c980(*(int *)(*(unsigned int *)&idx + 128), 15))
    {
        sub_48df90(*(int *)(*(unsigned int *)&idx + 200));
        *(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 196) + 280) = *(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 196) + 280) | 128;
        return v21;
    }
    v22 = (st_49aa70_1 *)idx;
    if (!v22->field_cc)
    {
        v22->field_cc = 1;
        sub_489390(*(int *)(*(int *)v22->field_80 + 520), 1, "weapons/candyattack.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    }
    sub_48d680(*(int *)(*(unsigned int *)&idx + 128), 5);
    sub_48a800(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
    v23 = &gpGlobals->field_28;
    v17 = gpGlobals->field_28;
    v18 = *(float *)&v23[1];
    v19 = *(float *)&v23[2];
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v13, *(int *)(*(unsigned int *)&idx + 128));
    v24 = 500.0 * v17;
    v2 = (float)v24;
    v25 = 500.0 * v18;
    v3 = (float)v25;
    v4 = (float)(500.0 * v19);
    v26 = v16 + v4;
    v5 = (float)(v24 + v14);
    v6 = (float)(v25 + v15);
    v7 = (float)v26;
    sub_487b80(&v13, &v5, 0, *(int *)(*(int *)idx + 520), &v8);
    v27 = v12;
    if (v27 || (v27 = g_6168d4(0), v27))
        v28 = v27->field_7c;
    else
        v28 = NULL;
    v29 = v28;
    v1 = 1.0;
    if (v29 && v29->field_60->field_a0(v29) && v29->field_3e4)
    {
        v30 = 0;
        if (v29->field_3e4 == 3 || v29->field_3e4 == 5 || v29->field_3e4 == 4)
            v30 = 1;
        v26 = (!v30 ? 0.25 : 0.5);
        v1 = (float)v26;
    }
    v0 = 0x100000;
    sub_48aef0(idx);
    v29->field_60->field_34(v29, *(int *)*(int *)(*(unsigned int *)&idx + 128), *(int *)*(int *)(*(unsigned int *)&idx + 128), (float)(v26 * 6.0 * v1));
    sub_487b90(*(int *)(*(unsigned int *)&idx + 200));
    v31 = (st_49aa70_9 *)idx;
    *(char *)(*(int *)v31->field_c4 + 280) = *(char *)(*(int *)v31->field_c4 + 280) & 127;
    v32 = *(int *)v31->field_c4;
    v32->field_8 = v9;
    v32->field_c = v10;
    v32->field_10 = v11;
    sub_488640();
    *(float *)(*(unsigned int *)&idx + 156) = (float)(v33 + 0.2);
    return 0.2;
}

