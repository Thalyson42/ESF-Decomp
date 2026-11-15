// UTIL_EmitAmbientSound__FP7edict_sRC6VectorPCcffii @0x131f50 size=156
typedef struct st_531f50_0 {
    unsigned int field_0;
} st_531f50_0;

extern st_531f50_0 *g_engfuncs.pfnEmitAmbientSound;

int UTIL_EmitAmbientSound__FP7edict_sRC6VectorPCcffii(unsigned int a0, float *a1, char *a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
    int v4;  // eax
    char v0;  // [bp-0x44]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    float v3;  // [bp-0x1c]

    v1 = *a1;
    v2 = a1[1];
    v3 = a1[2];
    if (a2 && *a2 == 33)
    {
        v4 = SENTENCEG_Lookup(a2, &v0);
        if (v4 < NULL)
            return v4;
        return g_engfuncs.pfnEmitAmbientSound(a0, &v1, &v0, a3, a4, a5, a6);
    }
    return g_engfuncs.pfnEmitAmbientSound(a0, &v1, a2, a3, a4, a5, a6);
}

