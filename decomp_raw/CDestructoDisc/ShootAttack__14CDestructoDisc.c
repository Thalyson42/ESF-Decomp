// ShootAttack__14CDestructoDisc @0xaa5c0 size=178
typedef struct st_4aa5c0_1 {
    unsigned int field_0;
} st_4aa5c0_1;

typedef struct st_4aa5c0_3 {
    char padding_0[128];
    struct st_4aa5c0_2 *field_80;
    char padding_84[336];
    int field_1d4;
} st_4aa5c0_3;

typedef struct st_4aa5c0_0 {
    char padding_0[480];
    struct st_4aa5c0_1 *field_1e0;
} st_4aa5c0_0;

typedef struct st_4aa5c0_2 {
    unsigned int field_0;
    char padding_4[92];
    struct st_4aa5c0_0 *field_60;
} st_4aa5c0_2;

typedef struct st_4aa5c0_4 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4aa5c0_4;

extern st_4aa5c0_4 *gpGlobals;

unsigned int ShootAttack__14CDestructoDisc(st_4aa5c0_3 *a0)
{
    unsigned int *v7;  // edx
    unsigned int v8;  // eax
    float v0;  // [bp-0x64]
    float v1;  // [bp-0x60]
    float v2;  // [bp-0x5c]
    char v3;  // [bp-0x44]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]

    UTIL_MakeVectors(a0->field_80->field_0 + 116);
    v7 = &gpGlobals->field_28;
    v4 = (float)(800.0 * gpGlobals->field_28);
    v5 = (float)(800.0 * *(float *)&v7[1]);
    v6 = (float)(800.0 * *(float *)&v7[2]);
    a0->field_80->field_60->field_1e0(&v3, a0->field_80);
    v0 = v4;
    v1 = v5;
    v2 = v6;
    v8 = CDestructoDiscAttack::Shoot(a0->field_1d4, &v3, &v0);
    a0->field_1d4 = 0;
    return v8;
}

