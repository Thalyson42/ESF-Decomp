// CanAddDirection__12CPlayerMelee @0x105810 size=215
typedef struct st_505810_1 {
    char padding_0[236];
    unsigned int field_ec;
    char padding_f0[88];
    unsigned int field_148;
} st_505810_1;

typedef struct st_505810_0 {
    char padding_0[124];
    unsigned int field_7c;
    char padding_80[108];
    unsigned int field_ec;
    char padding_f0[64];
    struct st_505810_1 *field_130;
    struct st_505810_1 *field_134;
    unsigned int field_138;
    unsigned int field_13c;
    char padding_140[8];
    int field_148;
    int field_14c;
} st_505810_0;

unsigned int CanAddDirection__12CPlayerMelee(st_505810_0 *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int *v2;  // eax

    if (a0->field_7c)
    {
        v0 = CPlayerMelee::GetMoveCountFinishedOnly(a0, a0->field_148);
        v1 = CPlayerMelee::GetMoveCount(a0, a0->field_14c);
    }
    else
    {
        if (!a0->field_ec && a0->field_13c)
        {
            v0 = CPlayerMelee::GetMoveCount(a0, a0->field_14c);
            v2 = a0->field_134;
        }
        else if (!a0->field_138)
        {
            return 1;
        }
        else if (!a0->field_130)
        {
            return 1;
        }
        else if (a0->field_130->field_ec)
        {
            v0 = CPlayerMelee::GetMoveCount(a0, a0->field_14c);
            v2 = a0->field_130;
        }
        else
        {
            return 1;
        }
        v1 = CPlayerMelee::GetMoveCountFinishedOnly(a0, v2[82]);
    }
    if (v0 != v1)
        return 1;
    return 0;
}

