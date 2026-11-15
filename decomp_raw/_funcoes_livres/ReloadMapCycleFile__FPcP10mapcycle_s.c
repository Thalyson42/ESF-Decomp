// ReloadMapCycleFile__FPcP10mapcycle_s @0xddef0 size=1429
typedef struct st_4ddef0_1 {
    struct st_4ddef0_1 *field_0;
    char field_4;
    char padding_5[31];
    int field_24;
    int field_28;
} st_4ddef0_1;

typedef struct st_4ddef0_3 {
    struct st_4ddef0_1 *field_0;
    struct st_4ddef0_1 *field_4;
} st_4ddef0_3;

typedef struct st_4ddef0_2 {
    char padding_0[144];
    int field_90;
} st_4ddef0_2;

typedef struct st_4ddef0_0 {
    unsigned int field_0;
} st_4ddef0_0;

extern st_4ddef0_0 *g_engfuncs.pfnAlertMessage;
extern st_4ddef0_0 *g_engfuncs.pfnLoadFileForMe;
extern st_4ddef0_0 *g_engfuncs.pfnFreeFile;
extern st_4ddef0_0 *g_engfuncs.pfnInfoKeyValue;
extern st_4ddef0_0 *g_engfuncs.pfnIsMapValid;
extern st_4ddef0_0 *g_engfuncs.pfnInfo_RemoveKey;
extern st_4ddef0_2 *gpGlobals;
extern char com_token;

unsigned int ReloadMapCycleFile__FPcP10mapcycle_s(unsigned int a0, st_4ddef0_3 *a1)
{
    char *v10;  // esi
    unsigned int v11;  // ecx
    int v20;  // eax
    char *v21;  // eax
    int v22;  // eax
    int v23;  // edx
    int v24;  // eax
    st_4ddef0_3 *v25;  // ecx
    st_4ddef0_1 *v26;  // edx
    st_4ddef0_1 *v27;  // eax
    st_4ddef0_1 *v28;  // edx
    st_4ddef0_3 *v29;  // edx
    char *v12;  // edi
    st_4ddef0_1 *v30;  // eax
    char *v13;  // edi
    unsigned int v14;  // ecx
    char *v15;  // edi
    st_4ddef0_1 *v16;  // ecx
    char *v17;  // eax
    int v18;  // eax
    int v19;  // edx
    char *v0;  // [bp-0x440]
    st_4ddef0_1 *v1;  // [bp-0x43c]
    st_4ddef0_1 *v2;  // [bp-0x438]
    st_4ddef0_1 *v3;  // [bp-0x438]
    unsigned int v4;  // [bp-0x434]
    int v5;  // [bp-0x430]
    int v6;  // [bp-0x42c]
    char v7;  // [bp-0x428], Other Possible Types: unsigned int
    char v8;  // [bp-0x424]
    char v9;  // [bp-0x404]

    v6 = g_engfuncs.pfnLoadFileForMe(a0, &v7);
    v5 = v6;
    v1 = NULL;
    if (v6 && v7)
    {
        while (1)
        {
            v4 = 0;
            v0 = &v9;
            memset@GLIBC_2.0(&v9, 0, 0x400);
            v6 = COM_Parse(v6);
            v10 = &com_token;
            v11 = 0xffffffff;
            v12 = &com_token;
            do
            {
                v13 = v12;
            } while (v11 && (v11 -= 1, v12 = v13 + 1, *v13));
            if (v11 == 0xfffffffe)
                break;
            strcpy@GLIBC_2.0(&v8, &com_token);
            if (COM_TokenWaiting(v6))
            {
                v6 = COM_Parse(v6);
                v14 = 0xffffffff;
                do
                {
                    v15 = v10;
                } while (v14 && (v14 -= 1, v10 = v15 + 1, *v15));
                if (v14 != 0xfffffffe)
                {
                    v4 = 1;
                    strcpy@GLIBC_2.0(v0, &com_token);
                }
            }
            if (g_engfuncs.pfnIsMapValid(&v8))
            {
                v2 = __builtin_new(1068);
                strcpy@GLIBC_2.0(&v2->field_4, &v8);
                v16 = v2;
                v16->field_24 = 0;
                v16->field_28 = 0;
                memset@GLIBC_2.0(v16 + 1, 0, 0x400);
                if (v4)
                {
                    v17 = g_engfuncs.pfnInfoKeyValue(&v9, "minplayers");
                    if (v17 && *v17)
                    {
                        v18 = __strtol_internal@GLIBC_2.0(v17, 0, 10, 0);
                        v2->field_24 = v18;
                        v19 = v18;
                        if (v19 < NULL)
                            v19 = 0;
                        v2->field_24 = v19;
                        v20 = gpGlobals->field_90;
                        if (gpGlobals->field_90 > v19)
                            v20 = v19;
                        v2->field_24 = v20;
                    }
                    v21 = g_engfuncs.pfnInfoKeyValue(&v9, "maxplayers");
                    if (v21 && *v21)
                    {
                        v22 = __strtol_internal@GLIBC_2.0(v21, 0, 10, 0);
                        v2->field_28 = v22;
                        v23 = v22;
                        if (v23 < NULL)
                            v23 = 0;
                        v2->field_28 = v23;
                        v24 = gpGlobals->field_90;
                        if (gpGlobals->field_90 > v2->field_28)
                            v24 = v23;
                        v2->field_28 = v24;
                    }
                    g_engfuncs.pfnInfo_RemoveKey(&v9, "minplayers");
                    g_engfuncs.pfnInfo_RemoveKey(&v9, "maxplayers");
                    strcpy@GLIBC_2.0(v2 + 1, &v9);
                }
                v25 = a1;
                v26 = v2;
                v26->field_0 = v25->field_0;
                v25->field_0 = v26;
            }
            else
            {
                g_engfuncs.pfnAlertMessage(1, "Skipping %s from mapcycle, not a valid map\n", &v8);
            }
        }
        g_engfuncs.pfnFreeFile(v5);
    }
    v27 = a1->field_0;
    while (1)
    {
        v2 = v27;
        if (!v27)
            break;
        v28 = v2;
        v27 = v28->field_0;
        v28->field_0 = v1;
        v1 = v28;
    }
    a1->field_0 = v1;
    v2 = v1;
    if (!v1)
        return 0;
    v2 = v2;
    if (v2->field_0)
    {
        do
        {
            v3 = v2;
            v2 = v3->field_0;
        } while (v3->field_0->field_0);
    }
    v29 = a1;
    v30 = v29->field_0;
    v2->field_0 = v30;
    v29->field_4 = v30;
    return 1;
}

