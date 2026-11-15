// WritePositionVector__5CSavePCcRC6Vector @0x135890 size=124
typedef struct st_535890_0 {
    char padding_0[1324];
    unsigned int field_52c;
    char padding_530[20];
    float field_544;
    float field_548;
    float field_54c;
} st_535890_0;

int WritePositionVector__5CSavePCcRC6Vector(st_535890_0 **a0, int a1, float *a2)
{
    st_535890_0 *v3;  // eax
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    if (*a0)
    {
        v3 = *a0;
        if (v3->field_52c)
        {
            v0 = *a2 - v3->field_544;
            v1 = a2[1] - v3->field_548;
            v2 = a2[2] - v3->field_54c;
            sub_4881a0(a0, a1, &v0);
        }
    }
    return sub_4881a0(a0, a1, a2);
}

