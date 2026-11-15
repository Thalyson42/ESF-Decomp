// Smoke__13CEnvExplosion @0xba620 size=255
typedef struct st_4ba620_0 {
    unsigned int field_0;
} st_4ba620_0;

extern st_4ba620_0 *g_616878;
extern st_4ba620_0 *g_61687c;
extern st_4ba620_0 *g_616880;
extern st_4ba620_0 *g_616888;
extern st_4ba620_0 *g_616894;
extern short g_sModelIndexSmoke;

int Smoke__13CEnvExplosion(float a0)
{
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0x2c]

    if (!(*(char *)(*(int *)a0 + 416) & 8))
    {
        g_616878(5, 23, *(int *)a0 + 8, 0);
        g_616880(5);
        g_616894(*(float *)(*(int *)a0 + 8));
        g_616894(*(float *)(*(int *)a0 + 12));
        g_616894(*(float *)(*(int *)a0 + 16));
        g_616888(g_sModelIndexSmoke);
        g_616880(*(char *)(*(unsigned int *)&a0 + 684));
        v0 = 12;
        g_616880(v0);
        g_61687c(v0);
    }
    v2 = *(int *)a0;
    if (!(*(char *)(*(int *)a0 + 416) & 2))
        v2 = sub_48cc00(a0);
    return v2;
}

