// Spawn__5CBeam @0xaf9b0 size=53
typedef struct st_4af9b0_1 {
    char padding_0[12];
    struct st_4af9b0_2 *field_c;
} st_4af9b0_1;

typedef struct st_4af9b0_0 {
    char padding_0[268];
    unsigned int field_10c;
} st_4af9b0_0;

typedef struct st_4af9b0_2 {
    unsigned int field_0;
} st_4af9b0_2;

typedef struct st_4af9b0_3 {
    struct st_4af9b0_0 *field_0;
    char padding_4[92];
    struct st_4af9b0_1 *field_60;
} st_4af9b0_3;

int Spawn__5CBeam(st_4af9b0_3 *a0)
{
    a0->field_0->field_10c = 0;
    return a0->field_60->field_c(a0);
}

