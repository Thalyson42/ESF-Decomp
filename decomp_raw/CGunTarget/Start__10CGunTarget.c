// Start__10CGunTarget @0xee040 size=50
typedef struct st_4ee040_0 {
    char padding_0[184];
    struct st_4ee040_1 *field_b8;
} st_4ee040_0;

typedef struct st_4ee040_1 {
    unsigned int field_0;
} st_4ee040_1;

typedef struct st_4ee040_2 {
    char padding_0[96];
    struct st_4ee040_0 *field_60;
} st_4ee040_2;

int Start__10CGunTarget(st_4ee040_2 *a0)
{
    return a0->field_60->field_b8(a0, a0, a0, 1, 0);
}

