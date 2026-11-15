// ChangePlayerTeam__17CHalfLifeTeamplayP11CBasePlayerPCcii @0x128360 size=633
typedef struct st_528360_3 {
    struct st_528360_0 *field_0;
    char padding_4[92];
    struct st_528360_1 *field_60;
    char padding_64[1748];
    unsigned int field_738;
    char padding_73c[584];
    unsigned int field_984;
} st_528360_3;

typedef struct st_528360_2 {
    unsigned int field_0;
} st_528360_2;

typedef struct st_528360_0 {
    char padding_0[356];
    float field_164;
    char padding_168[68];
    unsigned int field_1ac;
    char padding_1b0[88];
    unsigned int field_208;
    unsigned int field_20c;
} st_528360_0;

typedef struct st_528360_1 {
    char padding_0[52];
    struct st_528360_2 *field_34;
} st_528360_1;

typedef struct st_528360_4 {
    char padding_0[204];
    struct st_528360_2 *field_cc;
} st_528360_4;

typedef struct st_528360_5 {
    char padding_0[68];
    struct st_528360_4 *field_44;
} st_528360_5;

extern st_528360_5 *g_pGameRules;
extern unsigned int gmsgScoreInfo;
extern unsigned int gmsgTeamInfo;
extern st_528360_2 *g_engfuncs.pfnMessageBegin;
extern st_528360_2 *g_engfuncs.pfnMessageEnd;
extern st_528360_2 *g_engfuncs.pfnWriteByte;
extern st_528360_2 *g_engfuncs.pfnWriteShort;
extern st_528360_2 *g_engfuncs.pfnWriteString;
extern st_528360_2 *g_engfuncs.pfnIndexOfEdict;
extern st_528360_2 *g_engfuncs.pfnPEntityOfEntIndex;
extern st_528360_2 *g_engfuncs.pfnGetInfoKeyBuffer;
extern st_528360_2 *g_engfuncs.pfnSetClientKeyValue;

int ChangePlayerTeam__17CHalfLifeTeamplayP11CBasePlayerPCcii(unsigned int *a0, st_528360_3 *a1, char *a2, unsigned int a3, unsigned int a4)
{
    unsigned int v6;  // eax
    unsigned int v7;  // edx
    char *v16;  // esi
    char *v17;  // edi
    unsigned int v18;  // 4101
    unsigned int v19;  // 4109
    unsigned int v20;  // edi
    unsigned int v21;  // eax
    unsigned int v8;  // esi
    unsigned int v9;  // eax
    char *v10;  // edi
    unsigned int v11;  // ecx
    unsigned int v12;  // cc_op
    unsigned int v13;  // cc_dep1
    unsigned int v14;  // cc_dep2
    unsigned int v15;  // eax
    unsigned int v0;  // [bp-0x44]
    unsigned int v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x10]
    int v3;  // [bp-0xc]
    unsigned short v4;  // [bp-0x8]
    unsigned short v5;  // [bp-0x6]

    v2 = g_engfuncs.pfnIndexOfEdict(a1->field_0->field_208);
    if (a3)
    {
        a0[22] = 1;
        v6 = g_engfuncs.pfnPEntityOfEntIndex(0);
        v7 = (!v6 ? 0 : v6 + 128);
        a1->field_60->field_34(a1, v7, v7, 900.0f, (!a4 ? 0x1000 : 0x2000));
        a0[22] = 0;
        a0[23] = 0;
    }
    v8 = &a1[1].padding_4[16];
    strncpy@GLIBC_2.0(v8, a2, 16);
    v1 = v8;
    v0 = "team";
    v9 = g_engfuncs.pfnGetInfoKeyBuffer(a1->field_0->field_208);
    g_engfuncs.pfnSetClientKeyValue(v2, v9);
    v10 = "Evil";
    v11 = 5;
    v12 = 15;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    do
    {
        v16 = a2;
        v17 = v10;
        if (!v11)
            break;
        v11 -= 1;
        v12 = 4;
        v13 = *v16;
        v14 = *v17;
        v10 = v17 + 1;
        a2 = v16 + 1;
    } while (*v16 == *v17);
    v18 = _ccall(4, v12, v13, v14, 0);
    if (!(v18 & 1))
    {
        v19 = _ccall(v12, v13, v14, 0);
        v15 = -(v19 & 1) | 1;
    }
    if (!v15)
        a1->field_0->field_1ac = 2;
    else
        a1->field_0->field_1ac = 1;
    g_engfuncs.pfnMessageBegin(2, gmsgTeamInfo, 0, 0);
    g_engfuncs.pfnWriteByte(v2);
    v20 = &a1[1].padding_4[16];
    g_engfuncs.pfnWriteString(v20);
    g_engfuncs.pfnMessageEnd();
    g_engfuncs.pfnMessageBegin(2, gmsgScoreInfo, 0, 0);
    g_engfuncs.pfnWriteByte(v2);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)a1->field_0->field_164;
    g_engfuncs.pfnWriteShort(v3);
    g_engfuncs.pfnWriteShort(a1->field_984);
    g_engfuncs.pfnWriteShort(a1->field_738);
    g_engfuncs.pfnWriteShort(a1->field_0->field_20c);
    v21 = g_pGameRules->field_44->field_cc(g_pGameRules, v20);
    g_engfuncs.pfnWriteShort(v21 + 1);
    return g_engfuncs.pfnMessageEnd();
}

