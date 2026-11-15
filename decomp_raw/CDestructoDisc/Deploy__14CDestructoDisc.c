// Deploy__14CDestructoDisc @0xaa300 size=48
typedef struct st_4aa300_0 {
    char padding_0[468];
    unsigned int field_1d4;
} st_4aa300_0;

int Deploy__14CDestructoDisc(st_4aa300_0 *a0)
{
    a0->field_1d4 = 0;
    return CChargedAttack::Deploy(a0);
}

