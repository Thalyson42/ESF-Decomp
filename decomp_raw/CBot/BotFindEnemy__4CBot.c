// BotFindEnemy__4CBot @0x153990 size=1338
typedef struct st_553990_3 {
    struct st_553990_0 *field_0;
    char padding_4[92];
    struct st_553990_1 *field_60;
    char padding_64[1760];
    unsigned int field_744;
    char padding_748[40];
    unsigned int field_770;
} st_553990_3;

typedef struct st_553990_1 {
    char padding_0[208];
    struct st_553990_2 *field_d0;
} st_553990_1;

typedef struct st_553990_7 {
    char padding_0[2732];
    char field_aac;
} st_553990_7;

typedef struct st_553990_6 {
    char padding_0[2592];
    char field_a20;
    char padding_a21[283];
    unsigned int field_b3c;
} st_553990_6;

typedef struct st_553990_4 {
    char padding_0[2876];
    float field_b3c;
    char padding_b40[44];
    unsigned int field_b6c;
} st_553990_4;

typedef struct st_553990_2 {
    unsigned int field_0;
} st_553990_2;

typedef struct st_553990_8 {
    char padding_0[420];
    unsigned int field_1a4;
} st_553990_8;

typedef struct st_553990_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[408];
    unsigned int field_1ac;
} st_553990_0;

typedef struct st_553990_9 {
    char padding_0[8];
    unsigned int field_8;
} st_553990_9;

typedef struct st_553990_5 {
    unsigned int field_0;
    char padding_4[140];
    int field_90;
} st_553990_5;

extern unsigned int g_teamplay;
extern st_553990_2 *g_engfuncs.pfnRandomLong;
extern st_553990_2 *g_engfuncs.pfnRandomFloat;
extern st_553990_5 *gpGlobals;
extern char BotManager+3398;

