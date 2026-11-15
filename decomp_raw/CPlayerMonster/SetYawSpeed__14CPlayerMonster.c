// SetYawSpeed__14CPlayerMonster @0x10ca10 size=46
typedef struct st_50ca10_0 {
    char padding_0[176];
    unsigned int field_b0;
} st_50ca10_0;

typedef struct st_50ca10_1 {
    char padding_0[176];
    float field_b0;
} st_50ca10_1;

st_50ca10_0 * SetYawSpeed__14CPlayerMonster(st_50ca10_1 **a0)
{
    st_50ca10_1 *v1;  // eax
    int v0;  // [bp-0x8]

    v1 = *a0;
    v0 = 90;
    v1->field_b0 = (float)v0;
    return v1;
}

