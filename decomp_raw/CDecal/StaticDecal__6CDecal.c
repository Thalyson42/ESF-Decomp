// StaticDecal__6CDecal @0x139830 size=293
typedef struct st_539830_0 {
    unsigned int field_0;
} st_539830_0;

extern st_539830_0 *g_engfuncs.pfnIndexOfEdict;
extern st_539830_0 *g_engfuncs.pfnStaticDecal;

int StaticDecal__6CDecal(float a0)
{
    unsigned int index;  // ecx
    unsigned int idx;  // edx
    unsigned int v17;  // eax
    unsigned int v18;  // edx
    float v0;  // [bp-0xc4]
    float v1;  // [bp-0xc0]
    float v2;  // [bp-0xbc]
    float v3;  // [bp-0xa4]
    float v4;  // [bp-0xa0]
    float v5;  // [bp-0x9c]
    float v6;  // [bp-0x84]
    float v7;  // [bp-0x80]
    float v8;  // [bp-0x7c]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    char v12;  // [bp-0x44]
    unsigned int v13;  // [bp-0x14]

    v6 = 5.0f;
    v7 = 5.0f;
    v8 = 5.0f;
    index = *(int *)a0;
    idx = index + 8;
    v9 = *(float *)(index + 8) + v6;
    v10 = *(float *)(idx + 4) + v7;
    v11 = *(float *)(idx + 8) + v8;
    v0 = 5.0f;
    v1 = 5.0f;
    v2 = 5.0f;
    v3 = *(float *)(index + 8) - v0;
    v4 = *(float *)(idx + 4) - v1;
    v5 = *(float *)(idx + 8) - v2;
    UTIL_TraceLine(&v3, &v9, 1, *(int *)(index + 520), &v12);
    v17 = (short)g_engfuncs.pfnIndexOfEdict(v13);
    if (v17)
        v18 = *(int *)((!v13 ? 0 : v13 + 128) + 180);
    else
        v18 = 0;
    g_engfuncs.pfnStaticDecal(*(int *)a0 + 8, *(int *)(*(int *)a0 + 272), v17, v18);
    return CBaseEntity::SUB_Remove(a0);
}

