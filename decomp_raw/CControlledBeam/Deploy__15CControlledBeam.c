// Deploy__15CControlledBeam @0xa7450 size=93
typedef struct st_4a7450_0 {
    char padding_0[364];
    struct st_4a7450_1 *field_16c;
} st_4a7450_0;

typedef struct st_4a7450_1 {
    unsigned int field_0;
} st_4a7450_1;

typedef struct st_4a7450_2 {
    char padding_0[96];
    struct st_4a7450_0 *field_60;
    char padding_64[96];
    unsigned int field_c4;
    char padding_c8[44];
    char field_f4;
    char padding_f5[271];
    unsigned int field_204;
    unsigned int field_208;
} st_4a7450_2;

int Deploy__15CControlledBeam(st_4a7450_2 *a0)
{
    a0->field_60->field_16c(a0);
    a0->field_208 = 0;
    a0->field_204 = 0;
    a0->field_c4 = 0;
    return sub_489360(a0, &a0->field_f4);
}

