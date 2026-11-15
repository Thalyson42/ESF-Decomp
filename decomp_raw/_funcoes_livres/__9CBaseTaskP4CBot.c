// __9CBaseTaskP4CBot @0x182370 size=85
typedef struct st_582370_2 {
    char padding_0[4];
    unsigned int field_4;
    struct st_582370_1 *field_8;
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
} st_582370_2;

typedef struct st_582370_1 {
    struct st_582370_0 *field_0;
    char padding_4[2920];
    unsigned int field_b6c;
} st_582370_1;

typedef struct st_582370_0 {
    char padding_0[520];
    unsigned int field_208;
} st_582370_0;

extern char __vt_9CBaseTask;

st_582370_2 * __9CBaseTaskP4CBot(st_582370_2 *a0, st_582370_1 *a1)
{
    a0->field_14 = &__vt_9CBaseTask;
    a0->field_8 = a1;
    a0->field_c = a1->field_0->field_208;
    a0->field_10 = a1->field_b6c;
    a0->field_4 = 1;
    sub_48d850(a0);
    return a0;
}

