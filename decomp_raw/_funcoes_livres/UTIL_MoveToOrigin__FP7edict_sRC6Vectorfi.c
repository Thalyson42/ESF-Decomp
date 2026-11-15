// UTIL_MoveToOrigin__FP7edict_sRC6Vectorfi @0x131820 size=81
typedef struct st_531820_0 {
    unsigned int field_0;
} st_531820_0;

extern st_531820_0 *g_6167ec;

int UTIL_MoveToOrigin__FP7edict_sRC6Vectorfi(unsigned int a0, float *a1, float a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x38]
    float v2;  // [bp-0x24]
    float v3;  // [bp-0x20]
    float v4;  // [bp-0x1c]

    v2 = *a1;
    v3 = a1[1];
    v4 = a1[2];
    return g_6167ec(a0, &v2, a2, a3, v0, v1);
}

