// Shoot__5CRockG6Vector @0x129810 size=127
typedef struct st_529810_1 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[216];
    float field_104;
    char padding_108[4];
    unsigned int field_10c;
} st_529810_1;

typedef struct st_529810_2 {
    struct st_529810_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
} st_529810_2;

typedef struct st_529810_0 {
    float field_0;
} st_529810_0;

extern char NormalThink__12CMagicAttack;
extern char ExplodeTouch__5CRockP11CBaseEntity;
extern st_529810_0 *gpGlobals;

unsigned int * Shoot__5CRockG6Vector(st_529810_2 *a0, unsigned int *a1)
{
    st_529810_1 *v0;  // ecx
    st_529810_1 *v1;  // eax
    unsigned int v3;  // eax

    v0 = a0->field_0;
    v0->field_20 = *a1;
    v0->field_24 = a1[1];
    v0->field_28 = a1[2];
    v1 = a0->field_0;
    v1->field_10c = 1;
    v3 = _INSERT(v1, 0, 0) | 0xffff0000;
    a0->field_c = v3;
    a0->field_10 = &NormalThink__12CMagicAttack;
    a0->field_14 = _INSERT(v3, 0, 0) | 0xffff0000;
    a0->field_18 = &ExplodeTouch__5CRockP11CBaseEntity;
    a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    return gpGlobals;
}

