// __18CHalfLifeMultiplay @0xdb6e0 size=322
typedef struct st_4db6e0_0 {
    char padding_0[68];
    unsigned int field_44;
} st_4db6e0_0;

typedef struct st_4db6e0_1 {
    char padding_0[144];
    unsigned int field_90;
} st_4db6e0_1;

typedef struct st_4db6e0_2 {
    unsigned int field_0;
} st_4db6e0_2;

extern float g_5bd054;
extern float g_5bd07c;
extern char __vt_10CGameRules;
extern unsigned int g_flIntermissionStartTime;
extern char __vt_18CHalfLifeMultiplay;
extern st_4db6e0_2 *g_61685c;
extern st_4db6e0_2 *g_6168a8;
extern st_4db6e0_2 *g_6168b4;
extern st_4db6e0_2 *g_61698c;
extern st_4db6e0_1 *gpGlobals;
extern int g_VoiceGameMgr;
extern int g_GameMgrHelper;

float __18CHalfLifeMultiplay(float a0)
{
    st_4db6e0_0 *v5;  // edx
    unsigned int *v6;  // edx
    char *v7;  // esi
    unsigned int v8;  // eax
    int v0;  // [bp-0x12c]
    int v1;  // [bp-0x128]
    unsigned int v2;  // [bp-0x124]
    char v3;  // [bp-0x104]

    v5 = (st_4db6e0_0 *)a0;
    v5->field_44 = &__vt_10CGameRules;
    v5->field_44 = &__vt_18CHalfLifeMultiplay;
    v2 = gpGlobals->field_90;
    v1 = &g_GameMgrHelper;
    v0 = &g_VoiceGameMgr;
    sub_489ae0(v0, v1, v2);
    *(unsigned int *)(*(unsigned int *)&a0 + 72) = 0;
    g_flIntermissionStartTime = 0;
    v6 = (unsigned int *)a0;
    *(float *)&v6[20] = g_5bd054;
    *(float *)&v6[21] = g_5bd07c;
    if (g_61698c(v0, v1, v2))
    {
        v7 = g_6168a8("servercfgfile");
        if (!v7)
        {
            sub_488630(a0);
            return a0;
        }
        if (*v7)
        {
            v8 = "Executing dedicated server config file\n";
            goto LABEL_4db7d2;
        }
    }
    else
    {
        v7 = g_6168a8("lservercfgfile");
        if (v7 && *v7)
        {
            v8 = "Executing listen server config file\n";
LABEL_4db7d2:
            g_6168b4(1, v8);
            sub_48d990(&v3, "exec %s\n", v7);
            g_61685c(&v3);
        }
    }
    sub_488630(a0);
    return a0;
}

