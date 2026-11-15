// GetThrowAnimDirection__12CPlayerMeleeiPc @0x100cd0 size=61
int GetThrowAnimDirection__12CPlayerMeleeiPc(int a0, int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x20]

    v0 = a2;
    return CPlayerMelee::GetThrowAnimDirection(a0, 0, CPlayerMelee::GetThrowDirection(a0, a1));
}

