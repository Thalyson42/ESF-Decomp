// MeleeHudFlags__12CPlayerMeleeii @0x106a60 size=61
int MeleeHudFlags__12CPlayerMeleeii(int a0, int a1, int a2)
{
    return CPlayerMelee::MeleeHud(a0, a1, CPlayerMelee::FlagsToDirections(a0, a2));
}

