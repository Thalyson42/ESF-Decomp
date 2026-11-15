// AddAnimationAFix__12CPlayerMeleeG6VectorbfPCc @0x100120 size=151
typedef struct st_500120_1 {
    char padding_0[292];
    struct st_500120_2 *field_124;
} st_500120_1;

typedef struct st_500120_2 {
    struct st_500120_0 *field_0;
} st_500120_2;

typedef struct st_500120_0 {
    char padding_0[520];
    unsigned int field_208;
} st_500120_0;

typedef struct st_500120_3 {
    char padding_0[664];
    unsigned int field_298;
} st_500120_3;

typedef struct st_500120_4 {
    unsigned int field_0;
} st_500120_4;

extern st_500120_4 *g_engfuncs.pfnIndexOfEdict;

st_500120_3 * AddAnimationAFix__12CPlayerMeleeG6VectorbfPCc(st_500120_1 *a0, int a1, char a2, float a3, int a4)
{
    st_500120_3 *v4;  // edi
    char *v0;  // [bp-0x5c]
    int v1;  // [bp-0x58]
    char v2;  // [bp-0x24]

    v1 = _INSERT(0, 0, a2);
    v4 = CPlayerMelee::AddAnimation(a0, v1, a3, 1, a4);
    if (v4)
    {
        v4->field_298 = 1;
        UTIL_VecToAngles(&v2, a1);
        v0 = &v2;
        UTIL_Model_FixAngles(g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)a0->field_124 + 520)));
    }
    return v4;
}

