// HandleKnockPreStruggleAttack__12CPlayerMelee @0x10bb80 size=104
typedef struct st_50bb80_0 {
    float field_0;
} st_50bb80_0;

extern st_50bb80_0 *gpGlobals;

unsigned int HandleKnockPreStruggleAttack__12CPlayerMelee(float a0)
{
    if (*(float *)(*(unsigned int *)&a0 + 168) < *(float *)gpGlobals)
    {
        sub_489610(a0, 1);
        sub_488530(a0, 0x11, 0);
    }
    return sub_488530(*(int *)(*(unsigned int *)&a0 + 304), 0x11, 0);
}

