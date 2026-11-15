// CallHitTop__9CFuncPlat @0xee520 size=44
typedef struct st_4ee520_0 {
    char padding_0[248];
    struct st_4ee520_1 *field_f8;
} st_4ee520_0;

typedef struct st_4ee520_1 {
    unsigned int field_0;
} st_4ee520_1;

typedef struct st_4ee520_2 {
    char padding_0[96];
    struct st_4ee520_0 *field_60;
} st_4ee520_2;

int CallHitTop__9CFuncPlat(st_4ee520_2 *a0)
{
    return a0->field_60->field_f8(a0);
}

