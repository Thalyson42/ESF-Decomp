// SimpleMeleePowerhit__12CPlayerMeleeP11CBasePlayerG6Vectori @0x10c7e0 size=210
typedef struct st_50c7e0_1 {
    char padding_0[292];
    struct st_50c7e0_2 *field_124;
} st_50c7e0_1;

typedef struct st_50c7e0_2 {
    struct st_50c7e0_0 *field_0;
} st_50c7e0_2;

typedef struct st_50c7e0_0 {
    char padding_0[421];
    char field_1a5;
} st_50c7e0_0;

typedef struct st_50c7e0_3 {
    char padding_0[936];
    unsigned int field_3a8;
} st_50c7e0_3;

int SimpleMeleePowerhit__12CPlayerMeleeP11CBasePlayerG6Vectori(st_50c7e0_1 *a0, st_50c7e0_3 *a1, float *a2, int a3)
{
    int v10;  // ecx
    float v0;  // [bp-0x58]
    float v1;  // [bp-0x54]
    float v2;  // [bp-0x50]
    float v3;  // [bp-0x4c]
    unsigned int v4;  // [bp-0x24]
    float v5;  // [bp-0x24]
    unsigned int v6;  // [bp-0x20]
    float v7;  // [bp-0x20]
    unsigned int v8;  // [bp-0x1c]
    float v9;  // [bp-0x1c]

    v10 = a3;
    if (*(char *)(*(int *)a0->field_124 + 421) & 2)
    {
        v4 = 0;
        v6 = 0;
        v8 = 0x3f800000;
        *(unsigned int *)a2 = v4;
        *(unsigned int *)&a2[1] = v6;
        *(unsigned int *)&a2[2] = v8;
        v10 = 0;
    }
    v5 = *a2;
    v7 = a2[1];
    v9 = a2[2];
    v3 = 1.75f;
    v2 = 400.0f;
    v1 = 500.0f;
    v0 = 1600.0f;
    return CPlayerMelee::Powerhit(a0, a1, &v5, v10, (float)(__double_as_longlong((!a1->field_3a8 ? 15.0 : 22.5)) & 0xffffffff));
}

