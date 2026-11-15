// ItemPreFrame__11CBasePlayer @0xfd280 size=85
typedef struct st_4fd280_4 {
    char padding_0[612];
    unsigned int field_264;
    char padding_268[1792];
    struct st_4fd280_3 *field_968;
} st_4fd280_4;

typedef struct st_4fd280_1 {
    char padding_0[268];
    struct st_4fd280_2 *field_10c;
} st_4fd280_1;

typedef struct st_4fd280_2 {
    unsigned int field_0;
} st_4fd280_2;

typedef struct st_4fd280_3 {
    char padding_0[96];
    struct st_4fd280_1 *field_60;
} st_4fd280_3;


unsigned int ItemPreFrame__11CBasePlayer(st_4fd280_4 *a0)
{
    return a0->field_968->field_60->field_10c(a0->field_968);
}

