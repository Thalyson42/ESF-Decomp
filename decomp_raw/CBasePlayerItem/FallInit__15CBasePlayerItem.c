// FallInit__15CBasePlayerItem @0x137f00 size=199
typedef struct st_537f00_1 {
    char padding_0[8];
    char field_8;
    char padding_9[251];
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
} st_537f00_1;

typedef struct st_537f00_2 {
    struct st_537f00_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
} st_537f00_2;

typedef struct st_537f00_0 {
    float field_0;
} st_537f00_0;

extern char FallThink__15CBasePlayerItem;
extern char DefaultTouch__15CBasePlayerItemP11CBaseEntity;
extern st_537f00_0 *gpGlobals;

short FallInit__15CBasePlayerItem(st_537f00_2 *a0)
{
    unsigned int v7;  // eax
    unsigned int v0;  // [bp-0x44]
    unsigned int v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    unsigned int v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]

    a0->field_0->field_108 = 6;
    a0->field_0->field_10c = 2;
    sub_48db50(a0->field_0, &a0->field_0->field_8);
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v7 = _INSERT(sub_48a0d0(a0->field_0, &v0, &v3), 0, 0) | 0xffff0000;
    a0->field_14 = v7;
    a0->field_18 = &DefaultTouch__15CBasePlayerItemP11CBaseEntity;
    a0->field_c = _INSERT(v7, 0, 0) | 0xffff0000;
    a0->field_10 = &FallThink__15CBasePlayerItem;
    a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    return (unsigned short)gpGlobals;
}

