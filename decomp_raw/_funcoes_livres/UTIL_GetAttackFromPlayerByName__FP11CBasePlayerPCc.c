// UTIL_GetAttackFromPlayerByName__FP11CBasePlayerPCc @0x17f5a0 size=100
typedef struct st_57f5a0_1 {
    char padding_0[408];
    unsigned int field_198;
} st_57f5a0_1;

typedef struct st_57f5a0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_57f5a0_0;

st_57f5a0_1 ** UTIL_GetAttackFromPlayerByName__FP11CBasePlayerPCc(st_57f5a0_0 **a0, int a1)
{
    st_57f5a0_1 **v0;  // esi

    v0 = NULL;
    while (1)
    {
        v0 = UTIL_FindEntityByClassname(v0, a1);
        if (!v0)
        {
            return NULL;
        }
        else if (*v0->field_198 == *a0->field_208 && !(char)IsNull(v0))
        {
            return v0;
        }
    }
}

