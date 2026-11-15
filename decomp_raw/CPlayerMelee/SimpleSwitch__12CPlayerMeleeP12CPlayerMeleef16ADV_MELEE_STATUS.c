// SimpleSwitch__12CPlayerMeleeP12CPlayerMeleef16ADV_MELEE_STATUS @0x103580 size=224
typedef struct st_503580_0 {
    char padding_0[196];
    unsigned int field_c4;
    char padding_c8[44];
    unsigned int field_f4;
    char padding_f8[44];
    int field_124;
    char padding_128[16];
    unsigned int field_138;
} st_503580_0;

unsigned int SimpleSwitch__12CPlayerMeleeP12CPlayerMeleef16ADV_MELEE_STATUS(st_503580_0 *a0, unsigned int *a1, float a2, int a3)
{
    unsigned int v0;  // eax

    if (a0->field_138)
    {
        a0->field_c4 = a0->field_c4 + 1;
        a1[49] = a1[49] + 1;
        a0->field_f4 = 1;
        a1[61] = 1;
        sub_48a700(a0, 0);
        sub_48c220(a1, a0->field_124);
        if (a2 != -1.0f)
            sub_48b280(a0, a2);
        if (a3)
            sub_489610(a1, a3);
        a0->field_f4 = 0;
        a1[61] = 0;
        return v0;
    }
    else if (a1[78])
    {
        v0 = sub_489000(a0, a0, a2, a3);
        return v0;
    }
    else
    {
        return v0;
    }
}

