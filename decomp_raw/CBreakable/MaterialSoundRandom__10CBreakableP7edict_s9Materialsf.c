// MaterialSoundRandom__10CBreakableP7edict_s9Materialsf @0xc1e50 size=126
typedef struct st_4c1e50_0 {
    unsigned int field_0;
} st_4c1e50_0;

extern st_4c1e50_0 *g_616928;

int * MaterialSoundRandom__10CBreakableP7edict_s9Materialsf(int a0, int a1, float a2)
{
    int *v1;  // eax
    int v2;  // eax
    unsigned int v0;  // [bp-0x8]

    v0 = 0;
    v1 = sub_48aa40(a1, &v0);
    if (!v0)
        return v1;
    v2 = v1[g_616928(0, v0 - 1)];
    return sub_489390(a0, 4, v1[g_616928(0, v0 - 1)], a2, 0x3f800000, 0, 100);
}

