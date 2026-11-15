// Precache__17CCariedDragonBall @0xaeab0 size=142
typedef struct st_4aeab0_0 {
    unsigned int field_0;
} st_4aeab0_0;

extern st_4aeab0_0 *g_engfuncs;

int Precache__17CCariedDragonBall(void)
{
    g_engfuncs("models/p_db1.mdl");
    g_engfuncs("models/p_db2.mdl");
    g_engfuncs("models/p_db3.mdl");
    g_engfuncs("models/p_db4.mdl");
    g_engfuncs("models/p_db5.mdl");
    g_engfuncs("models/p_db6.mdl");
    return g_engfuncs("models/p_db7.mdl");
}

