// HandleChargeAttack__12CPlayerMelee @0x109e90 size=150
typedef struct st_509e90_1 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[36];
    struct st_509e90_0 *field_130;
    char padding_134[20];
    int field_148;
} st_509e90_1;

typedef struct st_509e90_0 {
    char padding_0[332];
    int field_14c;
} st_509e90_0;

unsigned int HandleChargeAttack__12CPlayerMelee(st_509e90_1 *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    if (a0->field_108)
    {
        v0 = sub_48c1c0(a0, a0->field_148, a0->field_130->field_14c);
        if (!v0)
            return v0;
        return sub_489c80(a0);
    }
    else
    {
        v1 = sub_48bed0(a0);
        if (!v1)
            return v1;
        v2 = sub_48a0b0(a0, a0->field_148, a0->field_130->field_14c);
        if (v2)
            return v2;
        return sub_489c80(a0);
    }
}

