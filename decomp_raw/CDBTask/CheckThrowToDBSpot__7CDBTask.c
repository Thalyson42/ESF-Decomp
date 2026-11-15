// CheckThrowToDBSpot__7CDBTask @0x16c7f0 size=490
typedef struct st_56c7f0_2 {
    char padding_0[8];
    struct st_56c7f0_3 *field_8;
    struct st_56c7f0_1 *field_c;
    char padding_10[8];
    float field_18;
} st_56c7f0_2;

typedef struct st_56c7f0_3 {
    struct st_56c7f0_0 *field_0;
} st_56c7f0_3;

typedef struct st_56c7f0_5 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[264];
    unsigned int field_114;
    char padding_118[97];
    char field_179;
    char padding_17a[35];
    char field_19d;
} st_56c7f0_5;

typedef struct st_56c7f0_0 {
    char padding_0[428];
    unsigned int field_1ac;
} st_56c7f0_0;

typedef struct st_56c7f0_1 {
    char padding_0[136];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
    char padding_94[264];
    unsigned int field_19c;
    char padding_1a0[97];
    char field_201;
    char padding_202[35];
    char field_225;
} st_56c7f0_1;

typedef struct st_56c7f0_4 {
    float field_0;
} st_56c7f0_4;

extern st_56c7f0_4 *gpGlobals;
extern float GatherDBPosForTeamGood[3];
extern float GatherDBPosForTeamEvil[3];

double CheckThrowToDBSpot__7CDBTask(st_56c7f0_2 *a0)
{
    float *v14;  // edx
    st_56c7f0_5 *v15;  // edx
    float v16;  // 112
    float v17;  // 112
    float v18;  // 112
    double v19;  // mm7
    double v20;  // mm6
    double v21;  // mm7
    st_56c7f0_1 *v22;  // edx
    unsigned int v0;  // [bp-0xd8]
    float v1;  // [bp-0x98]
    float v2;  // [bp-0x84]
    float v3;  // [bp-0x80]
    float v4;  // [bp-0x7c]
    unsigned int v5;  // [bp-0x64]
    unsigned int v6;  // [bp-0x60]
    unsigned int v7;  // [bp-0x5c]
    unsigned int v8;  // [bp-0x44]
    unsigned int v9;  // [bp-0x40]
    unsigned int v10;  // [bp-0x3c]
    unsigned int v11;  // [bp-0x24]
    unsigned int v12;  // [bp-0x20]
    unsigned int v13;  // [bp-0x1c]

    v14 = (*(int *)(*(int *)a0->field_8 + 428) == 1 ? &GatherDBPosForTeamGood[0] : &GatherDBPosForTeamEvil[0]);
    *(float *)&v11 = *v14;
    *(float *)&v12 = v14[1];
    *(float *)&v13 = v14[2];
    v15 = &a0->field_c->field_88;
    *(float *)&v8 = *(float *)&a0->field_c->field_88;
    *(float *)&v9 = *(float *)&v15->field_4;
    *(float *)&v10 = *(float *)&v15->field_8;
    v5 = v11;
    v6 = v12;
    v7 = v13;
    v16 = *(float *)&v5 - *(float *)&v8;
    v2 = v16;
    v17 = *(float *)&v6 - *(float *)&v9;
    v3 = v17;
    v18 = *(float *)&v7 - *(float *)&v10;
    v4 = v18;
    v19 = v16 * v16 + v17 * v17 + v18 * v18;
    v20 = sqrt(v19);
    if (isnan(v20))
        sqrt(*(unsigned int *)&v19);
    else
        v19 = v20;
    v1 = (float)v19;
    v21 = v1;
    if (v21 >= 150.0)
        return v21;
    v22 = a0->field_c;
    if (0.1 < *(float *)&v22->field_19c && v22->field_225 & 2)
    {
        v22->field_201 = v22->field_201 | 8;
        return v21;
    }
    if (v21 < 125.0)
    {
        v0 = 8;
    }
    else
    {
        CBot::ResetMoveSpeed(a0->field_8);
        v21 = *(float *)&a0->field_c->field_90 - 175.0;
        if (v21 >= *(float *)&v13)
        {
            v0 = 32;
        }
        else
        {
            v21 = *(float *)&a0->field_c->field_90 - 200.0;
            if (v21 >= *(float *)&v13)
            {
                v0 = 64;
            }
            else
            {
                v21 = a0->field_18;
                if (v21 == 0.0)
                {
                    v21 = *(float *)gpGlobals + 0.25;
                    a0->field_18 = (float)v21;
                    return v21;
                }
                else if (v21 < *(float *)gpGlobals)
                {
                    a0->field_c->field_201 = a0->field_c->field_201 | 8;
                    return v21;
                }
                else
                {
                    return v21;
                }
            }
        }
    }
    CBot::SetMoveDir(a0->field_8);
    return v21;
}

