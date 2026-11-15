// SetDamage__12CMagicAttacki @0xcecf0 size=43
typedef struct st_4cecf0_1 {
    char padding_0[480];
    float field_1e0;
} st_4cecf0_1;

typedef struct st_4cecf0_0 {
    char padding_0[480];
    unsigned int field_1e0;
} st_4cecf0_0;

st_4cecf0_0 * SetDamage__12CMagicAttacki(st_4cecf0_1 **a0, int a1)
{
    st_4cecf0_1 *v1;  // eax
    int v0;  // [bp-0x8]

    v1 = *a0;
    if (a1 > 9999)
        a1 = 9999;
    v0 = a1;
    v1->field_1e0 = (float)v0;
    return v1;
}

