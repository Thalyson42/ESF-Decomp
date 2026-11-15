// RandomRotateThink__20CDestructoDiscAttack @0xaa110 size=95
typedef struct st_4aa110_0 {
    unsigned int field_0;
} st_4aa110_0;

extern st_4aa110_0 *g_616928;

int RandomRotateThink__20CDestructoDiscAttack(float a0)
{
    unsigned int v0;  // [bp-0x8]

    v0 = g_616928(0xffffff9c, 100) * 10;
    *(float *)(*(int *)a0 + 100) = (float)((double)(int)v0 * 0.6 + 0.4 * *(float *)(*(int *)a0 + 100));
    return sub_48ac10(a0);
}

