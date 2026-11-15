// TurnAround__4CBot @0x170820 size=123
typedef struct st_570820_1 {
    char padding_0[116];
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
} st_570820_1;

typedef struct st_570820_0 {
    struct st_570820_1 *field_0;
    char padding_4[3084];
    unsigned int field_c10;
    unsigned int field_c14;
    unsigned int field_c18;
} st_570820_0;

int TurnAround__4CBot(double a0, st_570820_0 *a1)
{
    unsigned int *v6;  // edx
    double v7;  // mm7
    unsigned int v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    unsigned int v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]

    v6 = &a1->field_0->field_74;
    *(float *)&v3 = *(float *)&a1->field_0->field_74;
    *(float *)&v4 = *(float *)&v6[1];
    *(float *)&v5 = *(float *)&v6[2];
    v7 = *(float *)&v4 + 180.0;
    UTIL_WrapAngle((float)v7);
    v0 = v3;
    v1 = (float)v7;
    v2 = v5;
    a1->field_c10 = v0;
    *(float *)&a1->field_c14 = v1;
    a1->field_c18 = v2;
    return v2;
}

