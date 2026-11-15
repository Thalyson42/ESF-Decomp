// UTIL_BloodDrips__FRC6VectorT0ii @0x133670 size=396
typedef struct st_533670_0 {
    char padding_0[24];
    struct st_533670_1 *field_18;
} st_533670_0;

typedef struct st_533670_1 {
    unsigned int field_0;
} st_533670_1;

typedef struct st_533670_2 {
    char padding_0[68];
    struct st_533670_0 *field_44;
} st_533670_2;

extern st_533670_2 *g_pGameRules;
extern unsigned int g_Language;
extern st_533670_1 *g_616878;
extern st_533670_1 *g_61687c;
extern st_533670_1 *g_616880;
extern st_533670_1 *g_616888;
extern st_533670_1 *g_616894;
extern short g_sModelIndexBloodDrop;
extern short g_sModelIndexBloodSpray;

unsigned int UTIL_BloodDrips__FRC6VectorT0ii(float *a0, unsigned int a1, int a2, unsigned int a3)
{
    unsigned int v0;  // edi
    unsigned int v1;  // eax
    int v2;  // eax

    v0 = a3;
    v1 = sub_48a6d0(a2);
    if (!v1)
    {
        return v1;
    }
    else if (a2 == -0x1)
    {
        return v1;
    }
    else if (v0)
    {
        if (g_Language == 1 && a2 == 247)
            a2 = 0;
        if (g_pGameRules->field_44->field_18(g_pGameRules))
            v0 *= 2;
        if ((int)v0 > 0xff)
            v0 = 0xff;
        g_616878(4, 23, a0, 0);
        g_616880(115);
        g_616894(*a0);
        g_616894(a0[1]);
        g_616894(a0[2]);
        g_616888(g_sModelIndexBloodSpray);
        g_616888(g_sModelIndexBloodDrop);
        g_616880(a2);
        v2 = v0 / 10;
        if (v2 < 3)
            v2 = 3;
        if (v2 > 16)
            v2 = 16;
        g_616880(v2);
        return g_61687c(v2);
    }
    else
    {
        return v1;
    }
}

