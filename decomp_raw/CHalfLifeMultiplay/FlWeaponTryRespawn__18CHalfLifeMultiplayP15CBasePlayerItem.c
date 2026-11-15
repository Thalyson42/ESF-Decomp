// FlWeaponTryRespawn__18CHalfLifeMultiplayP15CBasePlayerItem @0xdd730 size=140
typedef struct st_4dd730_3 {
    char padding_0[128];
    struct st_4dd730_1 *field_80;
} st_4dd730_3;

typedef struct st_4dd730_0 {
    char padding_0[136];
    unsigned int field_88;
} st_4dd730_0;

typedef struct st_4dd730_1 {
    unsigned int field_0;
} st_4dd730_1;

typedef struct st_4dd730_4 {
    char padding_0[68];
    struct st_4dd730_3 *field_44;
} st_4dd730_4;

typedef struct st_4dd730_2 {
    char padding_0[148];
    unsigned int field_94;
} st_4dd730_2;

extern st_4dd730_1 *g_616964;
extern st_4dd730_2 *gpGlobals;
extern char g_62f744[4];

double FlWeaponTryRespawn__18CHalfLifeMultiplayP15CBasePlayerItem(st_4dd730_4 *a0, st_4dd730_0 *a1)
{
    int v0;  // eax
    double v1;  // mm7

    if (a1 && a1->field_88 && g_62f744[44 * a1->field_88] & 8)
    {
        v0 = g_616964();
        if (v0 >= (int)(gpGlobals->field_94 - 100))
        {
            a0->field_44->field_80(a0, a1);
            return v1;
        }
    }
    return 0.0;
}

