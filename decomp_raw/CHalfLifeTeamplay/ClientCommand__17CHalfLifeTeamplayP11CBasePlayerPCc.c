// ClientCommand__17CHalfLifeTeamplayP11CBasePlayerPCc @0x127dd0 size=760
typedef struct st_527dd0_1 {
    char padding_0[164];
    struct st_527dd0_2 *field_a4;
} st_527dd0_1;

typedef struct st_527dd0_5 {
    char padding_0[276];
    struct st_527dd0_2 *field_114;
} st_527dd0_5;

typedef struct st_527dd0_2 {
    unsigned int field_0;
} st_527dd0_2;

typedef struct st_527dd0_3 {
    struct st_527dd0_0 *field_0;
    char padding_4[92];
    struct st_527dd0_1 *field_60;
    char padding_64[752];
    unsigned int field_354;
    unsigned int field_358;
    unsigned int field_35c;
    char padding_360[132];
    unsigned int field_3e4;
    char padding_3e8[220];
    unsigned int field_4c4;
    char padding_4c8[724];
    unsigned int field_79c;
    char padding_7a0[2240];
    short field_1060;
} st_527dd0_3;

typedef struct st_527dd0_0 {
    char padding_0[421];
    char field_1a5;
    char padding_1a6[6];
    unsigned int field_1ac;
} st_527dd0_0;

typedef struct st_527dd0_6 {
    char padding_0[68];
    struct st_527dd0_5 *field_44;
} st_527dd0_6;

typedef struct st_527dd0_4 {
    float field_0;
} st_527dd0_4;

extern st_527dd0_2 *g_61690c;
extern st_527dd0_2 *g_616910;
extern st_527dd0_4 *gpGlobals;
extern int g_VoiceGameMgr;

unsigned int ClientCommand__17CHalfLifeTeamplayP11CBasePlayerPCc(st_527dd0_6 *a0, st_527dd0_3 *a1, int a2)
{
    short v3;  // ax
    int v4;  // eax
    st_527dd0_5 *v5;  // eax
    unsigned int v6;  // edx
    unsigned int v7;  // eax
    char *v0;  // [bp-0x1c]
    char v1;  // [bp-0x15]
    char v2;  // [bp-0x14]

    if ((char)sub_48b400(&g_VoiceGameMgr, a1, a2))
        return 1;
    if (!sub_488af0(a2, "menuselect"))
    {
        g_616910();
    }
    else
    {
        if (sub_488af0(a2, "jointeam"))
        {
LABEL_5280b0:
            return sub_48b2e0(a0, a1, a2);
        }
        if (!a1->field_4c4 && !a1->field_3e4 && !a1->field_354 && !a1->field_35c && !a1->field_358)
        {
            v1 = 0;
            if (!a1->field_60->field_a4(a1))
                v1 = (a1->field_0->field_1a5 & 32) != 0;
            if (v1 && a1)
            {
                v3 = a1->field_1060;
                switch (v3)
                {
                case 2:
                    goto LABEL_528058;
                case 5:
                    v7 = sub_48d1d0(a0, a1);
LABEL_52808a:
                    a0->field_44->field_114(a0, a1, v7);
                    break;
                case 1:
                    v5 = a0->field_44;
                    v6 = "Good";
                    goto LABEL_528067;
                default:
                    break;
                }
            }
            else
            {
                if (*(float *)&a1->field_79c + 10.0 >= *(float *)gpGlobals && a1->field_0->field_1ac)
                    goto LABEL_5280b0;
                v0 = &v2;
                v4 = sub_48b500(g_61690c(1), 0, 10, 0);
                switch (v4)
                {
                case 2:
LABEL_528058:
                    v5 = a0->field_44;
                    v6 = "Evil";
LABEL_528067:
                    v5->field_114(a0, a1, v6);
                    break;
                case 5:
                    v7 = sub_48d1d0(a0, a1);
                    goto LABEL_52808a;
                case 1:
                    v5 = a0->field_44;
                    v6 = "Good";
                    goto LABEL_528067;
                default:
                    break;
                }
            }
            *(float *)&a1->field_79c = *(float *)gpGlobals;
        }
    }
    return 1;
}

