// SetBodygroup__FPvP9entvars_sii @0x8fa10 size=108
typedef struct st_48fa10_0 {
    char padding_0[204];
    int field_cc;
    unsigned int field_d0;
    char padding_d4[64];
    unsigned int field_114;
} st_48fa10_0;

typedef struct st_48fa10_1 {
    char padding_0[64];
    unsigned int field_40;
    int field_44;
} st_48fa10_1;

st_48fa10_0 * SetBodygroup__FPvP9entvars_sii(st_48fa10_0 *a0, st_48fa10_0 *a1, int a2, unsigned int a3)
{
    st_48fa10_0 *v2;  // eax
    st_48fa10_1 *v3;  // ecx
    unsigned int v4;  // eax
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v2 = a0;
    if (v2 && a2 <= v2->field_cc)
    {
        v3 = &v2->padding_0[v2->field_d0 + 76 * a2];
        if ((int)a3 < (int)v3->field_40)
        {
            v0 = a1->field_114;
            v4 = a1->field_114 / v3->field_44;
            v1 = v4;
            v2 = a1;
            v2->field_114 = v0 - v3->field_44 * v4 % v3->field_40 + v3->field_44 * a3;
        }
    }
    return v2;
}

