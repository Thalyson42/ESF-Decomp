// TraceAttack__12CBaseMonsterP9entvars_sfG6VectorP11TraceResulti @0xa6d00 size=193
typedef struct st_4a6d00_0 {
    char padding_0[364];
    unsigned int field_16c;
} st_4a6d00_0;

typedef struct st_4a6d00_3 {
    struct st_4a6d00_0 *field_0;
    char padding_4[92];
    struct st_4a6d00_1 *field_60;
    char padding_64[280];
    unsigned int field_17c;
} st_4a6d00_3;

typedef struct st_4a6d00_2 {
    unsigned int field_0;
} st_4a6d00_2;

typedef struct st_4a6d00_4 {
    char padding_0[20];
    float field_14;
    float field_18;
    float field_1c;
    char padding_20[20];
    unsigned int field_34;
} st_4a6d00_4;

typedef struct st_4a6d00_1 {
    char padding_0[64];
    struct st_4a6d00_2 *field_40;
    struct st_4a6d00_2 *field_44;
} st_4a6d00_1;

unsigned int TraceAttack__12CBaseMonsterP9entvars_sfG6VectorP11TraceResulti(st_4a6d00_3 *a0, int a1, int a2, float *a3, st_4a6d00_4 *a4, int a5)
{
    unsigned int *v4;  // eax
    int v0;  // [bp-0x44]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    float v3;  // [bp-0x1c]

    if (*(float *)&a0->field_0->field_16c == 0.0f)
        return AddMultiDamage(a1, a0, a2, a5);
    a0->field_17c = a4->field_34;
    v4 = &a4->field_14;
    v1 = a4->field_14;
    v2 = *(float *)&v4[1];
    v3 = *(float *)&v4[2];
    v0 = a2;
    SpawnBlood(&v1, a0->field_60->field_40(a0));
    v1 = *a3;
    v2 = a3[1];
    v3 = a3[2];
    a0->field_60->field_44(a0, a2, &v1, a4, a5);
    return AddMultiDamage(a1, a0, a2, a5);
}

