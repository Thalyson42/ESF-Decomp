// Animate__5CGlowf @0xb3640 size=81
typedef struct st_4b3640_2 {
    char padding_0[304];
    unsigned int field_130;
} st_4b3640_2;

typedef struct st_4b3640_0 {
    char padding_0[304];
    float field_130;
} st_4b3640_0;

typedef struct st_4b3640_1 {
    struct st_4b3640_0 *field_0;
    char padding_4[100];
    float field_68;
} st_4b3640_1;

st_4b3640_2 * Animate__5CGlowf(st_4b3640_1 *a0, float a1)
{
    unsigned int v1;  // eax
    st_4b3640_2 *v2;  // eax
    st_4b3640_0 *v3;  // eax
    double v0;  // [bp-0x34]

    *(char *)&v1 = 0;
    v2 = _INSERT(v1, 1, (isnan(a0->field_68) ? 69 : 0.0 == a0->field_68 ? 64 : 0.0 < a0->field_68));
    if (0.0 >= a0->field_68)
        return v2;
    v0 = fmodf(a1 + a0->field_0->field_130, a0->field_68);
    v3 = a0->field_0;
    v3->field_130 = (float)v0;
    return v3;
}

