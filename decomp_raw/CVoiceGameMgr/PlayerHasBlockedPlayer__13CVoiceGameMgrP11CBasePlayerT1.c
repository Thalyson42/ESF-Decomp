// PlayerHasBlockedPlayer__13CVoiceGameMgrP11CBasePlayerT1 @0x18c1c0 size=227
typedef struct st_58c1c0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_58c1c0_0;

typedef struct st_58c1c0_1 {
    char padding_0[4];
    char *field_4;
} st_58c1c0_1;

typedef struct st_58c1c0_2 {
    unsigned int field_0;
} st_58c1c0_2;

extern st_58c1c0_2 *g_engfuncs.pfnIndexOfEdict;
extern char g_BanMasks;

int PlayerHasBlockedPlayer__13CVoiceGameMgrP11CBasePlayerT1(char *a0, char *a1, st_58c1c0_0 **a2)
{
    char *v1;  // eax
    char *v2;  // esi
    char *v3;  // edx
    unsigned int v4;  // eax
    st_58c1c0_1 *v5;  // ecx
    unsigned int v6;  // eax
    st_58c1c0_1 v0;  // [bp-0xc]

    v1 = a1;
    if (v1 && a2)
    {
        v2 = g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)v1 + 520)) - 1;
        v1 = g_engfuncs.pfnIndexOfEdict(*a2->field_208);
        v3 = v1 - 1;
        if (v2 >= NULL)
        {
            v1 = a0;
            if (v2 < *(int *)&v1[12] && v3 >= NULL && v3 < *(int *)&v1[12])
            {
                v4 = &g_BanMasks + 0x4 * v2;
                v5 = &v0;
                if (v3 < NULL || v3 >= 0x20)
                    v4 = __assert_fail@GLIBC_2.0("i >= 0 && i < GetNumBits()", "../game_shared/bitvec.h", 133, "class CBitVecAccessor CBitVec<32>::operator [](int)");
                *(unsigned int *)v0.padding_0 = v4;
                v5->field_4 = v3;
                v6 = 1 << ((char)(v0.field_4 & 31) & 31);
                return _INSERT(v6 & *(int *)&v0.padding_0[4 * (v0.field_4 >> 5)], 0, (v6 & *(int *)&v0.padding_0[4 * (v0.field_4 >> 5)]) != 0);
            }
        }
    }
    return _INSERT(v1, 0, 0);
}

