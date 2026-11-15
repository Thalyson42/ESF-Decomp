// StopExeAttack__12CPlayerMelee @0x103a60 size=253
typedef struct st_503a60_0 {
    char padding_0[236];
    unsigned int field_ec;
} st_503a60_0;

typedef struct st_503a60_2 {
    char padding_0[236];
    unsigned int field_ec;
    char padding_f0[12];
    unsigned int field_fc;
    char padding_100[28];
    unsigned int field_11c;
    char padding_120[16];
    struct st_503a60_0 *field_130;
    char padding_134[68];
    struct st_503a60_1 *field_178;
    unsigned int field_17c;
} st_503a60_2;

typedef struct st_503a60_3 {
    char padding_0[660];
    unsigned int field_294;
} st_503a60_3;

typedef struct st_503a60_1 {
    char padding_0[856];
    struct st_503a60_1 *field_358;
} st_503a60_1;

unsigned int StopExeAttack__12CPlayerMelee(st_503a60_2 *a0)
{
    st_503a60_3 *v0;  // eax
    st_503a60_1 *v1;  // esi
    st_503a60_1 *v2;  // esi
    st_503a60_1 *v3;  // esi
    unsigned int v4;  // eax
    unsigned int v5;  // eax

    if (a0->field_11c == 7)
    {
        a0->field_11c = 0;
        if (a0->field_fc)
        {
            v0 = CPlayerMelee::GetCurrentAnim(a0);
            if (v0)
                v0->field_294 = 0;
        }
        else
        {
            CPlayerMelee::RemoveAllAnims(a0);
        }
        if (!a0->field_130->field_ec)
            CPlayerMelee::DelAllDirections(a0);
        v1 = a0->field_178;
        if (a0->field_178)
        {
            do
            {
                v2 = v1;
                v3 = v2->field_358;
                __builtin_delete(v2);
                v1 = v3;
            } while (v2->field_358);
        }
        a0->field_178 = NULL;
        a0->field_17c = 0;
        return CPlayerMelee::StopExeAttack(a0->field_130);
    }
    else if (a0->field_11c == 8)
    {
        a0->field_11c = 0;
        v4 = CPlayerMelee::RemoveAllAnims(a0);
        if (a0->field_ec)
            return v4;
        return CPlayerMelee::DelAllDirections(a0);
    }
    else
    {
        return v5;
    }
}

