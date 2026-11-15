// TakeDamage__10CBreakableP9entvars_sT1fi @0xc2690 size=666
typedef struct st_4c2690_6 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[96];
    unsigned int field_6c;
    char padding_70[61];
    char field_ad;
} st_4c2690_6;

typedef struct st_4c2690_3 {
    unsigned int field_0;
} st_4c2690_3;

typedef struct st_4c2690_5 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[400];
    char field_19c;
} st_4c2690_5;

typedef struct st_4c2690_1 {
    char padding_0[196];
    float field_c4;
    float field_c8;
    float field_cc;
    char padding_d0[36];
    float field_f4;
    float field_f8;
    float field_fc;
    char padding_100[96];
    unsigned int field_160;
    char padding_164[61];
    char field_1a1;
} st_4c2690_1;

typedef struct st_4c2690_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[400];
    char field_1a4;
} st_4c2690_0;

typedef struct st_4c2690_2 {
    char padding_0[60];
    struct st_4c2690_3 *field_3c;
} st_4c2690_2;

typedef struct st_4c2690_4 {
    struct st_4c2690_1 *field_0;
    char padding_4[92];
    struct st_4c2690_2 *field_60;
} st_4c2690_4;

extern unsigned int g_vecAttackDir;
extern unsigned int g_vecAttackDir+4;
extern unsigned int g_vecAttackDir+8;

unsigned int TakeDamage__10CBreakableP9entvars_sT1fi(st_4c2690_4 *a0, st_4c2690_0 *a1, st_4c2690_0 *a2, float a3, unsigned int a4)
{
    st_4c2690_1 *v17;  // edx
    st_4c2690_6 *v18;  // eax
    unsigned int *v27;  // edx
    st_4c2690_5 *v28;  // eax
    double v29;  // mm7
    double v30;  // mm6
    double v31;  // mm7
    double v19;  // mm5
    double v20;  // mm5
    unsigned int *v21;  // eax
    st_4c2690_5 *v22;  // eax
    st_4c2690_1 *v23;  // eax
    st_4c2690_6 *v24;  // edx
    double v25;  // mm5
    double v26;  // mm5
    float v0;  // [bp-0x84]
    float v1;  // [bp-0x80]
    float v2;  // [bp-0x7c]
    float v3;  // [bp-0x78]
    float v4;  // [bp-0x74]
    float v5;  // [bp-0x70]
    float v6;  // [bp-0x6c]
    float v7;  // [bp-0x68]
    float v8;  // [bp-0x64]
    float v9;  // [bp-0x60]
    float v10;  // [bp-0x5c]
    float v11;  // [bp-0x44]
    float v12;  // [bp-0x40]
    float v13;  // [bp-0x3c]
    float v14;  // [bp-0x24]
    float v15;  // [bp-0x20]
    float v16;  // [bp-0x1c]

    if (a2 == a1)
    {
        v17 = a0->field_0;
        v18 = &v17->field_f4;
        v19 = 0.5 * v17->field_f4;
        v0 = (float)v19;
        v20 = 0.5 * *(float *)&v18->field_4;
        v1 = (float)v20;
        v2 = (float)(0.5 * *(float *)&v18->field_8);
        v21 = &v17->field_c4;
        v8 = (float)(v19 + v17->field_c4);
        v9 = (float)(v20 + *(float *)&v21[1]);
        v10 = *(float *)&v21[2] + v2;
        v22 = &a2->field_8;
        v11 = a2->field_8 - v8;
        v12 = *(float *)&v22->field_4 - v9;
        v13 = *(float *)&v22->field_8 - v10;
        v14 = v11;
        v15 = v12;
        v16 = v13;
        if (a2->field_1a4 & 8 && v17->field_1a1 & 1 && (char)a4 < 0)
            a3 = *(float *)&v17->field_160;
    }
    else
    {
        v23 = a0->field_0;
        v24 = &v23->field_f4;
        v25 = 0.5 * v23->field_f4;
        v6 = (float)v25;
        v26 = 0.5 * *(float *)&v24->field_4;
        v7 = (float)v26;
        v8 = (float)(0.5 * *(float *)&v24->field_8);
        v27 = &v23->field_c4;
        v3 = (float)(v25 + v23->field_c4);
        v4 = (float)(v26 + *(float *)&v27[1]);
        v5 = *(float *)&v27[2] + v8;
        v28 = &a1->field_8;
        v0 = a1->field_8 - v3;
        v1 = *(float *)&v28->field_4 - v4;
        v2 = *(float *)&v28->field_8 - v5;
        v14 = v0;
        v15 = v1;
        v16 = v2;
    }
    if (!CBreakable::IsBreakable(a0))
        return 0;
    if ((char)a4 < 0)
        a3 += a3;
    if (a4 & 0x20000)
        a3 = (float)(0.1 * a3);
    v29 = v14 * v14 + v15 * v15 + v16 * v16;
    v30 = sqrt(v29);
    if (isnan(v30))
        sqrt(*(unsigned int *)&v29);
    else
        v29 = v30;
    v6 = (float)v29;
    if (v6 == 0.0f)
    {
        v0 = 0.0f;
        v1 = 0.0f;
        v2 = 1.0;
    }
    else
    {
        v31 = 1.0 / v6;
        v0 = (float)(v31 * v14);
        v1 = (float)(v31 * v15);
        v2 = (float)(v31 * v16);
    }
    *(float *)&g_vecAttackDir = v0;
    *(float *)&g_vecAttackDir+4 = v1;
    *(float *)&g_vecAttackDir+8 = v2;
    *(float *)&a0->field_0->field_160 = *(float *)&a0->field_0->field_160 - a3;
    if (0.0 < *(float *)&a0->field_0->field_160)
    {
        CBreakable::DamageSound(a0);
        return 1;
    }
    a0->field_60->field_3c(a0, a2, 0);
    CBreakable::Die(a0);
    return 0;
}

