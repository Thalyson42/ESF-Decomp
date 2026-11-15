// BotCanPowerUp__4CBot @0x13dbf0 size=158
typedef struct st_53dbf0_1 {
    char padding_0[140];
    struct st_53dbf0_2 *field_8c;
} st_53dbf0_1;

typedef struct st_53dbf0_3 {
    struct st_53dbf0_0 *field_0;
    char padding_4[92];
    struct st_53dbf0_1 *field_60;
    char padding_64[708];
    unsigned int field_328;
    char padding_32c[4];
    unsigned int field_330;
    unsigned int field_334;
    char padding_338[4];
    unsigned int field_33c;
    unsigned int field_340;
    char padding_344[32];
    unsigned int field_364;
    char padding_368[20];
    unsigned int field_37c;
    char padding_380[248];
    unsigned int field_478;
    char padding_47c[576];
    unsigned int field_6bc;
    char padding_6c0[176];
    unsigned int field_770;
} st_53dbf0_3;

typedef struct st_53dbf0_2 {
    unsigned int field_0;
} st_53dbf0_2;

typedef struct st_53dbf0_0 {
    char padding_0[423];
    char field_1a7;
} st_53dbf0_0;

char BotCanPowerUp__4CBot(st_53dbf0_3 *a0)
{
    if (!(a0->field_0->field_1a7 & 4) && !a0->field_364 && !a0->field_330 && !a0->field_334 && !a0->field_33c && a0->field_60->field_8c(a0) && !a0->field_328 && !a0->field_340 && !a0->field_770 && !a0->field_37c && !a0->field_478 && !a0->field_6bc)
        return 1;
    return 0;
}

