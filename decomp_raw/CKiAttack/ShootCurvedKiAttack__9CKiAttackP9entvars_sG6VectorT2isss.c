// ShootCurvedKiAttack__9CKiAttackP9entvars_sG6VectorT2isss @0xcbff0 size=1638
typedef struct st_4cbff0_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    char field_50;
    char padding_51[179];
    unsigned int field_104;
} st_4cbff0_0;

typedef struct st_4cbff0_1 {
    struct st_4cbff0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[660];
    unsigned int field_2a8;
    char padding_2ac[48];
    unsigned int field_2dc;
    unsigned int field_2e0;
    unsigned int field_2e4;
    unsigned int field_2e8;
    unsigned int field_2ec;
    unsigned int field_2f0;
    unsigned int field_2f4;
    unsigned int field_2f8;
    unsigned int field_2fc;
    unsigned int field_300;
} st_4cbff0_1;

typedef struct st_4cbff0_2 {
    float field_0;
    char padding_4[48];
    float field_34;
    float field_38;
    float field_3c;
    float field_40;
    float field_44;
    float field_48;
} st_4cbff0_2;

typedef struct st_4cbff0_3 {
    unsigned int field_0;
} st_4cbff0_3;

extern char CurveThink__9CKiAttack;
extern st_4cbff0_3 *g_61692c;
extern st_4cbff0_2 *gpGlobals;

