// DeathNotice__18CHalfLifeMultiplayP11CBasePlayerP9entvars_sT2 @0xdcf60 size=1858
typedef struct st_4dcf60_2 {
    char padding_0[124];
    struct st_4dcf60_1 *field_7c;
} st_4dcf60_2;

typedef struct st_4dcf60_0 {
    char padding_0[136];
    unsigned int field_88;
} st_4dcf60_0;

typedef struct st_4dcf60_7 {
    char padding_0[152];
    unsigned int field_98;
} st_4dcf60_7;

typedef struct st_4dcf60_1 {
    char padding_0[2408];
    struct st_4dcf60_0 *field_968;
} st_4dcf60_1;

typedef struct st_4dcf60_3 {
    unsigned int field_0;
    char padding_4[416];
    char field_1a4;
    char padding_1a5[43];
    unsigned int field_1d0;
    char padding_1d4[52];
    struct st_4dcf60_2 *field_208;
} st_4dcf60_3;

typedef struct st_4dcf60_6 {
    char field_0;
} st_4dcf60_6;

typedef struct st_4dcf60_5 {
    struct st_4dcf60_6 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_4dcf60_5;

typedef struct st_4dcf60_4 {
    unsigned int field_0;
} st_4dcf60_4;

extern unsigned int g_teamplay;
extern unsigned int gmsgDeathMsg;
extern st_4dcf60_4 *g_engfuncs.pfnMessageBegin;
extern st_4dcf60_4 *g_engfuncs.pfnMessageEnd;
extern st_4dcf60_4 *g_engfuncs.pfnWriteByte;
extern st_4dcf60_4 *g_engfuncs.pfnWriteShort;
extern st_4dcf60_4 *g_engfuncs.pfnWriteLong;
extern st_4dcf60_4 *g_engfuncs.pfnWriteString;
extern st_4dcf60_4 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4dcf60_4 *g_engfuncs.pfnIndexOfEdict;
extern st_4dcf60_4 *g_engfuncs.pfnGetInfoKeyBuffer;
extern st_4dcf60_4 *g_engfuncs.pfnInfoKeyValue;
extern st_4dcf60_4 *g_engfuncs.pfnGetPlayerUserId;
extern st_4dcf60_4 *g_engfuncs.pfnSequenceGet;
extern st_4dcf60_7 *gpGlobals;
extern st_4dcf60_5 _15CBasePlayerItem.ItemInfoArray+24;

int DeathNotice__18CHalfLifeMultiplayP11CBasePlayerP9entvars_sT2(unsigned int a0, st_4dcf60_3 **a1, st_4dcf60_3 *a2, st_4dcf60_3 *a3)
{
    st_4dcf60_3 *v14;  // edi
    st_4dcf60_2 *v15;  // eax
    unsigned int v24;  // cc_dep2
    char *v25;  // esi
    char *v26;  // esi
    char *v27;  // edi
    unsigned int v28;  // 4101
    char *v29;  // eax
    unsigned int v30;  // ecx
    unsigned int v31;  // cc_op
    unsigned int v32;  // cc_dep1
    unsigned int v33;  // cc_dep2
    st_4dcf60_1 *v16;  // eax
    char *v34;  // esi
    char *v35;  // esi
    char *v36;  // edi
    unsigned int v37;  // 4101
    st_4dcf60_3 *v38;  // ecx
    unsigned int v39;  // eax
    int v40;  // eax
    st_4dcf60_3 **v41;  // edi
    st_4dcf60_3 **v42;  // edi
    unsigned int v43;  // eax
    st_4dcf60_7 *v17;  // edx
    unsigned int v44;  // eax
    int v45;  // eax
    unsigned int v46;  // eax
    st_4dcf60_3 **v47;  // edi
    st_4dcf60_3 **v48;  // edi
    unsigned int v49;  // eax
    unsigned int v50;  // eax
    unsigned int v18;  // eax
    unsigned int v19;  // eax
    char *v20;  // eax
    unsigned int v21;  // ecx
    unsigned int v22;  // cc_op
    unsigned int v23;  // cc_dep1
    unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x50]
    unsigned int v3;  // [bp-0x4c]
    unsigned int v4;  // [bp-0x48]
    unsigned int v5;  // [bp-0x44]
    unsigned int v6;  // [bp-0x40]
    unsigned int v7;  // [bp-0x3c]
    char *v8;  // [bp-0x38]
    char *iter;  // [bp-0x18]
    unsigned int v10;  // [bp-0x14]
    char *v11;  // [bp-0x10]
    char *v12;  // [bp-0xc]
    unsigned int v13;  // [bp-0x8]

    iter = "world";
    v13 = 0;
    v12 = "tau_cannon";
    v11 = "gluon gun";
    v14 = a2;
    if (v14->field_1a4 & 8)
    {
        v13 = g_engfuncs.pfnIndexOfEdict(v14->field_208);
        if (a3)
        {
            if (a3 == v14)
            {
                v15 = v14->field_208;
                if (v14->field_208 || (v15 = g_engfuncs.pfnPEntityOfEntOffset(0), v15))
                    v16 = v15->field_7c;
                else
                    v16 = NULL;
                if (v16->field_968)
                    iter = (&_15CBasePlayerItem.ItemInfoArray+24.field_0)[11 * v16->field_968->field_88];
            }
            else
            {
                v17 = gpGlobals;
                v18 = a3->field_0;
LABEL_4dd04d:
                iter = v18 + v17->field_98;
            }
        }
    }
    else
    {
        v17 = gpGlobals;
        v18 = a3->field_0;
        goto LABEL_4dd04d;
    }
    if (!strncmp@GLIBC_2.0(iter, "weapon_", 7))
    {
        iter += 7;
    }
    else if (!strncmp@GLIBC_2.0(iter, "monster_", 8))
    {
        iter += 8;
    }
    else if (!strncmp@GLIBC_2.0(iter, "func_", 5))
    {
        iter += 5;
    }
    g_engfuncs.pfnMessageBegin(2, gmsgDeathMsg, 0, 0);
    g_engfuncs.pfnWriteByte(v13);
    v19 = g_engfuncs.pfnIndexOfEdict(*a1->field_208);
    g_engfuncs.pfnWriteByte(v19);
    g_engfuncs.pfnWriteString(iter);
    g_engfuncs.pfnMessageEnd();
    v20 = "egon";
    v21 = 5;
    v22 = 13;
    v23 = 0;
    v24 = 0;
    v25 = iter;
    do
    {
        v26 = v25;
        v27 = v20;
        if (!v21)
            break;
        v21 -= 1;
        v22 = 4;
        v23 = *v26;
        v24 = *v27;
        v20 = v27 + 1;
        v25 = v26 + 1;
    } while (*v26 == *v27);
    v28 = _ccall(4, v22, v23, v24, 0);
    if (v28 & 1)
    {
        v12 = v11;
    }
    else
    {
        v29 = "gauss";
        v30 = 6;
        v31 = 13;
        v32 = 0;
        v33 = 0;
        v34 = iter;
        do
        {
            v35 = v34;
            v36 = v29;
            if (!v30)
                break;
            v30 -= 1;
            v31 = 4;
            v32 = *v35;
            v33 = *v36;
            v29 = v36 + 1;
            v34 = v35 + 1;
        } while (*v35 == *v36);
        v37 = _ccall(4, v31, v32, v33, 0);
        if (!(v37 & 1))
            goto LABEL_4dd171;
    }
    iter = v12;
LABEL_4dd171:
    v38 = a2;
    if (*a1 == v38)
    {
        if (g_teamplay)
        {
            v8 = iter;
            v5 = "model";
            v39 = g_engfuncs.pfnGetInfoKeyBuffer(v38->field_208);
            v7 = g_engfuncs.pfnInfoKeyValue(v39);
            v6 = g_engfuncs.pfnSequenceGet(*a1->field_208);
            v5 = g_engfuncs.pfnGetPlayerUserId(*a1->field_208);
            v4 = *a1->field_1d0 + gpGlobals->field_98;
            v40 = "\"%s<%i><%s><%s>\" committed suicide with \"%s\"\n";
            goto LABEL_4dd5cd;
        }
        else
        {
            v8 = iter;
            v7 = g_engfuncs.pfnGetPlayerUserId(*a1->field_208);
            v6 = g_engfuncs.pfnSequenceGet(*a1->field_208);
            v41 = a1;
            v5 = g_engfuncs.pfnGetPlayerUserId(*v41->field_208);
            v4 = *v41->field_1d0 + gpGlobals->field_98;
            v40 = "\"%s<%i><%s><%i>\" committed suicide with \"%s\"\n";
            goto LABEL_4dd5cd;
        }
    }
    else
    {
        if (a2->field_1a4 & 8)
        {
            if (g_teamplay)
            {
                v8 = iter;
                v10 = "model";
                v5 = "model";
                v42 = a1;
                v43 = g_engfuncs.pfnGetInfoKeyBuffer(*v42->field_208);
                v7 = g_engfuncs.pfnInfoKeyValue(v43);
                v6 = g_engfuncs.pfnSequenceGet(*v42->field_208);
                v5 = g_engfuncs.pfnGetPlayerUserId(*v42->field_208);
                v4 = *a1->field_1d0 + gpGlobals->field_98;
                v1 = v10;
                v44 = g_engfuncs.pfnGetInfoKeyBuffer(a2->field_208);
                v3 = g_engfuncs.pfnInfoKeyValue(v44);
                v2 = g_engfuncs.pfnSequenceGet(a2->field_208);
                v1 = g_engfuncs.pfnGetPlayerUserId(a2->field_208);
                v0 = a2->field_1d0 + gpGlobals->field_98;
                v45 = "\"%s<%i><%s><%s>\" killed \"%s<%i><%s><%s>\" with \"%s\"\n";
            }
            else
            {
                v8 = iter;
                v7 = g_engfuncs.pfnGetPlayerUserId(*a1->field_208);
                v6 = g_engfuncs.pfnSequenceGet(*a1->field_208);
                v5 = g_engfuncs.pfnGetPlayerUserId(*a1->field_208);
                v4 = *a1->field_1d0 + gpGlobals->field_98;
                v3 = g_engfuncs.pfnGetPlayerUserId(a2->field_208);
                v2 = g_engfuncs.pfnSequenceGet(a2->field_208);
                v1 = g_engfuncs.pfnGetPlayerUserId(a2->field_208);
                v0 = a2->field_1d0 + gpGlobals->field_98;
                v45 = "\"%s<%i><%s><%i>\" killed \"%s<%i><%s><%i>\" with \"%s\"\n";
            }
            UTIL_LogPrintf(v45);
        }
        else
        {
            if (g_teamplay)
            {
                v8 = iter;
                v5 = "model";
                v46 = g_engfuncs.pfnGetInfoKeyBuffer(*a1->field_208);
                v7 = g_engfuncs.pfnInfoKeyValue(v46);
                v6 = g_engfuncs.pfnSequenceGet(*a1->field_208);
                v47 = a1;
                v5 = g_engfuncs.pfnGetPlayerUserId(*v47->field_208);
                v4 = *v47->field_1d0 + gpGlobals->field_98;
                v40 = "\"%s<%i><%s><%s>\" committed suicide with \"%s\" (world)\n";
            }
            else
            {
                v8 = iter;
                v7 = g_engfuncs.pfnGetPlayerUserId(*a1->field_208);
                v6 = g_engfuncs.pfnSequenceGet(*a1->field_208);
                v48 = a1;
                v5 = g_engfuncs.pfnGetPlayerUserId(*v48->field_208);
                v4 = *v48->field_1d0 + gpGlobals->field_98;
                v40 = "\"%s<%i><%s><%i>\" committed suicide with \"%s\" (world)\n";
            }
LABEL_4dd5cd:
            UTIL_LogPrintf(v40);
        }
    }
    g_engfuncs.pfnMessageBegin(9, 0x33, 0, 0);
    g_engfuncs.pfnWriteByte(9);
    g_engfuncs.pfnWriteByte(2);
    v49 = g_engfuncs.pfnIndexOfEdict(*a1->field_208);
    g_engfuncs.pfnWriteShort(v49);
    v50 = g_engfuncs.pfnIndexOfEdict((!a3 ? a2->field_208 : a3->field_208));
    g_engfuncs.pfnWriteShort(v50);
    g_engfuncs.pfnWriteLong(39);
    return g_engfuncs.pfnMessageEnd(39);
}

