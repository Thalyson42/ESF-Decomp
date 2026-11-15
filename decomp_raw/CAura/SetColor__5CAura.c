// SetColor__5CAura @0x8fcf0 size=113
typedef struct st_48fcf0_4 {
    char padding_0[1892];
    struct st_48fcf0_3 *field_764;
} st_48fcf0_4;

typedef struct st_48fcf0_0 {
    char padding_0[272];
    unsigned int field_110;
    char padding_114[60];
    float field_150;
    float field_154;
    float field_158;
} st_48fcf0_0;

typedef struct st_48fcf0_2 {
    unsigned int field_0;
} st_48fcf0_2;

typedef struct st_48fcf0_1 {
    char padding_0[56];
    struct st_48fcf0_2 *field_38;
} st_48fcf0_1;

typedef struct st_48fcf0_5 {
    struct st_48fcf0_0 *field_0;
    char padding_4[676];
    struct st_48fcf0_4 *field_2a8;
} st_48fcf0_5;

typedef struct st_48fcf0_3 {
    char padding_0[4];
    struct st_48fcf0_1 *field_4;
} st_48fcf0_3;

float SetColor__5CAura(st_48fcf0_5 *a0)
{
    unsigned int v3;  // eax
    st_48fcf0_0 *v4;  // edx
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    v3 = a0->field_2a8->field_764->field_4->field_38(a0->field_2a8->field_764);
    a0->field_0->field_110 = v3;
    v4 = a0->field_0;
    v0 = 5.0f;
    v1 = 5.0f;
    v2 = 5.0f;
    v4->field_150 = v0;
    v4->field_154 = v1;
    v4->field_158 = v2;
    return v2;
}

