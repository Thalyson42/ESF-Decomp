// PointInFront__6CPlaneRC6Vector @0xe7f10 size=73
typedef struct st_4e7f10_0 {
    float field_0;
    float field_4;
    float field_8;
    float field_c;
    unsigned int field_10;
} st_4e7f10_0;

unsigned int PointInFront__6CPlaneRC6Vector(st_4e7f10_0 *a0, float *a1)
{
    if (a0->field_10 && 0.0 <= a0->field_0 * *a1 + a0->field_4 * a1[1] + a0->field_8 * a1[2] - a0->field_c)
        return 1;
    return 0;
}

