// CallGoDown__9CFuncPlat @0xee4f0 size=44
typedef struct st_4ee4f0_0 {
    char padding_0[244];
    struct st_4ee4f0_1 *field_f4;
} st_4ee4f0_0;

typedef struct st_4ee4f0_1 {
    unsigned int field_0;
} st_4ee4f0_1;

typedef struct st_4ee4f0_2 {
    char padding_0[96];
    struct st_4ee4f0_0 *field_60;
} st_4ee4f0_2;

int CallGoDown__9CFuncPlat(st_4ee4f0_2 *a0)
{
    return a0->field_60->field_f4(a0);
}

