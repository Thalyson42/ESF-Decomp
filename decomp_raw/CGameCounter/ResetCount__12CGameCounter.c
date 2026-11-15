// ResetCount__12CGameCounter @0xd12c0 size=24
typedef struct st_4d12c0_0 {
    char padding_0[356];
    unsigned int field_164;
    char padding_168[120];
    unsigned int field_1e0;
} st_4d12c0_0;

unsigned int * ResetCount__12CGameCounter(st_4d12c0_0 **a0)
{
    unsigned int *v0;  // eax

    v0 = *a0;
    *(float *)&v0[89] = *(float *)&v0[120];
    return v0;
}