st_4cbff0_1 * ShootCurvedKiAttack__9CKiAttackP9entvars_sG6VectorT2isss(int a0, float *a1, float *a2, int a3, short a4, short a5, short a6)
{
    float *v34;  // edi
    float *v35;  // edi
    double v44;  // mm6
    unsigned int *v45;  // esi
    double v46;  // mm0
    double v47;  // mm0
    double v48;  // mm7
    double v49;  // mm0
    double v50;  // mm0
    float *v51;  // edx
    double v52;  // mm0
    double v53;  // mm0
    st_4cbff0_1 *v36;  // edi
    double v54;  // mm7
    double v55;  // mm0
    double v56;  // mm0
    float *v57;  // edx
    double v58;  // mm6
    double v59;  // mm6
    float *v60;  // eax
    unsigned int *v61;  // edx
    float v62;  // 120
    float v63;  // 120
    double v37;  // mm0
    float v64;  // 120
    double v65;  // mm0
    double v66;  // mm7
    float *v67;  // edx
    double v68;  // mm0
    double v69;  // mm0
    double v70;  // mm7
    double v71;  // mm0
    float *v73;  // edx
    double v38;  // mm0
    double v74;  // mm0
    double v75;  // mm0
    double v76;  // mm7
    double v77;  // mm0
    double v78;  // mm0
    float *v79;  // edx
    float *v80;  // edx
    st_4cbff0_0 *v81;  // edx
    float *v82;  // eax
    float *v83;  // edx
    double v39;  // mm0
    unsigned int *v40;  // edx
    double v41;  // mm0
    unsigned int *v42;  // edx
    double v43;  // mm6
    float v0;  // [bp-0xec]
    float v1;  // [bp-0xe8]
    double v2;  // [bp-0xe4]
    float v3;  // [bp-0xd8]
    float v4;  // [bp-0xd4]
    float v5;  // [bp-0xd0]
    float v6;  // [bp-0xcc]
    float v7;  // [bp-0xc8]
    float v8;  // [bp-0xc4]
    float v9;  // [bp-0xc0]
    float v10;  // [bp-0xbc]
    float v11;  // [bp-0xb8]
    float v12;  // [bp-0xb4]
    float v13;  // [bp-0xb0]
    float v14;  // [bp-0xac]
    float v15;  // [bp-0xa4]
    float v16;  // [bp-0x94]
    float v17;  // [bp-0x90]
    float v18;  // [bp-0x8c]
    float v19;  // [bp-0x74]
    float v20;  // [bp-0x70]
    float v21;  // [bp-0x6c]
    float v22;  // [bp-0x48]
    float v23;  // [bp-0x44]
    float v24;  // [bp-0x40]
    float v25;  // [bp-0x3c]
    float v26;  // [bp-0x38]
    float v27;  // [bp-0x34]
    float v28;  // [bp-0x30]
    float v29;  // [bp-0x2c]
    float v30;  // [bp-0x28]
    float v31;  // [bp-0x24]
    float v32;  // [bp-0x20]
    float v33;  // [bp-0x1c]

    v34 = a1;
    v31 = *v34;
    v32 = v34[1];
    v33 = v34[2];
    v35 = a2;
    v23 = *v35;
    v24 = v35[1];
    v25 = v35[2];
    v36 = sub_48b900(a0, &v31, &v23, a3, a4, a5, a6);
    g_61692c(10.0f, 20.0f);
    v22 = (float)(v37 * 6.283185307179586 / 360.0);
    v2 = v22;
    sub_48aeb0(*(unsigned int *)&v2, *(unsigned int *)((void*)&v2 + 4));
    v38 = v2 * *(float *)&v36->field_2a8;
    v3 = (float)v38;
    sub_48a9e0(*(unsigned int *)&v2, *(unsigned int *)((void*)&v2 + 4));
    v39 = v38 * *(float *)&v36->field_2a8;
    v1 = (float)v39;
    sub_48a800(&v36->field_0->field_50);
    g_61692c(0xbf800000, 0x3f800000);
    v40 = &gpGlobals->field_40;
    v26 = (float)(v39 * gpGlobals->field_40);
    v41 = v39 * *(float *)&v40[2];
    v27 = (float)(v39 * *(float *)&v40[1]);
    v28 = (float)v41;
    g_61692c(0xbf800000, 0x3f800000);
    v42 = &gpGlobals->field_34;
    v43 = v41 * gpGlobals->field_34;
    v29 = (float)v43;
    v44 = v41 * *(float *)&v42[1];
    v30 = (float)v44;
    v31 = (float)(v41 * *(float *)&v42[2]);
    v23 = (float)(v43 + v26);
    v24 = (float)(v44 + v27);
    v25 = v28 + v31;
    *(float *)&v36->field_2dc = v23;
    *(float *)&v36->field_2e0 = v24;
    *(float *)&v36->field_2e4 = v25;
    v45 = &v36->field_2dc;
    v46 = *(float *)&v36->field_2dc;
    v47 = v46 * v46 + *(float *)&v36->field_2e0 * *(float *)&v36->field_2e0 + *(float *)&v36->field_2e4 * *(float *)&v36->field_2e4;
    v48 = sqrt(v47);
    if (isnan(v48))
        sub_487dc0(*(unsigned int *)&v47);
    else
        v47 = v48;
    v32 = (float)v47;
    v49 = v32;
    if (v49 == 0.0)
    {
        v26 = 0.0f;
        v27 = 0.0f;
        v28 = 1.0;
    }
    else
    {
        v50 = 1.0 / v49;
        v26 = (float)(v50 * *(float *)v45);
        v27 = (float)(v50 * *(float *)&v45[1]);
        v28 = (float)(v50 * *(float *)&v45[2]);
    }
    v23 = v3 * v26;
    v24 = v3 * v27;
    v25 = v3 * v28;
    *(float *)&v36->field_2dc = v23;
    *(float *)&v36->field_2e0 = v24;
    *(float *)&v36->field_2e4 = v25;
    v51 = a2;
    v52 = *v51;
    v53 = v52 * v52 + v51[1] * v51[1] + v51[2] * v51[2];
    v54 = sqrt(v53);
    if (isnan(v54))
        sub_487dc0(*(unsigned int *)&v53);
    else
        v53 = v54;
    v7 = (float)v53;
    v55 = v7;
    if (v55 == 0.0)
    {
        v12 = 0.0f;
        v13 = 0.0f;
        v14 = 1.0;
    }
    else
    {
        v56 = 1.0 / v55;
        v57 = a2;
        v12 = (float)(v56 * *v57);
        v13 = (float)(v56 * v57[1]);
        v14 = (float)(v56 * v57[2]);
    }
    v58 = 4096.0 * v12;
    v16 = (float)v58;
    v59 = 4096.0 * v13;
    v17 = (float)v59;
    v18 = (float)(4096.0 * v14);
    v60 = a1;
    v19 = (float)(v58 + *v60);
    v20 = (float)(v59 + v60[1]);
    v21 = v60[2] + v18;
    sub_487b80(&v36->field_0->field_8, &v19, 0, 0, &v23);
    v61 = &v36->field_0->field_8;
    v62 = v28 - *(float *)&v36->field_0->field_8;
    v4 = v62;
    v63 = v29 - *(float *)&v61[1];
    v5 = v63;
    v64 = v30 - *(float *)&v61[2];
    v6 = v64;
    v65 = v62 * v62 + v63 * v63 + v64 * v64;
    v66 = sqrt(v65);
    if (isnan(v66))
        sub_487dc0(*(unsigned int *)&v65);
    else
        v65 = v66;
    v0 = (float)v65;
    v67 = a2;
    v68 = *v67;
    v69 = v68 * v68 + v67[1] * v67[1] + v67[2] * v67[2];
    v70 = sqrt(v69);
    if (isnan(v70))
        sub_487dc0(*(unsigned int *)&v69);
    else
        v69 = v70;
    v10 = (float)v69;
    v22 = (float)(0.5 * v0 / v10);
    v22 = (float)(1.0 / v22);
    v71 = v22;
    v7 = (float)(v71 * *(float *)&v36->field_2dc);
    v8 = (float)(v71 * *(float *)&v36->field_2e0);
    v9 = (float)(v71 * *(float *)&v36->field_2e4);
    *(float *)&v36->field_2f4 = v7;
    *(float *)&v36->field_2f8 = v8;
    *(float *)&v36->field_2fc = v9;
    v36->field_c = _INSERT(v9, 0, 0) | 0xffff0000;
    v36->field_10 = &CurveThink__9CKiAttack;
    *(float *)&v36->field_0->field_104 = gpGlobals->field_0;
    v73 = a2;
    v74 = *v73;
    v75 = v74 * v74 + v73[1] * v73[1] + v73[2] * v73[2];
    v76 = sqrt(v75);
    if (isnan(v76))
        sub_487dc0(*(unsigned int *)&v75);
    else
        v75 = v76;
    v15 = (float)v75;
    v77 = v15;
    if (v77 == 0.0)
    {
        v10 = 0.0f;
        v11 = 0.0f;
        v12 = 1.0;
    }
    else
    {
        v78 = 1.0 / v77;
        v79 = a2;
        v10 = (float)(v78 * *v79);
        v11 = (float)(v78 * v79[1]);
        v12 = (float)(v78 * v79[2]);
    }
    v7 = v1 * v10;
    v8 = v1 * v11;
    v9 = v1 * v12;
    v80 = a2;
    *v80 = v7;
    v80[1] = v8;
    v80[2] = v9;
    v81 = v36->field_0;
    v82 = a2;
    v7 = *v82 + *(float *)&v36->field_2dc;
    v8 = v82[1] + *(float *)&v36->field_2e0;
    v9 = v82[2] + *(float *)&v36->field_2e4;
    *(float *)&v81->field_20 = v7;
    *(float *)&v81->field_24 = v8;
    *(float *)&v81->field_28 = v9;
    *(float *)&v36->field_300 = gpGlobals->field_0;
    v83 = a2;
    *(float *)&v36->field_2e8 = *v83;
    *(float *)&v36->field_2ec = v83[1];
    *(float *)&v36->field_2f0 = v83[2];
    return v36;
}

