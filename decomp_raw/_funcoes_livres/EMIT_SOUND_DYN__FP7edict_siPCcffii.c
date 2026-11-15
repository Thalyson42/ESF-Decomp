// EMIT_SOUND_DYN__FP7edict_siPCcffii @0x11d6e0 size=175
typedef struct st_51d6e0_0 {
    unsigned int field_0;
} st_51d6e0_0;

extern st_51d6e0_0 *g_engfuncs.pfnEmitSound;
extern st_51d6e0_0 *g_engfuncs.pfnAlertMessage;

unsigned int EMIT_SOUND_DYN__FP7edict_siPCcffii(unsigned int a0, unsigned int a1, char *a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
    char v0;  // [bp-0x24]

    if (a2 && *a2 == 33)
        return ((int)SENTENCEG_Lookup(a2, &v0) < 0 ? g_engfuncs.pfnAlertMessage(2, "Unable to find %s in sentences.txt\n", a2) : g_engfuncs.pfnEmitSound(a0, a1, &v0, a3, a4, a5, a6));
    return g_engfuncs.pfnEmitSound(a0, a1, a2, a3, a4, a5, a6);
}

