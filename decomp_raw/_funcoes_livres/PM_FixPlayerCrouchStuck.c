// PM_FixPlayerCrouchStuck @0x191e50 size=176
typedef struct st_591e50_2 {
    char padding_0[56];
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    char padding_44[324888];
    struct st_591e50_1 *field_4f55c;
} st_591e50_2;

typedef struct st_591e50_1 {
    unsigned int field_0;
} st_591e50_1;

typedef struct st_591e50_0 {
    char padding_0[56];
    float field_38;
    float field_3c;
    float field_40;
    char padding_44[324888];
    struct st_591e50_1 *field_4f55c;
} st_591e50_0;

extern st_591e50_0 *pmove;

st_591e50_2 * PM_FixPlayerCrouchStuck(int a0)
{
    st_591e50_2 *v3;  // eax
    int v4;  // esi
    st_591e50_2 *v5;  // eax
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    v3 = pmove->field_4f55c(&pmove->field_38, 0);
    if (v3 == 0xffffffff)
        return v3;
    v0 = pmove->field_38;
    v1 = pmove->field_3c;
    v2 = pmove->field_40;
    v4 = 0;
    while (1)
    {
        pmove->field_40 = (float)((double)a0 + pmove->field_40);
        v5 = pmove->field_4f55c(&pmove->field_38, 0);
        if (v5 == 0xffffffff)
            return v5;
        v4 += 1;
        if (v4 > 35)
        {
            pmove->field_38 = v0;
            pmove->field_3c = v1;
            pmove->field_40 = v2;
            return pmove;
        }
    }
}

