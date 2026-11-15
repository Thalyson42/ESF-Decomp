// GetSkillCvar__FPc @0x11a1a0 size=120
typedef struct st_51a1a0_0 {
    unsigned int field_0;
} st_51a1a0_0;

extern st_51a1a0_0 *g_6168a4;
extern st_51a1a0_0 *g_6168b4;
extern int gSkillData;

double GetSkillCvar__FPc(double a0, float a1)
{
    double v5;  // mm7
    int v0;  // [bp-0x5c]
    int v1;  // [bp-0x58]
    int v2;  // [bp-0x54]
    char v3;  // [bp-0x44]

    sub_48d990(&v3, "%s%d", a1, gSkillData, v0, v1, v2);
    g_6168a4(&v3);
    if (0.0 >= (float)v5)
        g_6168b4(1, "\n\n** GetSkillCVar Got a zero for %s **\n\n", &v3);
    return a0;
}

