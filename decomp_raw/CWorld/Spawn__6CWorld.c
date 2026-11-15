// Spawn__6CWorld @0x13a280 size=85
typedef struct st_53a280_0 {
    char padding_0[12];
    struct st_53a280_1 *field_c;
} st_53a280_0;

typedef struct st_53a280_1 {
    unsigned int field_0;
} st_53a280_1;

typedef struct st_53a280_2 {
    char padding_0[96];
    struct st_53a280_0 *field_60;
} st_53a280_2;

extern unsigned int g_fGameOver;
extern st_53a280_1 *g_6168a4;
extern unsigned int g_flWeaponCheat;

unsigned int * Spawn__6CWorld(double a0, st_53a280_2 *a1)
{
    double v0;  // mm7

    g_fGameOver = 0;
    a1->field_60->field_c(a1);
    g_6168a4("sv_cheats");
    *(float *)&g_flWeaponCheat = (float)v0;
    return &g_flWeaponCheat;
}

