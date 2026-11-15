// DeleteDBGatherSpot__11CBotManager @0x16be50 size=265
typedef struct st_56be50_2 {
    char padding_0[124];
    struct st_56be50_3 *field_7c;
} st_56be50_2;

typedef struct st_56be50_3 {
    struct st_56be50_1 *field_0;
} st_56be50_3;

typedef struct st_56be50_1 {
    char padding_0[428];
    unsigned short field_1ac;
} st_56be50_1;

typedef struct st_56be50_0 {
    unsigned int field_0;
} st_56be50_0;

extern unsigned int g_teamplay;
extern st_56be50_0 *g_6168a4;
extern st_56be50_0 *g_6168d4;
extern st_56be50_0 *g_61698c;
extern unsigned int GatherSpotsForTeamGood;
extern unsigned int GatherSpotsForTeamEvil;

double DeleteDBGatherSpot__11CBotManager(float a0)
{
    double v3;  // mm0
    st_56be50_2 *v4;  // eax
    st_56be50_1 **v5;  // eax
    st_56be50_1 **v6;  // esi
    unsigned short v7;  // ax
    unsigned int v8;  // edx
    double v9;  // mm7
    int v0;  // [bp-0x28]
    int v1;  // [bp-0x24]

    if (!g_teamplay)
        return v9;
    g_6168a4("mp_gamemode");
    if (v3 != 2.0)
        return 2.0;
    if (!g_61698c() && !(v4 = *(int *)(*(unsigned int *)&a0 + 12), !*(int *)(*(unsigned int *)&a0 + 12) && !(v4 = g_6168d4(0), v4)))
        v5 = v4->field_7c;
    else
        v5 = NULL;
    v6 = v5;
    *(unsigned short *)&v1 = 0;
    *(unsigned short *)&v0 = 0;
    if (!(char)sub_489a70(v6, v0, v1))
        return 2.0;
    if (!*v6->field_1ac)
    {
        v7 = sub_48a8c0(a0, v6, 75.0f);
        if ((short)v7 <= -0x1)
            return 2.0;
        v8 = &GatherSpotsForTeamGood;
    }
    else
    {
        v7 = sub_48a8c0(a0, v6, 75.0f);
        if ((short)v7 <= -0x1)
            return 2.0;
        v8 = &GatherSpotsForTeamEvil;
    }
    *(char *)(v7 * 16 + v8 + 12) = 1;
    return 2.0;
}

