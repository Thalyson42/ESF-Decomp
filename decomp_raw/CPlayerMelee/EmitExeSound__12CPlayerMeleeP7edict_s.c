// EmitExeSound__12CPlayerMeleeP7edict_s @0x104900 size=266
typedef struct st_504900_3 {
    char padding_0[1892];
    struct st_504900_2 *field_764;
} st_504900_3;

typedef struct st_504900_4 {
    char padding_0[292];
    struct st_504900_3 *field_124;
    char padding_128[84];
    struct st_504900_5 *field_17c;
} st_504900_4;

typedef struct st_504900_1 {
    unsigned int field_0;
} st_504900_1;

typedef struct st_504900_0 {
    char padding_0[76];
    struct st_504900_1 *field_4c;
} st_504900_0;

typedef struct st_504900_2 {
    char padding_0[4];
    struct st_504900_0 *field_4;
} st_504900_2;

typedef struct st_504900_5 {
    char padding_0[32];
    unsigned int field_20;
    char padding_24[24];
    unsigned int field_3c;
    char padding_40[4];
    unsigned int field_44;
    char padding_48[8];
    unsigned int field_50;
    unsigned int field_54;
} st_504900_5;

extern char g_vecZero;
extern st_504900_1 *g_engfuncs.pfnPlaybackEvent;
extern unsigned short m_usMeleeSounds;

unsigned int * EmitExeSound__12CPlayerMeleeP7edict_s(st_504900_4 *a0, unsigned int a1)
{
    unsigned int *v2;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]

    if (a0->field_17c->field_54 == 1 && !a0->field_17c->field_3c)
    {
        v1 = 0;
        v0 = 1;
    }
    else
    {
        v2 = a0->field_17c;
        if (v2[21] != 2 && !v2[15])
            return v2;
        if (!a0->field_124->field_764->field_4->field_4c(a0->field_124->field_764) || !a0->field_17c->field_44)
            return g_engfuncs.pfnPlaybackEvent(4, a1, (m_usMeleeSounds | 0x610000) & 0xffff, 0, &g_vecZero, &g_vecZero, 0, 0, a0->field_17c->field_20, a0->field_17c->field_50, 0, 0);
        v1 = 1;
        v0 = 0;
    }
    return g_engfuncs.pfnPlaybackEvent(4, a1, (m_usMeleeSounds | 0x610000) & 0xffff, 0, &g_vecZero, &g_vecZero, 0, 0, 0, 0);
}

