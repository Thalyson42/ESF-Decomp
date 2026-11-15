// ClientCommand__13CVoiceGameMgrP11CBasePlayerPCc @0x18c2b0 size=1156
typedef struct st_58c2b0_2 {
    char padding_0[12];
    int field_c;
} st_58c2b0_2;

typedef struct st_58c2b0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_58c2b0_0;

typedef struct st_58c2b0_3 {
    unsigned int field_0;
    int field_4;
} st_58c2b0_3;

typedef struct st_58c2b0_1 {
    unsigned int field_0;
} st_58c2b0_1;

extern st_58c2b0_1 *g_engfuncs.pfnIndexOfEdict;
extern st_58c2b0_1 *g_engfuncs.pfnCmd_Argv;
extern st_58c2b0_1 *g_engfuncs.pfnCmd_Argc;
extern unsigned int g_PlayerModEnable;
extern char g_BanMasks;
extern unsigned int g_bWantModEnable;

int ClientCommand__13CVoiceGameMgrP11CBasePlayerPCc(st_58c2b0_2 *a0, st_58c2b0_0 **a1, int a2)
{
    int v6;  // edi
    int iter;  // esi
    st_58c2b0_3 *v16;  // eax
    unsigned int v17;  // edx
    st_58c2b0_3 *v18;  // eax
    unsigned int v19;  // eax
    int v8;  // eax
    int *v10;  // ecx
    int index;  // eax
    int v13;  // eax
    unsigned int v15;  // edx
    unsigned int v0;  // [bp-0x58]
    char *v1;  // [bp-0x54]
    int idx;  // [bp-0x1c]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    int v5;  // [bp-0x8]

    v6 = g_engfuncs.pfnIndexOfEdict(*a1->field_208) - 1;
    if (v6 < 0 || v6 >= a0->field_c)
        return _INSERT(VoiceServerDebug__FPCce("CVoiceGameMgr::ClientCommand: cmd %s from invalid client (%d)\n", a2, v6), 0, 1);
    if (!strcasecmp@GLIBC_2.0(a2, "vban") && (int)g_engfuncs.pfnCmd_Argc() > 1)
    {
        iter = 1;
        while (1)
        {
            v8 = g_engfuncs.pfnCmd_Argc();
            if (iter >= v8)
                break;
            v5 = 0;
            v1 = &v5;
            v0 = "%x";
            sscanf@GLIBC_2.0(g_engfuncs.pfnCmd_Argv(iter));
            if (iter <= 1)
            {
                VoiceServerDebug__FPCce("CVoiceGameMgr::ClientCommand: vban (0x%x) from %d\n", v5, v6);
                v10 = &(&g_BanMasks)[4 * v6];
                index = iter - 1;
                if (index)
                    index = __assert_fail@GLIBC_2.0("i >= 0 && i < NUM_DWORDS", "../game_shared/bitvec.h", 173, "void CBitVec<32>::SetDWord(int, long unsigned int)");
                v10[index] = v5;
                iter += 1;
            }
            else
            {
                VoiceServerDebug__FPCce("CVoiceGameMgr::ClientCommand: invalid index (%d)\n", iter);
                iter += 1;
            }
        }
        return _INSERT(v8, 0, 1);
    }
    v13 = strcasecmp@GLIBC_2.0(a2, "VModEnable");
    if (!v13)
    {
        v13 = g_engfuncs.pfnCmd_Argc();
        if (v13 > 1)
        {
            VoiceServerDebug__FPCce("CVoiceGameMgr::ClientCommand: VModEnable (%d)\n", __strtol_internal@GLIBC_2.0(g_engfuncs.pfnCmd_Argv(1), 0, 10, 0) != 0);
            v15 = &g_PlayerModEnable;
            v16 = &v4;
            if (v6 < 0 || v6 >= 32)
                v16 = __assert_fail@GLIBC_2.0("i >= 0 && i < GetNumBits()", "../game_shared/bitvec.h", 133, "class CBitVecAccessor CBitVec<32>::operator [](int)");
            v16->field_0 = v15;
            v16->field_4 = v6;
            if (__strtol_internal@GLIBC_2.0(g_engfuncs.pfnCmd_Argv(1), 0, 10, 0))
            {
                idx = (int)(*(unsigned int *)((void*)&v4 + 4)) >> 5;
                *(unsigned int *)((unsigned int)v4 + idx * 4) = *(int *)((unsigned int)v4 + idx * 4) | 1 << ((char)(*(unsigned int *)((void*)&v4 + 4) & 31) & 31);
            }
            else
            {
                idx = (int)(*(unsigned int *)((void*)&v4 + 4)) >> 5;
                *(unsigned int *)((unsigned int)v4 + idx * 4) = *(int *)((unsigned int)v4 + idx * 4) & (0xfffffffe << ((char)(*(unsigned int *)((void*)&v4 + 4) & 31) & 31) | 0xfffffffe >> 32 - ((char)(*(unsigned int *)((void*)&v4 + 4) & 31) & 31));
            }
            v17 = &g_bWantModEnable;
            v18 = &v3;
            if (v6 < 0 || v6 >= 32)
                v18 = __assert_fail@GLIBC_2.0("i >= 0 && i < GetNumBits()", "../game_shared/bitvec.h", 133, "class CBitVecAccessor CBitVec<32>::operator [](int)");
            v18->field_0 = v17;
            v18->field_4 = v6;
            v19 = 0xfffffffe << ((char)*(unsigned int *)((void*)&v3 + 4) & 31) | 0xfffffffe >> 32 - ((char)*(unsigned int *)((void*)&v3 + 4) & 31);
            *(unsigned int *)((unsigned int)v3 + ((int)(*(unsigned int *)((void*)&v3 + 4)) >> 5) * 4) = *(int *)((unsigned int)v3 + ((int)(*(unsigned int *)((void*)&v3 + 4)) >> 5) * 4) & v19;
            return _INSERT(v19, 0, 1);
        }
    }
    return _INSERT(v13, 0, 0);
    return _INSERT(VoiceServerDebug__FPCce("CVoiceGameMgr::ClientCommand: cmd %s from invalid client (%d)\n", a2, v6), 0, 1);
}

