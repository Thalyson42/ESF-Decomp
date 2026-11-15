// AttachToPlayer__15CBasePlayerItemP11CBasePlayer @0x138760 size=162
typedef struct st_538760_2 {
    struct st_538760_1 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
} st_538760_2;

typedef struct st_538760_1 {
    char padding_0[180];
    unsigned int field_b4;
    unsigned int field_b8;
    char padding_bc[72];
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
    char padding_11c[120];
    unsigned int field_194;
    unsigned int field_198;
} st_538760_1;

typedef struct st_538760_3 {
    char padding_0[520];
    unsigned int field_208;
} st_538760_3;

typedef struct st_538760_0 {
    float field_0;
} st_538760_0;

extern st_538760_0 *gpGlobals;

unsigned int * AttachToPlayer__15CBasePlayerItemP11CBasePlayer(st_538760_2 *a0, st_538760_3 **a1)
{
    a0->field_0->field_108 = 12;
    a0->field_0->field_10c = 0;
    a0->field_0->field_194 = *a1->field_208;
    a0->field_0->field_118 = 128;
    a0->field_0->field_b4 = 0;
    a0->field_0->field_b8 = 0;
    a0->field_0->field_198 = *a1->field_208;
    a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    a0->field_14 = 0;
    a0->field_18 = 0;
    return gpGlobals;
}

