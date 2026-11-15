// ShowInGameBotHelpWindow__Fv @0x143320 size=1220
typedef struct st_543320_2 {
    char padding_0[124];
    struct st_543320_3 *field_7c;
} st_543320_2;

typedef struct st_543320_3 {
    struct st_543320_1 *field_0;
} st_543320_3;

typedef struct st_543320_1 {
    char padding_0[520];
    unsigned int field_208;
} st_543320_1;

typedef struct st_543320_4 {
    char padding_0[20];
    struct st_543320_0 *field_14;
} st_543320_4;

typedef struct st_543320_0 {
    unsigned int field_0;
} st_543320_0;

extern unsigned int gmsgMOTD;
extern unsigned int gmsgServerName;
extern st_543320_1 *PrintingInGameHelp;
extern char Started.2948;
extern unsigned int length.2949;
extern int char_count.2950;
extern int OldServerName.2954;
extern st_543320_0 *g_engfuncs.pfnMessageBegin;
extern st_543320_0 *g_engfuncs.pfnMessageEnd;
extern st_543320_0 *g_engfuncs.pfnWriteByte;
extern st_543320_0 *g_engfuncs.pfnWriteString;
extern st_543320_0 *g_engfuncs.pfnCVarGetString;
extern st_543320_0 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_543320_0 *g_engfuncs.pfnRegUserMsg;
extern st_543320_0 *g_engfuncs.pfnLoadFileForMe;
extern st_543320_0 *g_engfuncs.pfnFreeFile;
extern st_543320_0 *g_engfuncs.pfnIsDedicatedServer;
extern st_543320_3 *pFileList.2951;
extern unsigned int aFileList.2952;
extern unsigned int _.tmp_0.2953;
extern char chunk.2955;
extern char chunk.2955+100;
extern st_543320_2 *BotManager+12;
extern char cout;
extern st_543320_4 *cout+512;