st_553990_3 * BotFindEnemy__4CBot(float a0)
{
    st_553990_4 *v27;  // eax
    st_553990_6 *v28;  // ecx
    float v37;  // 112
    float v38;  // 112
    double v39;  // mm7
    double v40;  // mm6
    int iter;  // edi
    float v42;  // esi
    unsigned int *v43;  // ecx
    st_553990_7 *v29;  // eax
    float v30;  // 120
    float v31;  // 120
    double v32;  // mm7
    double v33;  // mm6
    st_553990_9 *v34;  // edx
    st_553990_8 *v35;  // edx
    float v36;  // 112
    unsigned int v0;  // [bp-0xe8]
    char *v1;  // [bp-0xe4]
    char v2;  // [bp-0xad]
    unsigned int v3;  // [bp-0xac]
    st_553990_3 *v4;  // [bp-0xa8]
    char v5;  // [bp-0xa3]
    char v6;  // [bp-0xa2]
    char v7;  // [bp-0xa1]
    unsigned int idx;  // [bp-0xa0]
    float v9;  // [bp-0x9c]
    st_553990_3 *v10;  // [bp-0x98]
    float v11;  // [bp-0x88]
    float v12;  // [bp-0x74]
    float v13;  // [bp-0x70]
    float v14;  // [bp-0x6c]
    float v15;  // [bp-0x44]
    float v16;  // [bp-0x40]
    unsigned int v17;  // [bp-0x3c]
    unsigned int v18;  // [bp-0x38]
    unsigned int v19;  // [bp-0x34]
    float v20;  // [bp-0x34]
    unsigned int v21;  // [bp-0x30]
    float v22;  // [bp-0x2c]
    float v23;  // [bp-0x24]
    float v24;  // [bp-0x20]
    unsigned int v25;  // [bp-0x1c]

    if (!BotManager+3398)
        return NULL;
    v10 = NULL;
    *(unsigned short *)&v3 = 0xff9c;
    v27 = (st_553990_4 *)a0;
    v27->field_b6c = 0;
    if (v27->field_b3c <= *(float *)&gpGlobals->field_0)
    {
        g_engfuncs.pfnRandomFloat(*(float *)(*(int *)(*(unsigned int *)&a0 + 0xa00) + 48), *(float *)(*(int *)(*(unsigned int *)&a0 + 0xa00) + 52));
        v28 = (st_553990_6 *)a0;
        *(float *)&v28->field_b3c = *(float *)(*(int *)(*(unsigned int *)&a0 + 0xa00) + 48) + *(float *)&gpGlobals->field_0;
        if (!v28->field_a20)
            CBot::MakePlayerList(v28);
        v29 = (st_553990_7 *)a0;
        if (v29->field_aac)
        {
            v9 = 9000.0f;
            idx = 0;
            if (v29->field_aac)
            {
                do
                {
                    v4 = *(int *)(*(unsigned int *)&a0 + 2596 + idx * 4);
                    *(unsigned short *)((char *)&v3 + 2) = 1;
                    if (!(char)CBot::EnemyIsInList(a0, *(int *)(*(unsigned int *)&a0 + 2596 + idx * 4)) && (!g_teamplay || *(int *)(*(int *)a0 + 428) != v4->field_0->field_1ac))
                    {
                        v1 = &v15;
                        v4->field_60->field_d0(v1, v4);
                        v23 = v15;
                        v24 = v16;
                        v25 = v17;
                        (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 480))(&v18, a0);
                        v30 = v23 - *(float *)&v18;
                        v15 = v30;
                        v31 = v24 - v20;
                        v16 = v31;
                        v17 = 0;
                        v32 = v30 * v30 + v31 * v31 + 0.0;
                        v33 = sqrt(v32);
                        if (isnan(v33))
                            sqrt(*(unsigned int *)&v32);
                        else
                            v32 = v33;
                        v22 = (float)v32;
                        v7 = 0;
                        if (v22 <= 2300.0f || *(short *)(*(unsigned int *)&a0 + 2980) > 0)
                            v7 = 1;
                        v6 = EntIsInFieldOfView(a0, v4);
                        v5 = EntIsInFieldOfView(v4, a0);
                        v34 = &v4->field_0->field_8;
                        *(float *)&v18 = v4->field_0->field_8;
                        v20 = *(float *)&v34->padding_0[4];
                        *(float *)&v21 = *(float *)&v34->field_8;
                        v35 = *(int *)a0 + 8;
                        v36 = *(float *)&v18 - *(float *)(*(int *)a0 + 8);
                        v12 = v36;
                        v37 = v20 - *(float *)&v35->padding_0[4];
                        v13 = v37;
                        v38 = *(float *)&v21 - *(float *)&v35->padding_0[8];
                        v14 = v38;
                        v39 = v36 * v36 + v37 * v37 + v38 * v38;
                        v40 = sqrt(v39);
                        if (isnan(v40))
                            sqrt(*(unsigned int *)&v39);
                        else
                            v39 = v40;
                        v11 = (float)v39;
                        if (v6 || v7)
                        {
                            if (v11 < v9)
                            {
                                v9 = v11;
                                *(unsigned short *)((char *)&v3 + 2) = *(unsigned short *)((void*)&v3 + 2) + 2;
                            }
                            if (v6)
                                *(unsigned short *)((char *)&v3 + 2) = *(unsigned short *)((void*)&v3 + 2) + 2;
                            if (v5)
                                *(unsigned short *)((char *)&v3 + 2) = *(unsigned short *)((void*)&v3 + 2) + 2;
                            if (*(int *)(*(unsigned int *)&a0 + 2928) && v4 == *(int *)(*(unsigned int *)&a0 + 2928))
                                *(unsigned short *)((char *)&v3 + 2) = *(unsigned short *)((void*)&v3 + 2) + (unsigned short)g_engfuncs.pfnRandomLong(1, 4);
                            if (!(char)CBot::CanAttackPlayer(a0, v4))
                                *(unsigned short *)((char *)&v3 + 2) = *(unsigned short *)((void*)&v3 + 2) - 3;
                            if (v4->field_770)
                                *(unsigned short *)((char *)&v3 + 2) = *(unsigned short *)((void*)&v3 + 2) - (unsigned short)g_engfuncs.pfnRandomLong(1, 2);
                            v0 = v4->field_744;
                            if ((char)CBot::DangerousPlForBot(a0, v0))
                            {
                                v19 = _INSERT(v20, 2, __fnstcw());
                                *(unsigned int *)&v20 = _INSERT(v19, 0, *(unsigned short *)((void*)&v19 + 2) | 0xc00);
                                v18 = (int)*(float *)(*(int *)a0 + 352);
                                if ((int)v18 <= 29)
                                    *(unsigned short *)((char *)&v3 + 2) = *(unsigned short *)((void*)&v3 + 2) - 1;
                            }
                            iter = 1;
                            while (iter <= gpGlobals->field_90)
                            {
                                v42 = __int_as_float(UTIL_PlayerByIndex(iter));
                                if (__float_as_int(v42) != *(unsigned int *)&a0)
                                {
                                    *(unsigned short *)&v1 = 1;
                                    *(unsigned short *)&v0 = 1;
                                    if ((char)UTIL_IsValidPlayer(v42, v0, v1))
                                    {
                                        v2 = 0;
                                        if (!(*(int *)(*(int *)(__float_as_int(v42) + 96) + 164))(v42))
                                            v2 = (*(char *)(*(int *)v42 + 421) & 32) != 0;
                                        if (!v2)
                                        {
                                            iter += 1;
                                        }
                                        else if (!__float_as_int(v42))
                                        {
                                            iter += 1;
                                        }
                                        else if (*(int *)(__float_as_int(v42) + 2924) == v4)
                                        {
                                            if ((short)*(unsigned short *)((void*)&v3 + 2) <= 0)
                                                break;
                                            *(unsigned short *)((char *)&v3 + 2) = *(unsigned short *)((void*)&v3 + 2) - 1;
                                            iter += 1;
                                        }
                                        else
                                        {
                                            iter += 1;
                                        }
                                    }
                                    else
                                    {
                                        iter += 1;
                                    }
                                }
                                else
                                {
                                    iter += 1;
                                }
                            }
                            if ((short)*(unsigned short *)((void*)&v3 + 2) > (short)v3)
                            {
                                v10 = v4;
                                *(unsigned short *)&v3 = *(unsigned short *)((void*)&v3 + 2);
                            }
                        }
                    }
                    idx += 1;
                } while ((int)idx < *(char *)(*(unsigned int *)&a0 + 2732));
            }
        }
    }
    if (!v10)
        return v10;
    v43 = (unsigned int *)a0;
    v43[1037] = 0;
    v43[1046] = 0;
    return v10;
}

