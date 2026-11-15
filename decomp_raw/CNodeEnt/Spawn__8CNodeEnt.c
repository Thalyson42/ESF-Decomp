// Spawn__8CNodeEnt @0xe1c60 size=494
typedef struct st_4e1c60_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[64];
    float field_54;
    char padding_58[176];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[248];
    unsigned int field_208;
} st_4e1c60_0;

typedef struct st_4e1c60_1 {
    struct st_4e1c60_0 *field_0;
    char padding_4[96];
    unsigned short field_64;
    unsigned short field_66;
} st_4e1c60_1;

typedef struct st_4e1c60_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4e1c60_3;

typedef struct st_4e1c60_2 {
    unsigned int field_0;
} st_4e1c60_2;

extern st_4e1c60_2 *g_616818;
extern st_4e1c60_2 *g_6168b4;
extern st_4e1c60_3 *gpGlobals;
extern unsigned int WorldGraph[7];
extern unsigned int g_61716c;
extern int g_617178;

int Spawn__8CNodeEnt(st_4e1c60_1 *a0)
{
    st_4e1c60_1 *v2;  // edx
    int v3;  // eax
    unsigned int v4;  // esi
    unsigned int v5;  // edx
    unsigned int *v6;  // edi
    st_4e1c60_0 *v7;  // ecx
    unsigned int *v8;  // edx
    st_4e1c60_1 *v9;  // esi
    unsigned int *v0;  // [bp-0xc]
    unsigned int *v1;  // [bp-0x8]

    v2 = a0;
    v2->field_0->field_108 = 0;
    v2->field_0->field_10c = 0;
    if (WorldGraph)
        return g_616818(a0->field_0->field_208);
    if (!g_617178)
    {
        v3 = sub_48af00(0);
        sub_488ff0(v3, a0->field_0);
    }
    if (g_617178 > 0x3ff)
        return g_6168b4(2, "cNodes > MAX_NODES\n");
    v1 = &WorldGraph[0];
    v4 = v1[3];
    v5 = g_617178 * 88;
    v6 = v4 + v5;
    v0 = v6 + 3;
    v7 = a0->field_0;
    *v6 = v7->field_8;
    *(unsigned int *)(v4 + v5 + 4) = v7->field_c;
    *(unsigned int *)(v4 + v5 + 8) = v7->field_10;
    v8 = v1[3] + v1[6] * 88;
    v6[3] = *v8;
    v0[1] = v8[1];
    v0[2] = v8[2];
    v9 = a0;
    *(float *)(v1[3] + v1[6] * 88 + 84) = v9->field_0->field_54;
    *(unsigned short *)(v1[3] + v1[6] * 88 + 80) = v9->field_64;
    *(unsigned short *)(v1[3] + v1[6] * 88 + 82) = v9->field_66;
    if (!sub_488af0(v9->field_0->field_0 + gpGlobals->field_98, "info_node_air"))
        *(unsigned int *)(v1[3] + v1[6] * 88 + 28) = 2;
    else
        *(unsigned int *)(g_61716c + g_617178 * 88 + 28) = 0;
    g_617178 = g_617178 + 1;
    return g_616818(a0->field_0->field_208);
}

