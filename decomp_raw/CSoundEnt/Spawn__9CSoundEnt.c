// Spawn__9CSoundEnt @0x11ee10 size=73
typedef struct st_51ee10_0 {
    float field_0;
} st_51ee10_0;

extern st_51ee10_0 *gpGlobals;

unsigned int * Spawn__9CSoundEnt(float a0)
{
    *(unsigned int *)(*(int *)a0 + 268) = 0;
    CSoundEnt::Initialize(a0);
    *(float *)(*(int *)a0 + 260) = (float)(1.0 + *(float *)gpGlobals);
    return gpGlobals;
}

