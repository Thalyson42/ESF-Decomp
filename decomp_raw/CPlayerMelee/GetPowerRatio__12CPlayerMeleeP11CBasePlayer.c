// GetPowerRatio__12CPlayerMeleeP11CBasePlayer @0x103300 size=132
typedef struct st_503300_0 {
    char padding_0[292];
    int field_124;
} st_503300_0;

double GetPowerRatio__12CPlayerMeleeP11CBasePlayer(st_503300_0 *a0, int a1)
{
    int v0;  // [bp-0x8]
    int v1;  // [bp-0x8]

    if (!a1)
        return 1.0;
    v0 = CBasePlayer::GetPowerLevel(a0->field_124);
    v1 = CBasePlayer::GetPowerLevel(a1);
    if ((double)v0 / (double)v1 <= 2.0)
        return 0.5;
    return 2.0;
}

