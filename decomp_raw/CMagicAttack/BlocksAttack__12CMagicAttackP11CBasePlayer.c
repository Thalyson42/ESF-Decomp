// BlocksAttack__12CMagicAttackP11CBasePlayer @0xce740 size=205
typedef struct st_4ce740_1 {
    struct st_4ce740_0 *field_0;
    char padding_4[808];
    unsigned int field_32c;
} st_4ce740_1;

typedef struct st_4ce740_2 {
    char padding_0[84];
    float field_54;
} st_4ce740_2;

typedef struct st_4ce740_0 {
    char padding_0[120];
    float field_78;
} st_4ce740_0;

unsigned int BlocksAttack__12CMagicAttackP11CBasePlayer(st_4ce740_2 **a0, st_4ce740_1 *a1)
{
    int v3;  // edi
    int v4;  // edx
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    if (!a1->field_32c)
        return 0;
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)a1->field_0->field_78;
    v3 = (v0 + 360) % 360;
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)*a0->field_54;
    v4 = (v0 + 540) % 360;
    if (v3 < v4 + 45 && v3 > v4 - 45)
        return 1;
    return 0;
}

