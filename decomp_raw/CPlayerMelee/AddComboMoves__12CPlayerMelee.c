// AddComboMoves__12CPlayerMelee @0x1031a0 size=120
unsigned int AddComboMoves__12CPlayerMelee(int a0)
{
    int idx;  // esi
    unsigned int v1;  // eax

    idx = 1;
    do
    {
        *(unsigned int *)(a0 + 336 + idx * 4) = 0;
        CPlayerMelee::AddMove(a0, idx, 1, 3, 0, 4, 0, 3, 0, 2);
        v1 = CPlayerMelee::AddMove(a0, idx, 2, 4, 0, 4, 0, 5, 0, 6, 1, 10);
        idx += 1;
    } while (idx <= 9);
    return v1;
}

