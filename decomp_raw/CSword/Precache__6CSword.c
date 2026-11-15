// Precache__6CSword @0x124900 size=59
typedef struct st_524900_0 {
    unsigned int field_0;
} st_524900_0;

extern st_524900_0 *g_engfuncs.pfnPrecacheSound;

int Precache__6CSword(int a0)
{
    CMelee::Precache(a0);
    return g_engfuncs.pfnPrecacheSound("weapons/swordhit.wav");
}

