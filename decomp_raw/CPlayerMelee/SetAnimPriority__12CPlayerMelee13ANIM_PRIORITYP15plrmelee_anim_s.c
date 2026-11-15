// SetAnimPriority__12CPlayerMelee13ANIM_PRIORITYP15plrmelee_anim_s @0xffe30 size=23
typedef struct st_4ffe30_0 {
    char padding_0[640];
    unsigned int field_280;
} st_4ffe30_0;

unsigned int SetAnimPriority__12CPlayerMelee13ANIM_PRIORITYP15plrmelee_anim_s(unsigned int a0, unsigned int a1, st_4ffe30_0 *a2)
{
    unsigned int v0;  // eax

    if (a2)
    {
        v0 = a1;
        a2->field_280 = v0;
    }
    return v0;
}

