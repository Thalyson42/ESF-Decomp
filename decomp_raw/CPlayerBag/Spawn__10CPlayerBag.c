// Spawn__10CPlayerBag @0xef9d0 size=154
typedef struct st_4ef9d0_0 {
    unsigned int field_0;
} st_4ef9d0_0;

extern st_4ef9d0_0 *g_engfuncs.pfnSetModel;

int Spawn__10CPlayerBag(float a0)
{
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 12))(a0);
    g_engfuncs.pfnSetModel(*(int *)(*(int *)a0 + 520), "models/w_sensubeanbag.mdl");
    *(unsigned int *)(*(int *)a0 + 264) = 6;
    *(unsigned int *)(*(int *)a0 + 268) = 1;
    v3 = 16.0f;
    v4 = 16.0f;
    v5 = 16.0f;
    v0 = -16.0f;
    v1 = -16.0f;
    v2 = 0;
    return UTIL_SetSize(*(int *)a0, &v0, &v3);
}

