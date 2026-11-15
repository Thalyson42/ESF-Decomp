// Use__15CGamePlayerHurtP11CBaseEntityT18USE_TYPEf @0xd0800 size=206
typedef struct st_4d0800_2 {
    char padding_0[52];
    struct st_4d0800_3 *field_34;
    struct st_4d0800_3 *field_38;
    char padding_3c[100];
    struct st_4d0800_3 *field_a0;
} st_4d0800_2;

typedef struct st_4d0800_3 {
    unsigned int field_0;
} st_4d0800_3;

typedef struct st_4d0800_0 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[63];
    float field_1e0;
} st_4d0800_0;

typedef struct st_4d0800_1 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[63];
    unsigned int field_1e0;
} st_4d0800_1;

typedef struct st_4d0800_4 {
    char padding_0[96];
    struct st_4d0800_2 *field_60;
} st_4d0800_4;

st_4d0800_1 * Use__15CGamePlayerHurtP11CBaseEntityT18USE_TYPEf(st_4d0800_0 **a0, st_4d0800_4 *a1, unsigned int a2, int a3, float a4)
{
    st_4d0800_1 *v0;  // eax
    st_4d0800_0 *v1;  // eax

    v0 = CRuleEntity::CanFireForActivator(a0, a1);
    if (!v0)
        return v0;
    if (a1->field_60->field_a0(a1))
    {
        if (0.0 > *a0->field_1e0)
        {
            a1->field_60->field_38(a1, -*a0->field_1e0, 0);
        }
        else
        {
            v1 = *a0;
            a1->field_60->field_34(a1, v1, v1, v1->field_1e0, 0);
        }
    }
    CBaseEntity::SUB_UseTargets(a0, a1, a3, a4);
    if (!(*a0->field_1a0 & 1))
        return *a0;
    return UTIL_Remove(a0);
}

