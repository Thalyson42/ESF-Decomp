// MaterialSoundPrecache__10CBreakable9Materials @0xc1df0 size=93
typedef struct st_4c1df0_0 {
    unsigned int field_0;
} st_4c1df0_0;

extern st_4c1df0_0 *g_6167c4;

unsigned int * MaterialSoundPrecache__10CBreakable9Materials(int a0)
{
    unsigned int *v1;  // eax
    unsigned int i;  // esi
    unsigned int *v3;  // eax
    unsigned int v0;  // [bp-0x8]

    v0 = 0;
    v1 = sub_48aa40(a0, &v0);
    i = 0;
    if (0 >= (int)v0)
        return v1;
    do
    {
        v3 = g_6167c4(v1[i]);
        i += 1;
    } while ((int)i < (int)v0);
    return v3;
}

