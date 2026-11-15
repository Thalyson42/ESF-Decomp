// UpdateMasks__13CVoiceGameMgr @0x18c740 size=1270
typedef struct st_58c740_0 {
    char padding_0[12];
    struct st_58c740_1 *field_c;
} st_58c740_0;

typedef struct st_58c740_6 {
    char padding_0[160];
    struct st_58c740_1 *field_a0;
} st_58c740_6;

typedef struct st_58c740_9 {
    char padding_0[204];
    struct st_58c740_1 *field_cc;
} st_58c740_9;

typedef struct st_58c740_2 {
    unsigned int field_0;
    unsigned int field_4;
    struct st_58c740_3 *field_8;
    int field_c;
    unsigned int field_10;
    unsigned int field_14;
} st_58c740_2;

typedef struct st_58c740_3 {
    struct st_58c740_0 *field_0;
} st_58c740_3;

typedef struct st_58c740_1 {
    unsigned int field_0;
} st_58c740_1;

typedef struct st_58c740_5 {
    char padding_0[520];
    unsigned int field_208;
} st_58c740_5;

typedef struct st_58c740_4 {
    unsigned int field_0;
    int field_4;
} st_58c740_4;

typedef struct st_58c740_8 {
    char padding_0[96];
    struct st_58c740_6 *field_60;
} st_58c740_8;

typedef struct st_58c740_7 {
    struct st_58c740_5 *field_0;
    char padding_4[92];
    struct st_58c740_6 *field_60;
} st_58c740_7;

extern st_58c740_9 g_engfuncs;
extern st_58c740_1 *g_616878;
extern st_58c740_1 *g_61687c;
extern st_58c740_1 *g_6168a4;
extern st_58c740_1 *g_6169f8;
extern unsigned int g_PlayerModEnable[4];
extern unsigned int g_BanMasks[4];
extern unsigned int g_SentGameRulesMasks;
extern unsigned int g_SentBanMasks;
extern unsigned int g_bWantModEnable;

