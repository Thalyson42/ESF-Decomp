// AddShootDelay__4CBot @0x153780 size=84
typedef struct st_553780_1 {
    char padding_0[2560];
    struct st_553780_2 *field_a00;
    struct st_553780_0 *field_a04;
} st_553780_1;

typedef struct st_553780_2 {
    char padding_0[40];
    float field_28;
    float field_2c;
} st_553780_2;

typedef struct st_553780_0 {
    char padding_0[52];
    unsigned int field_34;
} st_553780_0;

typedef struct st_553780_3 {
    unsigned int field_0;
} st_553780_3;

extern st_553780_3 *g_61692c;

int AddShootDelay__4CBot(double a0, st_553780_1 *a1)
{
    g_61692c(a1->field_a00->field_28, a1->field_a00->field_2c);
    return a1->field_a04->field_34;
}

