// Spawn__13CShieldAttack @0x1194b0 size=133
typedef struct st_5194b0_0 {
    char padding_0[12];
    struct st_5194b0_1 *field_c;
} st_5194b0_0;

typedef struct st_5194b0_2 {
    char padding_0[96];
    struct st_5194b0_0 *field_60;
    char padding_64[36];
    unsigned int field_88;
    char padding_8c[36];
    unsigned int field_b0;
    char padding_b4[12];
    unsigned int field_c0;
} st_5194b0_2;

typedef struct st_5194b0_1 {
    unsigned int field_0;
} st_5194b0_1;

int Spawn__13CShieldAttack(st_5194b0_2 *a0)
{
    a0->field_60->field_c(a0);
    a0->field_88 = 28;
    a0->field_c0 = 0;
    a0->field_b0 = 0xffffffff;
    memset(a0 + 1, 0, 20);
    return CBasePlayerItem::FallInit(a0);
}

