// ShowMenu__5NMenuv @0x16e110 size=600
typedef struct st_56e110_2 {
    char padding_0[124];
    struct st_56e110_3 *field_7c;
} st_56e110_2;

typedef struct st_56e110_3 {
    struct st_56e110_1 *field_0;
} st_56e110_3;

typedef struct st_56e110_1 {
    char padding_0[520];
    unsigned int field_208;
} st_56e110_1;

typedef struct st_56e110_4 {
    char field_0;
} st_56e110_4;

typedef struct st_56e110_0 {
    unsigned int field_0;
} st_56e110_0;

extern unsigned int gmsgShowMenu;
extern st_56e110_0 *g_engfuncs.pfnMessageBegin;
extern st_56e110_0 *g_engfuncs.pfnMessageEnd;
extern st_56e110_0 *g_engfuncs.pfnWriteByte;
extern st_56e110_0 *g_engfuncs.pfnWriteChar;
extern st_56e110_0 *g_engfuncs.pfnWriteShort;
extern st_56e110_0 *g_engfuncs.pfnWriteString;
extern st_56e110_0 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_56e110_0 *g_engfuncs.pfnRegUserMsg;
extern st_56e110_0 *g_engfuncs.pfnIsDedicatedServer;
extern st_56e110_2 *BotManager+12;
extern st_56e110_4 *_5NMenu.CurrentMenuText;
extern unsigned int _5NMenu.CurrentKeySlots;

unsigned int ShowMenu__5NMenuv(void)
{
    st_56e110_2 *v13;  // eax
    st_56e110_1 **v14;  // eax
    st_56e110_1 **v15;  // edi
    unsigned int v16;  // eax
    char *v17;  // edi
    unsigned int v18;  // ecx
    char *v19;  // edi
    char *v20;  // edx
    int v21;  // ecx
    char *v22;  // edi
    int v0;  // [bp-0x168]
    int v1;  // [bp-0x164]
    unsigned int v2;  // [bp-0x15c]
    unsigned int v3;  // [bp-0x158]
    unsigned int v4;  // [bp-0x154]
    char *v5;  // [bp-0x148]
    char v6;  // [bp-0x144]
    char v7;  // [bp-0x143]
    char v8;  // [bp-0xc4]
    char v9;  // [bp-0xa4]
    char v10;  // [bp-0xa3]
    char v11;  // [bp-0x24]

    if (!g_engfuncs.pfnIsDedicatedServer(v2, v3, v4))
    {
        if (!g_engfuncs.pfnIsDedicatedServer() && !(v13 = BotManager+12, !BotManager+12 && !(v13 = g_engfuncs.pfnPEntityOfEntOffset(0), v13)))
            v14 = v13->field_7c;
        else
            v14 = NULL;
        v15 = v14;
        *(unsigned short *)&v1 = 0;
        *(unsigned short *)&v0 = 0;
        v16 = UTIL_IsValidPlayer(v15, v0, v1);
        if (!(char)v16)
            return v16;
        if (!gmsgShowMenu)
            gmsgShowMenu = g_engfuncs.pfnRegUserMsg("ShowMenu", 0xffffffff);
        g_engfuncs.pfnMessageBegin(1, gmsgShowMenu, 0, *v15->field_208);
        g_engfuncs.pfnWriteShort(_5NMenu.CurrentKeySlots);
        g_engfuncs.pfnWriteChar(0xffffffff);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnWriteString(_5NMenu.CurrentMenuText);
        return g_engfuncs.pfnMessageEnd();
    }
    else
    {
        v17 = _5NMenu.CurrentMenuText;
        v18 = 0xffffffff;
        do
        {
            v19 = v17;
        } while (v18 && (v18 -= 1, v17 = v19 + 1, *v19));
        if (~v18 - 1 > 128)
        {
            v9 = 0;
            memset@GLIBC_2.0(&v10, 0, 129);
            v6 = 0;
            memset@GLIBC_2.0(&v7, 0, 129);
            v5 = &v9;
            strncpy@GLIBC_2.0(&v9, _5NMenu.CurrentMenuText, 128);
            v20 = _5NMenu.CurrentMenuText;
            v21 = -0x1;
            do
            {
                v22 = v20;
            } while (v21 && (v21 -= 1, v20 = v22 + 1, *v22));
            strncpy@GLIBC_2.0(&v6, _5NMenu.CurrentMenuText + 129, ~v21 - 129);
            v11 = 0;
            v8 = 0;
            UTIL_Printf(v5, 1, 0);
            UTIL_Printf(&v6, 1, 0);
        }
        else
        {
            UTIL_Printf(_5NMenu.CurrentMenuText, 1, 0);
        }
        return UTIL_Printf("\n\nTo make a choice type esf_bot menuselect X where X stands for the choice number\n", 1, 0);
    }
}

