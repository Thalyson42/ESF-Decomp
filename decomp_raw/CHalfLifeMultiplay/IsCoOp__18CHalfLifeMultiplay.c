// IsCoOp__18CHalfLifeMultiplay @0xdbc40 size=63
typedef struct st_4dbc40_0 {
    char padding_0[24];
    float field_18;
} st_4dbc40_0;

extern st_4dbc40_0 *gpGlobals;

int IsCoOp__18CHalfLifeMultiplay(void)
{
    int v0;  // [bp-0xc]

    __fnstcw();
    v0 = (int)gpGlobals->field_18;
    return v0;
}

