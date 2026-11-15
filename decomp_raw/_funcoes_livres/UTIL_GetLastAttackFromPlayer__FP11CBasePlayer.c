// UTIL_GetLastAttackFromPlayer__FP11CBasePlayer @0x17f520 size=123
typedef struct st_57f520_0 {
    char padding_0[408];
    unsigned int field_198;
} st_57f520_0;

typedef struct st_57f520_1 {
    char padding_0[520];
    unsigned int field_208;
} st_57f520_1;

st_57f520_0 ** UTIL_GetLastAttackFromPlayer__FP11CBasePlayer(st_57f520_1 **a0)
{
    st_57f520_0 **v1;  // esi
    st_57f520_0 **v2;  // edi
    unsigned int v0;  // [bp-0x8]

    v1 = NULL;
    v2 = NULL;
    v0 = *a0->field_208;
    while (1)
    {
        v1 = sub_48bd10(v1, "globalname", "magic_attack");
        if (!v1)
            break;
        if (!(char)sub_48b140(v1) && *v1->field_198 == v0)
            v2 = v1;
    }
    return v2;
}

