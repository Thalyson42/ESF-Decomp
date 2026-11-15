// Display__13CScreenOutput @0x16ce30 size=600
typedef struct st_56ce30_3 {
    char padding_0[124];
    struct st_56ce30_4 *field_7c;
} st_56ce30_3;

typedef struct st_56ce30_4 {
    struct st_56ce30_2 *field_0;
} st_56ce30_4;

typedef struct st_56ce30_2 {
    char padding_0[520];
    unsigned int field_208;
} st_56ce30_2;

typedef struct st_56ce30_0 {
    char field_0;
    char padding_1[515];
    short field_204;
    short field_206;
    short field_208;
    short field_20a;
    short field_20c;
    short field_20e;
} st_56ce30_0;

typedef struct st_56ce30_1 {
    unsigned int field_0;
} st_56ce30_1;

extern int g_5aeddc;
extern st_56ce30_1 *g_engfuncs.pfnMessageBegin;
extern st_56ce30_1 *g_engfuncs.pfnMessageEnd;
extern st_56ce30_1 *g_engfuncs.pfnWriteByte;
extern st_56ce30_1 *g_engfuncs.pfnWriteShort;
extern st_56ce30_1 *g_engfuncs.pfnWriteString;
extern st_56ce30_1 *g_engfuncs.pfnAlertMessage;
extern st_56ce30_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_56ce30_1 *g_engfuncs.pfnIsDedicatedServer;
extern st_56ce30_3 *BotManager+12;

unsigned int Display__13CScreenOutput(st_56ce30_0 *a0)
{
    unsigned int v0;  // eax
    st_56ce30_3 *v1;  // eax
    st_56ce30_2 **v2;  // eax
    st_56ce30_3 *v3;  // eax
    st_56ce30_2 **v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax

    v0 = strcmp@GLIBC_2.0(a0, &g_5aeddc);
    if (!v0)
        return v0;
    if (!g_engfuncs.pfnIsDedicatedServer())
    {
        if (!g_engfuncs.pfnIsDedicatedServer() && !(v1 = BotManager+12, !BotManager+12 && !(v1 = g_engfuncs.pfnPEntityOfEntOffset(0), v1)))
            v2 = v1->field_7c;
        else
            v2 = NULL;
        if (!v2)
            goto LABEL_56cead;
        if (!g_engfuncs.pfnIsDedicatedServer() && !(v3 = BotManager+12, !BotManager+12 && !(v3 = g_engfuncs.pfnPEntityOfEntOffset(0), v3)))
            v4 = v3->field_7c;
        else
            v4 = NULL;
        g_engfuncs.pfnMessageBegin(1, 23, 0, *v4->field_208);
        g_engfuncs.pfnWriteByte(29);
        g_engfuncs.pfnWriteByte(a0->field_20e);
        g_engfuncs.pfnWriteShort(a0->field_204);
        g_engfuncs.pfnWriteShort(a0->field_206);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnWriteByte(a0->field_208);
        g_engfuncs.pfnWriteByte(a0->field_20a);
        g_engfuncs.pfnWriteByte(a0->field_20c);
        g_engfuncs.pfnWriteByte(1);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnWriteByte(0xff);
        g_engfuncs.pfnWriteByte(1);
        g_engfuncs.pfnWriteShort(1);
        g_engfuncs.pfnWriteShort(1);
        g_engfuncs.pfnWriteShort(0x400);
        g_engfuncs.pfnWriteString(a0);
        v5 = g_engfuncs.pfnMessageEnd(a0);
    }
    else
    {
LABEL_56cead:
        v5 = g_engfuncs.pfnAlertMessage(1, a0);
    }
    v6 = _INSERT(v5, 0, 0);
    a0->field_0 = 0;
    return v6;
}

