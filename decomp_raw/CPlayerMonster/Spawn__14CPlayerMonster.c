// Spawn__14CPlayerMonster @0x10ca80 size=260
typedef struct st_50ca80_0 {
    unsigned int field_0;
} st_50ca80_0;

extern st_50ca80_0 *g_6167c8;

int Spawn__14CPlayerMonster(float idx)
{
    unsigned int *v7;  // eax
    unsigned int *v8;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    g_6167c8(*(int *)(*(int *)idx + 520), "models/player.mdl");
    v3 = 4.0f;
    v4 = 4.0f;
    v5 = 9.0f;
    v0 = -4.0f;
    v1 = -4.0f;
    v2 = -9.0f;
    sub_48a0d0(*(int *)idx, &v0, &v3);
    *(unsigned int *)(*(int *)idx + 268) = 3;
    *(unsigned int *)(*(int *)idx + 264) = 4;
    *(unsigned int *)(*(unsigned int *)&idx + 632) = 247;
    *(float *)(*(int *)idx + 352) = 8.0f;
    *(float *)(*(unsigned int *)&idx + 360) = 0.5f;
    *(unsigned int *)(*(unsigned int *)&idx + 384) = 0;
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 260))(idx);
    v7 = *(int *)idx;
    if (!((char)v7[104] & 4))
        return v7;
    v7[67] = 0;
    v8 = *(int *)idx;
    v8[91] = 0;
    return v8;
}

