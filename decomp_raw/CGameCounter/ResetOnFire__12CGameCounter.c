// ResetOnFire__12CGameCounter @0xd1260 size=23
typedef struct st_4d1260_0 {
    char padding_0[416];
    unsigned int field_1a0;
} st_4d1260_0;

unsigned int ResetOnFire__12CGameCounter(st_4d1260_0 **a0)
{
    return *a0->field_1a0 >> 1 & 1;
}

