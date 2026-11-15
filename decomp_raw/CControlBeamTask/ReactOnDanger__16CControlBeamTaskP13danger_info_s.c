// ReactOnDanger__16CControlBeamTaskP13danger_info_s @0x1791c0 size=511
typedef struct st_5791c0_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_5791c0_2;

typedef struct st_5791c0_0 {
    char padding_0[24];
    short field_18;
} st_5791c0_0;

typedef struct st_5791c0_4 {
    char padding_0[4];
    unsigned int field_4;
    struct st_5791c0_1 *field_8;
    struct st_5791c0_3 *field_c;
    char padding_10[12];
    char field_1c;
} st_5791c0_4;

typedef struct st_5791c0_1 {
    struct st_5791c0_2 *field_0;
    char padding_4[2584];
    unsigned int field_a1c;
    char padding_a20[332];
    unsigned int field_b6c;
    char padding_b70[160];
    unsigned int field_c10;
    unsigned int field_c14;
    unsigned int field_c18;
    char padding_c1c[1100];
    unsigned int field_1068;
} st_5791c0_1;

typedef struct st_5791c0_5 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[460];
    float field_1e0;
} st_5791c0_5;

typedef struct st_5791c0_3 {
    char padding_0[513];
    char field_201;
} st_5791c0_3;

int ReactOnDanger__16CControlBeamTaskP13danger_info_s(st_5791c0_4 *a0, st_5791c0_0 *a1)
{
    st_5791c0_5 **v22;  // edi
    unsigned int *v23;  // edx
    unsigned int *v32;  // edx
    st_5791c0_1 *v33;  // esi
    unsigned int v34;  // eax
    unsigned int v35;  // eax
    unsigned int *v24;  // edx
    float v25;  // 112
    float v26;  // 112
    float v27;  // 112
    double v28;  // mm7
    double v29;  // mm6
    st_5791c0_1 *v30;  // eax
    st_5791c0_2 **v31;  // esi
    st_5791c0_5 **v0;  // [bp-0xbc], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v1;  // [bp-0xbc]
    float v2;  // [bp-0x8c]
    float v3;  // [bp-0x88]
    float v4;  // [bp-0x84]
    float v5;  // [bp-0x80]
    float v6;  // [bp-0x7c]
    float v7;  // [bp-0x78]
    float v8;  // [bp-0x74]
    float v9;  // [bp-0x70]
    float v10;  // [bp-0x64]
    float v11;  // [bp-0x60]
    float v12;  // [bp-0x5c]
    char v13;  // [bp-0x58], Other Possible Types: unsigned int
    unsigned int v14;  // [bp-0x54]
    unsigned int v15;  // [bp-0x50]
    unsigned int v16;  // [bp-0x44]
    unsigned int v17;  // [bp-0x40]
    unsigned int v18;  // [bp-0x3c]
    unsigned int v19;  // [bp-0x24]
    unsigned int v20;  // [bp-0x20]
    unsigned int v21;  // [bp-0x1c]

    if (a1->field_18 > 59)
    {
        v22 = UTIL_GetLastAttackFromPlayer(a0->field_8);
        if (!v22)
        {
            a0->field_c->field_201 = a0->field_c->field_201 | 8;
            return v34;
        }
        v23 = &*v22->field_8;
        *(float *)&v19 = *v22->field_8;
        *(float *)&v20 = *(float *)&v23[1];
        *(float *)&v21 = *(float *)&v23[2];
        *(float *)&v16 = *v22->field_8;
        *(float *)&v17 = *(float *)&v23[1];
        *(float *)&v18 = *(float *)&v23[2];
        v24 = &a0->field_8->field_0->field_8;
        v25 = *v22->field_8 - a0->field_8->field_0->field_8;
        v10 = v25;
        v26 = *(float *)&v23[1] - *(float *)&v24[1];
        v11 = v26;
        v27 = *(float *)&v18 - *(float *)&v24[2];
        v12 = v27;
        v28 = v25 * v25 + v26 * v26 + v27 * v27;
        v29 = sqrt(v28);
        if (isnan(v29))
            sqrt(*(unsigned int *)&v28);
        else
            v28 = v29;
        v3 = (float)v28;
        v2 = (float)(*v22->field_1e0 * 12.5);
        v30 = a0->field_8;
        if (v30->field_b6c && v30->field_a1c == 1 && !(v0 = v30->field_b6c, v31 = UTIL_GetLastAttackFromPlayer(v0), !v31 || (v1 = _INSERT(CONCAT(v0, 0), 4, v31), v0 = v22, !(char)EntIsInFieldOfView(v0, *(unsigned int *)((void*)&v1 + 4)))))
        {
            v32 = &*v31->field_8;
            v4 = *v31->field_8;
            v5 = *(float *)&v32[1];
            v6 = *(float *)&v32[2];
            v33 = a0->field_8;
            v7 = *v31->field_8;
            v8 = *(float *)&v32[1];
            v9 = *(float *)&v32[2];
            CBot::GetAimAngles(&v13, v33, &v7);
            v33->field_c10 = v13;
            v33->field_c14 = v14;
            v33->field_c18 = v15;
            a0->field_1c = 1;
        }
        else if (a1->field_18 <= 159)
        {
            v0 = _INSERT(CONCAT(v0, 0), 4, 1);
            *(struct st_5791c0_1 **)&v0 = a0->field_8;
            if ((char)CBot::BotCanBeamJump(v0, *(unsigned int *)((void*)&v0 + 4)))
            {
                a0->field_8->field_1068 = 22;
                a0->field_4 = 2;
            }
            else if (v3 > v2 && a1->field_18 > 99)
            {
                a0->field_c->field_201 = a0->field_c->field_201 | 8;
                return v34;
            }
        }
        else
        {
            a0->field_c->field_201 = a0->field_c->field_201 | 8;
            return v34;
        }
    }
    v35 = _INSERT(v15, 0, 0);
    return v35;
}

