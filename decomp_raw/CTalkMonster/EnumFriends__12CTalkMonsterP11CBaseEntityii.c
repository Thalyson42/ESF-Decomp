// EnumFriends__12CTalkMonsterP11CBaseEntityii @0x125750 size=233
typedef struct st_525750_3 {
    unsigned int field_0;
} st_525750_3;

typedef struct st_525750_2 {
    char padding_0[140];
    struct st_525750_3 *field_8c;
    char padding_90[368];
    struct st_525750_3 *field_200;
} st_525750_2;

typedef struct st_525750_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[196];
    float field_d8;
    char padding_dc[300];
    int field_208;
} st_525750_1;

typedef struct st_525750_4 {
    struct st_525750_1 *field_0;
    char padding_4[92];
    struct st_525750_2 *field_60;
} st_525750_4;

typedef struct st_525750_0 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_525750_0;

extern st_525750_0 _12CTalkMonster.m_szFriends;

st_525750_4 * EnumFriends__12CTalkMonsterP11CBaseEntityii(st_525750_4 *a0, st_525750_4 *a1, unsigned int a2, unsigned int a3)
{
    int v6;  // esi
    st_525750_1 *v7;  // edx
    unsigned int v0;  // [bp-0x64]
    unsigned int v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x5c]
    float v3;  // [bp-0x5c]
    char v4;  // [bp-0x44]
    float v5;  // [bp-0x34]

    v6 = (&_12CTalkMonster.m_szFriends.field_0)[a0->field_60->field_200(a0, a2)];
    while (1)
    {
        a1 = UTIL_FindEntityByClassname(a1, (&_12CTalkMonster.m_szFriends.field_0)[a0->field_60->field_200(a0, a2)]);
        if (!a1)
        {
            return NULL;
        }
        else if (a1 != a0 && a1->field_60->field_8c(a1))
        {
            if (a3)
            {
                v7 = a1->field_0;
                v0 = v7->field_8;
                v1 = v7->field_c;
                v2 = v7->field_10;
                v3 = a1->field_0->field_d8;
                UTIL_TraceLine(&a0->field_0->field_8, &v0, 1, a0->field_0->field_208, &v4);
            }
            else
            {
                v5 = 1.0;
            }
            if (v5 == 1.0f)
                return a1;
        }
    }
}

