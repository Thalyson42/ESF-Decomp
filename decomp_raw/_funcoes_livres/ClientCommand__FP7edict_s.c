// ClientCommand__FP7edict_s @0x9fd60 size=3630
typedef struct st_49fd60_1 {
    char padding_0[140];
    struct st_49fd60_0 *field_8c;
} st_49fd60_1;

typedef struct st_49fd60_4 {
    struct st_49fd60_5 *field_0;
    char padding_4[92];
    struct st_49fd60_1 *field_60;
    char padding_64[684];
    char field_310;
    char padding_311[15];
    unsigned int field_320;
    unsigned int field_324;
    char padding_328[4];
    unsigned int field_32c;
    unsigned int field_330;
    char padding_334[48];
    unsigned int field_364;
    char padding_368[348];
    unsigned int field_4c4;
    char padding_4c8[608];
    unsigned int field_728;
    char padding_72c[56];
    struct st_49fd60_3 *field_764;
    char padding_768[48];
    float field_798;
    float field_79c;
} st_49fd60_4;

typedef struct st_49fd60_10 {
    char padding_0[2360];
    unsigned int field_938;
} st_49fd60_10;

typedef struct st_49fd60_0 {
    unsigned int field_0;
} st_49fd60_0;

typedef struct st_49fd60_2 {
    char padding_0[52];
    struct st_49fd60_0 *field_34;
} st_49fd60_2;

typedef struct st_49fd60_5 {
    char padding_0[428];
    unsigned int field_1ac;
    char padding_1b0[88];
    unsigned int field_208;
    char padding_20c[56];
    unsigned int field_244;
} st_49fd60_5;

typedef struct st_49fd60_3 {
    char padding_0[4];
    struct st_49fd60_2 *field_4;
} st_49fd60_3;

typedef struct st_49fd60_9 {
    char padding_0[8];
    unsigned int field_8;
} st_49fd60_9;

typedef struct st_49fd60_6 {
    char padding_0[32];
    struct st_49fd60_0 *field_20;
    char padding_24[52];
    struct st_49fd60_0 *field_58;
    char padding_5c[4];
    struct st_49fd60_0 *field_60;
    char padding_64[8];
    struct st_49fd60_0 *field_6c;
} st_49fd60_6;

typedef struct st_49fd60_8 {
    float field_0;
} st_49fd60_8;

typedef struct st_49fd60_7 {
    char padding_0[68];
    struct st_49fd60_6 *field_44;
} st_49fd60_7;

extern float realteams+12;
extern float allowspectator+12;
extern st_49fd60_7 *g_pGameRules;
extern unsigned int gmsgVGUIMenu;
extern st_49fd60_0 *g_engfuncs.pfnMessageBegin;
extern st_49fd60_0 *g_engfuncs.pfnMessageEnd;
extern st_49fd60_0 *g_engfuncs.pfnWriteByte;
extern st_49fd60_0 *g_engfuncs.pfnAlertMessage;
extern st_49fd60_0 *g_engfuncs.pfnPEntityOfEntIndex;
extern st_49fd60_0 *g_engfuncs.pfnClientPrintf;
extern st_49fd60_0 *g_engfuncs.pfnCmd_Argv;
extern st_49fd60_0 *g_engfuncs.pfnCmd_Argc;
extern st_49fd60_8 *gpGlobals;
extern float g_flWeaponCheat;
extern int BotManager;

