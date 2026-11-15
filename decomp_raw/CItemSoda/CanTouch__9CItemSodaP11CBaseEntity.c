// CanTouch__9CItemSodaP11CBaseEntity @0xb6d50 size=236
typedef struct st_4b6d50_0 {
    char padding_0[56];
    struct st_4b6d50_1 *field_38;
    char padding_3c[100];
    struct st_4b6d50_1 *field_a0;
} st_4b6d50_0;

typedef struct st_4b6d50_5 {
    struct st_4b6d50_4 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
} st_4b6d50_5;

typedef struct st_4b6d50_4 {
    char padding_0[260];
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
    char padding_11c[124];
    struct st_4b6d50_3 *field_198;
} st_4b6d50_4;

typedef struct st_4b6d50_1 {
    unsigned int field_0;
} st_4b6d50_1;

typedef struct st_4b6d50_3 {
    char padding_0[484];
    unsigned int field_1e4;
} st_4b6d50_3;

typedef struct st_4b6d50_2 {
    char padding_0[96];
    struct st_4b6d50_0 *field_60;
} st_4b6d50_2;

typedef struct st_4b6d50_6 {
    float field_0;
} st_4b6d50_6;

extern char SUB_Remove__11CBaseEntity;
extern st_4b6d50_1 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_4b6d50_6 *gpGlobals;

unsigned int * CanTouch__9CItemSodaP11CBaseEntity(st_4b6d50_5 *a0, st_4b6d50_2 *a1)
{
    unsigned int *v0;  // eax
    unsigned int v1;  // esi
    st_4b6d50_4 *v2;  // eax

    v0 = a1->field_60->field_a0(a1);
    if (!v0)
        return v0;
    a1->field_60->field_38(a1, 0x3f800000, 0);
    v1 = 0;
    if (!a0->field_0->field_198 || !g_engfuncs.pfnEntOffsetOfPEntity(a0->field_0->field_198))
        v1 = 1;
    if (!v1)
        a0->field_0->field_198->field_1e4 = 0;
    a0->field_0->field_10c = 0;
    a0->field_0->field_108 = 0;
    v2 = a0->field_0;
    v2->field_118 = 128;
    a0->field_14 = 0;
    a0->field_18 = 0;
    a0->field_c = _INSERT(v2, 0, 0) | 0xffff0000;
    a0->field_10 = &SUB_Remove__11CBaseEntity;
    *(float *)&a0->field_0->field_104 = *(float *)gpGlobals;
    return gpGlobals;
}

