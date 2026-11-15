// Spawn__16CRulePointEntity @0xcefa0 size=65
typedef struct st_4cefa0_0 {
    char padding_0[184];
    unsigned int field_b8;
    char padding_bc[116];
    unsigned int field_130;
} st_4cefa0_0;

unsigned int * Spawn__16CRulePointEntity(st_4cefa0_0 **a0)
{
    unsigned int *v0;  // eax

    sub_487ec0(a0);
    *a0->field_130 = 0;
    v0 = *a0;
    v0[46] = 0;
    return v0;
}

