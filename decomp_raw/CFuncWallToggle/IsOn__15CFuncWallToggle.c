// IsOn__15CFuncWallToggle @0x911c0 size=30
typedef struct st_4911c0_0 {
    char padding_0[268];
    unsigned int field_10c;
} st_4911c0_0;

unsigned int IsOn__15CFuncWallToggle(st_4911c0_0 **a0)
{
    return (!*a0->field_10c ? 0 : 1);
}

