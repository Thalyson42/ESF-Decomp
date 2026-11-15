// Spawn__14CTriggerVolume @0x12d320 size=126
typedef struct st_52d320_0 {
    char padding_0[180];
    unsigned int field_b4;
    unsigned int field_b8;
    char padding_bc[76];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[248];
    unsigned int field_208;
} st_52d320_0;

typedef struct st_52d320_1 {
    char padding_0[152];
    unsigned int field_98;
} st_52d320_1;

typedef struct st_52d320_2 {
    unsigned int field_0;
} st_52d320_2;

extern st_52d320_2 *g_6167c8;
extern st_52d320_1 *gpGlobals;

unsigned int * Spawn__14CTriggerVolume(st_52d320_0 **a0)
{
    unsigned int *v0;  // eax

    *a0->field_10c = 0;
    *a0->field_108 = 0;
    g_6167c8(*a0->field_208, *a0->field_b8 + gpGlobals->field_98);
    *a0->field_b8 = 0;
    v0 = *a0;
    v0[45] = 0;
    return v0;
}

