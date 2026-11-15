// AddDirection__12CPlayerMeleei @0x1058f0 size=292
typedef struct st_5058f0_1 {
    char padding_0[120];
    unsigned int field_78;
    char padding_7c[76];
    struct st_5058f0_0 *field_c8;
    struct st_5058f0_0 *field_cc;
    char padding_d0[120];
    struct st_5058f0_0 *field_148;
    struct st_5058f0_0 *field_14c;
} st_5058f0_1;

typedef struct st_5058f0_0 {
    struct st_5058f0_0 *field_0;
    char field_1;
    char padding_2[2];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
    char padding_11[11];
    struct st_5058f0_0 *field_1c;
    struct st_5058f0_0 *field_20;
} st_5058f0_0;

typedef struct st_5058f0_2 {
    float field_0;
} st_5058f0_2;

extern st_5058f0_2 *gpGlobals;

st_5058f0_0 * AddDirection__12CPlayerMeleei(st_5058f0_1 *a0, int a1)
{
    st_5058f0_0 *v0;  // eax
    st_5058f0_0 *v1;  // esi
    st_5058f0_0 *v2;  // eax

    v0 = CPlayerMelee::CanAddDirection(a0);
    if (!v0)
        return v0;
    v1 = __builtin_new(36);
    *(int *)&v1->field_1 = a1;
    *(float *)&v1->field_4 = *(float *)gpGlobals;
    *(float *)&v1->field_8 = *(float *)gpGlobals;
    memset(&v1->field_c, 0, 20);
    if (CPlayerMelee::UseAttackerMoves(a0))
    {
        v2 = a0->field_c8;
        v1->field_0 = v2;
        a0->field_c8 = (char *)&a0->field_c8->field_0 + 1;
        if (a0->field_148)
        {
            a0->field_148->field_1c = v1;
            v2 = a0->field_148;
            *(st_5058f0_0 **)&v1->padding_11[7] = v2;
        }
        a0->field_148 = v1;
    }
    else
    {
        v2 = a0->field_cc;
        v1->field_0 = v2;
        a0->field_cc = (char *)&a0->field_cc->field_0 + 1;
        if (a0->field_14c)
        {
            a0->field_14c->field_1c = v1;
            v2 = a0->field_14c;
            *(st_5058f0_0 **)&v1->padding_11[7] = v2;
        }
        a0->field_14c = v1;
    }
    if (a0->field_78)
        return v2;
    return (!CPlayerMelee::UseAttackerMoves(a0) ? CPlayerMelee::UpdateBlockClient(a0, v1) : CPlayerMelee::MeleeHudFlags(a0, 1, a1));
}

