// JoinTeam__17CHalfLifeTeamplayP11CBasePlayerPCc @0x129070 size=976
typedef struct st_529070_1 {
    char padding_0[164];
    struct st_529070_2 *field_a4;
} st_529070_1;

typedef struct st_529070_5 {
    struct st_529070_0 *field_0;
    char padding_4[92];
    struct st_529070_1 *field_60;
    char padding_64[684];
    char field_310;
    char padding_311[59];
    unsigned int field_34c;
    unsigned int field_350;
    char padding_354[1040];
    struct st_529070_4 *field_764;
} st_529070_5;

typedef struct st_529070_7 {
    char padding_0[216];
    struct st_529070_2 *field_d8;
} st_529070_7;

typedef struct st_529070_2 {
    unsigned int field_0;
} st_529070_2;

typedef struct st_529070_3 {
    char padding_0[48];
    struct st_529070_2 *field_30;
} st_529070_3;

typedef struct st_529070_0 {
    char padding_0[328];
    unsigned int field_148;
    char padding_14c[16];
    unsigned int field_15c;
    char padding_160[69];
    char field_1a5;
    char padding_1a6[42];
    unsigned int field_1d0;
    char padding_1d4[52];
    unsigned int field_208;
    unsigned int field_20c;
    char padding_210[52];
    unsigned int field_244;
} st_529070_0;

typedef struct st_529070_8 {
    char padding_0[68];
    struct st_529070_7 *field_44;
} st_529070_8;

typedef struct st_529070_4 {
    char padding_0[4];
    struct st_529070_3 *field_4;
} st_529070_4;

typedef struct st_529070_6 {
    char padding_0[152];
    unsigned int field_98;
} st_529070_6;

extern float g_5bd040;
extern unsigned int gmsgVGUIMenu;
extern st_529070_2 *g_616878;
extern st_529070_2 *g_61687c;
extern st_529070_2 *g_616880;
extern st_529070_2 *g_616984;
extern st_529070_6 *gpGlobals;
extern char g_6246ac;

unsigned int JoinTeam__17CHalfLifeTeamplayP11CBasePlayerPCc(st_529070_8 *a0, st_529070_5 *a1, int a2)
{
    unsigned int v5;  // eax
    int v6;  // eax
    int v7;  // eax
    unsigned int v0;  // [bp-0x43c]
    unsigned int v1;  // [bp-0x438], Other Possible Types: int
    int v2;  // [bp-0x430]
    char v3;  // [bp-0x415]
    char v4;  // [bp-0x404]

    v5 = sub_488af0(&a1[1].padding_64[464], a2);
    if (!v5)
        return v5;
    if (g_6246ac)
    {
        v3 = 0;
        if (!a1->field_60->field_a4(a1))
            v3 = (a1->field_0->field_1a5 & 32) != 0;
        if (!v3 && !sub_488af0(a2, "Evil"))
            return sub_489df0("Cannot join team evil when there are superbots ingame\n", a1);
    }
    a1->field_34c = 0;
    if (a1->field_350)
    {
        a1->field_350 = 0;
        a1->field_0->field_148 = 0;
        a1->field_0->field_15c = 0;
        if (a1->field_310 & 32)
            goto LABEL_5291c4;
        if (g_5bd040 != 1.0f && !a1->field_0->field_244)
            a1->field_764->field_4->field_30(a1->field_764);
    }
    if (!(a1->field_310 & 32) && g_5bd040 != 1.0f && !a1->field_0->field_244)
    {
        sub_48d990(&v4, "* %s has joined %s\n", a1->field_0->field_1d0 + gpGlobals->field_98, a2);
        sub_489df0(&v4, a1);
        v2 = a2;
        v6 = g_616984(a1->field_0->field_208);
        v1 = a1->field_0->field_1d0 + gpGlobals->field_98;
        sub_488680("\"%s<%i>\" has joined %s\n", v1, v6);
        a0->field_44->field_d8(a0, a1, a2, 0, 0);
        *(unsigned short *)&v1 = 0;
        return sub_48c940(a0, v1);
    }
LABEL_5291c4:
    sub_48d990(&v4, "* %s has joined %s\n", a1->field_0->field_1d0 + gpGlobals->field_98, a2);
    sub_489df0(&v4, a1);
    v2 = a2;
    v7 = g_616984(a1->field_0->field_208);
    sub_488680("\"%s<%i>\" has joined %s\n", a1->field_0->field_1d0 + gpGlobals->field_98, v7);
    if (g_5bd040 == 1.0f)
    {
        if (a1->field_310 & 32)
        {
            a0->field_44->field_d8(a0, a1, a2, 0, 0);
        }
        else
        {
            a0->field_44->field_d8(a0, a1, a2, 1, 0);
            a1->field_0->field_20c = 0;
            sub_48ba90(a1);
        }
        v1 = gmsgVGUIMenu;
        g_616878(1, v1, 0, a1->field_0->field_208);
        v0 = 33;
    }
    else
    {
        a0->field_44->field_d8(a0, a1, a2, 0, 0);
        v1 = gmsgVGUIMenu;
        g_616878(1, v1, 0, a1->field_0->field_208);
        v0 = 3;
    }
    g_616880(v0);
    g_61687c();
    *(unsigned short *)&v1 = 0;
    return sub_48c940(a0, v1);
}

