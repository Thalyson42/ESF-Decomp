// HitTouch__11CDiscAttackP11CBaseEntity @0xaa8e0 size=259
typedef struct st_4aa8e0_2 {
    char padding_0[52];
    struct st_4aa8e0_3 *field_34;
    char padding_38[104];
    struct st_4aa8e0_3 *field_a0;
} st_4aa8e0_2;

typedef struct st_4aa8e0_1 {
    char padding_0[280];
    struct st_4aa8e0_0 *field_118;
    char padding_11c[68];
    unsigned int field_160;
    char padding_164[36];
    unsigned int field_188;
} st_4aa8e0_1;

typedef struct st_4aa8e0_3 {
    unsigned int field_0;
} st_4aa8e0_3;

typedef struct st_4aa8e0_0 {
    char padding_0[128];
    char field_80;
    char padding_81[279];
    struct st_4aa8e0_0 *field_198;
    char padding_19c[68];
    unsigned int field_1e0;
    char padding_1e4[36];
    int field_208;
} st_4aa8e0_0;

typedef struct st_4aa8e0_5 {
    struct st_4aa8e0_0 *field_0;
    char padding_4[688];
    struct st_4aa8e0_4 *field_2b4;
} st_4aa8e0_5;

typedef struct st_4aa8e0_4 {
    struct st_4aa8e0_1 *field_0;
    char padding_4[92];
    struct st_4aa8e0_2 *field_60;
    char padding_64[752];
    unsigned int field_354;
    unsigned int field_358;
    unsigned int field_35c;
    char padding_360[132];
    unsigned int field_3e4;
} st_4aa8e0_4;

extern char g_800000;

st_4aa8e0_0 * HitTouch__11CDiscAttackP11CBaseEntity(st_4aa8e0_5 *a0, st_4aa8e0_4 *a1)
{
    st_4aa8e0_0 *iter;  // eax
    st_4aa8e0_1 *v1;  // edi
    st_4aa8e0_0 *v2;  // eax

    iter = a0->field_0;
    if (iter->field_198 && !(iter = iter->field_198, !iter))
        v1 = &iter->field_80;
    else
        v1 = NULL;
    if (v1 == a1->field_0)
        return iter;
    a0->field_2b4 = a1;
    v2 = a1->field_60->field_a0(a1);
    if (!v2)
        return v2;
    if (a1->field_354 || a1->field_35c || a1->field_358 || a1->field_3e4 == 4 || a1->field_3e4 == 5)
        return CDiscAttack::Vaporize(a0);
    a1->field_60->field_34(a1, a0->field_0, v1, *(float *)&a0->field_0->field_1e0, &g_800000);
    return EMIT_SOUND_DYN(a0->field_0->field_208, 2, "weapons/disckill.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return CDiscAttack::Vaporize(a0);
}

