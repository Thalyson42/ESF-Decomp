// LimitValue__12CGameCounter @0xd1320 size=49
typedef struct st_4d1320_0 {
    char padding_0[352];
    float field_160;
} st_4d1320_0;

int LimitValue__12CGameCounter(st_4d1320_0 **a0)
{
    int v0;  // [bp-0xc]

    __fnstcw();
    v0 = (int)*a0->field_160;
    return v0;
}

