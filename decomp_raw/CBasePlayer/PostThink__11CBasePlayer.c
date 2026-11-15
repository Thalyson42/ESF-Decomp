// PostThink__11CBasePlayer @0xfa120 size=953
typedef struct st_4fa120_0 {
    char padding_0[132];
    struct st_4fa120_1 *field_84;
} st_4fa120_0;

typedef struct st_4fa120_1 {
    unsigned int field_0;
} st_4fa120_1;

typedef struct st_4fa120_2 {
    char padding_0[96];
    struct st_4fa120_0 *field_60;
} st_4fa120_2;

typedef struct st_4fa120_4 {
    char padding_0[24];
    struct st_4fa120_1 *field_18;
    char padding_1c[32];
    struct st_4fa120_1 *field_3c;
} st_4fa120_4;

typedef struct st_4fa120_5 {
    char padding_0[68];
    struct st_4fa120_4 *field_44;
} st_4fa120_5;

extern st_4fa120_5 *g_pGameRules;
extern unsigned int g_fGameOver;
extern st_4fa120_1 *g_engfuncs.pfnPEntityOfEntOffset;

int PostThink__11CBasePlayer(float idx)
{
    unsigned int v7;  // esi
    st_4fa120_2 *v8;  // ecx
    unsigned int *v17;  // edx
    unsigned int v18;  // eax
    unsigned int *v19;  // edx
    unsigned int v20;  // eax
    st_4fa120_2 *v9;  // edx
    unsigned int v10;  // esi
    st_4fa120_2 *v11;  // edx
    unsigned int *v12;  // edx
    double v13;  // mm0
    unsigned int v14;  // eax
    unsigned int v15;  // eax
    unsigned int *v16;  // edx
    unsigned int v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    int v3;  // [bp-0xc]
    unsigned short v4;  // [bp-0x8]
    unsigned short v5;  // [bp-0x6]

    if (!g_fGameOver && (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 140))(idx))
    {
        v7 = *(unsigned int *)&idx + 2316;
        if (EHANDLE::__opi(v7))
        {
            v8 = EHANDLE::__rf(v7);
            if (v8->field_60->field_84(v8, *(int *)idx) && !*(int *)(*(int *)idx + 192))
            {
                v9 = EHANDLE::__rf(v7);
                (*(int *)&v9->field_60[1].padding_0[48])(v9, idx, idx, 2, 2.0f);
            }
            else
            {
                v10 = *(unsigned int *)&idx + 2316;
                v11 = EHANDLE::__rf(v10);
                (*(int *)&v11->field_60[1].padding_0[48])(v11, idx, idx, 0, 0);
                EHANDLE::__as(v10, 0);
            }
        }
        CBasePlayer::ForceCorrectModels(idx);
        CBasePlayer::ItemPostFrame(idx);
        v12 = *(int *)idx;
        if (*((char *)&v12[105] + 1) & 2 && 0.0 < *(float *)&v12[88] && *(float *)(*(unsigned int *)&idx + 732) >= 350.0f)
        {
            if (v12[113] == 0xfffffffd)
            {
LABEL_4fa34c:
            }
            else if (*(float *)(*(unsigned int *)&idx + 732) > 2000.0f)
            {
                g_pGameRules->field_44->field_3c(g_pGameRules, idx);
                if (0.0 >= v13)
                    goto LABEL_4fa34c;
                v2 = 32;
                v1 = (float)v13;
                v14 = g_engfuncs.pfnPEntityOfEntOffset(0);
                v0 = (!v14 ? 0 : v14 + 128);
                v15 = g_engfuncs.pfnPEntityOfEntOffset(0);
                (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 52))(idx, (!v15 ? 0 : v15 + 128));
                *(unsigned int *)(*(int *)idx + 104) = 0;
                EMIT_SOUND_DYN(*(int *)(*(int *)idx + 520), 3, "weapons/groundhit2.wav", 0x3f800000, 0.800000011920929f, 0, 100);
            }
            if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 140))(idx))
                CBasePlayer::PlayAnimation(idx);
        }
        if (*(char *)(*(int *)idx + 421) & 2)
        {
            if (64.0f < *(float *)(*(unsigned int *)&idx + 732) && !g_pGameRules->field_44->field_18(g_pGameRules))
            {
                v5 = __fnstcw();
                v4 = v5 | 0xc00;
                v3 = (int)*(float *)(*(unsigned int *)&idx + 732);
                CSoundEnt::InsertSound(4, *(int *)idx + 8, v3, 0.20000000298023224f);
            }
            *(unsigned int *)(*(unsigned int *)&idx + 732) = 0;
        }
        if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 140))(idx))
            CBasePlayer::PlayAnimation(idx);
        if (*(int *)(*(unsigned int *)&idx + 1288))
            CBasePlayer::Swoop(idx);
        v16 = *(unsigned int *)&idx + 896;
        if (v16[81] && (unsigned int)(*(int *)(*(unsigned int *)&idx + 1180) - 7) <= 1)
            CPlayerMelee::MeleeFrameAdvance(v16);
        else
            CBaseAnimating::StudioFrameAdvance(idx, 0);
        CheckPowerups__FP9entvars_s(*(int *)idx);
        CBasePlayer::UpdatePlayerSound(idx);
        *(int *)(*(unsigned int *)&idx + 708) = *(int *)(*(int *)idx + 384);
    }
    v17 = *(int *)idx;
    if (v17[92])
    {
        v19 = *(int *)idx;
        v19[20] = *(int *)(*(unsigned int *)&idx + 1952);
        v19[21] = *(int *)(*(unsigned int *)&idx + 1956);
        v20 = *(int *)(*(unsigned int *)&idx + 1960);
        v19[22] = v20;
        return v20;
    }
    *(unsigned int *)(*(unsigned int *)&idx + 1952) = v17[20];
    *(unsigned int *)(*(unsigned int *)&idx + 1956) = v17[21];
    v18 = v17[22];
    *(unsigned int *)(*(unsigned int *)&idx + 1960) = v18;
    return v18;
}

