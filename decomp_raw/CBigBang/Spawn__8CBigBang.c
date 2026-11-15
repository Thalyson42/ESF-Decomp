// Spawn__8CBigBang @0x90890 size=140
typedef struct st_490890_0 {
    char padding_0[12];
    struct st_490890_1 *field_c;
} st_490890_0;

typedef struct st_490890_2 {
    char padding_0[96];
    struct st_490890_0 *field_60;
    char padding_64[36];
    unsigned int field_88;
    char padding_8c[36];
    unsigned int field_b0;
    char padding_b4[12];
    unsigned int field_c0;
    char padding_c4[4];
    unsigned int field_c8;
    unsigned int field_cc;
    unsigned int field_d0;
    unsigned int field_d4;
    unsigned int field_d8;
} st_490890_2;

typedef struct st_490890_1 {
    unsigned int field_0;
} st_490890_1;

int Spawn__8CBigBang(st_490890_2 *a0)
{
    a0->field_60->field_c(a0);
    a0->field_88 = 13;
    a0->field_c0 = 0;
    a0->field_b0 = 0xffffffff;
    a0->field_c8 = 30;
    a0->field_d0 = 25;
    a0->field_cc = 0;
    a0->field_d4 = 1650944354;
    a0->field_d8 = 6778465;
    return sub_48cf50(a0);
}

