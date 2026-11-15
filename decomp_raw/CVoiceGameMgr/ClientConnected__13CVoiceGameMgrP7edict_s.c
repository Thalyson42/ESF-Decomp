// ClientConnected__13CVoiceGameMgrP7edict_s @0x18c030 size=397
typedef struct st_58c030_1 {
    unsigned int field_0;
    int field_4;
} st_58c030_1;

typedef struct st_58c030_0 {
    unsigned int field_0;
} st_58c030_0;

extern st_58c030_0 *g_engfuncs.pfnIndexOfEdict;
extern char g_SentGameRulesMasks;
extern char g_SentBanMasks;
extern unsigned int g_bWantModEnable;

unsigned int ClientConnected__13CVoiceGameMgrP7edict_s(unsigned int a0, unsigned int a1)
{
    unsigned int v9;  // edx
    st_58c030_1 *v10;  // eax
    int i;  // edi
    int *v12;  // eax
    int index;  // esi
    char v14;  // cl
    unsigned int v15;  // eax
    int *v16;  // eax
    int idx;  // edi
    char v18;  // sil
    char *v0;  // [bp-0x34]
    int j;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]
    char *v3;  // [bp-0x28]
    unsigned int v4;  // [bp-0x24]
    int v5;  // [bp-0x20]
    char v6;  // [bp-0x1c], Other Possible Types: unsigned long long
    char v7;  // [bp-0x14], Other Possible Types: unsigned long long
    unsigned int v8;  // [bp-0xc]

    v5 = g_engfuncs.pfnIndexOfEdict(a1) - 1;
    v9 = &g_bWantModEnable;
    v10 = &v8;
    if (v5 < 0 || v5 >= 32)
        v10 = __assert_fail@GLIBC_2.0("i >= 0 && i < GetNumBits()", "../game_shared/bitvec.h", 133, "class CBitVecAccessor CBitVec<32>::operator [](int)");
    v10->field_0 = v9;
    v10->field_4 = v5;
    *(unsigned int *)(v8 + ((int)(*&(&v8)[1]) >> 5) * 4) = *(int *)(v8 + ((int)(*&(&v8)[1]) >> 5) * 4) | 1 << ((char)*&(&v8)[1] & 31);
    v4 = &(&g_SentGameRulesMasks)[4 * v5];
    i = 0;
    for (v3 = &v7; i < 32; i += 1)
    {
        v12 = &v7;
        if (i < 0 || i >= 32)
            v12 = __assert_fail@GLIBC_2.0("i >= 0 && i < GetNumBits()", "../game_shared/bitvec.h", 133, "class CBitVecAccessor CBitVec<32>::operator [](int)");
        *(unsigned int *)&v7 = v4;
        v12[1] = i;
        index = *(int *)((char *)&v7 + 4) >> 5;
        v14 = (char)*(int *)((char *)&v7 + 4) & 31;
        *(unsigned int *)((unsigned int)v7 + index * 4) = *(int *)((unsigned int)v7 + index * 4) & (0xfffffffe << (v14 & 31) | 0xfffffffe >> 32 - (v14 & 31));
    }
    v2 = &(&g_SentBanMasks)[4 * v5];
    j = 0;
    for (v0 = &v6; j < 32; j += 1)
    {
        v16 = &v6;
        if (j < 0 || j >= 32)
            v16 = __assert_fail@GLIBC_2.0("i >= 0 && i < GetNumBits()", "../game_shared/bitvec.h", 133, "class CBitVecAccessor CBitVec<32>::operator [](int)");
        *(unsigned int *)&v6 = v2;
        v16[1] = j;
        idx = *(int *)((char *)&v6 + 4) >> 5;
        v18 = (char)*(int *)((char *)&v6 + 4) & 31;
        v15 = 0xfffffffe << (v18 & 31) | 0xfffffffe >> 32 - (v18 & 31);
        *(unsigned int *)((unsigned int)v6 + idx * 4) = *(int *)((unsigned int)v6 + idx * 4) & v15;
    }
    return v15;
}

