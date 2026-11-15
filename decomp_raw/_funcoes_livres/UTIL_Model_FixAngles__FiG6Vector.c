// UTIL_Model_FixAngles__FiG6Vector @0x134a90 size=173
typedef struct st_534a90_0 {
    unsigned int field_0;
} st_534a90_0;

extern unsigned int gmsgManipModel;
extern st_534a90_0 *g_616878;
extern st_534a90_0 *g_61687c;
extern st_534a90_0 *g_616880;
extern st_534a90_0 *g_616888;
extern st_534a90_0 *g_616894;

int UTIL_Model_FixAngles__FiG6Vector(unsigned int a0, float *a1)
{
    float v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]

    g_616878(2, gmsgManipModel, 0, 0, v1, v2, v3);
    g_616880(3);
    g_616888(a0);
    g_616894(*a1);
    g_616894(a1[1]);
    v0 = a1[2];
    g_616894(v0);
    return g_61687c(v0);
}

