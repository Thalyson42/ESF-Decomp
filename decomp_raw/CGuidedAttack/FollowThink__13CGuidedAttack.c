// FollowThink__13CGuidedAttack @0xc7310 size=1240
typedef struct st_4c7310_3 {
    char padding_0[24];
    unsigned int field_18;
} st_4c7310_3;

typedef struct st_4c7310_0 {
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
} st_4c7310_0;

typedef struct st_4c7310_2 {
    char padding_0[8];
    char field_8;
    char padding_9[23];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[364];
    unsigned int field_198;
} st_4c7310_2;

typedef struct st_4c7310_1 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4c7310_1;

extern char NormalThink__12CMagicAttack;
extern st_4c7310_1 *gpGlobals;

double FollowThink__13CGuidedAttack(float idx)
{
    st_4c7310_2 *v41;  // edx
    unsigned int *v42;  // eax
    float v51;  // 112
    double v52;  // mm7
    double v53;  // mm6
    double v54;  // mm7
    st_4c7310_2 *v55;  // edx
    unsigned int *v56;  // esi
    double v57;  // mm7
    double v58;  // mm6
    double v59;  // mm7
    float v60;  // 128
    st_4c7310_0 *v43;  // esi
    unsigned int v61;  // 128
    double v62;  // mm7
    double v63;  // mm6
    double v64;  // mm7
    unsigned int v65;  // 128
    unsigned int v66;  // 128
    st_4c7310_2 *v67;  // esi
    double v69;  // mm7
    unsigned int *v44;  // eax
    unsigned int *v45;  // edx
    double v46;  // mm5
    double v47;  // mm5
    st_4c7310_3 *v48;  // edx
    float v49;  // 112
    float v50;  // 112
    st_4c7310_2 *v0;  // [bp-0x158]
    float v1;  // [bp-0x148]
    float v2;  // [bp-0x134]
    float v3;  // [bp-0x130]
    float v4;  // [bp-0x12c]
    float v5;  // [bp-0x114]
    float v6;  // [bp-0x110]
    float v7;  // [bp-0x10c]
    float v8;  // [bp-0x108]
    float v9;  // [bp-0x104]
    float v10;  // [bp-0x100]
    float v11;  // [bp-0xe8]
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

    v41 = *(int *)idx;
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
        sub_487b80(&v34, &v20, 0, *(int *)(*(int *)idx + 408), &v27);
        v48 = *(int *)idx + 8;
        v49 = v28 - *(float *)(*(int *)idx + 8);
        v12 = v49;
        v50 = v29 - *(float *)&v48->padding_0[4];
        v13 = v50;
        v51 = v30 - *(float *)&v48->padding_0[8];
        v14 = v51;
        v52 = v49 * v49 + v50 * v50 + v51 * v51;
        v53 = sqrt(v52);
        if (isnan(v53))
            sub_487dc0(*(unsigned int *)&v52);
        else
            v52 = v53;
        v18 = (float)v52;
        v54 = v18;
        if (*(float *)(*(unsigned int *)&idx + 680) * 0.05 < v54)
        {
            v55 = *(int *)idx;
            v0 = v55;
            v56 = &v55->field_20;
            v57 = *(float *)&v55->field_20 * *(float *)&v55->field_20 + *(float *)&v56[1] * *(float *)&v56[1] + *(float *)&v56[2] * *(float *)&v56[2];
            v58 = sqrt(v57);
            if (isnan(v58))
                sub_487dc0(*(unsigned int *)&v57);
            else
                v57 = v58;
            v8 = (float)v57;
            if (v8 == 0.0f)
            {
                v24 = 0.0f;
                v25 = 0.0f;
                v26 = 1.0;
            }
            else
            {
                v59 = 1.0 / v8;
                v24 = (float)(v59 * *(float *)v56);
                v25 = (float)(v59 * *(float *)&v56[1]);
                v26 = (float)(v59 * *(float *)&v56[2]);
            }
            v11 = (float)(1.0 - *(float *)(*(unsigned int *)&idx + 736));
            v60 = v11;
            v21 = v60 * v24;
            v22 = v60 * v25;
            v23 = v60 * v26;
            v61 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 680);
            v18 = __int_as_float(v61) * v21;
            v19 = __int_as_float(v61) * v22;
            v20 = __int_as_float(v61) * v23;
            v62 = v12 * v12 + v13 * v13 + v14 * v14;
            v63 = sqrt(v62);
            if (isnan(v63))
                sub_487dc0(*(unsigned int *)&v62);
            else
                v62 = v63;
            v1 = (float)v62;
            if (v1 == 0.0f)
            {
                v2 = 0.0f;
                v3 = 0.0f;
                v4 = 1.0;
            }
            else
            {
                v64 = 1.0 / v1;
                v2 = (float)(v64 * v12);
                v3 = (float)(v64 * v13);
                v4 = (float)(v64 * v14);
            }
            v65 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 680);
            v8 = __int_as_float(v65) * v2;
            v9 = __int_as_float(v65) * v3;
            v10 = __int_as_float(v65) * v4;
            v66 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 736);
            v5 = __int_as_float(v66) * v8;
            v6 = __int_as_float(v66) * v9;
            v7 = __int_as_float(v66) * v10;
            v54 = v20 + v7;
            v15 = v5 + v18;
            v16 = v6 + v19;
            v17 = (float)v54;
            *(float *)&v0->field_20 = v15;
            *(float *)&v0->field_24 = v16;
            *(float *)&v0->field_28 = v17;
            v67 = *(int *)idx;
            sub_488860(&v8, &v67->field_20);
            *(float *)&v67->padding_2c[36] = v8;
            *(float *)&v67->padding_2c[40] = v9;
            *(float *)&v67->padding_2c[44] = v10;
        }
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(0, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &NormalThink__12CMagicAttack;
    }
    sub_487d50(idx);
    if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 156))(idx))
    {
        v69 = 0.05 + gpGlobals->field_0;
        *(float *)(*(int *)idx + 260) = (float)v69;
        return v69;
    }
    sub_488520(idx);
    return v54;
}

