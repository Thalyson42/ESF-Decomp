// Think__28CSwoopCloseToEnemyComboEntry @0x15c670 size=476
typedef struct st_55c670_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[244];
    unsigned int field_108;
} st_55c670_0;

typedef struct st_55c670_1 {
    struct st_55c670_0 *field_0;
    char padding_4[796];
    unsigned int field_320;
    char padding_324[1772];
    char field_a10;
    char padding_a11[3];
    float field_a14;
    char padding_a18[340];
    struct st_55c670_2 *field_b6c;
    char padding_b70[164];
    float field_c14;
    char padding_c18[984];
    unsigned int field_ff0;
} st_55c670_1;

typedef struct st_55c670_2 {
    struct st_55c670_0 *field_0;
} st_55c670_2;

typedef struct st_55c670_3 {
    unsigned int field_0;
    struct st_55c670_1 *field_4;
} st_55c670_3;

typedef struct st_55c670_4 {
    float field_0;
} st_55c670_4;

extern st_55c670_4 *gpGlobals;

double Think__28CSwoopCloseToEnemyComboEntry(st_55c670_3 *a0)
{
    st_55c670_1 *v8;  // ecx
    unsigned int *v9;  // edx
    st_55c670_1 *v18;  // edx
    double v19;  // mm7
    unsigned int *v10;  // edx
    float v11;  // 112
    float v12;  // 112
    float v13;  // 112
    double v14;  // mm7
    double v15;  // mm6
    double v16;  // mm7
    double v17;  // mm7
    float v0;  // [bp-0x68]
    float v1;  // [bp-0x58]
    float v2;  // [bp-0x44]
    float v3;  // [bp-0x40]
    float v4;  // [bp-0x3c]
    float v5;  // [bp-0x24]
    float v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]

    if (a0->field_4->field_b6c && a0->field_4->field_0->field_108 == 11)
    {
        v0 = (float)(*(int *)(*(int *)a0->field_4->field_b6c + 264) == 11 ? 600.0 : 450.0);
        v8 = a0->field_4;
        v9 = *(int *)v8->field_b6c + 8;
        v5 = *(float *)(*(int *)v8->field_b6c + 8);
        v6 = *(float *)&v9[1];
        v7 = *(float *)&v9[2];
        v10 = &v8->field_0->field_8;
        v11 = v5 - v8->field_0->field_8;
        v2 = v11;
        v12 = v6 - *(float *)&v10[1];
        v3 = v12;
        v13 = v7 - *(float *)&v10[2];
        v4 = v13;
        v14 = v11 * v11 + v12 * v12 + v13 * v13;
        v15 = sqrt(v14);
        if (isnan(v15))
            sqrt(*(unsigned int *)&v14);
        else
            v14 = v15;
        v1 = (float)v14;
        v16 = v1;
        if (v16 <= v0)
        {
            a0->field_0 = 2;
            if (!a0->field_4->field_320)
                return v16;
            CBasePlayer::StopFly(a0->field_4);
            a0->field_4->field_a10 = 0;
            v17 = *(float *)gpGlobals + 0.5;
            a0->field_4->field_a14 = (float)v17;
            return v17;
        }
        else
        {
            CBot::AimAtEnemy(a0->field_4, a0->field_4->field_b6c);
            v18 = a0->field_4;
            if (*(int *)(*(int *)v18->field_b6c + 264) == 11)
            {
                v16 = (!v18->field_ff0 ? v18->field_c14 + 30.0 : a0->field_4->field_c14 - 30.0);
                UTIL_WrapAngle((float)v16);
                a0->field_4->field_c14 = (float)v16;
            }
            CBot::ResetMoveSpeed(a0->field_4);
            CBot::SetMoveDir(a0->field_4, 16);
            return v16;
        }
    }
    a0->field_0 = 2;
    return v19;
}

