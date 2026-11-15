// SetYawSpeed__15CGenericMonster @0xc6400 size=46
typedef struct st_4c6400_0 {
    char padding_0[176];
    unsigned int field_b0;
} st_4c6400_0;

typedef struct st_4c6400_1 {
    char padding_0[176];
    float field_b0;
} st_4c6400_1;

st_4c6400_0 * SetYawSpeed__15CGenericMonster(st_4c6400_1 **a0)
{
    st_4c6400_1 *v1;  // eax
    int v0;  // [bp-0x8]

    v1 = *a0;
    v0 = 90;
    v1->field_b0 = (float)v0;
    return v1;
}

