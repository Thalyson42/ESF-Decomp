// SetMode__12CPlayerMelee16ADV_MELEE_STATUS @0x106f20 size=291
typedef struct st_506f20_0 {
    char padding_0[284];
    unsigned int field_11c;
} st_506f20_0;

typedef struct st_506f20_1 {
    char padding_0[284];
    unsigned int field_11c;
    char padding_120[16];
    struct st_506f20_0 *field_130;
} st_506f20_1;

st_506f20_0 * SetMode__12CPlayerMelee16ADV_MELEE_STATUS(st_506f20_1 *a0, unsigned int a1)
{
    st_506f20_0 *v0;  // eax

    a0->field_11c = a1;
    v0 = a0->field_130;
    v0->field_11c = a1;
    if (a1)
    {
        if (a1 == 1)
        {
            a0->field_130->field_11c = 2;
            v0 = sub_48d670(a0);
        }
        if (a1 == 3)
        {
            a0->field_130->field_11c = 4;
            v0 = sub_4896d0(a0);
        }
        if (a1 == 5)
        {
            a0->field_130->field_11c = 6;
            v0 = sub_489710(a0);
        }
        if (a1 == 7)
        {
            a0->field_130->field_11c = 8;
            v0 = sub_48ab50(a0);
        }
        if (a1 == 9)
        {
            a0->field_130->field_11c = 11;
            v0 = sub_489a90(a0);
        }
        if (a1 == 10)
        {
            a0->field_130->field_11c = 11;
            v0 = sub_48c4c0(a0);
        }
        if (a1 == 12)
        {
            a0->field_130->field_11c = 13;
            v0 = sub_48b1b0(a0);
        }
    }
    return v0;
}