unsigned int ClientCommand__FP7edict_s(float a0)
{
    st_49fd60_4 *v30;  // edi
    unsigned int v31;  // eax
    float *v40;  // edx
    unsigned int *v41;  // eax
    unsigned int v42;  // eax
    unsigned int v43;  // esi
    float *v44;  // edx
    unsigned int *v45;  // eax
    float *v46;  // edx
    unsigned int *v47;  // eax
    unsigned int v48;  // eax
    unsigned long long v51;  // 4200
    unsigned long long v54;  // 4200
    unsigned int v55;  // eax
    st_49fd60_10 *v33;  // eax
    unsigned int v34;  // eax
    float *v38;  // edx
    unsigned int *v39;  // eax
    unsigned int v0;  // [bp-0x1b0]
    unsigned int v1;  // [bp-0x1ac]
    unsigned int v2;  // [bp-0x1a8]
    unsigned int v3;  // [bp-0x1a4]
    unsigned int v4;  // [bp-0x19c]
    int v5;  // [bp-0x198]
    int v6;  // [bp-0x194]
    char *v7;  // [bp-0x16c]
    char *v8;  // [bp-0x168]
    st_49fd60_9 *v9;  // [bp-0x164]
    int v10;  // [bp-0x160]
    int v11;  // [bp-0x15c]
    unsigned short v12;  // [bp-0x158]
    unsigned short v13;  // [bp-0x156]
    char v14;  // [bp-0x154]
    char v15;  // [bp-0xd5]
    float v16;  // [bp-0x44], Other Possible Types: unsigned int, double
    unsigned int v17;  // [bp-0x40]
    float v18;  // [bp-0x40]
    float v19;  // [bp-0x3c]
    unsigned int v20;  // [bp-0x3c]
    float v21;  // [bp-0x38]
    unsigned short v22;  // [bp-0x38]
    unsigned short v23;  // [bp-0x36]
    unsigned int v24;  // [bp-0x34]
    unsigned int v25;  // [bp-0x30]
    unsigned int v26;  // [bp-0x24]
    unsigned int v27;  // [bp-0x20]
    unsigned int v28;  // [bp-0x1c]

    v10 = g_engfuncs.pfnCmd_Argv(0);
    if (!*(int *)(*(unsigned int *)&a0 + 124))
        return v31;
    v9 = *(unsigned int *)&a0 + 128;
    v30 = GetClassPtr__H1Z11CBasePlayer_PX01_PX01(v9);
    if (!strcmp@GLIBC_2.0(v10, "say"))
    {
        v31 = Host_Say(a0, 0);
        return v31;
    }
    else if (!strcmp@GLIBC_2.0(v10, "say_team"))
    {
        Host_Say(a0, 1);
        return v31;
    }
    else if (!strcmp@GLIBC_2.0(v10, "fullupdate"))
    {
        CBasePlayer::ForceClientDllUpdate(GetClassPtr__H1Z11CBasePlayer_PX01_PX01(v9));
        return v31;
    }
    else if (!strcmp@GLIBC_2.0(v10, "fov"))
    {
        if (g_flWeaponCheat != 0.0f && (int)g_engfuncs.pfnCmd_Argc() > 1)
        {
            v33 = GetClassPtr__H1Z11CBasePlayer_PX01_PX01(v9);
            v33->field_938 = __strtol_internal@GLIBC_2.0(g_engfuncs.pfnCmd_Argv(1), 0, 10, 0);
            return v31;
        }
        v34 = UTIL_VarArgs("\"fov\" is \"%d\"\n", *(int *)(GetClassPtr__H1Z11CBasePlayer_PX01_PX01(v9) + 2360));
        g_engfuncs.pfnClientPrintf(a0, 0, v34);
        return v31;
    }
    else
    {
        if (!strcmp@GLIBC_2.0(v10, "use"))
        {
            v2 = g_engfuncs.pfnCmd_Argv(1);
        }
        else if (strstr@GLIBC_2.0(v10, "weapon_") && strstr@GLIBC_2.0(v10, "weapon_") == v10)
        {
            v5 = v10;
        }
        else if (!strcmp@GLIBC_2.0(v10, "lastinv"))
        {
            CBasePlayer::SelectLastItem(GetClassPtr__H1Z11CBasePlayer_PX01_PX01(v9));
            return v31;
        }
        else if (!strcmp@GLIBC_2.0(v10, "spectate"))
        {
            if (v9[35].padding_0[2] & 16)
            {
                v38 = g_pGameRules->field_44->field_58(g_pGameRules, v30);
                v39 = &v9->field_8;
                *(float *)&v26 = *(float *)&v9->field_8;
                *(float *)&v27 = *(float *)&v39[1];
                *(float *)&v28 = *(float *)&v39[2];
                v40 = (!v38 ? NULL : v38 + 32);
                v41 = v40 + 20;
                v16 = v40[20];
                v18 = *(float *)&v41[1];
                v19 = *(float *)&v41[2];
                CBasePlayer::StartObserver(v30, &v26, &v16);
                return v31;
            }
            else if (allowspectator+12 != 1.0)
            {
                return v31;
            }
            else if (v30->field_0->field_244)
            {
                return v31;
            }
            else if (v30->field_728)
            {
                return v31;
            }
            else if (v30->field_4c4)
            {
                return v31;
            }
            else if (!v30->field_364)
            {
                if (v30->field_60->field_8c(v30) && !(v30->field_310 & 32))
                {
                    v42 = g_engfuncs.pfnPEntityOfEntIndex(0);
                    v43 = (!v42 ? 0 : v42 + 128);
                    g_pGameRules->field_44->field_6c(g_pGameRules, v30, v43, v43);
                }
                v44 = g_pGameRules->field_44->field_58(g_pGameRules, v30);
                v45 = &v9->field_8;
                *(float *)&v16 = *(float *)&v9->field_8;
                *(float *)&v17 = *(float *)&v45[1];
                *(float *)&v20 = *(float *)&v45[2];
                v46 = (!v44 ? NULL : v44 + 32);
                v47 = v46 + 20;
                v21 = v46[20];
                *(float *)&v24 = *(float *)&v47[1];
                *(float *)&v25 = *(float *)&v47[2];
                CBasePlayer::StartSpectator(v30, &v16, &v21);
                return v31;
            }
            else
            {
                return v31;
            }
        }
        else
        {
            if (!strcmp@GLIBC_2.0(v10, "follownext"))
            {
                v8 = &v16;
                v5 = 0;
                v48 = __strtol_internal@GLIBC_2.0(g_engfuncs.pfnCmd_Argv(1), 0, 10, v5);
                *(unsigned short *)&v5 = _INSERT(v48, 0, v48 == 1);
                CBasePlayer::Spectator_FindNextPlayer(v30, v5);
                return v31;
            }
            else if (!strcmp@GLIBC_2.0(v10, "spec_mode"))
            {
                v7 = &v16;
                CBasePlayer::Spectator_SetMode(v30, __strtol_internal@GLIBC_2.0(g_engfuncs.pfnCmd_Argv(1), 0, 10, 0));
                return v31;
            }
            else if (!strcmp@GLIBC_2.0(v10, "teleport"))
            {
                CBasePlayer::Teleport(v30);
                return v31;
            }
            else if (!strcmp@GLIBC_2.0(v10, "togglefly"))
            {
                if (!v30->field_320)
                {
                    CBasePlayer::StartFly(v30);
                    return v31;
                }
                CBasePlayer::StopFly(v30);
                return v31;
            }
            else
            {
                if (!strcmp@GLIBC_2.0(v10, "turbo"))
                {
                    if (!v30->field_324)
                    {
                        CBasePlayer::StartTurbo(v30);
                        return v31;
                    }
                    CBasePlayer::StopTurbo(v30);
                    return v31;
                }
                else
                {
                    if (!strcmp@GLIBC_2.0(v10, "+block"))
                    {
                        if (!v30->field_32c)
                        {
                            CBasePlayer::StartBlock(v30);
                            return v31;
                        }
                        return v31;
                    }
                    else
                    {
                        if (!strcmp@GLIBC_2.0(v10, "-block"))
                        {
                            if (v30->field_32c)
                            {
                                CBasePlayer::StopBlock(v30);
                                return v31;
                            }
                            return v31;
                        }
                        else
                        {
                            if (!strcmp@GLIBC_2.0(v10, "+powerup"))
                            {
                                if (!v30->field_330)
                                {
                                    CBasePlayer::StartPowerUp(v30);
                                    return v31;
                                }
                                return v31;
                            }
                            else
                            {
                                if (!strcmp@GLIBC_2.0(v10, "-powerup"))
                                {
                                    if (v30->field_330)
                                    {
                                        CBasePlayer::StopPowerUp(v30);
                                        return v31;
                                    }
                                    return v31;
                                }
                                else
                                {
                                    if (!strcmp@GLIBC_2.0(v10, "ascend"))
                                    {
                                        CBasePlayer::StartAscend(v30);
                                        return v31;
                                    }
                                    v5 = "descend";
                                    if (!strcmp@GLIBC_2.0(v10, v5))
                                    {
                                        *(unsigned short *)&v5 = 1;
                                        CBasePlayer::Descend(v30, v5);
                                        return v31;
                                    }
                                    else if (!CBasePlayer::MakeCandy(v30, v10))
                                    {
                                        if (!strcmp@GLIBC_2.0(v10, "change_class"))
                                        {
                                            if ((v30->field_798 + 2.0 < *(float *)gpGlobals || v30->field_0->field_244 || !v30->field_764->field_4->field_34(v30->field_764)) && !v30->field_364)
                                            {
                                                if (v30->field_0->field_244 && g_pGameRules->field_44->field_20(g_pGameRules))
                                                    return v31;
                                                if (realteams+12 != 1.0f || (v4 = 33, !g_pGameRules->field_44->field_20(g_pGameRules)))
                                                    v4 = 3;
                                                g_engfuncs.pfnMessageBegin(1, gmsgVGUIMenu, 0, v30->field_0->field_208);
                                                v4 = v4;
                                            }
                                            else if (v30->field_0->field_244)
                                            {
                                                return v31;
                                            }
                                            else if (!v30->field_764->field_4->field_34(v30->field_764))
                                            {
                                                return v31;
                                            }
                                            else if (!v30->field_364)
                                            {
                                                v23 = __fnstcw();
                                                v22 = _INSERT(v23, 1, *(char *)((void*)&v23 + 1) & 243 | 8);
                                                v51 = _ccall(v22);
                                                v16 = rint(2.0 + v30->field_798 - *(float *)gpGlobals);
                                                v13 = __fnstcw();
                                                v12 = v13 | 0xc00;
                                                v11 = (int)v16;
                                                v6 = v11;
                                                sprintf@GLIBC_2.0(&v14, "You must wait %i more second(s) to change classes.\n");
                                                UTIL_SayText(&v14, v30);
                                                return v31;
                                            }
                                            else
                                            {
                                                return v31;
                                            }
                                        }
                                        else
                                        {
                                            if (strcmp@GLIBC_2.0(v10, "change_team"))
                                            {
                                                v5 = v10;
                                                if (CBasePlayer::ChangeClass(GetClassPtr__H1Z11CBasePlayer_PX01_PX01(v9)))
                                                    return v31;
                                                if (!strcmp@GLIBC_2.0(v10, "identify"))
                                                {
                                                    g_engfuncs.pfnAlertMessage(1, "ESF Beta 1.2.1, Public Version");
                                                    return v31;
                                                }
                                                if (!(char)CBotManager::HandleBotCommands(&BotManager, a0))
                                                {
                                                    v6 = v10;
                                                    v55 = GetClassPtr__H1Z11CBasePlayer_PX01_PX01(v9);
                                                    if (g_pGameRules->field_44->field_60(g_pGameRules, v55))
                                                        return v31;
                                                    strncpy@GLIBC_2.0(&v14, v10, 127);
                                                    v15 = 0;
                                                    v3 = 0;
                                                    v2 = 0;
                                                    v1 = 0;
                                                    v0 = 0;
                                                    ClientPrint(*(unsigned int *)&a0 + 128, 2, UTIL_VarArgs("Unknown command: %s\n", &v14));
                                                    return v31;
                                                }
                                                else
                                                {
                                                    return v31;
                                                }
                                            }
                                            else if (g_pGameRules->field_44->field_20(g_pGameRules) && (v30->field_79c + 10.0 < *(float *)gpGlobals || !v30->field_0->field_1ac))
                                            {
                                                g_engfuncs.pfnMessageBegin(1, gmsgVGUIMenu, 0, v30->field_0->field_208);
                                                v4 = 2;
                                            }
                                            else if (!g_pGameRules->field_44->field_20(g_pGameRules))
                                            {
                                                return v31;
                                            }
                                            else if (v30->field_0->field_1ac)
                                            {
                                                v23 = __fnstcw();
                                                v22 = _INSERT(v23, 1, *(char *)((void*)&v23 + 1) & 243 | 8);
                                                v54 = _ccall(v22);
                                                v16 = rint(10.0 + v30->field_79c - *(float *)gpGlobals);
                                                v13 = __fnstcw();
                                                v12 = v13 | 0xc00;
                                                v11 = (int)v16;
                                                v6 = v11;
                                                sprintf@GLIBC_2.0(&v14, "You must wait %i more second(s) to change teams.\n");
                                                UTIL_SayText(&v14, v30);
                                                return v31;
                                            }
                                            else
                                            {
                                                return v31;
                                            }
                                        }
                                        g_engfuncs.pfnWriteByte(v4);
                                        g_engfuncs.pfnMessageEnd();
                                        return v31;
                                    }
                                    else
                                    {
                                        return v31;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        CBasePlayer::SelectItem(GetClassPtr__H1Z11CBasePlayer_PX01_PX01(v9));
        return v31;
    }
}

