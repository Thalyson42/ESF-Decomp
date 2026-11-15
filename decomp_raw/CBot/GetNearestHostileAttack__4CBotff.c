// GetNearestHostileAttack__4CBotff @0x154e20 size=414
typedef struct st_554e20_3 {
    char padding_0[228];
    struct st_554e20_4 *field_e4;
} st_554e20_3;

typedef struct st_554e20_5 {
    struct st_554e20_2 *field_0;
    char padding_4[92];
    struct st_554e20_3 *field_60;
    char padding_64[2456];
    char field_9fc;
} st_554e20_5;

typedef struct st_554e20_6 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[388];
    struct st_554e20_0 *field_190;
} st_554e20_6;

typedef struct st_554e20_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[388];
    struct st_554e20_0 *field_198;
} st_554e20_1;

typedef struct st_554e20_4 {
    unsigned int field_0;
} st_554e20_4;

typedef struct st_554e20_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[408];
    unsigned int field_1ac;
} st_554e20_2;

typedef struct st_554e20_0 {
    char padding_0[556];
    unsigned int field_22c;
} st_554e20_0;

extern unsigned int g_teamplay;

st_554e20_1 ** GetNearestHostileAttack__4CBotff(st_554e20_5 *a0, float a1, float a2)
{
    st_554e20_1 **v9;  // esi
    double v10;  // mm7
    st_554e20_6 *v11;  // edx
    unsigned int *v12;  // edx
    float v13;  // 112
    float v14;  // 112
    float v15;  // 112
    double v16;  // mm7
    double v17;  // mm6
    float v0;  // [bp-0x70]
    float v1;  // [bp-0x6c]
    st_554e20_1 **v2;  // [bp-0x68]
    float v3;  // [bp-0x44]
    float v4;  // [bp-0x40]
    float v5;  // [bp-0x3c]
    unsigned int v6;  // [bp-0x24]
    unsigned int v7;  // [bp-0x20]
    unsigned int v8;  // [bp-0x1c]

    v9 = NULL;
    v2 = NULL;
    v10 = 9999.900390625;
    while (1)
    {
        v1 = (float)v10;
        while (1)
        {
            do
            {
                v9 = UTIL_FindEntityByString(v9, "globalname", "magic_attack");
                if (!v9)
                    return v2;
            } while ((char)IsNull(v9) || g_teamplay && !(char)IsNull(*v9->field_198) && *v9->field_198->field_22c == a0->field_0->field_1ac);
            v11 = &*v9->field_8;
            *(float *)&v6 = *v9->field_8;
            *(float *)&v7 = *(float *)&v11->field_4;
            *(float *)&v8 = *(float *)&v11->field_8;
            v12 = &a0->field_0->field_8;
            v13 = *(float *)&v6 - a0->field_0->field_8;
            v3 = v13;
            v14 = *(float *)&v7 - *(float *)&v12[1];
            v4 = v14;
            v15 = *(float *)&v8 - *(float *)&v12[2];
            v5 = v15;
            v16 = v13 * v13 + v14 * v14 + v15 * v15;
            v17 = sqrt(v16);
            if (isnan(v17))
                sqrt(*(unsigned int *)&v16);
            else
                v16 = v17;
            v0 = (float)v16;
            if (v0 >= a1 && v0 <= a2)
            {
                if (v0 > v1 || (short)UTIL_GetHeadingPercentage(a0, v9) <= 64 || a0->field_9fc && !(char)EntIsInFieldOfView(a0, v9) || !a0->field_60->field_e4(a0, &*v9->field_8))
                    continue;
                v2 = v9;
                v10 = v0;
                break;
            }
        }
    }
}

