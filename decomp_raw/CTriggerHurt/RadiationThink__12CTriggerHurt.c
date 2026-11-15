// RadiationThink__12CTriggerHurt @0x12c690 size=920
typedef struct st_52c690_2 {
    char padding_0[128];
    char field_80;
    char padding_81[67];
    float field_c4;
    float field_c8;
    float field_cc;
    float field_d0;
    float field_d4;
    float field_d8;
} st_52c690_2;

typedef struct st_52c690_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[176];
    float field_c4;
    float field_c8;
    float field_cc;
    float field_d0;
    float field_d4;
    float field_d8;
    char padding_dc[40];
    float field_104;
    char padding_108[108];
    float field_174;
    float field_178;
    float field_17c;
    char padding_180[136];
    unsigned int field_208;
} st_52c690_0;

typedef struct st_52c690_3 {
    float field_0;
} st_52c690_3;

typedef struct st_52c690_1 {
    unsigned int field_0;
} st_52c690_1;

extern st_52c690_1 *g_616804;
extern st_52c690_1 *g_6168d8;
extern st_52c690_3 *gpGlobals;

double RadiationThink__12CTriggerHurt(st_52c690_0 **a0)
{
    st_52c690_0 *v25;  // edx
    unsigned int *v26;  // ecx
    unsigned int *v35;  // edx
    unsigned int *v36;  // edx
    unsigned int *v37;  // eax
    float v38;  // 128
    double v39;  // mm7
    unsigned int *v27;  // eax
    st_52c690_0 *v28;  // edx
    st_52c690_2 *v29;  // esi
    st_52c690_0 *v30;  // edx
    st_52c690_0 *v31;  // edx
    st_52c690_2 *v32;  // esi
    st_52c690_0 *v33;  // eax
    unsigned int *v34;  // ecx
    unsigned int v0;  // [bp-0xf8]
    float v1;  // [bp-0xe4]
    float v2;  // [bp-0xe0]
    float v3;  // [bp-0xdc]
    float v4;  // [bp-0xd8]
    float v5;  // [bp-0xd4]
    float v6;  // [bp-0xd0]
    float v7;  // [bp-0xc4]
    float v8;  // [bp-0xc0]
    float v9;  // [bp-0xbc]
    float v10;  // [bp-0xa4]
    float v11;  // [bp-0xa0]
    float v12;  // [bp-0x9c]
    unsigned int v13;  // [bp-0x84]
    unsigned int v14;  // [bp-0x80]
    unsigned int v15;  // [bp-0x7c]
    float v16;  // [bp-0x64]
    float v17;  // [bp-0x60]
    float v18;  // [bp-0x5c]
    float v19;  // [bp-0x44]
    float v20;  // [bp-0x40]
    float v21;  // [bp-0x3c]
    float v22;  // [bp-0x24]
    float v23;  // [bp-0x20]
    float v24;  // [bp-0x1c]

    v25 = *a0;
    v13 = v25->field_8;
    v14 = v25->field_c;
    v15 = v25->field_10;
    v10 = v25->field_174;
    v11 = v25->field_178;
    v12 = v25->field_17c;
    v26 = &v25->field_c4;
    v27 = &v25->field_d0;
    v1 = v25->field_c4 + v25->field_d0;
    v2 = *(float *)&v26[1] + *(float *)&v27[1];
    v3 = *(float *)&v26[2] + *(float *)&v27[2];
    v7 = (float)(0.5 * v1);
    v8 = (float)(0.5 * v2);
    v9 = (float)(0.5 * v3);
    *(float *)&v25->field_8 = v7;
    *(float *)&v25->field_c = v8;
    *(float *)&v25->field_10 = v9;
    v28 = *a0;
    v1 = (float)(v28->field_174 * 0.0);
    v2 = (float)(v28->field_178 * 0.0);
    v3 = (float)(0.0 * v28->field_17c);
    v28->field_174 = v1;
    v28->field_178 = v2;
    v28->field_17c = v3;
    v29 = g_616804(*a0->field_208);
    v30 = *a0;
    v30->field_8 = v13;
    v30->field_c = v14;
    v30->field_10 = v15;
    v31 = *a0;
    v31->field_174 = v10;
    v31->field_178 = v11;
    v31->field_17c = v12;
    v0 = 0;
    if (!v29 || !g_6168d8(v29))
        v0 = 1;
    if (!v0)
    {
        sub_48c260((!v29 ? 0 : (struct st_52c690_2 *)&v29->field_80));
        v32 = (!v29 ? NULL : (struct st_52c690_2 *)&v29->field_80);
        v33 = *a0;
        v34 = &v33->field_c4;
        v35 = &v33->field_d0;
        v4 = v33->field_c4 + v33->field_d0;
        v5 = *(float *)&v34[1] + *(float *)&v35[1];
        v6 = *(float *)&v34[2] + *(float *)&v35[2];
        v1 = (float)(0.5 * v4);
        v2 = (float)(0.5 * v5);
        v3 = (float)(0.5 * v6);
        v22 = v1;
        v23 = v2;
        v24 = v3;
        v36 = &v32->field_c4;
        v37 = &v32->field_d0;
        v4 = v32->field_c4 + v32->field_d0;
        v5 = *(float *)&v36[1] + *(float *)&v37[1];
        v6 = *(float *)&v36[2] + *(float *)&v37[2];
        v1 = (float)(0.5 * v4);
        v2 = (float)(0.5 * v5);
        v3 = (float)(0.5 * v6);
        v19 = v1;
        v20 = v2;
        v21 = v3;
        v1 = v22 - v19;
        v2 = v23 - v20;
        v3 = v24 - v21;
        v16 = v1;
        v17 = v2;
        v18 = v3;
        v38 = v16 * v16 + v17 * v17 + v18 * v18;
        if (isnan(sqrt(v38)))
            sub_487dc0((unsigned int)(v38 >> 0));
    }
    v39 = 0.25 + *(float *)gpGlobals;
    *a0->field_104 = (float)v39;
    return v39;
}

