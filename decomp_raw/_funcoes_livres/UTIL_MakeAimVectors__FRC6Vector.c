// UTIL_MakeAimVectors__FRC6Vector @0x131e70 size=66
typedef struct st_531e70_0 {
    unsigned int field_0;
} st_531e70_0;

extern st_531e70_0 *g_61680c;

int UTIL_MakeAimVectors__FRC6Vector(float *a0)
{
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    v1 = a0[1];
    v2 = a0[2];
    v0 = -*a0;
    return g_61680c(&v0);
}

