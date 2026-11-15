// Spawn__15CBasePlayerAmmo @0x138d90 size=144
typedef struct st_538d90_0 {
    char padding_0[8];
    char field_8;
    char padding_9[255];
    unsigned int field_108;
    unsigned int field_10c;
} st_538d90_0;

typedef struct st_538d90_1 {
    struct st_538d90_0 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
} st_538d90_1;

extern char DefaultTouch__15CBasePlayerAmmoP11CBaseEntity;

short Spawn__15CBasePlayerAmmo(st_538d90_1 *a0)
{
    unsigned int v6;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    a0->field_0->field_108 = 6;
    a0->field_0->field_10c = 1;
    v3 = 16.0f;
    v4 = 16.0f;
    v5 = 16.0f;
    v0 = -16.0f;
    v1 = -16.0f;
    v2 = 0;
    sub_48a0d0(a0->field_0, &v0, &v3);
    v6 = _INSERT(sub_48db50(a0->field_0, &a0->field_0->field_8), 0, 0);
    a0->field_14 = v6 | 0xffff0000;
    a0->field_18 = &DefaultTouch__15CBasePlayerAmmoP11CBaseEntity;
    return v6;
}