st_58c740_2 * UpdateMasks__13CVoiceGameMgr(double a0, st_58c740_2 *a1)
{
    st_58c740_2 *v20;  // eax
    int v29;  // edx
    char v30;  // al
    int v31;  // edx
    char v32;  // al
    int j;  // esi
    st_58c740_9 *v34;  // edx
    st_58c740_9 *v35;  // edx
    unsigned int *v36;  // eax
    int k;  // edi
    unsigned int *v38;  // edx
    st_58c740_7 *v21;  // edi
    int *v39;  // eax
    int v40;  // esi
    unsigned int v22;  // edx
    st_58c740_4 *v23;  // eax
    int index;  // eax
    int v25;  // edi
    st_58c740_8 *v26;  // esi
    char *v27;  // eax
    int *v28;  // edx
    int v0;  // [bp-0x50]
    char *v1;  // [bp-0x4c]
    char *v2;  // [bp-0x48]
    char v3;  // [bp-0x41]
    char *v4;  // [bp-0x40]
    st_58c740_7 *v5;  // [bp-0x3c]
    int idx;  // [bp-0x38]
    char v7;  // [bp-0x31]
    unsigned long long v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x30]
    char v10;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x28]
    int v12;  // [bp-0x24]
    int v13[2];  // [bp-0x20], Other Possible Types: unsigned long long
    unsigned int *v15;  // [bp-0x18]
    int v16;  // [bp-0x14]
    unsigned int v17;  // [bp-0x10]
    unsigned long long v18;  // [bp-0xc]

    a1->field_10 = 0;
    a1->field_14 = 0;
    v20 = _INSERT(_INSERT(g_6168a4("sv_alltalk"), 0, 0), 1, (isnan(a0) ? 4 : 0.0 == a0 ? 0 : 64));
    v7 = 0.0 != a0;
    idx = 0;
    if (idx >= a1->field_c)
        return v20;
    do
    {
        v21 = sub_48a500(idx + 1);
        if (!v21 || !v21->field_60->field_a0(v21))
            continue;
        v22 = &g_bWantModEnable;
        v23 = &v18;
        if (idx < 0 || idx >= 32)
            v23 = sub_4892a0("i >= 0 && i < GetNumBits()", "../game_shared/bitvec.h", 133, "class CBitVecAccessor CBitVec<32>::operator [](int)");
        v23->field_0 = v22;
        v23->field_4 = idx;
        v0 = (int)(*(unsigned int *)((void*)&v18 + 4)) >> 5;
        if (1 << ((char)(*(unsigned int *)((void*)&v18 + 4) & 31) & 31) & *(int *)((unsigned int)v18 + v0 * 4))
        {
            g_616878(1, a1->field_4, 0, v21->field_0->field_208);
            g_61687c();
        }
        v5 = v21;
        index = 0;
        do
        {
            (&v17)[index] = 0;
            index += 1;
        } while (index <= 0);
        if (idx < 0 || idx >= 32)
        {
            sub_4892a0("i >= 0 && i < GetNumBits()", "../game_shared/bitvec.h", 133, "class CBitVecAccessor CBitVec<32>::operator [](int)");
        }
        else
        {
            v15 = &g_PlayerModEnable[0];
            v16 = idx;
            if (1 << ((char)(v16 & 31) & 31) & v15[v16 >> 5])
            {
                v25 = 0;
                if (0 < a1->field_c)
                {
                    v4 = v13;
                    *(uint64_t *)v13 = v13;
                    do
                    {
                        v26 = sub_48a500(v25 + 1);
                        if (v26 && v26->field_60->field_a0(v26) && (v7 || (char)(*(int *)(*(int *)a1->field_8 + 12))(a1->field_8, v5, v26)))
                        {
                            v27 = &v17;
                            v28 = &v13[0];
                            if (v25 < 0 || v25 >= 32)
                                v27 = sub_4892a0("i >= 0 && i < GetNumBits()", "../game_shared/bitvec.h", 133, "class CBitVecAccessor CBitVec<32>::operator [](int)");
                            *v13 = v27;
                            v28[1] = v25;
                            *(unsigned int *)(*(unsigned int *)&*(uint64_t *)v13 + (v13[1] >> 5) * 4) = *(int *)(*(unsigned int *)&*(uint64_t *)v13 + (v13[1] >> 5) * 4) | 1 << ((char)(v13[1] & 31) & 31);
                        }
                    } while ((v25 += 1, v25 < a1->field_c));
                }
            }
            v29 = 0;
            while ((&v17)[v29] == (&g_SentGameRulesMasks)[v29 + idx])
            {
                if (v29 + 1 > 0)
                {
                    v30 = 1;
                    goto LABEL_58c9e5;
                }
            }
        }
        v30 = 0;
LABEL_58c9e5:
        if (v30 == 1)
        {
            v31 = 0;
            do
            {
                if (g_BanMasks[v31 + idx] != (&g_SentBanMasks)[v31 + idx])
                {
                    v32 = 0;
                    goto LABEL_58ca13;
                }
            } while ((v31 += 1, v31 <= 0));
            v32 = 1;
LABEL_58ca13:
            if (v32 == 1)
                goto LABEL_58cb06;
        }
        (&g_SentGameRulesMasks)[idx] = v17;
        (&g_SentBanMasks)[idx] = g_BanMasks[idx];
        g_616878(1, a1->field_0, 0, v5->field_0->field_208);
        j = 0;
        do
        {
            v34 = &g_engfuncs.padding_0[0];
            if (j)
                sub_4892a0("i >= 0 && i < NUM_DWORDS", "../game_shared/bitvec.h", 165, "long unsigned int CBitVec<32>::GetDWord(int)");
            v34->field_cc((&v17)[j]);
            v35 = &g_engfuncs.padding_0[0];
            v36 = &g_BanMasks[idx];
            if (j)
                v36 = sub_4892a0("i >= 0 && i < NUM_DWORDS", "../game_shared/bitvec.h", 165, "long unsigned int CBitVec<32>::GetDWord(int)");
            v35->field_cc(v36[j]);
            j += 1;
        } while (j <= 0);
        g_61687c();
LABEL_58cb06:
        k = 0;
        if (0 < a1->field_c)
        {
            v2 = &v17;
            v1 = &v10;
            v11 = v10;
            v9 = v8;
            do
            {
                v3 = 0;
                if (k < 0 || k >= 32)
                    sub_4892a0("i >= 0 && i < GetNumBits()", "../game_shared/bitvec.h", 133, "class CBitVecAccessor CBitVec<32>::operator [](int)");
                *(char **)&v11 = v2;
                v12 = k;
                v0 = k >> 5;
                if (1 << ((char)(v12 & 31) & 31) & *(int *)((unsigned int)v11 + v0 * 4))
                {
                    v38 = &g_BanMasks[idx];
                    v39 = &v9;
                    if (k < 0 || k >= 32)
                        v39 = sub_4892a0("i >= 0 && i < GetNumBits()", "../game_shared/bitvec.h", 133, "class CBitVecAccessor CBitVec<32>::operator [](int)");
                    *(unsigned int **)&v9 = v38;
                    v39[1] = k;
                    v0 = (int)(*(unsigned int *)((void*)&v9 + 4)) >> 5;
                    if (!(1 << ((char)(*(unsigned int *)((void*)&v9 + 4) & 31) & 31) & *(int *)((unsigned int)v9 + v0 * 4)))
                        v3 = 1;
                }
                v40 = k + 1;
                g_6169f8(idx + 1, v40, v3);
                k = v40;
            } while (k < a1->field_c);
        }
    } while ((idx += 1, idx < a1->field_c));
    return a1;
}

