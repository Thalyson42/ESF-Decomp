// GoToGatheredSpot__7CDBTask @0x16c4c0 size=520
typedef struct st_56c4c0_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_56c4c0_1;

typedef struct st_56c4c0_3 {
    struct st_56c4c0_1 *field_0;
} st_56c4c0_3;

typedef struct st_56c4c0_2 {
    char padding_0[2864];
    struct st_56c4c0_3 *field_b30;
    char padding_b34[5];
    char field_b39;
    char padding_b3a[1230];
    unsigned int field_1008;
    char padding_100c[24];
    unsigned int field_1024;
} st_56c4c0_2;

typedef struct st_56c4c0_0 {
    unsigned int field_0;
} st_56c4c0_0;

extern st_56c4c0_0 *g_engfuncs.pfnRandomLong;

int GoToGatheredSpot__7CDBTask(float idx)
{
    st_56c4c0_2 *v23;  // eax
    st_56c4c0_2 *v24;  // ecx
    st_56c4c0_2 *v33;  // esi
    unsigned int *v25;  // edx
    unsigned int *v26;  // edx
    float v27;  // 112
    float v28;  // 112
    float v29;  // 112
    double v30;  // mm7
    double v31;  // mm6
    unsigned int v32;  // eax
    unsigned int v0;  // [bp-0xe4]
    unsigned int v1;  // [bp-0xe0]
    unsigned int v2;  // [bp-0xdc]
    char v3;  // [bp-0xc4], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0xc0]
    unsigned int v5;  // [bp-0xbc]
    unsigned int v6;  // [bp-0xa4]
    unsigned int v7;  // [bp-0xa0]
    unsigned int v8;  // [bp-0x9c]
    float v9;  // [bp-0x98]
    float v10;  // [bp-0x84]
    float v11;  // [bp-0x80]
    float v12;  // [bp-0x7c]
    unsigned int v13;  // [bp-0x64]
    unsigned int v14;  // [bp-0x60]
    unsigned int v15;  // [bp-0x5c]
    unsigned int v16;  // [bp-0x44]
    unsigned int v17;  // [bp-0x40]
    unsigned int v18;  // [bp-0x3c]
    unsigned int v19;  // [bp-0x24]
    unsigned int v20;  // [bp-0x20]
    unsigned int v21;  // [bp-0x1c]

    v23 = *(int *)(*(unsigned int *)&idx + 8);
    if (!*(char *)(*(int *)(*(unsigned int *)&idx + 8) + 2873))
    {
        v23 = IsNull(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2864));
        if (!(char)v23)
        {
            v24 = *(int *)(*(unsigned int *)&idx + 8);
            v25 = *(int *)v24->field_b30 + 8;
            *(float *)&v19 = *(float *)(*(int *)v24->field_b30 + 8);
            *(float *)&v20 = *(float *)&v25[1];
            *(float *)&v21 = *(float *)&v25[2];
            if ((*(int *)(*(int *)&v24->padding_0[96] + 228))(v24, &v19))
            {
                if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 4104) != 0xffffffff)
                    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 8) + 4104) = 0xffffffff;
                v26 = *(int *)(*(unsigned int *)&idx + 12) + 0x88;
                *(float *)&v16 = *(float *)(*(int *)(*(unsigned int *)&idx + 12) + 0x88);
                *(float *)&v17 = *(float *)&v26[1];
                *(float *)&v18 = *(float *)&v26[2];
                v13 = v19;
                v14 = v20;
                v15 = v21;
                v27 = *(float *)&v13 - *(float *)&v16;
                v10 = v27;
                v28 = *(float *)&v14 - *(float *)&v17;
                v11 = v28;
                v29 = *(float *)&v15 - *(float *)&v18;
                v12 = v29;
                v30 = v27 * v27 + v28 * v28 + v29 * v29;
                v31 = sqrt(v30);
                if (isnan(v31))
                    sqrt(*(unsigned int *)&v30);
                else
                    v30 = v31;
                v9 = (float)v30;
                if (v9 < 100.0f)
                {
                    if ((int)g_engfuncs.pfnRandomLong(1, 100) <= 50)
                        *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 0x200) = *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 0x200) | 32;
                    v32 = CBot::ResetMoveSpeed(*(int *)(*(unsigned int *)&idx + 8));
                }
                else
                {
                    v6 = v19;
                    v7 = v20;
                    v8 = v21;
                    v33 = *(int *)(*(unsigned int *)&idx + 8);
                    v0 = v6;
                    v1 = v7;
                    v2 = v8;
                    CBot::GetAimAngles(&v3, v33, &v0);
                    *(unsigned int *)&v33->padding_b3a[214] = v3;
                    *(unsigned int *)&v33->padding_b3a[218] = v4;
                    v32 = v5;
                    *(unsigned int *)&v33->padding_b3a[222] = v32;
                }
                return _INSERT(v32, 0, 1);
            }
            else
            {
                v23 = *(int *)(*(unsigned int *)&idx + 8);
                if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 4132) != 0xffffffff)
                    return CDBTask::HeadToNextDBWP(idx);
            }
        }
    }
    return _INSERT(v23, 0, 0);
}

