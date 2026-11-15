// Spawn__13CRegeneration @0x10dca0 size=83
typedef struct st_50dca0_0 {
    char padding_0[12];
    struct st_50dca0_1 *field_c;
} st_50dca0_0;

typedef struct st_50dca0_2 {
    char padding_0[96];
    struct st_50dca0_0 *field_60;
    char padding_64[36];
    unsigned int field_88;
    char padding_8c[36];
    unsigned int field_b0;
    char padding_b4[12];
    unsigned int field_c0;
} st_50dca0_2;

typedef struct st_50dca0_1 {
    unsigned int field_0;
} st_50dca0_1;

int Spawn__13CRegeneration(st_50dca0_2 *a0)
{
    a0->field_60->field_c(a0);
    a0->field_88 = 29;
    a0->field_c0 = 0;
    a0->field_b0 = 0xffffffff;
    return CBasePlayerItem::FallInit(a0);
}

