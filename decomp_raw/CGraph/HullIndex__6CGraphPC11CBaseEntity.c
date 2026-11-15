// HullIndex__6CGraphPC11CBaseEntity @0xdf650 size=349
typedef struct st_4df650_0 {
    char padding_0[220];
    float field_dc;
    float field_e0;
    float field_e4;
    char padding_e8[32];
    unsigned int field_108;
} st_4df650_0;

unsigned int HullIndex__6CGraphPC11CBaseEntity(unsigned int a0, st_4df650_0 **a1)
{
    unsigned int *v9;  // edx
    unsigned int v10;  // ecx
    unsigned int *v11;  // edx
    unsigned int v12;  // ecx
    unsigned int *v13;  // edx
    unsigned int v14;  // ecx
    float v0;  // [bp-0x64]
    float v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x5c]
    float v3;  // [bp-0x44]
    float v4;  // [bp-0x40]
    unsigned int v5;  // [bp-0x3c]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    unsigned int v8;  // [bp-0x1c]

    if (*a1->field_108 == 5)
        return 3;
    v6 = -12.0f;
    v7 = -12.0f;
    v8 = 0;
    v9 = &*a1->field_dc;
    v10 = 0;
    if (*a1->field_dc == -12.0f && *(float *)&v9[1] == -12.0f)
        v10 = 0.0 == *(float *)&v9[2];
    if (v10)
        return 0;
    v3 = -4.0f;
    v4 = -4.0f;
    v5 = 0;
    v11 = &*a1->field_dc;
    v12 = 0;
    if (*a1->field_dc == -4.0f && *(float *)&v11[1] == -4.0f)
        v12 = 0.0 == *(float *)&v11[2];
    if (v12)
        return 1;
    v0 = -32.0f;
    v1 = -32.0f;
    v2 = 0;
    v13 = &*a1->field_dc;
    v14 = 0;
    if (*a1->field_dc == -32.0f && *(float *)&v13[1] == -32.0f)
        v14 = 0.0 == *(float *)&v13[2];
    if (v14)
        return 2;
    return 1;
}

