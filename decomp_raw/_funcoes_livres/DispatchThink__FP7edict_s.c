// DispatchThink__FP7edict_s @0x9c3b0 size=121
typedef struct st_49c3b0_4 {
    char padding_0[124];
    struct st_49c3b0_3 *field_7c;
} st_49c3b0_4;

typedef struct st_49c3b0_1 {
    char padding_0[176];
    struct st_49c3b0_2 *field_b0;
} st_49c3b0_1;

typedef struct st_49c3b0_2 {
    unsigned int field_0;
} st_49c3b0_2;

typedef struct st_49c3b0_0 {
    unsigned int field_0;
    char padding_4[416];
    int field_1a4;
} st_49c3b0_0;

typedef struct st_49c3b0_3 {
    struct st_49c3b0_0 *field_0;
    char padding_4[92];
    struct st_49c3b0_1 *field_60;
} st_49c3b0_3;

typedef struct st_49c3b0_5 {
    char padding_0[152];
    unsigned int field_98;
} st_49c3b0_5;

extern st_49c3b0_2 *g_engfuncs.pfnAlertMessage;
extern st_49c3b0_5 *gpGlobals;

st_49c3b0_4 * DispatchThink__FP7edict_s(st_49c3b0_4 *a0)
{
    st_49c3b0_3 *v0;  // esi

    v0 = (!a0 ? NULL : a0->field_7c);
    if (!v0)
        return a0;
    if (v0->field_0->field_1a4 >= NULL)
        return v0->field_60->field_b0(v0);
    g_engfuncs.pfnAlertMessage(4, "Dormant entity %s is thinking!!\n", v0->field_0->field_0 + gpGlobals->field_98);
    return v0->field_60->field_b0(v0);
}

