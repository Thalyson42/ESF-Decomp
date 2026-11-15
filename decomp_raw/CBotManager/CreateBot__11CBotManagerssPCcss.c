// CreateBot__11CBotManagerssPCcss @0x13ec10 size=656
typedef struct st_53ec10_2 {
    char padding_0[4];
    char field_4;
    char padding_5[11];
    float field_10;
} st_53ec10_2;

typedef struct st_53ec10_1 {
    float field_0;
} st_53ec10_1;

typedef struct st_53ec10_0 {
    unsigned int field_0;
} st_53ec10_0;

extern float _11CBotManager.sv_bot_skill+12;
extern st_53ec10_0 *g_engfuncs.pfnAlertMessage;
extern st_53ec10_0 *g_engfuncs.pfnFreeEntPrivateData;
extern st_53ec10_0 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_53ec10_0 *g_engfuncs.pfnCreateFakeClient;
extern st_53ec10_1 *gpGlobals;
extern int BotManager;

unsigned int * CreateBot__11CBotManagerssPCcss(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    char *v11;  // eax
    char *v12;  // edi
    int v21;  // esi
    st_53ec10_2 *v22;  // ecx
    char *v13;  // ecx
    char *v14;  // edi
    char *iter;  // edi
    char *i;  // ecx
    char *v17;  // edx
    unsigned int *v18;  // edi
    unsigned int v19;  // esi
    unsigned int v20;  // edx
    char *v0;  // [bp-0xec]
    char *v1;  // [bp-0xe8]
    short v2;  // [bp-0xe4]
    short v3;  // [bp-0xe2]
    short v4;  // [bp-0xe0]
    short v5;  // [bp-0xde]
    char v6;  // [bp-0xcc]
    int v7;  // [bp-0x4c]
    unsigned short v8;  // [bp-0x48]
    unsigned short v9;  // [bp-0x46]
    uint3904_t v10;  // [bp-0x44], Other Possible Types: uint1024_t, char

    v10 = _INSERT(*(uint1024_t *)((void*)&v10 + 64), 64, (char *)&v10 + 0x44);
    v11 = *(unsigned int *)((void*)&v10 + 84);
    v5 = *(unsigned int *)((void*)&v10 + 76);
    v4 = *(unsigned int *)((void*)&v10 + 80);
    v3 = *(unsigned int *)((void*)&v10 + 88);
    v2 = *(unsigned int *)((void*)&v10 + 92);
    if (v11 && *v11)
    {
        strncpy@GLIBC_2.0(&v10, v11, 31);
        (&v10)[32] = 0;
    }
    else if (*(short *)(*(unsigned int *)((void*)&v10 + 72) + 62) > 0)
    {
        CBotManager::PickBotName(&BotManager, &v10);
    }
    else
    {
        *(unsigned int *)&v10 = 7630658;
    }
    if ((unsigned short)(v3 - 1) > 4)
    {
        v9 = __fnstcw();
        v8 = v9 | 0xc00;
        v7 = (int)(1.0 + _11CBotManager.sv_bot_skill+12);
        v3 = v7;
    }
    v12 = &v10;
    v13 = 0xffffffff;
    do
    {
        v14 = v12;
    } while (v13 && (v13 -= 1, v12 = v14 + 1, *v14));
    iter = ~v13 - 1;
    v1 = NULL;
    if (v1 < iter)
    {
        v0 = &v10;
        do
        {
            if ((char)(*(char *)(v1 + v0) - 32) > 94 || *(char *)(v1 + v0) == 0x22)
            {
                if (v1 < iter)
                {
                    i = v1;
                    do
                    {
                        v17 = i + 1;
                        *(char *)(i + &v10) = *(char *)(v17 + &v10);
                        i = v17;
                    } while (i < iter);
                    iter -= 1;
                }
                else
                {
                    iter -= 1;
                }
            }
        } while ((v1 += 1, v1 < iter));
    }
    v18 = g_engfuncs.pfnCreateFakeClient(&v10);
    v19 = 0;
    if (!v18 || !g_engfuncs.pfnEntOffsetOfPEntity(v18))
        v19 = 1;
    if (v19)
    {
        v20 = "Max. Players reached.  Can't create bot!\n";
    }
    else
    {
        g_engfuncs.pfnAlertMessage(1, "Creating bot...\n");
        g_engfuncs.pfnFreeEntPrivateData(v18);
        v18[31] = 0;
        v21 = GetClassPtr__H1Z4CBot_PX01_PX01((!v18 ? 0 : v18 + 32));
        if (v21)
        {
            v18[121] = 0;
            ClientConnect(v18, &v10, "127.0.0.1", &v6);
            ClientPutInServer(v18);
            CBot::CreateInit(v21, v5, v4, v3, v2, -0x1);
            v22 = *(unsigned int *)((void*)&v10 + 72);
            v22->field_4 = v22->field_4 + 1;
            v22->field_10 = (float)(5.0 + *(float *)gpGlobals);
            return gpGlobals;
        }
        v20 = "Error ! Couldn't create bot\n";
    }
    return g_engfuncs.pfnAlertMessage(1, v20);
}

