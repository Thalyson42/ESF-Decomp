// BotShouldFallDown__4CBot @0x174a60 size=350
typedef struct st_574a60_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_574a60_2;

typedef struct st_574a60_3 {
    struct st_574a60_0 *field_0;
    char padding_4[2560];
    struct st_574a60_1 *field_a04;
    char padding_a08[16];
    unsigned short field_a18;
    char padding_a1a[2];
    unsigned int field_a1c;
    char padding_a20[332];
    struct st_574a60_4 *field_b6c;
} st_574a60_3;

typedef struct st_574a60_4 {
    struct st_574a60_2 *field_0;
} st_574a60_4;

typedef struct st_574a60_1 {
    char padding_0[46];
    short field_2e;
} st_574a60_1;

typedef struct st_574a60_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    int field_208;
} st_574a60_0;

typedef struct st_574a60_5 {
    unsigned int field_0;
} st_574a60_5;

extern st_574a60_5 *g_616928;

char BotShouldFallDown__4CBot(st_574a60_3 *a0)
{
    unsigned int v7;  // eax
    unsigned int *v8;  // edx
    unsigned int *v9;  // edx
    float v10;  // 112
    float v11;  // 112
    float v12;  // 112
    double v13;  // mm7
    double v14;  // mm6
    float v0;  // [bp-0x58]
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]

    if (a0->field_a18 - 60 > 98 || !(v7 = g_616928(1, 100), (int)g_616928(1, 100) <= a0->field_a04->field_2e))
        return 0;
    if ((a0->field_a1c == 3 || a0->field_a1c == 5) && a0->field_b6c)
    {
        v8 = *(int *)a0->field_b6c + 8;
        v4 = *(float *)(*(int *)a0->field_b6c + 8);
        v5 = *(float *)&v8[1];
        v6 = *(float *)&v8[2];
        v9 = &a0->field_0->field_8;
        v10 = v4 - a0->field_0->field_8;
        v1 = v10;
        v11 = v5 - *(float *)&v9[1];
        v2 = v11;
        v12 = v6 - *(float *)&v9[2];
        v3 = v12;
        v13 = v10 * v10 + v11 * v11 + v12 * v12;
        v14 = sqrt(v13);
        if (isnan(v14))
            sub_487dc0(*(unsigned int *)&v13);
        else
            v13 = v14;
        v0 = (float)v13;
        if (v0 >= 1000.0f || a0->field_0->field_10 - 350.0 <= *(float *)(*(int *)a0->field_b6c + 16))
            goto LABEL_574b89;
    }
    else
    {
LABEL_574b89:
        if (!(char)sub_487c70(a0->field_0->field_208, 64, 1200.0f))
            return 1;
    }
    return 0;
}