st_543320_1 ** ShowInGameBotHelpWindow__Fv(void)
{
    st_543320_2 *v5;  // eax
    st_543320_1 **v6;  // eax
    unsigned int v15;  // ecx
    char *v16;  // edi
    st_543320_2 *v17;  // eax
    st_543320_1 **v18;  // eax
    st_543320_1 **v19;  // ecx
    st_543320_2 *v20;  // eax
    st_543320_1 **v21;  // eax
    st_543320_1 **v22;  // ecx
    st_543320_2 *v8;  // eax
    st_543320_1 **v9;  // eax
    st_543320_1 **v10;  // ecx
    st_543320_1 **v11;  // edx
    unsigned int v12;  // ecx
    st_543320_1 **v13;  // edi
    char *v14;  // edi
    int v0;  // [bp-0x2c], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]

    if (!g_engfuncs.pfnIsDedicatedServer(v1, v2, v3))
    {
        if (!g_engfuncs.pfnIsDedicatedServer() && !(v5 = BotManager+12, !BotManager+12 && !(v5 = g_engfuncs.pfnPEntityOfEntOffset(0), v5)))
            v6 = v5->field_7c;
        else
            v6 = NULL;
        if (!v6)
            return v6;
    }
    if (!_.tmp_0.2953)
    {
        pFileList.2951 = 0;
        aFileList.2952 = 0;
        _.tmp_0.2953 = 1;
    }
    if (!gmsgMOTD)
        gmsgMOTD = g_engfuncs.pfnRegUserMsg("MOTD", 0xffffffff);
    if (!gmsgServerName)
        gmsgServerName = g_engfuncs.pfnRegUserMsg("ServerName", 0xffffffff);
    if (!Started.2948)
    {
        *(char *)&PrintingInGameHelp = 1;
        char_count.2950 = 0;
        length.2949 = 0;
        pFileList.2951 = g_engfuncs.pfnLoadFileForMe("esf_bot/ingame_help.txt", &length.2949);
        aFileList.2952 = pFileList.2951;
        Started.2948 = 1;
        strcpy@GLIBC_2.0(&OldServerName.2954, g_engfuncs.pfnCVarGetString("hostname"));
        if (g_engfuncs.pfnIsDedicatedServer())
        {
            cout+512->field_14(&cout, "In game bot help\n\n");
        }
        else
        {
            if (!g_engfuncs.pfnIsDedicatedServer())
            {
                v8 = BotManager+12;
                if (BotManager+12 || (v8 = g_engfuncs.pfnPEntityOfEntOffset(0), v8))
                    v9 = v8->field_7c;
                else
                    v9 = NULL;
                v10 = v9;
            }
            else
            {
                v10 = NULL;
            }
            g_engfuncs.pfnMessageBegin(1, gmsgServerName, 0, *v10->field_208);
            v0 = "In game bot help";
            g_engfuncs.pfnWriteString(v0);
            g_engfuncs.pfnMessageEnd(v0);
        }
    }
    if (pFileList.2951)
    {
        v11 = pFileList.2951;
        if ((char)pFileList.2951->field_0 && char_count.2950 <= 0x5ff)
        {
            v12 = 0xffffffff;
            do
            {
                v13 = v11;
            } while (v12 && (v12 -= 1, v11 = (char *)v13 + 1, *(char *)v13));
            if (~v12 - 1 <= 99)
            {
                strcpy@GLIBC_2.0(&chunk.2955, pFileList.2951);
            }
            else
            {
                strncpy@GLIBC_2.0(&chunk.2955, pFileList.2951, 100);
                chunk.2955+100 = 0;
            }
            v14 = &chunk.2955;
            v15 = 0xffffffff;
            do
            {
                v16 = v14;
            } while (v15 && (v15 -= 1, v14 = v16 + 1, *v16));
            char_count.2950 = char_count.2950 + ~v15 - 1;
            if (char_count.2950 <= 0x5ff)
                pFileList.2951 = char_count.2950 + aFileList.2952;
            else
                *(char *)&pFileList.2951->field_0 = 0;
            if (g_engfuncs.pfnIsDedicatedServer())
            {
                cout+512->field_14(&cout, &chunk.2955);
            }
            else
            {
                if (!g_engfuncs.pfnIsDedicatedServer())
                {
                    v17 = BotManager+12;
                    if (BotManager+12 || (v17 = g_engfuncs.pfnPEntityOfEntOffset(0), v17))
                        v18 = v17->field_7c;
                    else
                        v18 = NULL;
                    v19 = v18;
                }
                else
                {
                    v19 = NULL;
                }
                g_engfuncs.pfnMessageBegin(1, gmsgMOTD, 0, *v19->field_208);
                g_engfuncs.pfnWriteByte(!(char)pFileList.2951->field_0);
                g_engfuncs.pfnWriteString(&chunk.2955);
                g_engfuncs.pfnMessageEnd();
            }
        }
        if (pFileList.2951 && (char)pFileList.2951->field_0 && char_count.2950 <= 0x600)
            return pFileList.2951;
    }
    v0 = aFileList.2952;
    g_engfuncs.pfnFreeFile(v0);
    if (!g_engfuncs.pfnIsDedicatedServer(v0))
    {
        if (!g_engfuncs.pfnIsDedicatedServer())
        {
            v20 = BotManager+12;
            if (BotManager+12 || (v20 = g_engfuncs.pfnPEntityOfEntOffset(0), v20))
                v21 = v20->field_7c;
            else
                v21 = NULL;
            v22 = v21;
        }
        else
        {
            v22 = NULL;
        }
        g_engfuncs.pfnMessageBegin(1, gmsgServerName, 0, *v22->field_208);
        v0 = &OldServerName.2954;
        g_engfuncs.pfnWriteString(v0);
        g_engfuncs.pfnMessageEnd(v0);
    }
    length.2949 = 0;
    char_count.2950 = 0;
    *(char *)&PrintingInGameHelp = 0;
    Started.2948 = 0;
    chunk.2955 = 0;
    return &PrintingInGameHelp;
}

