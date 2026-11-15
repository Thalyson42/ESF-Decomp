// Precache__16CFuncTrackChange @0xecd70 size=62
typedef struct st_4ecd70_0 {
    unsigned int field_0;
} st_4ecd70_0;

extern st_4ecd70_0 *g_engfuncs.pfnPrecacheSound;

int Precache__16CFuncTrackChange(int a0)
{
    g_engfuncs.pfnPrecacheSound("buttons/button11.wav");
    return CFuncPlat::Precache(a0);
}

