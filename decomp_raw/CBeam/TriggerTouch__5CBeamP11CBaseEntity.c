// TriggerTouch__5CBeamP11CBaseEntity @0xb0110 size=158
typedef struct st_4b0110_4 {
    char padding_0[124];
    struct st_4b0110_3 *field_7c;
} st_4b0110_4;

typedef struct st_4b0110_1 {
    char padding_0[184];
    struct st_4b0110_2 *field_b8;
} st_4b0110_1;

typedef struct st_4b0110_5 {
    char padding_0[408];
    struct st_4b0110_4 *field_198;
} st_4b0110_5;

typedef struct st_4b0110_2 {
    unsigned int field_0;
} st_4b0110_2;

typedef struct st_4b0110_0 {
    char padding_0[420];
    char field_1a4;
} st_4b0110_0;

typedef struct st_4b0110_3 {
    char padding_0[96];
    struct st_4b0110_1 *field_60;
} st_4b0110_3;

extern st_4b0110_2 *g_engfuncs.pfnAlertMessage;
extern st_4b0110_2 *g_engfuncs.pfnPEntityOfEntOffset;

st_4b0110_0 * TriggerTouch__5CBeamP11CBaseEntity(st_4b0110_5 **a0, st_4b0110_0 **a1)
{
    st_4b0110_4 *v0;  // eax
    st_4b0110_3 *v1;  // edx

    if (!(*a1->field_1a4 & 40))
        return *a1;
    if (!*a0->field_198)
        return g_engfuncs.pfnAlertMessage(1, "Firing targets!!!\n");
    v0 = *a0->field_198;
    if (*a0->field_198 || (v0 = g_engfuncs.pfnPEntityOfEntOffset(0), v0))
        v1 = v0->field_7c;
    else
        v1 = NULL;
    v1->field_60->field_b8(v1, a1, a0, 3, 0);
    return g_engfuncs.pfnAlertMessage(1, "Firing targets!!!\n");
}

