// Holster__14CDestructoDisci @0xaa330 size=78
typedef struct st_4aa330_1 {
    unsigned int field_0;
} st_4aa330_1;

typedef struct st_4aa330_3 {
    char padding_0[468];
    struct st_4aa330_2 *field_1d4;
} st_4aa330_3;

typedef struct st_4aa330_0 {
    char padding_0[508];
    struct st_4aa330_1 *field_1fc;
} st_4aa330_0;

typedef struct st_4aa330_2 {
    char padding_0[96];
    struct st_4aa330_0 *field_60;
} st_4aa330_2;

int Holster__14CDestructoDisci(st_4aa330_3 *a0, int a1)
{
    if (a0->field_1d4)
        a0->field_1d4->field_60->field_1fc(a0->field_1d4);
    return CChargedAttack::Holster(a0, a1);
}

