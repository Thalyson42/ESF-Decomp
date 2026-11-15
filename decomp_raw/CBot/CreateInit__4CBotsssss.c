// CreateInit__4CBotsssss @0x13afc0 size=495
typedef struct st_53afc0_1 {
    struct st_53afc0_0 *field_0;
    char padding_4[2524];
    char field_9e0;
    char padding_9e1[3];
    float field_9e4;
    char field_9e8;
    char padding_9e9[3];
    unsigned int field_9ec;
    unsigned short field_9f0;
    char padding_9f2[6];
    unsigned int field_9f8;
    char field_9fc;
    char padding_9fd[3];
    unsigned int field_a00;
    unsigned int field_a04;
    char field_a08;
    char padding_a09[155];
    unsigned int field_aa4;
    unsigned int field_aa8;
    char padding_aac[196];
    unsigned int field_b70;
    char padding_b74[24];
    unsigned int field_b8c;
    char padding_b90[20];
    unsigned short field_ba4;
    char padding_ba6[2];
    unsigned int field_ba8;
    char padding_bac[420];
    unsigned int field_d50;
    char padding_d54[780];
    unsigned short field_1060;
    char padding_1062[2];
    unsigned int field_1064;
    char padding_1068[8];
    unsigned int field_1070;
} st_53afc0_1;

typedef struct st_53afc0_0 {
    char padding_0[421];
    char field_1a5;
} st_53afc0_0;

typedef struct st_53afc0_2 {
    float field_0;
} st_53afc0_2;

typedef struct st_53afc0_3 {
    unsigned int field_0;
} st_53afc0_3;

extern unsigned int g_teamplay;
extern st_53afc0_3 *g_engfuncs.pfnRandomLong;
extern st_53afc0_2 *gpGlobals;
extern unsigned int BotManager+3348;
extern char BotManager+3884;
extern unsigned short BotManager+3948;
extern char BotManager+4292;

unsigned int CreateInit__4CBotsssss(st_53afc0_1 *a0, unsigned short a1, unsigned short a2, short a3, short a4, unsigned short a5)
{
    short v1;  // cx
    unsigned short v2;  // di
    unsigned int v3;  // eax
    unsigned int v4;  // 4109
    unsigned int v0;  // [bp-0x8]

    v0 = CONCAT(a1, a2);
    v1 = a4;
    v2 = a5;
    a0->field_0->field_1a5 = a0->field_0->field_1a5 | 32;
    *(float *)&a0->field_9f8 = *(float *)gpGlobals;
    a0->field_9e8 = 1;
    a0->field_9e4 = (float)(*(float *)gpGlobals + 0.15000000596046448);
    if (g_teamplay)
        a0->field_9ec = 1;
    else
        a0->field_9ec = 2;
    a0->field_9e0 = 0;
    a0->field_b70 = 0;
    a0->field_d50 = 0;
    a0->field_a00 = &(&BotManager+3884)[0x44 * a3];
    a0->field_9fc = (char)a3 - 1;
    a0->field_1060 = 0xffff;
    a0->field_9f0 = 0xffff;
    if (*(unsigned short *)((void*)&v0 + 2) - 1 <= 1)
        a0->field_1060 = *(unsigned short *)((void*)&v0 + 2);
    if ((unsigned short)v0 - 1 <= 8)
        a0->field_9f0 = v0;
    if ((unsigned short)(v1 - 1) > 8)
        v1 = (BotManager+3948 - 1 <= 8 ? BotManager+3948 : (unsigned short)g_engfuncs.pfnRandomLong(1, 9));
    v3 = &BotManager+3348;
    a0->field_a04 = &(&BotManager+3348)[15 * v1];
    a0->field_aa8 = 0;
    a0->field_aa4 = 0;
    a0->field_1064 = 0;
    a0->field_b8c = 0;
    a0->field_1070 = 0;
    if ((short)v2 > 3)
    {
        v3 = g_engfuncs.pfnRandomLong(1, 3);
        v2 = v3;
    }
    a0->field_ba4 = v2;
    v4 = _ccall(14, 14, v2, 0, 0);
    if (!(v4 & 1))
    {
        v3 = &(&BotManager+4292)[16 * v2];
        a0->field_ba8 = v3;
    }
    a0->field_a08 = 0;
    return v3;
}

