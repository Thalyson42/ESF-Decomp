// Spawn__8CKiBlast @0xcc990 size=93
typedef struct st_4cc990_0 {
    char padding_0[12];
    struct st_4cc990_1 *field_c;
} st_4cc990_0;

typedef struct st_4cc990_2 {
    char padding_0[96];
    struct st_4cc990_0 *field_60;
    char padding_64[36];
    unsigned int field_88;
    char padding_8c[36];
    unsigned int field_b0;
    char padding_b4[12];
    unsigned int field_c0;
    unsigned int field_c4;
} st_4cc990_2;

typedef struct st_4cc990_1 {
    unsigned int field_0;
} st_4cc990_1;

int Spawn__8CKiBlast(st_4cc990_2 *a0)
{
    a0->field_60->field_c(a0);
    a0->field_88 = 3;
    a0->field_c0 = 0;
    a0->field_b0 = 0xffffffff;
    a0->field_c4 = 0;
    return CBasePlayerItem::FallInit(a0);
}

