// CanHavePlayerItem__18CHalfLifeMultiplayP11CBasePlayerP15CBasePlayerItem @0xdd820 size=160
typedef struct st_4dd820_0 {
    char padding_0[136];
    unsigned int field_88;
} st_4dd820_0;

typedef struct st_4dd820_1 {
    char padding_0[132];
    struct st_4dd820_1 *field_84;
    unsigned int field_88;
} st_4dd820_1;

extern float weaponstay+12;
extern char _15CBasePlayerItem.ItemInfoArray+36[4];

unsigned int CanHavePlayerItem__18CHalfLifeMultiplayP11CBasePlayerP15CBasePlayerItem(int a0, st_4dd820_1 **a1, st_4dd820_0 *a2)
{
    int idx;  // ecx
    st_4dd820_1 **v1;  // esi
    st_4dd820_1 *v2;  // edx
    st_4dd820_1 *v3;  // edx

    if (0.0 < weaponstay+12 && !(_15CBasePlayerItem.ItemInfoArray+36[44 * a2->field_88] & 8))
    {
        idx = 0;
        v1 = a1 + 592;
        do
        {
            v2 = v1[idx];
            if (v1[idx])
            {
                do
                {
                    v3 = v2;
                    if (v3->field_88 == a2->field_88)
                        return 0;
                } while ((v2 = v3->field_84, v3->field_84));
            }
        } while ((idx += 1, idx <= 9));
    }
    return CGameRules::CanHavePlayerItem(a0, a1, a2);
}

