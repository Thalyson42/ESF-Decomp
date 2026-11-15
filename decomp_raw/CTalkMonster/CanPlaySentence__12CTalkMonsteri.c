// CanPlaySentence__12CTalkMonsteri @0x126170 size=61
typedef struct st_526170_0 {
    char padding_0[140];
    struct st_526170_1 *field_8c;
} st_526170_0;

typedef struct st_526170_1 {
    unsigned int field_0;
} st_526170_1;

typedef struct st_526170_2 {
    char padding_0[96];
    struct st_526170_0 *field_60;
} st_526170_2;

unsigned int CanPlaySentence__12CTalkMonsteri(st_526170_2 *a0, unsigned int a1)
{
    return (!a1 ? sub_48a4a0(a0) : a0->field_60->field_8c(a0));
}

