// EnableChargeSprite__10CDeathBall @0xa93a0 size=62
typedef struct st_4a93a0_0 {
    char padding_0[372];
    struct st_4a93a0_1 *field_174;
} st_4a93a0_0;

typedef struct st_4a93a0_1 {
    unsigned int field_0;
} st_4a93a0_1;

typedef struct st_4a93a0_2 {
    char padding_0[96];
    struct st_4a93a0_0 *field_60;
    char padding_64[368];
    int field_1d4;
} st_4a93a0_2;

int EnableChargeSprite__10CDeathBall(st_4a93a0_2 *a0)
{
    a0->field_60->field_174(a0);
    return CSprite::TurnOn(a0->field_1d4);
}

