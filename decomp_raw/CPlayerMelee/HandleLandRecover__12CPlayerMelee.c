// HandleLandRecover__12CPlayerMelee @0x102360 size=82
typedef struct st_502360_0 {
    float field_0;
} st_502360_0;

extern st_502360_0 *gpGlobals;

unsigned int HandleLandRecover__12CPlayerMelee(float a0)
{
    if (*(float *)(*(unsigned int *)&a0 + 28) + 1.0 < *(float *)gpGlobals)
    {
        *(unsigned int *)(*(unsigned int *)&a0 + 28) = 0;
        sub_48d400(a0);
    }
    return sub_48ac60(a0);
}

