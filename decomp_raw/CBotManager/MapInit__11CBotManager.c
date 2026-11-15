// MapInit__11CBotManager @0x142e80 size=731
typedef struct st_542e80_4 {
    struct st_542e80_3 *field_0;
    char field_4;
    char field_5;
    char padding_6[2];
    unsigned int field_8;
    char padding_c[4];
    float field_10;
    char field_14;
    char field_15;
    char field_16;
    char field_17;
    char field_18;
    char padding_19[7];
    unsigned int field_20;
    char field_24;
    char field_25;
    char padding_26[10];
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    char padding_3c[3304];
    char field_d24;
} st_542e80_4;

typedef struct st_542e80_3 {
    struct st_542e80_2 *field_0;
    struct st_542e80_2 *field_4;
} st_542e80_3;

typedef struct st_542e80_2 {
    int field_0;
    struct st_542e80_1 *field_4;
} st_542e80_2;

typedef struct st_542e80_1 {
    char padding_0[8];
    unsigned int field_8;
} st_542e80_1;

typedef struct st_542e80_5 {
    char padding_0[20];
    struct st_542e80_6 *field_14;
} st_542e80_5;

typedef struct st_542e80_0 {
    float field_0;
    char padding_4[8];
    unsigned int field_c;
    char padding_10[136];
    unsigned int field_98;
} st_542e80_0;

typedef struct st_542e80_6 {
    unsigned int field_0;
} st_542e80_6;

extern st_542e80_6 *g_engfuncs;
extern st_542e80_6 *g_6167c4;
extern st_542e80_6 *g_61698c;
extern st_542e80_0 *gpGlobals;
extern int BotManager;
extern char cout;
extern st_542e80_5 *g_625f80;
extern unsigned int m_iSpriteTexture;

int MapInit__11CBotManager(st_542e80_4 *a0)
{
    st_542e80_4 *v3;  // eax
    unsigned int v4;  // eax
    st_542e80_2 **v5;  // edx
    int v6;  // eax
    unsigned int v7;  // esi
    st_542e80_2 *v8;  // ecx
    st_542e80_1 *v9;  // eax
    st_542e80_4 *v10;  // eax
    unsigned int v11;  // eax
    st_542e80_4 *v12;  // edx
    int v0;  // [bp-0x1bc]
    char v1;  // [bp-0x194]
    char v2;  // [bp-0x114]

    v3 = a0;
    v3->field_10 = (float)(30.0 + gpGlobals->field_0);
    v3->field_20 = 0;
    v3->field_8 = 0;
    v3->field_30 = 0;
    v3->field_34 = 0;
    v3->field_14 = 0;
    v3->field_15 = 0;
    v3->field_16 = 0;
    v3->field_17 = 0;
    v3->field_18 = 0;
    v3->field_24 = 0;
    v3->field_d24 = 1;
    sub_48e110(&v1, gpGlobals->field_c + gpGlobals->field_98);
    sub_48c150(&v1, "_bot.cfg");
    sub_48d990(&v2, "esf\\maps\\%s\\", &v1);
    v4 = sub_48d440(&v2, "r");
    a0->field_38 = v4;
    if (v4)
    {
        g_625f80->field_14(&cout, "Executing ");
        g_625f80->field_14(&cout, &v2);
        g_625f80->field_14(&cout, "\n");
        while (a0->field_0->field_0)
        {
            v5 = a0->field_0;
            if (!*v5)
            {
                v6 = 0;
            }
            else
            {
                v7 = *v5->field_0;
                v8 = *v5;
                if (v8)
                {
                    if (v8 == v5[1])
                        v5[1] = v8->field_4;
                    v9 = *v5->field_4;
                    *v5 = v9;
                    if (v9)
                        v9->field_8 = 0;
                    v8->field_4 = NULL;
                    sub_48d4e0(v8);
                }
                v6 = v7;
            }
            sub_48d4e0(v6);
        }
        if (g_61698c())
            *(float *)&a0->field_34 = (float)(5.0 + gpGlobals->field_0);
        else
            *(float *)&a0->field_34 = (float)(20.0 + gpGlobals->field_0);
    }
    else
    {
        v0 = &BotManager;
        sub_48b6f0(v0);
        if (g_61698c(v0))
            *(float *)&a0->field_20 = (float)(5.0 + gpGlobals->field_0);
        else
            *(float *)&a0->field_20 = (float)(30.0 + gpGlobals->field_0);
    }
    sub_48d180();
    sub_48b810(0);
    g_6167c4("weapons/xbow_hit1.wav");
    g_6167c4("weapons/mine_activate.wav");
    g_6167c4("common/wpn_hudoff.wav");
    g_6167c4("common/wpn_hudon.wav");
    g_6167c4("common/wpn_moveselect.wav");
    g_6167c4("common/wpn_denyselect.wav");
    g_6167c4("weapons/basicbeam_chargeoriginal.wav");
    g_engfuncs("models/mechgibs.mdl");
    m_iSpriteTexture = g_engfuncs("sprites/lgtning.spr");
    v10 = a0;
    v10->field_25 = 0;
    v11 = _INSERT(v10, 0, v10->field_4);
    v12 = a0;
    v12->field_5 = v10->field_4;
    v12->field_4 = 0;
    return v11;
}

