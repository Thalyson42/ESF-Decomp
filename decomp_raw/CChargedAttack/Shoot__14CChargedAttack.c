// Shoot__14CChargedAttack @0x9ec60 size=202
typedef struct st_49ec60_3 {
    char padding_0[820];
    unsigned int field_334;
    char padding_338[1052];
    unsigned int field_754;
} st_49ec60_3;

typedef struct st_49ec60_2 {
    char padding_0[96];
    struct st_49ec60_0 *field_60;
    char padding_64[28];
    struct st_49ec60_3 *field_80;
    char padding_84[64];
    int field_c4;
    int field_c8;
} st_49ec60_2;

typedef struct st_49ec60_0 {
    char padding_0[356];
    struct st_49ec60_1 *field_164;
    char padding_168[8];
    struct st_49ec60_1 *field_170;
    char padding_174[8];
    struct st_49ec60_1 *field_17c;
} st_49ec60_0;

typedef struct st_49ec60_1 {
    unsigned int field_0;
} st_49ec60_1;

int Shoot__14CChargedAttack(st_49ec60_2 *a0)
{
    a0->field_80->field_754 = 0x3f800000;
    a0->field_80->field_334 = 0;
    sub_48c680(a0->field_80, 0);
    if (a0->field_c4 > a0->field_c8 / 3)
    {
        sub_48d680(a0->field_80, 5);
        a0->field_60->field_164(a0);
        a0->field_60->field_17c(a0);
        return a0->field_60->field_170(a0);
    }
    sub_48de80(a0);
    return sub_488840(a0);
}

