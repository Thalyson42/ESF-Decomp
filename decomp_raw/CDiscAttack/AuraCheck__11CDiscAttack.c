// AuraCheck__11CDiscAttack @0xaaa40 size=217
typedef struct st_4aaa40_0 {
    char padding_0[124];
    struct st_4aaa40_1 *field_7c;
} st_4aaa40_0;

typedef struct st_4aaa40_1 {
    unsigned int field_0;
    char padding_4[256];
    unsigned int field_104;
    unsigned int field_108;
    char padding_10c[136];
    struct st_4aaa40_0 *field_194;
    struct st_4aaa40_0 *field_198;
    char padding_19c[1488];
    unsigned int field_76c;
} st_4aaa40_1;

typedef struct st_4aaa40_2 {
    struct st_4aaa40_1 *field_0;
    char padding_4[680];
    unsigned int field_2ac;
} st_4aaa40_2;

typedef struct st_4aaa40_3 {
    char padding_0[124];
    struct st_4aaa40_4 *field_7c;
} st_4aaa40_3;

typedef struct st_4aaa40_4 {
    float field_0;
    char padding_4[256];
    unsigned int field_104;
    unsigned int field_108;
    char padding_10c[136];
    struct st_4aaa40_3 *field_194;
    struct st_4aaa40_0 *field_198;
    char padding_19c[1488];
    unsigned int field_76c;
} st_4aaa40_4;

typedef struct st_4aaa40_5 {
    unsigned int field_0;
} st_4aaa40_5;

extern st_4aaa40_5 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4aaa40_4 *gpGlobals;

st_4aaa40_1 * AuraCheck__11CDiscAttack(st_4aaa40_2 *a0)
{
    st_4aaa40_1 *v0;  // eax
    st_4aaa40_0 *v1;  // eax
    st_4aaa40_1 *v2;  // eax
    st_4aaa40_1 *v3;  // eax

    if (a0->field_2ac)
        return v3;
    v0 = a0->field_0;
    if (!v0->field_198)
        return v0;
    v1 = v0->field_198;
    if (v0->field_198 || (v1 = g_engfuncs.pfnPEntityOfEntOffset(0), v1))
        v2 = v1->field_7c;
    else
        v2 = NULL;
    if (!v2)
        return v2;
    if (!v2->field_76c)
    {
LABEL_4aaadd:
        if (a0->field_0->field_108 == 12)
        {
            a0->field_0->field_108 = 8;
            a0->field_0->field_194 = NULL;
        }
    }
    else if (a0->field_0->field_108 == 8)
    {
        a0->field_0->field_108 = 12;
        a0->field_0->field_194 = a0->field_0->field_198;
    }
    else if (!v2->field_76c)
    {
        goto LABEL_4aaadd;
    }
    *(float *)&a0->field_0->field_104 = gpGlobals->field_0;
    return gpGlobals;
}

