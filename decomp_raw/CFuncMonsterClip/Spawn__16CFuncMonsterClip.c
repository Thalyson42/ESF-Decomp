// Spawn__16CFuncMonsterClip @0x91670 size=100
typedef struct st_491670_1 {
    char padding_0[280];
    unsigned int field_118;
} st_491670_1;

typedef struct st_491670_0 {
    unsigned int field_0;
} st_491670_0;

extern st_491670_0 *g_engfuncs.pfnCVarGetFloat;

int Spawn__16CFuncMonsterClip(double a0, float a1)
{
    st_491670_1 *v1;  // eax

    CFuncWall::Spawn(a1);
    g_engfuncs.pfnCVarGetFloat("showtriggers");
    if (a0 == 0.0)
        *(unsigned int *)(*(int *)a1 + 280) = 128;
    v1 = *(int *)a1;
    v1[1].padding_0[138] = v1[1].padding_0[138] | 128;
    return v1;
}

