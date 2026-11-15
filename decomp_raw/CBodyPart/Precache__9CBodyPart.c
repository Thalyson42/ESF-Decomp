// Precache__9CBodyPart @0x942f0 size=80
typedef struct st_4942f0_0 {
    unsigned int field_0;
} st_4942f0_0;

extern st_4942f0_0 *g_engfuncs;

int Precache__9CBodyPart(void)
{
    g_engfuncs("models/bodypart.mdl");
    g_engfuncs("models/bodypart_medium.mdl");
    return g_engfuncs("models/p_test.mdl");
}

