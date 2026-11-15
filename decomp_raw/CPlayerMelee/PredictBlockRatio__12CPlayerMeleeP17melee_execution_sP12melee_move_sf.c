// PredictBlockRatio__12CPlayerMeleeP17melee_execution_sP12melee_move_sf @0x104b50 size=282
typedef struct st_504b50_2 {
    char padding_0[296];
    unsigned int field_128;
} st_504b50_2;

typedef struct st_504b50_0 {
    char padding_0[4];
    int field_4;
    char padding_8[20];
    struct st_504b50_0 *field_1c;
    struct st_504b50_0 *field_20;
} st_504b50_0;

typedef struct st_504b50_1 {
    char padding_0[32];
    int field_20;
    char padding_24[24];
    unsigned int field_3c;
    char padding_40[4];
    unsigned int field_44;
    char padding_48[8];
    int field_50;
    char padding_54[772];
    struct st_504b50_1 *field_358;
} st_504b50_1;

double PredictBlockRatio__12CPlayerMeleeP17melee_execution_sP12melee_move_sf(st_504b50_2 *a0, st_504b50_1 *a1, st_504b50_0 *a2, float a3)
{
    st_504b50_1 *v4;  // esi
    st_504b50_0 *iter;  // edi
    st_504b50_1 *v6;  // esi
    double v7;  // mm7
    int v0;  // [bp-0x14]
    int v1;  // [bp-0x10]
    int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x8]

    v4 = a1;
    iter = a2;
    v2 = 0;
    v1 = 0;
    if (!v4 || !iter)
        return 0.0;
    for (v0 = 0; iter->field_1c; iter = iter->field_1c);
    v3 = 0;
    if (v4)
    {
        do
        {
            v6 = v4;
            if (!v6->field_44)
            {
                v2 += 1;
                if (iter)
                {
                    if (v3 && CPlayerMelee::ContinueBlockStun(a0, &v3, v0, v6->field_50))
                    {
                        v3 -= 1;
                    }
                    else if (CPlayerMelee::Block(a0, v6->field_20, iter->field_4) || v6->field_3c)
                    {
                        v1 += 1;
                        v3 = 0;
                    }
                    else
                    {
                        v3 = CPlayerMelee::GetBlockStunAmt(a0->field_128 + 896, v6->field_50);
                        v0 = v6->field_50;
                    }
                    iter = iter->field_20;
                }
            }
            v4 = v6->field_358;
        } while (v6->field_358);
    }
    CPlayerMelee::GetBlockRatio(a0, v1, v2);
    return v7 * a3;
    return 0.0;
}

