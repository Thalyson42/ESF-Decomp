// EnemyIsInList__4CBotP11CBasePlayer @0x153960 size=44
typedef struct st_553960_0 {
    char padding_0[2888];
    unsigned int field_b48;
} st_553960_0;

char EnemyIsInList__4CBotP11CBasePlayer(st_553960_0 *a0, unsigned int i)
{
    int v0;  // eax

    v0 = 0;
    while ((&a0->field_b48)[2 * v0] != i)
    {
        v0 += 1;
        if (v0 > 3)
            return 0;
    }
    return 1;
}

