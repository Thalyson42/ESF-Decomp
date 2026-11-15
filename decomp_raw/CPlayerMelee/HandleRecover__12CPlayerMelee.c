// HandleRecover__12CPlayerMelee @0x102000 size=180
typedef struct st_502000_0 {
    float field_0;
} st_502000_0;

extern st_502000_0 *gpGlobals;

unsigned int HandleRecover__12CPlayerMelee(float idx)
{
    unsigned int v2;  // edx
    int v0;  // [bp-0x28]

    if (*(int *)(*(unsigned int *)&idx + 100) != 6)
    {
        if (*(float *)(*(unsigned int *)&idx + 20) < *(float *)gpGlobals && ((char)*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 384) & 1 || *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 384) & 2050))
        {
            v2 = *(int *)(*(unsigned int *)&idx + 292);
            if (*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 421) & 2)
            {
                v0 = 60;
                v2 = *(int *)(*(unsigned int *)&idx + 292);
            }
            else
            {
                v0 = 150;
                v2 = *(int *)(*(unsigned int *)&idx + 292);
            }
            if (CBasePlayer::UseKi(v2, v0))
            {
                CPlayerMelee::Recover(idx);
                return 1;
            }
        }
    }
    else
    {
        if (*(int *)(*(unsigned int *)&idx + 52))
        {
            CPlayerMelee::DeaccelerateToss(idx);
            CPlayerMelee::ApplyVelocity(idx);
        }
    }
    return 0;
}

