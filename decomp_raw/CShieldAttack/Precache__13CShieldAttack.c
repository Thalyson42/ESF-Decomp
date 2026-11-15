// Precache__13CShieldAttack @0x119630 size=115
typedef struct st_519630_0 {
    unsigned int field_0;
} st_519630_0;

extern st_519630_0 *g_engfuncs;
extern st_519630_0 *g_6167c4;

int Precache__13CShieldAttack(void)
{
    g_engfuncs("sprites/shieldattack.spr");
    g_6167c4("weapons/shield.wav");
    g_6167c4("weapons/shieldha.wav");
    g_6167c4("gohan/shield.wav");
    return g_6167c4("gohan/shield_charge.wav");
}

