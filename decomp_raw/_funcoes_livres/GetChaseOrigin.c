// GetChaseOrigin @0x1919f0 size=224
typedef struct st_5919f0_1 {
    unsigned int field_0;
} st_5919f0_1;

typedef struct st_5919f0_0 {
    char padding_0[324996];
    struct st_5919f0_1 *field_4f584;
} st_5919f0_0;

extern st_5919f0_0 *pmove;

int GetChaseOrigin(int a0, unsigned int a1, int a2, int a3)
{
    unsigned int *v12;  // esi
    int v13;  // edx
    int v0;  // [bp-0x7c]
    int v1;  // [bp-0x78]
    int v2;  // [bp-0x74]
    float v3;  // [bp-0x64]
    unsigned int v4;  // [bp-0x60]
    unsigned int v5;  // [bp-0x5c]
    float v6;  // [bp-0x5c]
    float v7;  // [bp-0x44]
    char v8;  // [bp-0x44]
    float v9;  // [bp-0x40]
    float v10;  // [bp-0x3c]
    char v11;  // [bp-0x24]

    v12 = &pmove->padding_0[224 * a1 + 592];
    AngleVectors(a0, &v11, 0, 0, v0, v1, v2);
    v3 = *(float *)&v12[9];
    *(float *)&v4 = *(float *)&v12[10];
    *(float *)&v5 = *(float *)&v12[11];
    v6 = (float)(*(float *)&v12[11] + 28.0);
    VectorMA(a2, 112.0f, &v11, &v8);
    v7 = v3 - v7;
    v9 = *(float *)&v4 - v9;
    v10 = v6 - v10;
    v13 = pmove->field_4f584(&v3, &v7, 0, 2, a1);
    return VectorMA(v13 + 20, 4.0f, v13 + 32, a3);
}

