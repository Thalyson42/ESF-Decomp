// Powerhit__12CPlayerMeleeP11CBasePlayerG6Vectori @0x10c5f0 size=492
typedef struct st_50c5f0_6 {
    char padding_0[124];
    struct st_50c5f0_5 *field_7c;
} st_50c5f0_6;

typedef struct st_50c5f0_3 {
    char padding_0[160];
    struct st_50c5f0_4 *field_a0;
} st_50c5f0_3;

typedef struct st_50c5f0_1 {
    char padding_0[292];
    struct st_50c5f0_2 *field_124;
} st_50c5f0_1;

typedef struct st_50c5f0_4 {
    unsigned int field_0;
} st_50c5f0_4;

typedef struct st_50c5f0_2 {
    struct st_50c5f0_0 *field_0;
} st_50c5f0_2;

typedef struct st_50c5f0_8 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[401];
    char field_19d;
    char padding_19e[98];
    unsigned int field_200;
} st_50c5f0_8;

typedef struct st_50c5f0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[401];
    char field_1a5;
    char padding_1a6[98];
    int field_208;
} st_50c5f0_0;

typedef struct st_50c5f0_7 {
    char padding_0[936];
    unsigned int field_3a8;
} st_50c5f0_7;

typedef struct st_50c5f0_5 {
    char padding_0[96];
    struct st_50c5f0_3 *field_60;
} st_50c5f0_5;

extern st_50c5f0_4 *g_engfuncs.pfnPEntityOfEntOffset;

int Powerhit__12CPlayerMeleeP11CBasePlayerG6Vectori(st_50c5f0_1 *a0, st_50c5f0_7 *a1, float *a2, int a3)
{
    int v13;  // edi
    st_50c5f0_0 **v14;  // ecx
    st_50c5f0_8 *v15;  // edx
    st_50c5f0_6 *v16;  // eax
    st_50c5f0_5 *v17;  // edx
    float v0;  // [bp-0xb8]
    float v1;  // [bp-0xb4]
    float v2;  // [bp-0xb0]
    float v3;  // [bp-0xac]
    float v4;  // [bp-0x84]
    float v5;  // [bp-0x80]
    float v6;  // [bp-0x7c]
    float v7;  // [bp-0x64]
    float v8;  // [bp-0x60]
    float v9;  // [bp-0x5c]
    char v10;  // [bp-0x44]
    float v11;  // [bp-0x34]
    st_50c5f0_6 *v12;  // [bp-0x14]

    v14 = a0->field_124;
    if (*v14->field_1a5 & 2)
    {
        v4 = 0;
        v5 = 0;
        v6 = -16.0f;
        v15 = &*v14->field_8;
        v7 = *v14->field_8 + v4;
        v8 = *(float *)&v15->field_4 + v5;
        v9 = *(float *)&v15->field_8 + v6;
        UTIL_TraceHull(&*v14->field_8, &v7, 0, 1, *v14->field_208, &v10);
        if (1.0 > v11)
        {
            v16 = v12;
            if (v16 || (v16 = g_engfuncs.pfnPEntityOfEntOffset(0), v16))
                v17 = v16->field_7c;
            else
                v17 = NULL;
            if (v17->field_60->field_a0(v17))
            {
                v4 = *a2;
                v5 = a2[1];
                v6 = a2[2];
                v3 = 1.2000000476837158f;
                v2 = 500.0f;
                v1 = 650.0f;
                v0 = 2000.0f;
                if (!a1->field_3a8)
                {
                    v4 = v4;
                    return CPlayerMelee::Powerhit(a0, a1, &v4, a3, 0);
                }
                v4 = v4;
                return CPlayerMelee::Powerhit(a0, a1, &v4, a3, 0);
            }
        }
        v4 = 0;
        v5 = 0;
        v6 = 1.0;
        *a2 = v4;
        a2[1] = v5;
        a2[2] = v6;
        v13 = 0;
    }
    v4 = *a2;
    v5 = a2[1];
    v6 = a2[2];
    v3 = 1.2000000476837158f;
    v2 = 250.0f;
    v1 = 400.0f;
    v0 = 800.0f;
    if (!a1->field_3a8)
    {
        v4 = v4;
        return CPlayerMelee::Powerhit(a0, a1, &v4, v13, 0);
    }
    v4 = v4;
    return CPlayerMelee::Powerhit(a0, a1, &v4, v13, 0);
}

