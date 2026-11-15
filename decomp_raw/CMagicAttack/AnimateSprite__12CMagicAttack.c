// AnimateSprite__12CMagicAttack @0xcebf0 size=112
typedef struct st_4cebf0_0 {
    char padding_0[180];
    unsigned int field_b4;
    char padding_b8[120];
    float field_130;
} st_4cebf0_0;

typedef struct st_4cebf0_1 {
    unsigned int field_0;
} st_4cebf0_1;

extern st_4cebf0_1 *g_6167d0;

int AnimateSprite__12CMagicAttack(st_4cebf0_0 **a0)
{
    int v1;  // edx
    st_4cebf0_0 *v2;  // eax
    unsigned int v3;  // eax
    int v0;  // [bp-0x8]

    v1 = g_6167d0(*a0->field_b4) - 1;
    if (v1 <= 0)
        return v3;
    v2 = *a0;
    v2->field_130 = (float)(1.0 + v2->field_130);
    v0 = v1;
    v3 = _INSERT(v2, 0, 0);
    if ((double)v0 >= *a0->field_130)
        return v3;
    *a0->field_130 = 0;
    return v3;
}

