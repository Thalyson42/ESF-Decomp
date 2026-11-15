// Initialize__9CSoundEnt @0x11f150 size=279
typedef struct st_51f150_0 {
    char padding_0[144];
    int field_90;
} st_51f150_0;

typedef struct st_51f150_1 {
    unsigned int field_0;
} st_51f150_1;

extern st_51f150_1 *g_engfuncs.pfnCVarGetFloat;
extern st_51f150_1 *g_engfuncs.pfnAlertMessage;
extern st_51f150_0 *gpGlobals;
extern int pSoundEnt;

unsigned int Initialize__9CSoundEnt(float idx)
{
    int i;  // edi
    int *v3;  // esi
    int v4;  // eax
    int j;  // edi
    unsigned int index;  // edx
    double v7;  // mm0
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    float v0;  // [bp-0x8]

    *(unsigned int *)(*(unsigned int *)&idx + 100) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 104) = 0xffffffff;
    i = 0;
    *(unsigned int *)&v0 = *(unsigned int *)&idx + 140;
    do
    {
        v3 = i * 32;
        CSound::Clear(*(unsigned int *)&idx + (char *)v3 + 116);
        v4 = i + 1;
        *(int *)((char *)v3 + *(unsigned int *)&v0) = v4;
        i = v4;
    } while (i <= 63);
    *(unsigned int *)((i - 1) * 32 + *(unsigned int *)&idx + 140) = 0xffffffff;
    for (j = 0; j < gpGlobals->field_90; j += 1)
    {
        index = CSoundEnt::IAllocSound(pSoundEnt);
        if (index == 0xffffffff)
        {
            v10 = g_engfuncs.pfnAlertMessage(1, "Could not AllocSound() for Client Reserve! (DLL)\n");
            return v10;
        }
        *(float *)(index * 32 + pSoundEnt + 0x88) = -1.0f;
    }
    g_engfuncs.pfnCVarGetFloat("displaysoundlist");
    if (v7 != 1.0)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 112) = 0;
        return v9;
    }
    *(unsigned int *)(*(unsigned int *)&idx + 112) = 1;
    return v8;
}

