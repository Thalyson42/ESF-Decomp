// CanPlaySentence__12CBaseMonsteri @0xda800 size=44
typedef struct st_4da800_0 {
    char padding_0[140];
    struct st_4da800_1 *field_8c;
} st_4da800_0;

typedef struct st_4da800_1 {
    unsigned int field_0;
} st_4da800_1;

typedef struct st_4da800_2 {
    char padding_0[96];
    struct st_4da800_0 *field_60;
} st_4da800_2;

int CanPlaySentence__12CBaseMonsteri(st_4da800_2 *a0)
{
    return a0->field_60->field_8c(a0);
}

