// Animate__7CSpritef @0xb3c20 size=138
typedef struct st_4b3c20_0 {
    char padding_0[304];
    float field_130;
    char padding_134[108];
    char field_1a0;
} st_4b3c20_0;

typedef struct st_4b3c20_1 {
    struct st_4b3c20_0 *field_0;
    char padding_4[100];
    float field_68;
} st_4b3c20_1;

unsigned int Animate__7CSpritef(st_4b3c20_1 *a0, float a1)
{
    unsigned int v1;  // eax
    double v0;  // [bp-0x34]

    a0->field_0->field_130 = a1 + a0->field_0->field_130;
    if (a0->field_0->field_130 <= a0->field_68)
    {
        return v1;
    }
    else if (a0->field_0->field_1a0 & 2)
    {
        v1 = sub_48df90(a0);
        return v1;
    }
    else
    {
        if (0.0 >= a0->field_68)
            return v1;
        v0 = fmodf(a0->field_0->field_130, a0->field_68);
        a0->field_0->field_130 = (float)v0;
        return v1;
    }
}

