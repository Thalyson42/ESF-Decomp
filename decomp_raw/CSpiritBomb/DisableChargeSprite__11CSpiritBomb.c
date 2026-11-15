// DisableChargeSprite__11CSpiritBomb @0x121c60 size=65
typedef struct st_521c60_1 {
    char padding_0[128];
    struct st_521c60_2 *field_80;
    char padding_84[80];
    int field_d4;
} st_521c60_1;

typedef struct st_521c60_0 {
    char padding_0[348];
    unsigned int field_15c;
} st_521c60_0;

typedef struct st_521c60_2 {
    struct st_521c60_0 *field_0;
} st_521c60_2;

st_521c60_0 * DisableChargeSprite__11CSpiritBomb(st_521c60_1 *a0)
{
    st_521c60_0 *v0;  // eax

    CSprite::TurnOff(a0->field_d4);
    v0 = *(int *)a0->field_80;
    v0->field_15c = 0;
    return v0;
}

