// GetNextBestWeapon__18CHalfLifeMultiplayP11CBasePlayerP15CBasePlayerItem @0xdbd20 size=364
typedef struct st_4dbd20_3 {
    char padding_0[96];
    struct st_4dbd20_1 *field_60;
    char padding_64[32];
    struct st_4dbd20_3 *field_84;
    unsigned int field_88;
} st_4dbd20_3;

typedef struct st_4dbd20_0 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_4dbd20_0;

typedef struct st_4dbd20_4 {
    char padding_0[2368];
    struct st_4dbd20_3 *field_940;
} st_4dbd20_4;

typedef struct st_4dbd20_1 {
    char padding_0[248];
    struct st_4dbd20_2 *field_f8;
    char padding_fc[4];
    struct st_4dbd20_2 *field_100;
} st_4dbd20_1;

typedef struct st_4dbd20_2 {
    unsigned int field_0;
} st_4dbd20_2;

extern st_4dbd20_0 _15CBasePlayerItem.ItemInfoArray+40;

unsigned int GetNextBestWeapon__18CHalfLifeMultiplayP11CBasePlayerP15CBasePlayerItem(unsigned int a0, st_4dbd20_4 *a1, st_4dbd20_3 *a2)
{
    st_4dbd20_3 *v4;  // esi
    st_4dbd20_3 *v5;  // esi
    unsigned int v6;  // edx
    st_4dbd20_0 *v0;  // [bp-0x14]
    int idx;  // [bp-0x10]
    int v2;  // [bp-0xc]
    st_4dbd20_3 *v3;  // [bp-0x8]

    v2 = -0x1;
    v3 = NULL;
    if (!a2->field_60->field_100(a2))
        return 0;
    idx = 0;
    do
    {
        v4 = (&a1->field_940)[idx];
        if ((&a1->field_940)[idx])
        {
            v0 = &_15CBasePlayerItem.ItemInfoArray+40.field_0;
            do
            {
                v5 = v4;
                v6 = v5->field_88 * 11;
                if ((&v0->field_0)[v6] > -0x1 && (&v0->field_0)[v6] == *(int *)((char *)v0 + 44 * a2->field_88) && v5 != a2)
                {
                    if (v5->field_60->field_f8(v5) && CBasePlayer::SwitchWeapon(a1, v5))
                        return 1;
                }
                else
                {
                    if ((&_15CBasePlayerItem.ItemInfoArray+40.field_0)[11 * v5->field_88] > v2 && v5 != a2 && v5->field_60->field_f8(v5))
                    {
                        v2 = (&_15CBasePlayerItem.ItemInfoArray+40.field_0)[11 * v5->field_88];
                        v3 = v5;
                    }
                }
            } while ((v4 = v5->field_84, v5->field_84));
        }
    } while ((idx += 1, idx <= 9));
    if (v3)
    {
        CBasePlayer::SwitchWeapon(a1, v3);
        return 1;
    }
    return 0;
}

