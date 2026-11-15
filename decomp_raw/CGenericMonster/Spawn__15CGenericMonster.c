// Spawn__15CGenericMonster @0xc6470 size=416
typedef struct st_4c6470_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4c6470_0;

typedef struct st_4c6470_1 {
    unsigned int field_0;
} st_4c6470_1;

extern st_4c6470_1 *g_6167c8;
extern st_4c6470_0 *gpGlobals;

int Spawn__15CGenericMonster(float idx)
{
    unsigned int *v12;  // eax
    unsigned int *v13;  // eax
    char *v0;  // [bp-0x68]
    char *v1;  // [bp-0x64]
    float v2;  // [bp-0x44]
    float v3;  // [bp-0x40]
    float v4;  // [bp-0x3c]
    float v5;  // [bp-0x38]
    float v6;  // [bp-0x34]
    unsigned int v7;  // [bp-0x30]
    float v8;  // [bp-0x24]
    float v9;  // [bp-0x20]
    float v10;  // [bp-0x1c]

    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    g_6167c8(*(int *)(*(int *)idx + 520), *(int *)(*(int *)idx + 184) + gpGlobals->field_98);
    if (!sub_488af0(*(int *)(*(int *)idx + 184) + gpGlobals->field_98, "models/player.mdl") || !sub_488af0(*(int *)(*(int *)idx + 184) + gpGlobals->field_98, "models/holo.mdl"))
    {
        v8 = 4.0f;
        v9 = 4.0f;
        v10 = 9.0f;
        v2 = -4.0f;
        v3 = -4.0f;
        v4 = -9.0f;
        v1 = &v8;
        v0 = &v2;
    }
    else
    {
        v2 = 4.0f;
        v3 = 4.0f;
        v4 = 18.0f;
        v5 = -4.0f;
        v6 = -4.0f;
        v7 = 0;
        v1 = &v2;
        v0 = &v5;
    }
    sub_48a0d0(*(int *)idx);
    *(unsigned int *)(*(int *)idx + 268) = 3;
    *(unsigned int *)(*(int *)idx + 264) = 4;
    *(unsigned int *)(*(unsigned int *)&idx + 632) = 247;
    *(float *)(*(int *)idx + 352) = 8.0f;
    *(float *)(*(unsigned int *)&idx + 360) = 0.5f;
    *(unsigned int *)(*(unsigned int *)&idx + 384) = 0;
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 260))(idx);
    v12 = *(int *)idx;
    if (!((char)v12[104] & 4))
        return v12;
    v12[67] = 0;
    v13 = *(int *)idx;
    v13[91] = 0;
    return v13;
}

