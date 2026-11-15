// DeathNotice__17CHalfLifeTeamplayP11CBasePlayerP9entvars_sT2 @0x1285e0 size=331
typedef struct st_5285e0_4 {
    char padding_0[124];
    struct st_5285e0_5 *field_7c;
} st_5285e0_4;

typedef struct st_5285e0_0 {
    char padding_0[200];
    struct st_5285e0_1 *field_c8;
} st_5285e0_0;

typedef struct st_5285e0_5 {
    struct st_5285e0_3 *field_0;
} st_5285e0_5;

typedef struct st_5285e0_1 {
    unsigned int field_0;
} st_5285e0_1;

typedef struct st_5285e0_3 {
    char padding_0[520];
    unsigned int field_208;
} st_5285e0_3;

typedef struct st_5285e0_6 {
    char padding_0[420];
    char field_1a4;
    char padding_1a5[99];
    struct st_5285e0_4 *field_208;
} st_5285e0_6;

typedef struct st_5285e0_2 {
    char padding_0[68];
    struct st_5285e0_0 *field_44;
    char padding_48[16];
    unsigned int field_58;
} st_5285e0_2;

extern unsigned int gmsgDeathMsg;
extern st_5285e0_1 *g_616878;
extern st_5285e0_1 *g_61687c;
extern st_5285e0_1 *g_616880;
extern st_5285e0_1 *g_616898;
extern st_5285e0_1 *g_6168d4;
extern st_5285e0_1 *g_6168dc;

int DeathNotice__17CHalfLifeTeamplayP11CBasePlayerP9entvars_sT2(st_5285e0_2 *a0, st_5285e0_3 **a1, st_5285e0_6 *a2, int a3)
{
    st_5285e0_4 *v0;  // eax
    st_5285e0_3 **v1;  // edx
    unsigned int v2;  // eax
    unsigned int v3;  // eax
    unsigned int v4;  // eax

    if (a0->field_58)
        return v4;
    if (!a1 || !a2 || !(a2->field_1a4 & 8))
        return sub_48bb20(a0, a1, a2, a3);
    v0 = a2->field_208;
    if (a2->field_208 || (v0 = g_6168d4(0), v0))
        v1 = v0->field_7c;
    else
        v1 = NULL;
    if (v1 && v1 != a1 && a0->field_44->field_c8(a0, a1, v1) == 1)
    {
        g_616878(2, gmsgDeathMsg, 0, 0);
        v2 = g_6168dc(a2->field_208);
        g_616880(v2);
        v3 = g_6168dc(*a1->field_208);
        g_616880(v3);
        g_616898("teammate");
        return g_61687c();
    }
    return sub_48bb20(a0, a1, a2, a3);
}

