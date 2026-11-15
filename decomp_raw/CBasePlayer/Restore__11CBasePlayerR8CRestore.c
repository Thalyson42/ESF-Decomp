// Restore__11CBasePlayerR8CRestore @0xfb740 size=545
typedef struct st_4fb740_0 {
    struct st_4fb740_1 *field_0;
    char padding_4[628];
    unsigned int field_278;
    char padding_27c[1696];
    unsigned int field_91c;
} st_4fb740_0;

typedef struct st_4fb740_5 {
    unsigned int field_0;
} st_4fb740_5;

typedef struct st_4fb740_6 {
    char padding_0[480];
    struct st_4fb740_5 *field_1e0;
} st_4fb740_6;

typedef struct st_4fb740_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[60];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[24];
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[32];
    unsigned int field_a0;
    char padding_a4[356];
    unsigned int field_208;
} st_4fb740_1;

typedef struct st_4fb740_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[60];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
} st_4fb740_2;

typedef struct st_4fb740_3 {
    char padding_0[1324];
    unsigned int field_52c;
} st_4fb740_3;

typedef struct st_4fb740_4 {
    char padding_0[156];
    struct st_4fb740_3 *field_9c;
} st_4fb740_4;

extern int _11CBasePlayer.m_playerSaveData;
extern st_4fb740_6 g_engfuncs;
extern st_4fb740_5 *g_engfuncs.pfnAlertMessage;
extern st_4fb740_4 *gpGlobals;

unsigned int Restore__11CBasePlayerR8CRestore(st_4fb740_0 *a0, int a1)
{
    st_4fb740_2 *v14;  // ecx
    unsigned int *v15;  // esi
    st_4fb740_2 *v16;  // edx
    unsigned int *v17;  // eax
    st_4fb740_2 *v18;  // ecx
    unsigned int *v19;  // edx
    unsigned int *v20;  // eax
    st_4fb740_6 *v21;  // edx
    unsigned int v0;  // [bp-0x7c]
    unsigned int v1;  // [bp-0x78]
    unsigned int v2;  // [bp-0x74]
    st_4fb740_6 *v3;  // [bp-0x4c]
    unsigned int v4;  // [bp-0x48]
    float v5;  // [bp-0x44]
    float v6;  // [bp-0x40]
    float v7;  // [bp-0x3c]
    float v8;  // [bp-0x38]
    float v9;  // [bp-0x34]
    float v10;  // [bp-0x30]
    float v11;  // [bp-0x24]
    float v12;  // [bp-0x20]
    float v13;  // [bp-0x1c]

    if (!CBaseMonster::Restore(a0, a1))
        return 0;
    v4 = CRestore::ReadFields(a1, "PLAYER", a0, &_11CBasePlayer.m_playerSaveData, 0x22);
    if (!gpGlobals->field_9c->field_52c)
    {
        g_engfuncs.pfnAlertMessage(1, "No Landmark:%s\n", gpGlobals->field_9c + 1);
        v14 = EntSelectSpawnPoint(a0);
        v15 = a0->field_0;
        v16 = (!v14 ? NULL : (struct st_4fb740_2 *)&v14[1].padding_14[16]);
        v5 = 0;
        v6 = 0;
        v7 = 1.0;
        v17 = &v16->field_8;
        v11 = v16->field_8 + v5;
        v12 = *(float *)&v17[1] + v6;
        v13 = *(float *)&v17[2] + v7;
        *(float *)&v15[2] = v11;
        *(float *)&v15[3] = v12;
        *(float *)&v15[4] = v13;
        v18 = (!v14 ? NULL : (struct st_4fb740_2 *)&v14[1].padding_14[16]);
        v19 = a0->field_0;
        v19[20] = v18->field_50;
        v19[21] = v18->field_54;
        v19[22] = v18->field_58;
    }
    a0->field_0->field_7c = 0;
    v20 = a0->field_0;
    v20[20] = v20[29];
    v20[21] = v20[30];
    v20[22] = v20[31];
    a0->field_0->field_a0 = 1;
    a0->field_278 = 247;
    v5 = 4.0f;
    v6 = 4.0f;
    v7 = 9.0f;
    v8 = -4.0f;
    v9 = -4.0f;
    v10 = -9.0f;
    UTIL_SetSize(a0->field_0, &v8, &v5);
    v3 = &g_engfuncs.padding_0[0];
    v3->field_1e0(a0->field_0->field_208, "hl", "1");
    if (a0->field_91c)
    {
        v2 = "1";
        v1 = "slj";
        v0 = a0->field_0->field_208;
        v21 = v3;
    }
    else
    {
        v21 = &g_engfuncs.padding_0[0];
        v2 = "0";
        v1 = "slj";
        v0 = a0->field_0->field_208;
    }
    v21->field_1e0(v0, v1, v2);
    CBasePlayer::RenewItems(a0);
    return v4;
}

