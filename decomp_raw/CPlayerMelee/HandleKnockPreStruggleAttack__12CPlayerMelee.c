// HandleKnockPreStruggleAttack__12CPlayerMelee @0x10bb80 size=104
typedef struct st_50bb80_0 {
    float field_0;
} st_50bb80_0;

extern st_50bb80_0 *gpGlobals;

unsigned int HandleKnockPreStruggleAttack__12CPlayerMelee(float a0)
{
    if (*(float *)(*(unsigned int *)&a0 + 168) < *(float *)gpGlobals)
    {
        CPlayerMelee::SetMode(a0, 1);
        CPlayerMelee::MeleeText(a0, 0x11, 0);
    }
    return CPlayerMelee::MeleeText(*(int *)(*(unsigned int *)&a0 + 304), 0x11, 0);
}

