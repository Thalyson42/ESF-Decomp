// GetFurthestScatterShot__22CShootScatterShotsTask @0x1508c0 size=271
typedef struct st_5508c0_2 {
    char padding_0[8];
    struct st_5508c0_3 *field_8;
    unsigned int field_c;
} st_5508c0_2;

typedef struct st_5508c0_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_5508c0_1;

typedef struct st_5508c0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[388];
    unsigned int field_198;
} st_5508c0_0;

typedef struct st_5508c0_3 {
    struct st_5508c0_1 *field_0;
} st_5508c0_3;

st_5508c0_0 ** GetFurthestScatterShot__22CShootScatterShotsTask(st_5508c0_2 *a0)
{
    st_5508c0_0 **v9;  // esi
    unsigned int *v10;  // edx
    unsigned int *v11;  // eax
    unsigned int *v12;  // edx
    float v13;  // 112
    float v14;  // 112
    float v15;  // 112
    double v16;  // mm7
    double v17;  // mm6
    float v0;  // [bp-0x6c]
    st_5508c0_0 **v1;  // [bp-0x68]
    float v2;  // [bp-0x58]
    float v3;  // [bp-0x44]
    float v4;  // [bp-0x40]
    float v5;  // [bp-0x3c]
    unsigned int v6;  // [bp-0x24]
    unsigned int v7;  // [bp-0x20]
    unsigned int v8;  // [bp-0x1c]

    v9 = NULL;
    v1 = NULL;
    v0 = 0;
    while (1)
    {
        v9 = UTIL_FindEntityByClassname(v9, "scattershot");
        if (!v9)
            break;
        if (!(char)IsNull(v9) && (v10 = *v9, v10[0x66] == a0->field_c))
        {
            v11 = v10 + 2;
            *(float *)&v6 = *(float *)&v10[2];
            *(float *)&v7 = *(float *)&v11[1];
            *(float *)&v8 = *(float *)&v11[2];
            v12 = *(int *)a0->field_8 + 8;
            v13 = *(float *)&v6 - *(float *)(*(int *)a0->field_8 + 8);
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
            v2 = (float)v16;
            if (v2 > v0)
            {
                v0 = v2;
                v1 = v9;
            }
        }
    }
    return v1;
}

