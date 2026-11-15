// Spawn__5CBean @0x117600 size=150
typedef struct st_517600_0 {
    unsigned int field_0;
} st_517600_0;

extern st_517600_0 *g_6167c8;

int Spawn__5CBean(float a0)
{
    unsigned int *v7;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 12))(a0);
    g_6167c8(*(int *)(*(int *)a0 + 520), "models/w_sensubean.mdl");
    v3 = 8.0f;
    v4 = 8.0f;
    v5 = 8.0f;
    v0 = -8.0f;
    v1 = -8.0f;
    v2 = -8.0f;
    sub_48a0d0(*(int *)a0, &v0, &v3);
    *(unsigned int *)(*(int *)a0 + 264) = 10;
    v7 = *(int *)a0;
    v7[67] = 1;
    return v7;
}

