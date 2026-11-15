// UTIL_SayText__FPCcP11CBaseEntity @0x132a90 size=162
typedef struct st_532a90_1 {
    char padding_0[164];
    struct st_532a90_2 *field_a4;
} st_532a90_1;

typedef struct st_532a90_2 {
    unsigned int field_0;
} st_532a90_2;

typedef struct st_532a90_0 {
    char padding_0[520];
    unsigned int field_208;
} st_532a90_0;

typedef struct st_532a90_3 {
    struct st_532a90_0 *field_0;
    char padding_4[92];
    struct st_532a90_1 *field_60;
} st_532a90_3;

extern unsigned int gmsgSayText;
extern st_532a90_2 *g_engfuncs.pfnMessageBegin;
extern st_532a90_2 *g_engfuncs.pfnMessageEnd;
extern st_532a90_2 *g_engfuncs.pfnWriteByte;
extern st_532a90_2 *g_engfuncs.pfnWriteString;
extern st_532a90_2 *g_engfuncs.pfnIndexOfEdict;

unsigned int UTIL_SayText__FPCcP11CBaseEntity(unsigned int a0, st_532a90_3 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    v0 = a1->field_60->field_a4(a1);
    if (!v0)
        return v0;
    g_engfuncs.pfnMessageBegin(1, gmsgSayText, 0, a1->field_0->field_208);
    v1 = g_engfuncs.pfnIndexOfEdict(a1->field_0->field_208);
    g_engfuncs.pfnWriteByte(v1);
    g_engfuncs.pfnWriteString(a0);
    return g_engfuncs.pfnMessageEnd();
}

