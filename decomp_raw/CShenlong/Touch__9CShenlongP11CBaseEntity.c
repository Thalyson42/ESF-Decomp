// Touch__9CShenlongP11CBaseEntity @0x1182a0 size=645
typedef struct st_5182a0_0 {
    char padding_0[128];
    char field_80;
    char padding_81[7];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
} st_5182a0_0;

typedef struct st_5182a0_2 {
    char padding_0[160];
    struct st_5182a0_3 *field_a0;
} st_5182a0_2;

typedef struct st_5182a0_5 {
    char padding_0[8];
    float field_8;
    float field_c;
    unsigned int field_10;
    char padding_14[60];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[204];
    unsigned int field_128;
    unsigned int field_12c;
    unsigned int field_130;
} st_5182a0_5;

typedef struct st_5182a0_7 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[388];
    struct st_5182a0_0 *field_190;
} st_5182a0_7;

typedef struct st_5182a0_1 {
    char padding_0[4];
    unsigned int field_4;
    float field_8;
    float field_c;
    float field_10;
    char padding_14[388];
    struct st_5182a0_0 *field_198;
} st_5182a0_1;

typedef struct st_5182a0_3 {
    unsigned int field_0;
} st_5182a0_3;

typedef struct st_5182a0_4 {
    struct st_5182a0_1 *field_0;
    char padding_4[92];
    struct st_5182a0_2 *field_60;
} st_5182a0_4;

typedef struct st_5182a0_6 {
    char padding_0[152];
    unsigned int field_98;
} st_5182a0_6;

extern st_5182a0_6 *gpGlobals;

double Touch__9CShenlongP11CBaseEntity(st_5182a0_5 **a0, st_5182a0_4 *a1)
{
    st_5182a0_1 *v18;  // esi
    st_5182a0_5 *v19;  // ecx
    double v28;  // mm7
    float *v29;  // edi
    st_5182a0_5 *v30;  // esi
    unsigned int *v31;  // edx
    unsigned int *v32;  // eax
    st_5182a0_5 **v33;  // edx
    unsigned int v34;  // eax
    st_5182a0_5 **v35;  // ecx
    double v36;  // mm7
    double v37;  // mm7
    unsigned int *v20;  // edx
    st_5182a0_7 *v21;  // eax
    float v22;  // 112
    float v23;  // 112
    double v24;  // mm7
    double v25;  // mm6
    double v26;  // mm7
    double v27;  // mm6
    char *v0;  // [bp-0x68]
    float v1;  // [bp-0x64]
    double v2;  // [bp-0x60]
    double v3;  // [bp-0x5c], Other Possible Types: unsigned long long
    float v4;  // [bp-0x58]
    float v5;  // [bp-0x54]
    double v6;  // [bp-0x50], Other Possible Types: float
    float v7;  // [bp-0x4c]
    float v8;  // [bp-0x48]
    char v9;  // [bp-0x44], Other Possible Types: unsigned int
    unsigned int v10;  // [bp-0x40]
    unsigned int v11;  // [bp-0x3c]
    float v12;  // [bp-0x38]
    float v13;  // [bp-0x34]
    float v14;  // [bp-0x30]
    float v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]

    if (a1->field_60->field_a0(a1))
    {
        v18 = a1->field_0;
        v19 = *a0;
        if (v18->field_10 <= *(float *)&v19->field_10)
            return v18->field_10;
        v20 = &v19->field_8;
        v21 = &v18->field_8;
        v22 = v19->field_8 - v18->field_8;
        v15 = v22;
        v23 = *(float *)&v20[1] - *(float *)&v21->field_4;
        v16 = v23;
        v17 = *(float *)&v20[2] - *(float *)&v21->field_8;
        v24 = v22 * v22 + v23 * v23;
        v25 = sqrt(v24);
        if (isnan(v25))
            sub_487dc0(*(unsigned int *)&v24);
        else
            v24 = v25;
        v12 = (float)v24;
        if (0.0 >= v12)
        {
            *(float *)&a1->field_0->padding_14[12] = 250.0f;
            *(float *)&a1->field_0->padding_14[12] = 0;
            return 250.0;
        }
        v7 = v15;
        v8 = v16;
        v5 = v7;
        v6 = v8;
        v0 = &v3;
        v26 = v5 * v5 + v6 * v6;
        v27 = sqrt(v26);
        if (isnan(v27))
            sub_487dc0(*(unsigned int *)&v26);
        else
            v26 = v27;
        v12 = (float)v26;
        if (v12 == 0.0f)
        {
            *(float *)&v3 = 0.0f;
            v4 = 0.0f;
        }
        else
        {
            v28 = 1.0 / v12;
            *(float *)&v3 = (float)(v28 * v5);
            v4 = (float)(v28 * v6);
        }
        v1 = (float)(250.0 * (double)(unsigned int)v3);
        v2 = (float)(250.0 * (double)*(unsigned int *)((void*)&v3 + 4));
        v5 = v1;
        v6 = v2;
        *(float *)&a1->field_0->padding_14[12] = v5;
        *(double *)&a1->field_0->padding_14[12] = v6;
        return v6;
    }
    else if (!sub_488af0(a1->field_0->field_4 + gpGlobals->field_98, "magic_attack"))
    {
        if (a1->field_0->field_198)
        {
            v29 = (!a1->field_0->field_198 ? NULL : (struct st_5182a0_0 *)&a1->field_0->field_198->field_80);
            v30 = *a0;
            v31 = v29 + 2;
            v32 = &v30->field_8;
            v12 = v29[2] - v30->field_8;
            v13 = *(float *)&v31[1] - *(float *)&v32[1];
            v14 = *(float *)&v31[2] - *(float *)&v32[2];
            sub_488860(&v9, &v12);
            v30->field_50 = v9;
            v30->field_54 = v10;
            v30->field_58 = v11;
        }
        v33 = a0;
        *v33->field_12c = 0;
        v34 = sub_48afe0(v33, "lounge");
        v35 = a0;
        *v35->field_128 = v34;
        *v35->field_130 = 0;
        sub_488850(v35);
        return v36;
    }
    else
    {
        return v37;
    }
}

