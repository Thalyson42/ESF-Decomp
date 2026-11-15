// Holster__14CChargedAttacki @0x9eba0 size=181
typedef struct st_49eba0_2 {
    char padding_0[96];
    struct st_49eba0_0 *field_60;
    char padding_64[28];
    struct st_49eba0_3 *field_80;
} st_49eba0_2;

typedef struct st_49eba0_3 {
    char padding_0[820];
    unsigned int field_334;
    char padding_338[1052];
    unsigned int field_754;
} st_49eba0_3;

typedef struct st_49eba0_0 {
    char padding_0[368];
    struct st_49eba0_1 *field_170;
    char padding_174[4];
    struct st_49eba0_1 *field_178;
} st_49eba0_0;

typedef struct st_49eba0_1 {
    unsigned int field_0;
} st_49eba0_1;

int Holster__14CChargedAttacki(st_49eba0_2 *a0)
{
    if (a0->field_80->field_334)
    {
        a0->field_80->field_754 = 0x3f800000;
        a0->field_80->field_334 = 0;
        sub_48c680(a0->field_80, 0);
        a0->field_60->field_170(a0);
        sub_48de80(a0);
        sub_488840(a0);
    }
    sub_488e80(a0->field_80, 5);
    sub_488e80(a0->field_80, 6);
    return a0->field_60->field_178(a0);
}

