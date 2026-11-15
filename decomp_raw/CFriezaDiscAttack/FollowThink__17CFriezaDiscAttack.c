// FollowThink__17CFriezaDiscAttack @0xc0540 size=1536
typedef struct st_4c0540_4 {
    char padding_0[12];
    unsigned int field_c;
    unsigned int field_10;
} st_4c0540_4;

typedef struct st_4c0540_6 {
    char padding_0[24];
    unsigned int field_18;
} st_4c0540_6;

typedef struct st_4c0540_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[96];
    char field_74;
    char padding_75[255];
    float field_174;
    float field_178;
    float field_17c;
} st_4c0540_0;

typedef struct st_4c0540_5 {
    char padding_0[8];
    char field_8;
    char padding_9[23];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[364];
    unsigned int field_198;
} st_4c0540_5;

typedef struct st_4c0540_3 {
    struct st_4c0540_2 *field_0;
    char padding_4[676];
    float field_2a8;
} st_4c0540_3;

typedef struct st_4c0540_2 {
    char padding_0[32];
    char field_20;
    char padding_21[47];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
} st_4c0540_2;

typedef struct st_4c0540_1 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4c0540_1;

extern char NormalThink__12CMagicAttack;
extern st_4c0540_1 *gpGlobals;

double FollowThink__17CFriezaDiscAttack(float a0)
{
    st_4c0540_5 *v41;  // edx
    unsigned int *v42;  // eax
    unsigned int *v51;  // edx
    st_4c0540_6 *v52;  // edx
    float v53;  // 112
    float v54;  // 112
    float v55;  // 112
    double v56;  // mm7
    double v57;  // mm6
    double v58;  // mm7
    double v59;  // mm6
    double v60;  // mm7
    st_4c0540_0 *v43;  // esi
    unsigned int *v61;  // edx
    float v62;  // 128
    st_4c0540_5 *v63;  // edi
    unsigned int *v64;  // esi
    double v65;  // mm7
    double v66;  // mm6
    double v67;  // mm7
    st_4c0540_3 *v68;  // edx
    float v69;  // 128
    double v70;  // mm4
    unsigned int *v44;  // eax
    double v71;  // mm4
    st_4c0540_2 *v72;  // esi
    st_4c0540_4 *v74;  // ecx
    double v75;  // mm7
    unsigned int *v45;  // edx
    double v46;  // mm5
    double v47;  // mm5
    unsigned int *v48;  // edx
    double v49;  // mm5
    double v50;  // mm5
    float v0;  // [bp-0x13c]
    float v1;  // [bp-0x138]
    float v2;  // [bp-0x124]
    float v3;  // [bp-0x120]
    float v4;  // [bp-0x11c]
    float v5;  // [bp-0x118]
    float v6;  // [bp-0x104]
    float v7;  // [bp-0x100]
    float v8;  // [bp-0xfc]
    float v9;  // [bp-0xf8]
    float v10;  // [bp-0xf4]
    float v11;  // [bp-0xf0]
    float v12;  // [bp-0xe4]
    float v13;  // [bp-0xe0]
    float v14;  // [bp-0xdc]
    float v15;  // [bp-0xd8]
    float v16;  // [bp-0xd4]
    float v17;  // [bp-0xd0]
    float v18;  // [bp-0xcc]
    float v19;  // [bp-0xc8]
    float v20;  // [bp-0xc4]
    float v21;  // [bp-0xc0]
    float v22;  // [bp-0xbc]
    float v23;  // [bp-0xb8]
    float v24;  // [bp-0xb4]
    float v25;  // [bp-0xb0]
    float v26;  // [bp-0xac]
    char v27;  // [bp-0xa4]
    float v28;  // [bp-0x90]
    float v29;  // [bp-0x8c]
    float v30;  // [bp-0x88]
    float v31;  // [bp-0x64]
    float v32;  // [bp-0x60]
    float v33;  // [bp-0x5c]
    float v34;  // [bp-0x44]
    float v35;  // [bp-0x40]
    float v36;  // [bp-0x3c]
    unsigned int v37;  // [bp-0x24]
    unsigned int v38;  // [bp-0x20]
    unsigned int v39;  // [bp-0x1c]

    v41 = *(int *)a0;
    if (v41->field_198)
    {
        v42 = &v41->field_20;
        *(float *)&v37 = *(float *)&v41->field_20;
        *(float *)&v38 = *(float *)&v42[1];
        *(float *)&v39 = *(float *)&v42[2];
        v43 = (!v41->field_198 ? NULL : v41->field_198 + 128);
        sub_48a800(&v43->field_74);
        v44 = &v43->field_8;
        v34 = v43->field_8 + v43->field_174;
        v35 = *(float *)&v44[1] + v43->field_178;
        v36 = *(float *)&v44[2] + v43->field_17c;
        v45 = &gpGlobals->field_28;
        v31 = gpGlobals->field_28;
        v32 = *(float *)&v45[1];
        v33 = *(float *)&v45[2];
        v46 = 8192.0 * v31;
        v12 = (float)v46;
        v47 = 8192.0 * v32;
        v13 = (float)v47;
        v14 = (float)(8192.0 * v33);
        v20 = (float)(v46 + v34);
        v21 = (float)(v47 + v35);
        v22 = v36 + v14;
        sub_487b80(&v34, &v20, 0, *(int *)(*(int *)a0 + 408), &v27);
        v48 = &gpGlobals->field_28;
        v49 = 10.0 * gpGlobals->field_28;
        v15 = (float)v49;
        v50 = 10.0 * *(float *)&v48[1];
        v16 = (float)v50;
        v17 = (float)(10.0 * *(float *)&v48[2]);
        v12 = (float)(v28 - v49);
        v13 = (float)(v29 - v50);
        v14 = v30 - v17;
        v28 = v12;
        v29 = v13;
        v30 = v14;
        sub_488e40(*(int *)a0 + 80);
        v51 = &gpGlobals->field_28;
        v12 = gpGlobals->field_28;
        v13 = *(float *)&v51[1];
        v14 = *(float *)&v51[2];
        v0 = 4096.0f;
        v52 = *(int *)a0 + 8;
        v53 = v28 - *(float *)(*(int *)a0 + 8);
        v15 = v53;
        v54 = v29 - *(float *)&v52->padding_0[4];
        v16 = v54;
        v55 = v30 - *(float *)&v52->padding_0[8];
        v17 = v55;
        v56 = v53 * v53 + v54 * v54 + v55 * v55;
        v57 = sqrt(v56);
        if (isnan(v57))
            sub_487dc0(*(unsigned int *)&v56);
        else
            v56 = v57;
        v1 = (float)v56;
        v58 = v15 * v15 + v16 * v16 + v17 * v17;
        v59 = sqrt(v58);
        if (isnan(v59))
            sub_487dc0(*(unsigned int *)&v58);
        else
            v58 = v59;
        v9 = (float)v58;
        if (v9 == 0.0f)
        {
            v18 = 0.0f;
            v19 = 0.0f;
            v20 = 1.0;
        }
        else
        {
            v60 = 1.0 / v9;
            v18 = (float)(v60 * v15);
            v19 = (float)(v60 * v16);
            v20 = (float)(v60 * v17);
        }
        v15 = v18;
        v16 = v19;
        v17 = v20;
        v61 = &gpGlobals->field_28;
        v62 = gpGlobals->field_28 * v15 + *(float *)&v61[1] * v16 + *(float *)&v61[2] * v17;
        if (0.0 < v62 && (1.0 - v62) * v1 < v0)
        {
            v12 = v15;
            v13 = v16;
            v14 = v17;
        }
        v63 = *(int *)a0;
        v64 = &v63->field_20;
        v65 = *(float *)&v63->field_20 * *(float *)&v63->field_20 + *(float *)&v64[1] * *(float *)&v64[1] + *(float *)&v64[2] * *(float *)&v64[2];
        v66 = sqrt(v65);
        if (isnan(v66))
            sub_487dc0(*(unsigned int *)&v65);
        else
            v65 = v66;
        v5 = (float)v65;
        if (v5 == 0.0f)
        {
            v21 = 0.0f;
            v22 = 0.0f;
            v23 = 1.0;
        }
        else
        {
            v67 = 1.0 / v5;
            v21 = (float)(v67 * *(float *)v64);
            v22 = (float)(v67 * *(float *)&v64[1]);
            v23 = (float)(v67 * *(float *)&v64[2]);
        }
        v18 = (float)(0.800000011920929 * v21);
        v19 = (float)(0.800000011920929 * v22);
        v20 = (float)(0.800000011920929 * v23);
        v68 = (st_4c0540_3 *)a0;
        v69 = v68->field_2a8;
        v9 = v69 * v18;
        v10 = v69 * v19;
        v11 = v69 * v20;
        v2 = v69 * v12;
        v3 = v69 * v13;
        v4 = v69 * v14;
        v70 = 0.20000000298023224 * v2;
        v24 = (float)v70;
        v71 = 0.20000000298023224 * v3;
        v25 = (float)v71;
        v26 = (float)(0.20000000298023224 * v4);
        v6 = (float)(v70 + v9);
        v7 = (float)(v71 + v10);
        v8 = v11 + v26;
        *(float *)&v63->field_20 = v6;
        *(float *)&v63->field_24 = v7;
        *(float *)&v63->field_28 = v8;
        v72 = v68->field_0;
        sub_488860(&v9, &v72->field_20);
        *(float *)&v72->field_50 = v9;
        *(float *)&v72->field_54 = v10;
        *(float *)&v72->field_58 = v11;
    }
    else
    {
        v74 = (st_4c0540_4 *)a0;
        v74->field_c = _INSERT(a0, 0, 0) | 0xffff0000;
        v74->field_10 = &NormalThink__12CMagicAttack;
    }
    sub_487d50(a0);
    if (!(*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 156))(a0))
        sub_48c880(a0);
    v75 = 0.3 + gpGlobals->field_0;
    *(float *)(*(int *)a0 + 260) = (float)v75;
    return v75;
}

