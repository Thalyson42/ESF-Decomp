// DrainAttack__14CDrainEntsTaskP11CBaseEntity @0x152e40 size=756
typedef struct st_552e40_11 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char field_c;
} st_552e40_11;

typedef struct st_552e40_2 {
    struct st_552e40_3 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
} st_552e40_2;

typedef struct st_552e40_8 {
    struct st_552e40_3 *field_0;
    float field_4;
    float field_8;
    float field_c;
    char field_10;
} st_552e40_8;

typedef struct st_552e40_0 {
    char padding_0[1860];
    int field_744;
} st_552e40_0;

typedef struct st_552e40_5 {
    char padding_0[8];
    struct st_552e40_0 *field_8;
    int field_c;
    char padding_10[12];
    struct st_552e40_6 *field_1c;
} st_552e40_5;

typedef struct st_552e40_3 {
    struct st_552e40_1 *field_0;
} st_552e40_3;

typedef struct st_552e40_10 {
    char padding_0[448];
    unsigned int field_1c0;
} st_552e40_10;

typedef struct st_552e40_9 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[436];
    unsigned int field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_552e40_9;

typedef struct st_552e40_1 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[436];
    float field_1e0;
    char padding_1e4[36];
    int field_208;
} st_552e40_1;

typedef struct st_552e40_6 {
    struct st_552e40_4 *field_0;
    struct st_552e40_4 *field_4;
} st_552e40_6;

typedef struct st_552e40_4 {
    struct st_552e40_2 *field_0;
    struct st_552e40_4 *field_4;
    struct st_552e40_4 *field_8;
} st_552e40_4;

double DrainAttack__14CDrainEntsTaskP11CBaseEntity(st_552e40_5 *a0, st_552e40_1 **a1)
{
    st_552e40_4 *iter;  // eax
    st_552e40_8 *v6;  // esi
    double v15;  // mm7
    double v16;  // mm6
    st_552e40_9 **v17;  // edx
    st_552e40_9 **v7;  // eax
    st_552e40_11 *v8;  // ecx
    unsigned int *v9;  // edx
    st_552e40_4 **v10;  // esi
    st_552e40_4 *v11;  // edi
    st_552e40_4 *v12;  // edi
    st_552e40_4 *v13;  // eax
    st_552e40_10 *v14;  // edx
    char v0;  // [bp-0x45]
    st_552e40_4 *v1;  // [bp-0x44]
    char v2;  // [bp-0x3d]
    st_552e40_8 *v3;  // [bp-0x3c]
    float v4;  // [bp-0x18]

    iter = a0->field_1c->field_0;
    for (v3 = NULL; iter; iter = iter->field_4)
    {
        if (iter->field_0->field_0 == a1)
        {
            iter->field_0->field_10 = 1;
            v3 = iter->field_0;
            break;
        }
    }
    if (!v3)
    {
        v6 = __builtin_new(20);
        v7 = a1;
        v6->field_0 = v7;
        v8 = &v6->field_4;
        v9 = &*v7->field_20;
        v6->field_4 = *v7->field_20;
        *(float *)&v8->field_4 = *(float *)&v9[1];
        *(float *)&v8->field_8 = *(float *)&v9[2];
        v6->field_10 = 1;
        v3 = v6;
        v10 = a0->field_1c;
        if (!*v10)
        {
            v11 = __builtin_new(12);
            v2 = 1;
            v11->field_4 = NULL;
            v11->field_8 = NULL;
            memset@GLIBC_2.0(v11, 0, 4);
            v2 = 0;
            *v10 = v11;
            if (v2)
                __builtin_delete(v11);
            *v10->field_0 = v3;
            *v10->field_4 = NULL;
            *v10->field_8 = NULL;
            v10[1] = *v10;
        }
        else
        {
            v1 = v10[1];
            v12 = __builtin_new(12);
            v0 = 1;
            v12->field_4 = NULL;
            v12->field_8 = NULL;
            memset@GLIBC_2.0(v12, 0, 4);
            v0 = 0;
            v1->field_4 = v12;
            if (v0)
                __builtin_delete(v12);
            v10[1]->field_4->field_8 = v10[1];
            v13 = v10[1]->field_4;
            v10[1] = v13;
            v13->field_0 = v3;
            v10[1]->field_4 = NULL;
        }
    }
    v14 = &*a1->field_20;
    v15 = *a1->field_20 * *a1->field_20 + *(float *)&v14->padding_0[4] * *(float *)&v14->padding_0[4] + *(float *)&v14->padding_0[8] * *(float *)&v14->padding_0[8];
    v16 = sqrt(v15);
    if (isnan(v16))
        sqrt(*(unsigned int *)&v15);
    else
        v15 = v16;
    v4 = (float)v15;
    if (0.0 < v4)
    {
        v17 = a1;
        *v17->field_20 = (float)(v3->field_4 / 100.0);
        *v17->field_24 = (float)(v3->field_8 / 100.0);
        *v17->field_28 = (float)(v3->field_c / 100.0);
    }
    *a1->field_1e0 = (float)(*a1->field_1e0 - (double)a0->field_8->field_744 / 1000000.0 * 0.375);
    CBasePlayer::UseKi(a0->field_8, 5);
    CBasePlayer::IncreasePL(a0->field_8, 500);
    if (2.0 >= *a1->field_1e0)
    {
        *(unsigned int *)&*a1->field_1e0 = 0x3f800000;
        DispatchTouch(*a1->field_208, a0->field_c);
    }
    return 2.0;
}

