// TaskThink__22CControlFriezaDiscTask @0x151800 size=876
typedef struct st_551800_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_551800_2;

typedef struct st_551800_1 {
    struct st_551800_2 *field_0;
    char padding_4[2552];
    char field_9fc;
    char padding_9fd[367];
    struct st_551800_3 *field_b6c;
} st_551800_1;

typedef struct st_551800_4 {
    char padding_0[4];
    unsigned int field_4;
    struct st_551800_1 *field_8;
    struct st_551800_5 *field_c;
    char padding_10[8];
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
    unsigned int field_24;
} st_551800_4;

typedef struct st_551800_3 {
    struct st_551800_0 *field_0;
} st_551800_3;

typedef struct st_551800_7 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
} st_551800_7;

typedef struct st_551800_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
} st_551800_0;

typedef struct st_551800_5 {
    char padding_0[512];
    char field_200;
    char field_201;
} st_551800_5;

typedef struct st_551800_6 {
    float field_0;
} st_551800_6;

extern st_551800_6 *gpGlobals;

double TaskThink__22CControlFriezaDiscTask(st_551800_4 *a0)
{
    double v15;  // mm7
    st_551800_7 **v16;  // edi
    double v25;  // mm7
    double v26;  // mm6
    st_551800_1 *v27;  // ecx
    unsigned int *v28;  // edx
    unsigned int *v29;  // edx
    float v30;  // 112
    float v31;  // 112
    float v32;  // 112
    double v33;  // mm7
    double v34;  // mm6
    unsigned int *v17;  // edx
    unsigned int *v35;  // edx
    double v36;  // mm7
    double v37;  // mm6
    double v38;  // mm7
    unsigned int v39;  // 4112
    double v18;  // mm7
    double v19;  // mm6
    unsigned int *v20;  // edx
    unsigned int *v21;  // edx
    float v22;  // 112
    float v23;  // 112
    float v24;  // 112
    char v0;  // [bp-0x79]
    float v1;  // [bp-0x78]
    double v2;  // [bp-0x68], Other Possible Types: float
    float v3;  // [bp-0x54]
    float v4;  // [bp-0x50]
    float v5;  // [bp-0x4c]
    float v6;  // [bp-0x34]
    float v7;  // [bp-0x30]
    float v8;  // [bp-0x2c]
    unsigned int v9;  // [bp-0x28]
    float v10;  // [bp-0x28]
    unsigned int v11;  // [bp-0x24]
    unsigned int v12;  // [bp-0x20]
    float v13;  // [bp-0xc]
    unsigned int v14;  // [bp-0x8], Other Possible Types: int

    v15 = *(float *)&a0->field_24;
    if (v15 >= *(float *)gpGlobals && a0->field_8->field_b6c)
    {
        v14 = CBasePlayer::GetMaxSpeed(a0->field_8);
        if (0.0 < (double)v14)
            CBot::BotCombatMovement(a0->field_8);
        v16 = UTIL_GetAttackFromPlayerByName(a0->field_8, "Frieza Disc");
        if (!v16)
        {
            v15 = *(float *)&a0->field_24 - *(float *)gpGlobals;
            if (*(float *)&a0->field_20 - 1.0 <= v15)
                return v15;
        }
        else
        {
            v17 = *(int *)a0->field_8->field_b6c + 32;
            v18 = *(float *)(*(int *)a0->field_8->field_b6c + 32) * *(float *)(*(int *)a0->field_8->field_b6c + 32) + *(float *)&v17[1] * *(float *)&v17[1] + *(float *)&v17[2] * *(float *)&v17[2];
            v19 = sqrt(v18);
            if (isnan(v19))
                sqrt(*(unsigned int *)&v18);
            else
                v18 = v19;
            v10 = (float)v18;
            if (v10 > 550.0f)
                *(float *)&a0->field_18 = *(float *)gpGlobals;
            else
                *(float *)&a0->field_1c = *(float *)gpGlobals;
            v20 = &*v16->field_8;
            v6 = *v16->field_8;
            v7 = *(float *)&v20[1];
            v8 = *(float *)&v20[2];
            v21 = &a0->field_8->field_0->field_8;
            v22 = v6 - *(float *)&a0->field_8->field_0->field_8;
            v3 = v22;
            v23 = v7 - *(float *)&v21[1];
            v4 = v23;
            v24 = v8 - *(float *)&v21[2];
            v5 = v24;
            v25 = v22 * v22 + v23 * v23 + v24 * v24;
            v26 = sqrt(v25);
            if (isnan(v26))
                sqrt(*(unsigned int *)&v25);
            else
                v25 = v26;
            v1 = (float)v25;
            v27 = a0->field_8;
            v28 = *(int *)v27->field_b6c + 8;
            *(float *)&v9 = *(float *)(*(int *)v27->field_b6c + 8);
            *(float *)&v11 = *(float *)&v28[1];
            *(float *)&v12 = *(float *)&v28[2];
            v29 = &v27->field_0->field_8;
            v30 = *(float *)&v9 - *(float *)&v27->field_0->field_8;
            v3 = v30;
            v31 = *(float *)&v11 - *(float *)&v29[1];
            v4 = v31;
            v32 = *(float *)&v12 - *(float *)&v29[2];
            v5 = v32;
            v33 = v30 * v30 + v31 * v31 + v32 * v32;
            v34 = sqrt(v33);
            if (isnan(v34))
                sqrt(*(unsigned int *)&v33);
            else
                v33 = v34;
            v2 = (float)v33;
            v14 = a0->field_8->field_9fc + 1;
            v13 = (float)(v1 - (double)(int)v14 * 250.0 / 1.5);
            if (v13 > v2)
            {
                v14 = CBasePlayer::GetMaxSpeed(a0->field_8);
                if (*(float *)&v14 == 0.0f)
                    a0->field_c->field_201 = a0->field_c->field_201 | 8;
            }
            v35 = &*v16->field_20;
            v36 = *v16->field_20 * *v16->field_20 + *(float *)&v35[1] * *(float *)&v35[1] + *(float *)&v35[2] * *(float *)&v35[2];
            v37 = sqrt(v36);
            if (isnan(v37))
                sqrt(*(unsigned int *)&v36);
            else
                v36 = v37;
            v2 = (float)v36;
            if (v2 != 0.0f)
                return v2;
            v0 = 1;
            v38 = *(float *)gpGlobals - 0.5;
            if (v38 < *(float *)&a0->field_18)
            {
                v38 = *(float *)gpGlobals - 4.0;
                if (v38 < *(float *)&a0->field_1c)
                {
                    v39 = _ccall(15, 5, UTIL_GetHeadingPercentage(a0->field_8, a0->field_8->field_b6c) & 0xffff, 74, 0);
                    v0 = v39 & 1;
                }
            }
            if (!v0)
                return v38;
            if (!(char)CBot::CanAttackPlayer(a0->field_8, a0->field_8->field_b6c))
                v0 = 0;
            if (!v0)
                return v38;
            a0->field_c->field_200 = a0->field_c->field_200 | 1;
            return v38;
        }
    }
    a0->field_4 = 2;
    return v15;
}

