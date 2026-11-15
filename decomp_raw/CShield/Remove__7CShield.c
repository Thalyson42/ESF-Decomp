// Remove__7CShield @0x119090 size=142
typedef struct st_519090_1 {
    char padding_0[520];
    unsigned int field_208;
} st_519090_1;

typedef struct st_519090_2 {
    struct st_519090_1 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_519090_2;

typedef struct st_519090_0 {
    unsigned int field_0;
} st_519090_0;

extern unsigned int gmsgBlobKill;
extern st_519090_0 *g_engfuncs.pfnMessageBegin;
extern st_519090_0 *g_engfuncs.pfnMessageEnd;
extern st_519090_0 *g_engfuncs.pfnWriteShort;
extern st_519090_0 *g_engfuncs.pfnIndexOfEdict;

int Remove__7CShield(st_519090_2 *a0)
{
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(2, gmsgBlobKill, 0, 0, v0, v1, v2);
    v3 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
    g_engfuncs.pfnWriteShort(v3);
    g_engfuncs.pfnWriteShort(a0->field_64);
    g_engfuncs.pfnMessageEnd();
    return UTIL_Remove(a0);
}

