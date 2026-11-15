// ManageEnemies__16CShootLaser1Task @0x186100 size=219
typedef struct st_586100_4 {
    char padding_0[8];
    struct st_586100_1 *field_8;
    char padding_c[4];
    struct st_586100_3 *field_10;
} st_586100_4;

typedef struct st_586100_1 {
    char padding_0[2560];
    struct st_586100_2 *field_a00;
    char padding_a04[312];
    unsigned int field_b3c;
    char padding_b40[44];
    struct st_586100_3 *field_b6c;
} st_586100_1;

typedef struct st_586100_3 {
    struct st_586100_0 *field_0;
} st_586100_3;

typedef struct st_586100_0 {
    char padding_0[421];
    char field_1a5;
} st_586100_0;

typedef struct st_586100_2 {
    char padding_0[48];
    unsigned int field_30;
    unsigned int field_34;
} st_586100_2;

typedef struct st_586100_6 {
    float field_0;
} st_586100_6;

typedef struct st_586100_5 {
    unsigned int field_0;
} st_586100_5;

extern st_586100_5 *g_engfuncs.pfnRandomFloat;
extern st_586100_6 *gpGlobals;

float ManageEnemies__16CShootLaser1Task(st_586100_4 *a0)
{
    st_586100_0 **v2;  // edi
    st_586100_0 **v3;  // edx
    st_586100_1 *v4;  // eax
    unsigned long long v5;  // mm7
    unsigned long long v6;  // mm7
    unsigned long long v7;  // mm7
    unsigned long long v9;  // mm7
    int v0;  // [bp-0x28]
    int v1;  // [bp-0x24]

    v2 = a0->field_8->field_b6c;
    v3 = CBot::GetBestEnemyFromList(a0->field_8);
    v4 = a0->field_8;
    a0->field_10 = v3;
    v4->field_b6c = v3;
    if (!a0->field_8->field_b6c)
    {
        *(unsigned short *)&v1 = 1;
        *(unsigned short *)&v0 = 0;
        if (!(char)UTIL_IsValidPlayer(v2, v0, v1))
            return v6;
        g_engfuncs.pfnRandomFloat(*(float *)&a0->field_8->field_a00->field_30, *(float *)&a0->field_8->field_a00->field_34);
        *(float *)&a0->field_8->field_b3c = *(float *)&a0->field_8->field_a00->field_30 + *(float *)gpGlobals;
        return v5;
    }
    else if (a0->field_8->field_b6c != v2)
    {
        *(unsigned short *)&v1 = 0;
        *(unsigned short *)&v0 = 0;
        if (!(char)UTIL_IsValidPlayer(v2, v0, v1))
            return v7;
        *v2->field_1a5 = *v2->field_1a5 & 239;
        return v7;
    }
    else
    {
        return v9;
    }
}

