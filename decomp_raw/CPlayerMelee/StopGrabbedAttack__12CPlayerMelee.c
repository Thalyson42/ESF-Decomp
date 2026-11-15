// StopGrabbedAttack__12CPlayerMelee @0x10a130 size=249
typedef struct st_50a130_1 {
    char padding_0[56];
    unsigned int field_38;
    char padding_3c[80];
    unsigned int field_8c;
    char padding_90[8];
    unsigned int field_98;
    unsigned int field_9c;
    char padding_a0[68];
    unsigned int field_e4;
    unsigned int field_e8;
    char padding_ec[48];
    unsigned int field_11c;
    char padding_120[4];
    struct st_50a130_2 *field_124;
    char padding_128[8];
    int field_130;
} st_50a130_1;

typedef struct st_50a130_2 {
    struct st_50a130_0 *field_0;
} st_50a130_2;

typedef struct st_50a130_0 {
    char padding_0[520];
    int field_208;
} st_50a130_0;

unsigned int StopGrabbedAttack__12CPlayerMelee(st_50a130_1 *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (a0->field_11c == 5)
    {
        CBasePlayer::DrawChargeBar(a0->field_124, 0);
        a0->field_11c = 0;
        a0->field_9c = 0;
        a0->field_98 = 0;
        a0->field_e4 = 0;
        CPlayerMelee::RemoveAllAnims(a0);
        if (!a0->field_e8)
            return CPlayerMelee::StopGrabbedAttack(a0->field_130);
        a0->field_e8 = 0;
        EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_124 + 520), 1, "weapons/spin.wav", 0, 0, 32, 100);
        return CPlayerMelee::StopGrabbedAttack(a0->field_130);
    }
    else if (a0->field_11c == 6)
    {
        a0->field_11c = 0;
        a0->field_8c = 0;
        v0 = CPlayerMelee::RemoveAllAnims(a0);
        if (!a0->field_38)
            return v0;
        return CPlayerMelee::RemoveStruggleBar(a0);
    }
    else
    {
        return v1;
    }
}

