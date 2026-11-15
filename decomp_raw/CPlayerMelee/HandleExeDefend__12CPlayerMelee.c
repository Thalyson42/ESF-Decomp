// HandleExeDefend__12CPlayerMelee @0x103980 size=139
void HandleExeDefend__12CPlayerMelee(unsigned int *a0)
{
    if (!a0[60] && sub_488510(a0) && sub_48d3c0(a0))
    {
        if (!a0[59])
        {
            a0[59] = 1;
            sub_48ca80(a0);
        }
        a0[60] = sub_48bed0(a0);
        return;
    }
    if (!a0[59])
        sub_48ca30(a0);
    return;
}

