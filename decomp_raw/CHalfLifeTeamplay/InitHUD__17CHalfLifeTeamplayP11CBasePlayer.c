// InitHUD__17CHalfLifeTeamplayP11CBasePlayer @0x1281a0 size=434
typedef struct st_5281a0_0 {
    char padding_0[144];
    unsigned int field_90;
} st_5281a0_0;

typedef struct st_5281a0_3 {
    char padding_0[168];
    struct st_5281a0_2 *field_a8;
} st_5281a0_3;

typedef struct st_5281a0_2 {
    unsigned int field_0;
} st_5281a0_2;

typedef struct st_5281a0_1 {
    char padding_0[520];
    unsigned int field_208;
} st_5281a0_1;

typedef struct st_5281a0_4 {
    struct st_5281a0_1 *field_0;
    char padding_4[92];
    struct st_5281a0_3 *field_60;
} st_5281a0_4;

extern unsigned int gmsgTeamInfo;
extern unsigned int gmsgTeamNames;
extern unsigned int gmsgVGUIMenu;
extern st_5281a0_2 *g_616878;
extern st_5281a0_2 *g_61687c;
extern st_5281a0_2 *g_616880;
extern st_5281a0_2 *g_616898;
extern st_5281a0_2 *g_6168dc;
extern st_5281a0_0 *gpGlobals;

st_5281a0_0 * InitHUD__17CHalfLifeTeamplayP11CBasePlayer(int a0, st_5281a0_1 **a1)
{
    st_5281a0_4 *v3;  // edi
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x2c]
    int v2;  // [bp-0x8]

    sub_48d340(a0, a1);
    g_616878(1, gmsgTeamNames, 0, *a1->field_208);
    g_616880(2);
    g_616898("Good");
    v1 = "Evil";
    g_616898(v1);
    g_61687c(v1);
    g_616878(1, gmsgVGUIMenu, 0, *a1->field_208);
    v1 = 2;
    g_616880(v1);
    g_61687c(v1);
    *(unsigned short *)&v0 = 0;
    sub_48c940(a0, v0);
    v2 = 1;
    if (v2 > (int)gpGlobals->field_90)
        return gpGlobals;
    do
    {
        v3 = sub_48a500(v2);
        if (v3)
        {
            g_616878(1, gmsgTeamInfo, 0, *a1->field_208);
            v4 = g_6168dc(v3->field_0->field_208);
            g_616880(v4);
            v5 = v3->field_60->field_a8(v3);
            g_616898(v5);
            g_61687c();
        }
    } while ((v2 += 1, v2 <= (int)gpGlobals->field_90));
    return gpGlobals;
}

