// CheckStrafe__4CBot @0x1704a0 size=896
typedef struct st_5704a0_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[408];
    unsigned int field_1ac;
} st_5704a0_1;

typedef struct st_5704a0_3 {
    char padding_0[8];
    char field_8;
    char padding_9[419];
    unsigned int field_1ac;
    char padding_1b0[88];
    unsigned int field_208;
} st_5704a0_3;

typedef struct st_5704a0_0 {
    float field_0;
} st_5704a0_0;

typedef struct st_5704a0_2 {
    unsigned int field_0;
} st_5704a0_2;

extern unsigned int g_teamplay;
extern st_5704a0_2 *g_engfuncs.pfnRandomLong;
extern st_5704a0_2 *g_engfuncs.pfnRandomFloat;
extern st_5704a0_0 *gpGlobals;

double CheckStrafe__4CBot(float idx)
{
    int v19;  // eax
    double v20;  // mm7
    float v29;  // 112
    float v30;  // 112
    float v31;  // 112
    double v32;  // mm7
    double v33;  // mm6
    unsigned int *v34;  // edx
    char v35;  // al
    double v36;  // mm7
    char v21;  // al
    double v23;  // mm7
    unsigned int index;  // edi
    st_5704a0_3 *v25;  // ecx
    unsigned int *v26;  // edx
    unsigned int *v27;  // eax
    unsigned int *v28;  // eax
    char v2[16];  // [bp-0xcc], Other Possible Types: unsigned long long
    float v3;  // [bp-0xa8]
    float v4;  // [bp-0xa4]
    st_5704a0_1 **v5;  // [bp-0xa0]
    st_5704a0_1 **v6;  // [bp-0x9c]
    char v7;  // [bp-0x95]
    unsigned int v8;  // [bp-0x94]
    unsigned int v9;  // [bp-0x90]
    unsigned int v10;  // [bp-0x8c]
    float v11;  // [bp-0x74]
    float v12;  // [bp-0x70]
    float v13;  // [bp-0x6c]
    unsigned int v14;  // [bp-0x54]
    unsigned int v15;  // [bp-0x50]
    unsigned int v16;  // [bp-0x4c]
    int v17;  // [bp-0x8]

    v17 = CBasePlayer::GetMaxSpeed(idx);
    if (*(float *)&v17 == 0.0f)
        return (double)v17;
    if (!*(int *)(*(unsigned int *)&idx + 3428))
    {
        *(float *)&*(uint32_t *)v2 = idx;
        v19 = -CBasePlayer::GetMaxSpeed(*(uint32_t *)v2);
    }
    else
    {
        if (*(int *)(*(unsigned int *)&idx + 3428) != 1)
            goto LABEL_570516;
        *(float *)&*(uint32_t *)v2 = idx;
        v19 = CBasePlayer::GetMaxSpeed(*(uint32_t *)v2);
    }
    v17 = v19;
    *(float *)(*(unsigned int *)&idx + 3432) = (float)v17;
LABEL_570516:
    if (*(float *)(*(unsigned int *)&idx + 3424) > *(float *)gpGlobals)
        return *(float *)(*(unsigned int *)&idx + 3424);
    *(unsigned int *)(*(unsigned int *)&idx + 3428) = 2;
    v20 = 0.8 + *(float *)gpGlobals;
    *(float *)(*(unsigned int *)&idx + 3424) = (float)v20;
    *(uint64_t *)v2 = _INSERT(CONCAT(*(uint32_t *)v2, 0), 4, 2);
    *(uint32_t *)v2 = *(int *)(*(int *)idx + 520);
    v7 = CheckForCollide(*(uint32_t *)v2, *(unsigned int *)((void*)&*(uint64_t *)v2 + 4), 0x428c0000);
    v21 = CheckForCollide(*(int *)(*(int *)idx + 520), 4, 0x428c0000);
    if (v7)
    {
        if (!v21)
        {
            *(unsigned int *)(*(unsigned int *)&idx + 3428) = 1;
            strncpy(&v2[4], "333?", 4);
            g_engfuncs.pfnRandomFloat(0.30000001192092896f, *(unsigned int *)((void*)&*(uint64_t *)v2 + 4));
            v36 = 0.30000001192092896 + *(float *)gpGlobals;
            *(float *)(*(unsigned int *)&idx + 3424) = (float)v36;
            return v36;
        }
        if (v7)
            goto LABEL_5705e1;
    }
    if (v21)
        goto LABEL_5707c4;
LABEL_5705e1:
    if (!g_teamplay)
        return v20;
    v6 = NULL;
    v5 = NULL;
    if (!*(char *)(*(unsigned int *)&idx + 2592))
    {
        *(float *)&*(uint32_t *)v2 = idx;
        CBot::MakePlayerList(*(uint32_t *)v2);
    }
    v23 = 400.0;
    v3 = 400.0f;
    if (*(char *)(*(unsigned int *)&idx + 2732))
    {
        index = 0;
        if (*(char *)(*(unsigned int *)&idx + 2732))
        {
            do
            {
                v5 = *(int *)(*(unsigned int *)&idx + 2596 + index * 4);
                v25 = *(int *)idx;
                v26 = *(int *)*(int *)(*(unsigned int *)&idx + 2596 + index * 4);
                if (v25->field_1ac == v26[107])
                {
                    v27 = v26 + 2;
                    *(float *)&v14 = *(float *)&v26[2];
                    *(float *)&v15 = *(float *)&v27[1];
                    *(float *)&v16 = *(float *)&v27[2];
                    v28 = &v25->field_8;
                    v29 = *(float *)&v14 - *(float *)&v25->field_8;
                    v11 = v29;
                    v30 = *(float *)&v15 - *(float *)&v28[1];
                    v12 = v30;
                    v31 = *(float *)&v16 - *(float *)&v28[2];
                    v13 = v31;
                    v32 = v29 * v29 + v30 * v30 + v31 * v31;
                    v33 = sqrt(v32);
                    if (isnan(v33))
                    {
                        *(double *)&*(uint64_t *)v2 = v32;
                        sqrt(*(unsigned int *)&*(uint64_t *)v2);
                    }
                    else
                    {
                        v32 = v33;
                    }
                    v4 = (float)v32;
                    v23 = v4;
                    if (v23 <= 400.0)
                    {
                        *(uint64_t *)v2 = CONCAT(v5, *(unsigned int *)&idx);
                        if ((short)UTIL_GetHeadingPercentage(*(unsigned int *)&*(uint64_t *)v2, *(unsigned int *)((void*)&*(uint64_t *)v2 + 4)) > 64 || (*(uint64_t *)v2 = CONCAT(v5, *(unsigned int *)&idx), (char)EntIsInFieldOfView(*(unsigned int *)&*(uint64_t *)v2, *(unsigned int *)((void*)&*(uint64_t *)v2 + 4))))
                        {
                            v23 = v4;
                            if (v23 < v3)
                            {
                                v3 = (float)v23;
                                v6 = v5;
                            }
                        }
                    }
                }
            } while ((index += 1, (int)index < *(char *)(*(unsigned int *)&idx + 2732)));
        }
    }
    if (!v6)
        return v23;
    v34 = &*v5->field_8;
    *(float *)&v8 = *v5->field_8;
    *(float *)&v9 = *(float *)&v34[1];
    *(float *)&v10 = *(float *)&v34[2];
    v2 = _INSERT(*(uint64_t *)v2, 4, &v8);
    *(float *)&*(uint32_t *)v2 = idx;
    v35 = UTIL_EntDir(*(uint32_t *)v2, *(unsigned int *)((void*)&v2 + 4));
    if (!(v35 & 2) && (v35 & 4 || (v2 = _INSERT(CONCAT(*(uint32_t *)v2, 0), 4, 1), *(uint32_t *)v2 = 0, g_engfuncs.pfnRandomLong(*(uint32_t *)v2, *(unsigned int *)((void*)&v2 + 4)))))
    {
LABEL_5707c4:
        *(unsigned int *)(*(unsigned int *)&idx + 3428) = 0;
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 3428) = 1;
    }
    strncpy(&v2[4], "333?", 4);
    v2 = _INSERT(*(uint64_t *)v2, 0, 0.30000001192092896f);
    g_engfuncs.pfnRandomFloat(v2, *(unsigned int *)((void*)&v2 + 4));
    v36 = 0.30000001192092896 + *(float *)gpGlobals;
    *(float *)(*(unsigned int *)&idx + 3424) = (float)v36;
    return v36;
}

