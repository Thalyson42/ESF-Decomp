// Spawn__5CBlob @0xcaf20 size=162
typedef struct st_4caf20_0 {
    unsigned int field_0;
} st_4caf20_0;

extern st_4caf20_0 *g_6167c8;

int Spawn__5CBlob(float a0)
{
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 12))(a0);
    g_6167c8(*(int *)(*(int *)a0 + 520), "sprites/null.spr");
    *(unsigned int *)(*(int *)a0 + 328) = 5;
    *(unsigned int *)(*(int *)a0 + 264) = 0;
    *(unsigned int *)(*(int *)a0 + 268) = 1;
    v3 = 50.0f;
    v4 = 50.0f;
    v5 = 50.0f;
    v0 = -50.0f;
    v1 = -50.0f;
    v2 = -50.0f;
    return sub_48a0d0(*(int *)a0, &v0, &v3);
}

