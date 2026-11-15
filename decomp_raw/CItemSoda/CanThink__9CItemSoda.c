// CanThink__9CItemSoda @0xb6c90 size=181
typedef struct st_4b6c90_1 {
    struct st_4b6c90_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
} st_4b6c90_1;

typedef struct st_4b6c90_0 {
    char padding_0[268];
    unsigned int field_10c;
    char padding_110[248];
    int field_208;
} st_4b6c90_0;

extern char CanTouch__9CItemSodaP11CBaseEntity;

short CanThink__9CItemSoda(st_4b6c90_1 *a0)
{
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    sub_489390(a0->field_0->field_208, 1, "weapons/g_bounce3.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    a0->field_0->field_10c = 1;
    v3 = 8.0f;
    v4 = 8.0f;
    v5 = 8.0f;
    v0 = -8.0f;
    v1 = -8.0f;
    v2 = 0;
    v6 = sub_48a0d0(a0->field_0, &v0, &v3);
    a0->field_c = 0;
    a0->field_10 = 0;
    v7 = _INSERT(v6, 0, 0);
    a0->field_14 = v7 | 0xffff0000;
    a0->field_18 = &CanTouch__9CItemSodaP11CBaseEntity;
    return v7;
}

