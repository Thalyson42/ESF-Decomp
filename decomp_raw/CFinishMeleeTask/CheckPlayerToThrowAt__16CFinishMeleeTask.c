// CheckPlayerToThrowAt__16CFinishMeleeTask @0x14a280 size=563
typedef struct st_54a280_6 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_54a280_6;

typedef struct st_54a280_3 {
    struct st_54a280_1 *field_0;
    char padding_4[2588];
    char field_a20;
    char padding_a21[3];
    struct st_54a280_4 *field_a24;
    char padding_a28[132];
    char field_aac;
} st_54a280_3;

typedef struct st_54a280_4 {
    struct st_54a280_2 *field_0;
} st_54a280_4;

typedef struct st_54a280_5 {
    char padding_0[420];
    unsigned int field_1a4;
} st_54a280_5;

typedef struct st_54a280_1 {
    char padding_0[428];
    unsigned int field_1ac;
} st_54a280_1;

typedef struct st_54a280_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[408];
    unsigned int field_1ac;
} st_54a280_0;

typedef struct st_54a280_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[408];
    unsigned int field_1ac;
} st_54a280_2;

extern unsigned int g_teamplay;
extern float g_vecZero;
extern float g_616790;
extern float g_616794;

int CheckPlayerToThrowAt__16CFinishMeleeTask(float idx)
{
    st_54a280_3 *v15;  // eax
    st_54a280_3 *v16;  // ecx
    st_54a280_6 **v17;  // esi
    unsigned int *v18;  // edx
    st_54a280_5 *v19;  // edx
    float v20;  // 112
    float v21;  // 112
    float v22;  // 112
    double v23;  // mm7
    double v24;  // mm6
    char v0;  // [bp-0x1a5]
    st_54a280_0 **v1;  // [bp-0x1a4]
    char i;  // [bp-0x19d]
    float v3;  // [bp-0x19c]
    float v4;  // [bp-0x198]
    float v5;  // [bp-0x164]
    float v6;  // [bp-0x160]
    float v7;  // [bp-0x15c]
    unsigned int v8;  // [bp-0x144]
    unsigned int v9;  // [bp-0x140]
    unsigned int v10;  // [bp-0x13c]
    float v11;  // [bp-0xa4]
    float v12;  // [bp-0xa0]
    float v13;  // [bp-0x9c]

    v3 = 9999.0f;
    v11 = g_vecZero;
    v12 = g_616790;
    v13 = g_616794;
    v1 = NULL;
    if (!*(char *)(*(int *)(*(unsigned int *)&idx + 8) + 2592))
        sub_48bf40(*(int *)(*(unsigned int *)&idx + 8));
    v15 = *(int *)(*(unsigned int *)&idx + 8);
    if (v15->field_aac)
    {
        i = 0;
        if (i < v15->field_aac)
        {
            do
            {
                v16 = v15;
                v17 = (&v16->field_a24)[i];
                v18 = &*v17->field_8;
                *(float *)&v8 = *(float *)&*v17->field_8;
                *(float *)&v9 = *(float *)&v18[1];
                *(float *)&v10 = *(float *)&v18[2];
                v19 = &v16->field_0->padding_0[8];
                v20 = *(float *)&v8 - *(float *)&v16->field_0->padding_0[8];
                v5 = v20;
                v21 = *(float *)&v9 - *(float *)&v19->padding_0[4];
                v6 = v21;
                v22 = *(float *)&v10 - *(float *)&v19->padding_0[8];
                v7 = v22;
                v23 = v20 * v20 + v21 * v21 + v22 * v22;
                v24 = sqrt(v23);
                if (isnan(v24))
                    sub_487dc0(*(unsigned int *)&v23);
                else
                    v23 = v24;
                v4 = (float)v23;
                if (v4 <= 1500.0f && v4 < v3 && (!g_teamplay || *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 428) != (*v17)[21].field_8))
                {
                    v0 = 0;
                    if (v4 <= 2300.0f || *(short *)(*(int *)(*(unsigned int *)&idx + 8) + 2980) > 0)
                        v0 = 1;
                    if (((char)sub_489330(*(int *)(*(unsigned int *)&idx + 8), v17) || v0) && (char)sub_489d60(idx, v17))
                    {
                        v3 = v4;
                        v1 = v17;
                    }
                }
                i += 1;
                v15 = *(int *)(*(unsigned int *)&idx + 8);
            } while (i < v15->field_aac);
        }
        if (v1)
            *(st_54a280_0 ***)(*(unsigned int *)&idx + 44) = v1;
    }
    return v15;
}

