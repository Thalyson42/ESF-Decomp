// TakeDamage__5CAuraP9entvars_sT1fi @0x8ff90 size=73
typedef struct st_48ff90_1 {
    unsigned int field_0;
} st_48ff90_1;

typedef struct st_48ff90_0 {
    char padding_0[52];
    struct st_48ff90_1 *field_34;
} st_48ff90_0;

typedef struct st_48ff90_3 {
    char padding_0[680];
    struct st_48ff90_2 *field_2a8;
} st_48ff90_3;

typedef struct st_48ff90_2 {
    char padding_0[96];
    struct st_48ff90_0 *field_60;
} st_48ff90_2;

int TakeDamage__5CAuraP9entvars_sT1fi(st_48ff90_3 *a0, unsigned int a1, unsigned int a2, float a3, unsigned int a4)
{
    return a0->field_2a8->field_60->field_34(a0->field_2a8, a1, a2, a3, a4);
}

