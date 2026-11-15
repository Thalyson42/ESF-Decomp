// Precache__10CLightning @0xb0550 size=81
typedef struct st_4b0550_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4b0550_0;

typedef struct st_4b0550_1 {
    unsigned int field_0;
} st_4b0550_1;

extern st_4b0550_1 *g_engfuncs;
extern st_4b0550_0 *gpGlobals;

int Precache__10CLightning(unsigned int *a0)
{
    a0[0x22] = g_engfuncs(a0[35] + gpGlobals->field_98);
    return CBeam::Precache(a0);
}

