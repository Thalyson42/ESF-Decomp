// Points__10CGameScore @0xd1060 size=49
typedef struct st_4d1060_0 {
    char padding_0[356];
    float field_164;
} st_4d1060_0;

int Points__10CGameScore(st_4d1060_0 **a0)
{
    int v0;  // [bp-0xc]

    __fnstcw();
    v0 = (int)*a0->field_164;
    return v0;
}

