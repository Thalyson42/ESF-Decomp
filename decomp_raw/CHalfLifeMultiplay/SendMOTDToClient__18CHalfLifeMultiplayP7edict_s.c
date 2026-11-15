// SendMOTDToClient__18CHalfLifeMultiplayP7edict_s @0xde970 size=434
typedef struct st_4de970_0 {
    unsigned int field_0;
} st_4de970_0;

extern unsigned int gmsgMOTD;
extern unsigned int gmsgServerName;
extern st_4de970_0 *g_engfuncs.pfnMessageBegin;
extern st_4de970_0 *g_engfuncs.pfnMessageEnd;
extern st_4de970_0 *g_engfuncs.pfnWriteByte;
extern st_4de970_0 *g_engfuncs.pfnWriteString;
extern st_4de970_0 *g_engfuncs.pfnCVarGetString;
extern st_4de970_0 *g_engfuncs.pfnLoadFileForMe;
extern st_4de970_0 *g_engfuncs.pfnFreeFile;

int SendMOTDToClient__18CHalfLifeMultiplayP7edict_s(unsigned int a0, unsigned int a1)
{
    unsigned int v7;  // eax
    char *v8;  // esi
    unsigned int v9;  // eax
    unsigned int v10;  // ecx
    char *v11;  // edi
    char *v12;  // edi
    char *v13;  // edi
    unsigned int v14;  // ecx
    char *v15;  // edi
    char *v0;  // [bp-0x78]
    char *v1;  // [bp-0x54]
    char *v2;  // [bp-0x50]
    int v3;  // [bp-0x4c]
    char v4;  // [bp-0x48]
    char v5;  // [bp-0x44]
    char v6;  // [bp-0x8]

    v3 = 0;
    v0 = &v4;
    v7 = g_engfuncs.pfnCVarGetString("motdfile");
    v8 = g_engfuncs.pfnLoadFileForMe(v7);
    v2 = v8;
    g_engfuncs.pfnMessageBegin(1, gmsgServerName, 0, a1);
    v9 = g_engfuncs.pfnCVarGetString("hostname");
    g_engfuncs.pfnWriteString(v9);
    g_engfuncs.pfnMessageEnd();
    if (!v2 || !*v2)
        return g_engfuncs.pfnFreeFile(v2);
    v1 = &v5;
    do
    {
        v10 = 0xffffffff;
        v11 = v8;
        do
        {
            v12 = v11;
        } while (v10 && (v10 -= 1, v11 = v12 + 1, *v12));
        if (~v10 - 1 <= 59)
        {
            strcpy@GLIBC_2.0(v1, v8);
        }
        else
        {
            strncpy@GLIBC_2.0(v1, v8, 60);
            v6 = 0;
        }
        v13 = &v5;
        v14 = 0xffffffff;
        do
        {
            v15 = v13;
        } while (v14 && (v14 -= 1, v13 = v15 + 1, *v15));
        v3 = v3 + ~v14 - 1;
        if (v3 <= 0x5ff)
            v8 = &v2[v3];
        else
            *v8 = 0;
        g_engfuncs.pfnMessageBegin(1, gmsgMOTD, 0, a1);
        g_engfuncs.pfnWriteByte(!*v8);
        g_engfuncs.pfnWriteString(v1);
        g_engfuncs.pfnMessageEnd();
    } while (v8 && *v8 && v3 <= 0x5ff);
    return g_engfuncs.pfnFreeFile(v2);
}

