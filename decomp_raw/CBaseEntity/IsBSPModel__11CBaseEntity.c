// IsBSPModel__11CBaseEntity @0x9de40 size=39
typedef struct st_49de40_0 {
    char padding_0[264];
    unsigned int field_108;
    unsigned int field_10c;
} st_49de40_0;

unsigned int IsBSPModel__11CBaseEntity(st_49de40_0 **a0)
{
    if (*a0->field_10c != 4 && *a0->field_108 != 13)
        return 0;
    return 1;
}

