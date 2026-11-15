// AddToPlayer__17CBasePlayerWeaponP11CBasePlayer @0x138810 size=219
typedef struct st_538810_0 {
    char padding_0[520];
    unsigned int field_208;
} st_538810_0;

typedef struct st_538810_2 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_538810_2;

typedef struct st_538810_1 {
    unsigned int field_0;
} st_538810_1;

extern unsigned int gmsgWeaponUpdate;
extern st_538810_1 *g_616878;
extern st_538810_1 *g_61687c;
extern st_538810_1 *g_616884;
extern st_538810_2 g_62f728;
extern st_538810_2 g_62f730;

unsigned int AddToPlayer__17CBasePlayerWeaponP11CBasePlayer(unsigned int *a0, st_538810_0 **a1)
{
    unsigned int v0;  // [bp-0x2c]

    sub_48c570(a0, a1);
    g_616878(1, gmsgWeaponUpdate, 0, *a1->field_208);
    v0 = a0[0x22];
    g_616884(v0);
    g_61687c(v0);
    if (!a0[42])
    {
        a0[42] = sub_48a7e0((&g_62f728.field_0)[11 * a0[0x22]]);
        a0[43] = sub_48a7e0((&g_62f730.field_0)[11 * a0[0x22]]);
    }
    return 1;
}

