// Vaporize__11CDiscAttack @0xaa9f0 size=65
typedef struct st_4aa9f0_1 {
    unsigned int field_0;
} st_4aa9f0_1;

typedef struct st_4aa9f0_0 {
    char padding_0[508];
    struct st_4aa9f0_1 *field_1fc;
} st_4aa9f0_0;

typedef struct st_4aa9f0_2 {
    char padding_0[96];
    struct st_4aa9f0_0 *field_60;
    char padding_64[584];
    unsigned int field_2ac;
    unsigned int field_2b0;
} st_4aa9f0_2;

int Vaporize__11CDiscAttack(st_4aa9f0_2 *a0)
{
    unsigned int v0;  // eax

    if (!a0->field_2ac)
    {
        a0->field_2b0 = 1;
        return v0;
    }
    return a0->field_60->field_1fc(a0);
}

