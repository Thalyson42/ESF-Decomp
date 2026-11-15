// IsAvoidDangerSwoop__10CSwoopTask @0x159c40 size=23
typedef struct st_559c40_0 {
    char padding_0[1284];
    unsigned int field_504;
} st_559c40_0;

typedef struct st_559c40_1 {
    char padding_0[8];
    struct st_559c40_0 *field_8;
} st_559c40_1;

int IsAvoidDangerSwoop__10CSwoopTask(st_559c40_1 *a0)
{
    return _INSERT(a0->field_8, 0, a0->field_8->field_504 != 4);
}

