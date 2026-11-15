// Spawn__12CAutoTrigger @0x12aca0 size=41
typedef struct st_52aca0_0 {
    char padding_0[12];
    struct st_52aca0_1 *field_c;
} st_52aca0_0;

typedef struct st_52aca0_1 {
    unsigned int field_0;
} st_52aca0_1;

typedef struct st_52aca0_2 {
    char padding_0[96];
    struct st_52aca0_0 *field_60;
} st_52aca0_2;

int Spawn__12CAutoTrigger(st_52aca0_2 *a0)
{
    return a0->field_60->field_c(a0);
}

