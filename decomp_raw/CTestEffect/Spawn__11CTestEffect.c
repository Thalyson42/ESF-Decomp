// Spawn__11CTestEffect @0xb4dc0 size=41
typedef struct st_4b4dc0_0 {
    char padding_0[12];
    struct st_4b4dc0_1 *field_c;
} st_4b4dc0_0;

typedef struct st_4b4dc0_1 {
    unsigned int field_0;
} st_4b4dc0_1;

typedef struct st_4b4dc0_2 {
    char padding_0[96];
    struct st_4b4dc0_0 *field_60;
} st_4b4dc0_2;

int Spawn__11CTestEffect(st_4b4dc0_2 *a0)
{
    return a0->field_60->field_c(a0);
}

