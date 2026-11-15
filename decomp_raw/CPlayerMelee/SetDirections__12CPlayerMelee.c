// SetDirections__12CPlayerMelee @0x105530 size=365
typedef struct st_505530_1 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[8];
    unsigned int field_10;
} st_505530_1;

typedef struct st_505530_0 {
    char padding_0[328];
    struct st_505530_1 *field_148;
} st_505530_0;

unsigned int SetDirections__12CPlayerMelee(st_505530_0 *a0)
{
    unsigned int *v1;  // esi
    unsigned int v2;  // esi
    unsigned int v0;  // [bp-0x8]

    v0 = 0;
    CPlayerMelee::SetMovementFlags(a0, &v0);
    v1 = a0->field_148;
    if (v1)
    {
        if (!v0)
        {
            if (CPlayerMelee::SetAttackFlags(a0, &v0))
            {
                CPlayerMelee::ResetDirection(a0, v0, v1);
            }
            else
            {
                CPlayerMelee::LetGoDirection(a0, v1);
                return 1;
            }
        }
        else
        {
            if (CPlayerMelee::SetAttackFlags(a0, &v0))
            {
                if (v1[4] || v1[1] != v0)
                {
                    if (CPlayerMelee::IsDirectionless(a0, v1[1]) && !CPlayerMelee::IsDirectionless(a0, v0))
                    {
                        CPlayerMelee::SetDirection(a0, v1, v0);
                    }
                    else
                    {
                        if (!CPlayerMelee::ResetDirection(a0, v0, v1) && CPlayerMelee::CanLetGo(a0, v1))
                        {
                            v2 = CPlayerMelee::LetGoDirection(a0, v1);
                            if (v2)
                                return v2;
                            CPlayerMelee::AddDirection(a0, v0);
                            return v2;
                        }
                    }
                }
            }
            else
            {
                CPlayerMelee::LetGoDirection(a0, v1);
                return 1;
            }
        }
        return CPlayerMelee::HoldDirection(a0, v1);
    }
    else if (CPlayerMelee::SetAttackFlags(a0, &v0))
    {
        CPlayerMelee::AddDirection(a0, v0);
        return 0;
    }
    else
    {
        return 1;
    }
}

