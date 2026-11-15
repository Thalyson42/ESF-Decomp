// CheckMeleeAttack1__12CBaseMonsterff @0xd50b0 size=115
typedef struct st_4d50b0_0 {
    char padding_0[421];
    char field_1a5;
} st_4d50b0_0;

unsigned int CheckMeleeAttack1__12CBaseMonsterff(int a0, float a1, float a2)
{
    int v0;  // esi
    st_4d50b0_0 **v1;  // eax

    if (64.0 >= a2 && a1 >= 0.7)
    {
        v0 = a0 + 264;
        if (sub_48d8b0(v0))
        {
            v1 = sub_489fd0(v0);
            if (*v1->field_1a5 & 2)
                return 1;
        }
    }
    return 0;
}

