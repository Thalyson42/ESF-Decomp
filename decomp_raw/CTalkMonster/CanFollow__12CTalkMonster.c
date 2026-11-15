// CanFollow__12CTalkMonster @0x127390 size=158
typedef struct st_527390_0 {
    char padding_0[140];
    struct st_527390_1 *field_8c;
} st_527390_0;

typedef struct st_527390_3 {
    char padding_0[160];
    struct st_527390_1 *field_a0;
} st_527390_3;

typedef struct st_527390_1 {
    unsigned int field_0;
} st_527390_1;

typedef struct st_527390_2 {
    char padding_0[96];
    struct st_527390_0 *field_60;
    char padding_64[172];
    char field_110;
    char padding_111[111];
    unsigned int field_180;
    char padding_184[288];
    int field_2a4;
} st_527390_2;

typedef struct st_527390_4 {
    char padding_0[96];
    struct st_527390_3 *field_60;
} st_527390_4;

unsigned int CanFollow__12CTalkMonster(st_527390_2 *a0)
{
    unsigned int v0;  // edi
    unsigned int *v1;  // esi
    st_527390_4 *v2;  // edx

    if ((a0->field_180 != 6 || CCineMonster::CanInterrupt(a0->field_2a4)) && a0->field_60->field_8c(a0))
    {
        v0 = 0;
        v1 = &a0->field_110;
        if (EHANDLE::__opi(v1))
        {
            v2 = EHANDLE::__rf(v1);
            v0 = v2->field_60->field_a0(v2) != 0;
        }
        return v0 ^ 1;
    }
    return 0;
}

