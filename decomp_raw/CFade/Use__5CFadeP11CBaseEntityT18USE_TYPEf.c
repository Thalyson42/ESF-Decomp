// Use__5CFadeP11CBaseEntityT18USE_TYPEf @0xb6170 size=279
typedef struct st_4b6170_1 {
    char padding_0[164];
    struct st_4b6170_2 *field_a4;
} st_4b6170_1;

typedef struct st_4b6170_2 {
    unsigned int field_0;
} st_4b6170_2;

typedef struct st_4b6170_0 {
    char padding_0[332];
    float field_14c;
    char field_150;
    char padding_151[79];
    char field_1a0;
    char padding_1a1[55];
    float field_1d8;
    float field_1dc;
} st_4b6170_0;

typedef struct st_4b6170_3 {
    char padding_0[96];
    struct st_4b6170_1 *field_60;
} st_4b6170_3;

int Use__5CFadeP11CBaseEntityT18USE_TYPEf(st_4b6170_0 **a0, st_4b6170_3 *a1)
{
    unsigned int v3;  // esi
    st_4b6170_0 *v4;  // edx
    st_4b6170_0 *v5;  // edx
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v3 = 0;
    if (!(*a0->field_1a0 & 1))
        v3 = 1;
    if (*a0->field_1a0 & 2)
        v3 |= 2;
    if (!(*a0->field_1a0 & 4))
    {
        v5 = *a0;
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v5->field_14c;
        UTIL_ScreenFadeAll(&v5->field_150, v5->field_1d8, v5->field_1dc, v0, v3);
    }
    else if (a1->field_60->field_a4(a1))
    {
        v4 = *a0;
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v4->field_14c;
        UTIL_ScreenFade(a1, &v4->field_150, v4->field_1d8, v4->field_1dc, v0, v3);
    }
    else
    {
        return CBaseEntity::SUB_UseTargets(a0, a0, 3, 0);
    }
    return CBaseEntity::SUB_UseTargets(a0, a0, 3, 0);
}

