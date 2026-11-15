// CanFireForActivator__11CRuleEntityP11CBaseEntity @0xcef60 size=64
typedef struct st_4cef60_0 {
    char padding_0[100];
    int field_64;
} st_4cef60_0;

unsigned int CanFireForActivator__11CRuleEntityP11CBaseEntity(st_4cef60_0 *a0, int a1)
{
    if (a0->field_64 && !sub_488a80(a0->field_64, a1))
        return 0;
    return 1;
}

