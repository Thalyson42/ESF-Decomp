// TargetDistance__12CTalkMonster @0x1259d0 size=214
typedef struct st_5259d0_0 {
    char padding_0[140];
    struct st_5259d0_1 *field_8c;
} st_5259d0_0;

typedef struct st_5259d0_3 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_5259d0_3;

typedef struct st_5259d0_1 {
    unsigned int field_0;
} st_5259d0_1;

typedef struct st_5259d0_2 {
    char padding_0[96];
    struct st_5259d0_0 *field_60;
} st_5259d0_2;

double TargetDistance__12CTalkMonster(float a0)
{
    unsigned int v5;  // esi
    st_5259d0_2 *v6;  // edx
    st_5259d0_3 **v7;  // eax
    unsigned int *v8;  // esi
    unsigned int idx;  // edx
    float v10;  // 112
    float v11;  // 112
    float v12;  // 112
    double v13;  // mm7
    double v14;  // mm6
    double v0;  // [bp-0x38]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    float v3;  // [bp-0x1c]

    v5 = *(unsigned int *)&a0 + 272;
    if (!EHANDLE::__opi(v5))
        return 1000000.0;
    v6 = EHANDLE::__rf(v5);
    if (v6->field_60->field_8c(v6))
    {
        v7 = EHANDLE::__rf(*(unsigned int *)&a0 + 272);
        v8 = &*v7->field_8;
        idx = *(int *)a0 + 8;
        v10 = *v7->field_8 - *(float *)(*(int *)a0 + 8);
        v1 = v10;
        v11 = *(float *)&v8[1] - *(float *)(idx + 4);
        v2 = v11;
        v12 = *(float *)&v8[2] - *(float *)(idx + 8);
        v3 = v12;
        v13 = v10 * v10 + v11 * v11 + v12 * v12;
        v14 = sqrt(v13);
        if (isnan(v14))
            sqrt(*(unsigned int *)&v13);
        else
            v13 = v14;
        v0 = (float)v13;
        return v0;
    }
    return 1000000.0;
}

