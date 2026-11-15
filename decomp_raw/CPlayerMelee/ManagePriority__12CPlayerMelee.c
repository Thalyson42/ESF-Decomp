// ManagePriority__12CPlayerMelee @0xfff30 size=194
typedef struct st_4fff30_0 {
    char padding_0[292];
    struct st_4fff30_1 *field_124;
} st_4fff30_0;

typedef struct st_4fff30_1 {
    char padding_0[640];
    unsigned int field_280;
    char padding_284[24];
    unsigned int field_29c;
    char padding_2a0[144];
    unsigned int field_330;
} st_4fff30_1;

unsigned int * ManagePriority__12CPlayerMelee(st_4fff30_0 *a0)
{
    unsigned int *v0;  // eax
    unsigned int *v1;  // esi
    unsigned int *v2;  // eax
    unsigned int *v3;  // eax
    unsigned int *v4;  // eax

    v0 = CPlayerMelee::CanPlayAnimation(a0);
    if (!v0)
        return v0;
    v1 = CPlayerMelee::GetCurrentAnim(a0);
    if (!v1[167])
        return v1;
    if (v1[160] == 2)
    {
        v2 = CPlayerMelee::PlayMedPriorityAnim(a0);
        if (v2)
            return v2;
        if (a0->field_124->field_330)
            return a0->field_124;
    }
    else if (v1[160] == 1)
    {
        v3 = CPlayerMelee::PlayMedPriorityAnim(a0);
        if (v3)
            return v3;
    }
    else if (v1[160] == 3)
    {
        v4 = CPlayerMelee::PlayLowPriorityAnim(a0);
        if (v4)
            return v4;
        return CPlayerMelee::RemoveAnim(a0, v1);
    }
    else
    {
        return v1;
    }
    return CPlayerMelee::RemoveAnim(a0, v1);
}

