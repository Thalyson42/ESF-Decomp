// Holster__17CCariedDragonBalli @0xaec80 size=228
typedef struct st_4aec80_3 {
    struct st_4aec80_2 *field_0;
    char padding_4[1724];
    unsigned int field_6c0;
} st_4aec80_3;

typedef struct st_4aec80_2 {
    char padding_0[192];
    unsigned int field_c0;
} st_4aec80_2;

typedef struct st_4aec80_0 {
    float field_0;
} st_4aec80_0;

typedef struct st_4aec80_1 {
    unsigned int field_0;
} st_4aec80_1;

extern char DestroyItem__15CBasePlayerItem;
extern unsigned int gmsgWeaponUpdate;
extern st_4aec80_1 *g_616878;
extern st_4aec80_1 *g_61687c;
extern st_4aec80_1 *g_616884;
extern st_4aec80_0 *gpGlobals;

unsigned int * Holster__17CCariedDragonBalli(double a0, float idx)
{
    st_4aec80_3 *v5;  // eax
    unsigned int v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x2c]
    unsigned int v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x24]

    g_616878(1, gmsgWeaponUpdate, 0, *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), v1, v2, v3);
    v0 = -*(int *)(*(unsigned int *)&idx + 0x88);
    g_616884(v0);
    g_61687c(v0);
    sub_488ba0(idx);
    *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 192) = 0;
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1728) = 0;
    sub_488640();
    v5 = *(int *)(*(unsigned int *)&idx + 128);
    *(float *)&v5->padding_4[608] = (float)(a0 + 0.5);
    *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v5, 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &DestroyItem__15CBasePlayerItem;
    *(float *)(*(int *)idx + 260) = (float)(0.1 + *(float *)gpGlobals);
    return gpGlobals;
}

