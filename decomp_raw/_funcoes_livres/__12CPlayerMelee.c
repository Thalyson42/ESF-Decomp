// __12CPlayerMelee @0xff9d0 size=94
extern char __vt_12CPlayerMelee;

unsigned int * __12CPlayerMelee(unsigned int *a0)
{
    a0[96] = &__vt_12CPlayerMelee;
    a0[82] = 0;
    a0[83] = 0;
    a0[32] = 0;
    CPlayerMelee::Reset(a0);
    CPlayerMelee::AddComboMoves(a0);
    return a0;
}

