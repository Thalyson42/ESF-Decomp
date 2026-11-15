// PlaceNewDBGatherSpot__11CBotManager @0x16bb20 size=801
typedef struct st_56bb20_2 {
    char padding_0[124];
    struct st_56bb20_3 *field_7c;
} st_56bb20_2;

typedef struct st_56bb20_4 {
    char padding_0[12];
    struct st_56bb20_2 *field_c;
} st_56bb20_4;

typedef struct st_56bb20_3 {
    struct st_56bb20_1 *field_0;
} st_56bb20_3;

typedef struct st_56bb20_6 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[408];
    unsigned short field_1a4;
    char padding_1a6[90];
    unsigned int field_200;
} st_56bb20_6;

typedef struct st_56bb20_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[408];
    unsigned short field_1ac;
    char padding_1ae[90];
    int field_208;
} st_56bb20_1;

typedef struct st_56bb20_5 {
    char padding_0[20];
    struct st_56bb20_0 *field_14;
} st_56bb20_5;

typedef struct st_56bb20_0 {
    unsigned int field_0;
} st_56bb20_0;

extern unsigned int g_teamplay;
extern st_56bb20_0 *g_6168a4;
extern st_56bb20_0 *g_6168d4;
extern st_56bb20_0 *g_61698c;
extern unsigned int GatherSpotsForTeamGood;
extern char g_625c4c[4];
extern unsigned int GatherSpotsForTeamEvil;
extern char g_625cec[4];
extern char cout;
extern st_56bb20_5 *g_625f80;

double PlaceNewDBGatherSpot__11CBotManager(st_56bb20_4 *a0)
{
    double v18;  // mm0
    st_56bb20_2 *v19;  // eax
    unsigned int v28;  // ecx
    st_56bb20_1 *v29;  // edx
    double v30;  // mm7
    st_56bb20_1 **v20;  // eax
    unsigned int v21;  // esi
    st_56bb20_6 *v22;  // edx
    unsigned int v23;  // ecx
    st_56bb20_1 *v24;  // edx
    unsigned int v26;  // esi
    st_56bb20_6 *v27;  // edx
    int v0;  // [bp-0xc8]
    int v1;  // [bp-0xc4]
    char iter;  // [bp-0x99]
    st_56bb20_1 **v3;  // [bp-0x98]
    float v4;  // [bp-0x84]
    float v5;  // [bp-0x80]
    float v6;  // [bp-0x7c]
    float v7;  // [bp-0x78]
    float v8;  // [bp-0x74]
    float v9;  // [bp-0x70]
    float v10;  // [bp-0x64]
    float v11;  // [bp-0x60]
    float v12;  // [bp-0x5c]
    char v13;  // [bp-0x44]
    float v14;  // [bp-0x34]
    unsigned int v15;  // [bp-0x30]
    unsigned int v16;  // [bp-0x2c]
    unsigned int v17;  // [bp-0x28]

    if (!g_teamplay)
        return v30;
    g_6168a4("mp_gamemode");
    if (v18 != 2.0)
        return 2.0;
    if (!g_61698c() && !(v19 = a0->field_c, !a0->field_c && !(v19 = g_6168d4(0), v19)))
        v20 = v19->field_7c;
    else
        v20 = NULL;
    v3 = v20;
    *(unsigned short *)&v1 = 0;
    *(unsigned short *)&v0 = 0;
    if (!(char)sub_489a70(v20, v0, v1))
        return 2.0;
    iter = 0;
    if (!*v3->field_1ac)
    {
        while (1)
        {
            v21 = iter * 16;
            if (g_625c4c[v21])
                break;
            iter += 1;
            if (iter > 9)
            {
                g_625f80->field_14(&cout, "Cannot create new DragonBall spot for team good, max reached.\n");
                return 2.0;
            }
        }
        v4 = 0;
        v5 = 0;
        v6 = -9999.0f;
        v22 = &*v3->field_8;
        v10 = *v3->field_8 + v4;
        v11 = *(float *)&v22->field_4 + v5;
        v12 = *(float *)&v22->field_8 + v6;
        sub_487b80(&*v3->field_8, &v10, 1, *v3->field_208, &v13);
        if (1.0 > v14)
        {
            *(unsigned int *)((char *)&GatherSpotsForTeamGood + v21) = v15;
            *(unsigned int *)((char *)&GatherSpotsForTeamGood + v21 + 4) = v16;
            *(unsigned int *)((char *)&GatherSpotsForTeamGood + v21 + 8) = v17;
        }
        else
        {
            v23 = iter * 16;
            v24 = *v3;
            *(float *)((char *)&GatherSpotsForTeamGood + v23) = v24->field_8;
            *(float *)((char *)&GatherSpotsForTeamGood + v23 + 4) = v24->field_c;
            *(float *)((char *)&GatherSpotsForTeamGood + v23 + 8) = v24->field_10;
        }
        *(char *)&(&GatherSpotsForTeamGood)[4 * iter] = 0;
        return 2.0;
    }
    else
    {
        if (iter <= 9)
        {
            do
            {
                v26 = iter * 16;
                if (g_625cec[v26])
                {
                    v7 = 0;
                    v8 = 0;
                    v9 = -9999.0f;
                    v27 = &*v3->field_8;
                    v4 = *v3->field_8 + v7;
                    v5 = *(float *)&v27->field_4 + v8;
                    v6 = *(float *)&v27->field_8 + v9;
                    sub_487b80(&*v3->field_8, &v4, 1, *v3->field_208, &v13);
                    if (1.0 > v14)
                    {
                        *(unsigned int *)((char *)&GatherSpotsForTeamEvil + v26) = v15;
                        *(unsigned int *)((char *)&GatherSpotsForTeamEvil + v26 + 4) = v16;
                        *(unsigned int *)((char *)&GatherSpotsForTeamEvil + v26 + 8) = v17;
                    }
                    else
                    {
                        v28 = iter * 16;
                        v29 = *v3;
                        *(float *)((char *)&GatherSpotsForTeamEvil + v28) = v29->field_8;
                        *(float *)((char *)&GatherSpotsForTeamEvil + v28 + 4) = v29->field_c;
                        *(float *)((char *)&GatherSpotsForTeamEvil + v28 + 8) = v29->field_10;
                    }
                    *(char *)&(&GatherSpotsForTeamEvil)[4 * iter] = 0;
                    return 2.0;
                }
            } while ((iter += 1, iter <= 9));
        }
        g_625f80->field_14(&cout, "Cannot create new DragonBall spot for team evil, max reached.\n");
        return 2.0;
    }
}

