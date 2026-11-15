// CountValue__12CGameCounter @0xd12e0 size=49
typedef struct st_4d12e0_0 {
    char padding_0[356];
    float field_164;
} st_4d12e0_0;

int CountValue__12CGameCounter(st_4d12e0_0 **a0)
{
    int v0;  // [bp-0xc]

    __fnstcw();
    v0 = (int)*a0->field_164;
    return v0;
}

