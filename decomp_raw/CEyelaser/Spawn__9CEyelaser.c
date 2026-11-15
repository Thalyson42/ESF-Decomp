// Spawn__9CEyelaser @0xbc5c0 size=120
typedef struct st_4bc5c0_0 {
    char padding_0[12];
    struct st_4bc5c0_1 *field_c;
} st_4bc5c0_0;

typedef struct st_4bc5c0_2 {
    char padding_0[96];
    struct st_4bc5c0_0 *field_60;
    char padding_64[36];
    unsigned int field_88;
    char padding_8c[36];
    unsigned int field_b0;
    char padding_b4[12];
    unsigned int field_c0;
    unsigned int field_c4;
    unsigned int field_c8;
    unsigned int field_cc;
    char padding_d0[4];
    char field_d4;
} st_4bc5c0_2;

typedef struct st_4bc5c0_1 {
    unsigned int field_0;
} st_4bc5c0_1;

int Spawn__9CEyelaser(st_4bc5c0_2 *a0)
{
    a0->field_60->field_c(a0);
    a0->field_88 = 9;
    a0->field_c0 = 0;
    a0->field_b0 = 0xffffffff;
    a0->field_c4 = 0;
    a0->field_c8 = 0;
    a0->field_cc = 0;
    a0->field_d4 = 0;
    return CBasePlayerItem::FallInit(a0);
}

