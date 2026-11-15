// UTIL_FindEntityByString__FP11CBaseEntityPCcT1 @0x131bc0 size=161
typedef struct st_531bc0_2 {
    char padding_0[124];
    unsigned int field_7c;
} st_531bc0_2;

typedef struct st_531bc0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_531bc0_0;

typedef struct st_531bc0_1 {
    unsigned int field_0;
} st_531bc0_1;

extern st_531bc0_1 *g_6167f8;
extern st_531bc0_1 *g_6168d4;
extern st_531bc0_1 *g_6168d8;

unsigned int UTIL_FindEntityByString__FP11CBaseEntityPCcT1(st_531bc0_0 **a0, unsigned int a1, unsigned int a2)
{
    st_531bc0_2 *v1;  // esi
    st_531bc0_2 *v2;  // eax
    unsigned int v0;  // [bp-0x8]

    v1 = g_6167f8((!a0 ? 0 : *a0->field_208), a1, a2);
    v0 = 0;
    if (!v1 || !g_6168d8(v1))
        v0 = 1;
    if (v0)
        return 0;
    v2 = v1;
    if (!v2)
    {
        v2 = g_6168d4(0);
        if (!v2)
            return 0;
    }
    return v2->field_7c;
}

