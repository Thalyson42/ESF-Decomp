// InsertSound__9CSoundEntiRC6Vectorif @0x11f090 size=177
typedef struct st_51f090_0 {
    float field_0;
} st_51f090_0;

typedef struct st_51f090_1 {
    unsigned int field_0;
} st_51f090_1;

extern st_51f090_1 *g_6168b4;
extern st_51f090_0 *gpGlobals;
extern int pSoundEnt;

int * InsertSound__9CSoundEntiRC6Vectorif(unsigned int a0, unsigned int *a1, unsigned int a2, float a3)
{
    unsigned int v0;  // edx
    unsigned int v1;  // ecx
    unsigned int *v2;  // edx
    unsigned int *v3;  // edi

    if (!pSoundEnt)
        return &pSoundEnt;
    v0 = sub_489ed0(pSoundEnt);
    if (v0 != 0xffffffff)
    {
        v1 = v0 * 32;
        v2 = pSoundEnt + v1;
        v3 = v2 + 29;
        v2[29] = *a1;
        v3[1] = a1[1];
        v3[2] = a1[2];
        *(unsigned int *)(v1 + pSoundEnt + 128) = a0;
        *(unsigned int *)(v1 + pSoundEnt + 132) = a2;
        *(float *)(v1 + pSoundEnt + 0x88) = a3 + *(float *)gpGlobals;
        return gpGlobals;
    }
    return g_6168b4(1, "Could not AllocSound() for InsertSound() (DLL)\n");
}

