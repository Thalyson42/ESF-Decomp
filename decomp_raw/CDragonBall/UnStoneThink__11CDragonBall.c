// UnStoneThink__11CDragonBall @0xae790 size=70
typedef struct st_4ae790_0 {
    char padding_0[272];
    unsigned int field_110;
} st_4ae790_0;

typedef struct st_4ae790_1 {
    struct st_4ae790_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
} st_4ae790_1;

extern char PickupTouch__11CDragonBallP11CBaseEntity;

unsigned int UnStoneThink__11CDragonBall(st_4ae790_1 *a0)
{
    st_4ae790_0 *v0;  // eax
    unsigned int v1;  // eax

    v0 = a0->field_0;
    v0->field_110 = 0;
    v1 = _INSERT(v0, 0, 0);
    a0->field_14 = v1 | 0xffff0000;
    a0->field_18 = &PickupTouch__11CDragonBallP11CBaseEntity;
    a0->field_c = 0;
    a0->field_10 = 0;
    return v1 | 0xffff0000;
}

