// HitLimit__12CGameCounter @0xd1360 size=93
typedef struct st_4d1360_0 {
    char padding_0[352];
    float field_160;
    float field_164;
} st_4d1360_0;

int HitLimit__12CGameCounter(st_4d1360_0 **a0)
{
    int v0;  // [bp-0x24]
    int v1;  // [bp-0x24]

    __fnstcw();
    v0 = (int)*a0->field_164;
    __fnstcw();
    v1 = (int)*a0->field_160;
    return v0 == v1;
}

