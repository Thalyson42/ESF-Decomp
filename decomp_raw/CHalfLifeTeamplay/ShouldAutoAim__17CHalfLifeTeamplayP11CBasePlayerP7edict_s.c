// ShouldAutoAim__17CHalfLifeTeamplayP11CBasePlayerP7edict_s @0x1288d0 size=143
typedef struct st_5288d0_3 {
    char padding_0[124];
    struct st_5288d0_2 *field_7c;
} st_5288d0_3;

typedef struct st_5288d0_0 {
    char padding_0[160];
    struct st_5288d0_1 *field_a0;
} st_5288d0_0;

typedef struct st_5288d0_4 {
    char padding_0[200];
    struct st_5288d0_1 *field_c8;
} st_5288d0_4;

typedef struct st_5288d0_1 {
    unsigned int field_0;
} st_5288d0_1;

typedef struct st_5288d0_5 {
    char padding_0[68];
    struct st_5288d0_4 *field_44;
} st_5288d0_5;

typedef struct st_5288d0_2 {
    char padding_0[96];
    struct st_5288d0_0 *field_60;
} st_5288d0_2;

extern st_5288d0_1 *g_engfuncs.pfnPEntityOfEntOffset;

unsigned int ShouldAutoAim__17CHalfLifeTeamplayP11CBasePlayerP7edict_s(st_5288d0_5 *a0, unsigned int a1, st_5288d0_3 *a2)
{
    st_5288d0_3 *v0;  // eax
    st_5288d0_2 *v1;  // esi

    v0 = a2;
    if (v0 || (v0 = g_engfuncs.pfnPEntityOfEntOffset(0), v0))
        v1 = v0->field_7c;
    else
        v1 = NULL;
    if (v1 && v1->field_60->field_a0(v1) && a0->field_44->field_c8(a0, a1, v1) == 1)
        return 0;
    return 1;
}

