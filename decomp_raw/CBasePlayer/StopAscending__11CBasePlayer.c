// StopAscending__11CBasePlayer @0xf1390 size=196
typedef struct st_4f1390_1 {
    struct st_4f1390_0 *field_0;
    char padding_4[824];
    unsigned int field_33c;
    char padding_340[1044];
    unsigned int field_754;
    char padding_758[24];
    unsigned int field_770;
} st_4f1390_1;

typedef struct st_4f1390_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4f1390_0;

typedef struct st_4f1390_2 {
    unsigned int field_0;
} st_4f1390_2;

extern unsigned int gmsgStopTransformFX;
extern st_4f1390_2 *g_engfuncs.pfnMessageBegin;
extern st_4f1390_2 *g_engfuncs.pfnMessageEnd;
extern st_4f1390_2 *g_engfuncs.pfnWriteByte;
extern st_4f1390_2 *g_engfuncs.pfnIndexOfEdict;

int StopAscending__11CBasePlayer(st_4f1390_1 *a0)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0x2c]

    if (!a0->field_770)
        return v1;
    a0->field_770 = 0;
    if (!a0->field_33c)
        a0->field_754 = 0x3f800000;
    g_engfuncs.pfnMessageBegin(2, gmsgStopTransformFX, &a0->field_0->padding_0[8], 0);
    v0 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnMessageEnd(v0);
    return UTIL_Model_RemoveAll(g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208));
}

