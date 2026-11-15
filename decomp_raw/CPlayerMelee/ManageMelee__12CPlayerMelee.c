// ManageMelee__12CPlayerMelee @0xffb70 size=426
unsigned int ManageMelee__12CPlayerMelee(float a0)
{
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    CPlayerMelee::ManageInvulnerability(a0);
    if (*(int *)(*(unsigned int *)&a0 + 312) && (!(*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 296) + 96) + 140))(*(int *)(*(unsigned int *)&a0 + 296)) || *(float *)(*(int *)*(int *)(*(unsigned int *)&a0 + 296) + 364) == 0.0f))
    {
        if (!*(int *)(*(unsigned int *)&a0 + 284) || !*(int *)(*(unsigned int *)&a0 + 312))
            return v1;
        CPlayerMelee::StopMelee(a0, 0);
        return v1;
    }
    if (*(int *)(*(unsigned int *)&a0 + 284) == 1)
    {
        v2 = CPlayerMelee::HandlePrepunchAttack(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 2)
    {
        CPlayerMelee::HandlePrepunchDefend(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 3)
    {
        CPlayerMelee::HandleChargeAttack(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 4)
    {
        CPlayerMelee::HandleChargeDefend(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 7)
    {
        CPlayerMelee::HandleExeAttack(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 8)
    {
        CPlayerMelee::HandleExeDefend(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 5)
    {
        CPlayerMelee::HandleGrabAttack(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 6)
    {
        CPlayerMelee::HandleGrabDefend(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 9)
    {
        CPlayerMelee::HandleStruggleAttack(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 10)
    {
        CPlayerMelee::HandleBurstStruggleAttack(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 11)
    {
        CPlayerMelee::HandleStruggleDefend(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 12)
    {
        CPlayerMelee::HandleKnockPreStruggleAttack(a0);
        return v2;
    }
    else
    {
        return v2;
    }
}

