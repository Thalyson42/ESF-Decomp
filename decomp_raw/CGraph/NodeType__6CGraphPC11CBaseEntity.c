// NodeType__6CGraphPC11CBaseEntity @0xdf7b0 size=49
typedef struct st_4df7b0_0 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[180];
    unsigned int field_1c0;
} st_4df7b0_0;

unsigned int NodeType__6CGraphPC11CBaseEntity(unsigned int a0, st_4df7b0_0 **a1)
{
    return (*a1->field_108 == 5 ? (!*a1->field_1c0 ? 2 : 4) : 1);
}

