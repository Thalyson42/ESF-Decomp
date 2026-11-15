// ShootAttack__8CRenzoku @0x10e960 size=1729
typedef struct st_50e960_1 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    float field_34;
    float field_38;
    float field_3c;
    float field_40;
    float field_44;
    float field_48;
} st_50e960_1;

typedef struct st_50e960_0 {
    unsigned int field_0;
} st_50e960_0;

extern st_50e960_0 *g_616928;
extern st_50e960_1 *gpGlobals;

double ShootAttack__8CRenzoku(float a0)
{
    unsigned int *v48;  // edx
    double v49;  // mm5
    double v58;  // mm7
    unsigned int *v59;  // edx
    double v60;  // mm5
    double v61;  // mm5
    double v62;  // mm7
    unsigned int *v63;  // edx
    double v64;  // mm5
    double v65;  // mm5
    unsigned int *v66;  // edx
    double v67;  // mm5
    double v50;  // mm5
    double v68;  // mm5
    unsigned int *v69;  // esi
    double v70;  // mm7
    double v71;  // mm6
    double v72;  // mm7
    double v73;  // mm5
    double v74;  // mm5
    unsigned int *v75;  // edx
    double v76;  // mm7
    unsigned int *v77;  // edx
    unsigned int *v51;  // esi
    double v78;  // mm5
    double v79;  // mm5
    double v80;  // mm7
    unsigned int *v81;  // edx
    double v82;  // mm5
    double v83;  // mm5
    double v52;  // mm7
    double v53;  // mm6
    double v54;  // mm7
    double v55;  // mm5
    double v56;  // mm5
    unsigned int *v57;  // edx
    unsigned int v0;  // [bp-0x160]
    unsigned int v1;  // [bp-0x15c]
    unsigned int v2;  // [bp-0x158]
    int v3;  // [bp-0x134]
    int v4;  // [bp-0x130]
    unsigned short v5;  // [bp-0x12c]
    unsigned short v6;  // [bp-0x12a]
    int v7;  // [bp-0x128]
    float v8;  // [bp-0x124]
    float v9;  // [bp-0x120]
    float v10;  // [bp-0x11c]
    float v11;  // [bp-0x118]
    float v12;  // [bp-0x114]
    float v13;  // [bp-0x110]
    float v14;  // [bp-0x10c]
    float v15;  // [bp-0x108]
    float v16;  // [bp-0x104]
    float v17;  // [bp-0x100]
    float v18;  // [bp-0xfc]
    float v19;  // [bp-0xf8]
    float v20;  // [bp-0xf4]
    float v21;  // [bp-0xf0]
    float v22;  // [bp-0xec]
    float v23;  // [bp-0xe8]
    float v24;  // [bp-0xe4]
    float v25;  // [bp-0xe0]
    float v26;  // [bp-0xdc]
    float v27;  // [bp-0xd0]
    float v28;  // [bp-0xc4]
    float v29;  // [bp-0xc0]
    float v30;  // [bp-0xbc]
    char v31;  // [bp-0xa4]
    float v32;  // [bp-0xa4]
    float v33;  // [bp-0xa0]
    float v34;  // [bp-0x9c]
    float v35;  // [bp-0x84]
    float v36;  // [bp-0x80]
    float v37;  // [bp-0x7c]
    float v38;  // [bp-0x64]
    float v39;  // [bp-0x60]
    float v40;  // [bp-0x5c]
    float v41;  // [bp-0x44]
    float v42;  // [bp-0x40]
    float v43;  // [bp-0x3c]
    float v44;  // [bp-0x24]
    float v45;  // [bp-0x20]
    float v46;  // [bp-0x1c]

    v4 = g_616928(0, 10);
    v3 = g_616928(0xfffffff6, 10);
    sub_48a800(*(int *)*(int *)(*(unsigned int *)&a0 + 128) + 116);
    if (*(int *)(*(unsigned int *)&a0 + 472))
    {
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 128) + 96) + 480))(&v31, *(int *)(*(unsigned int *)&a0 + 128));
        v48 = &gpGlobals->field_40;
        v49 = 10.0 * gpGlobals->field_40;
        v28 = (float)v49;
        v50 = 10.0 * *(float *)&v48[1];
        v29 = (float)v50;
        v30 = (float)(10.0 * *(float *)&v48[2]);
        v35 = (float)(v49 + v32);
        v36 = (float)(v50 + v33);
        v37 = v34 + v30;
        v51 = &gpGlobals->field_28;
        v52 = gpGlobals->field_28 * gpGlobals->field_28 + *(float *)&v51[1] * *(float *)&v51[1] + *(float *)&v51[2] * *(float *)&v51[2];
        v53 = sqrt(v52);
        if (isnan(v53))
            sub_487dc0(*(unsigned int *)&v52);
        else
            v52 = v53;
        v11 = (float)v52;
        if (v11 == 0.0f)
        {
            v16 = 0.0f;
            v17 = 0.0f;
            v18 = 1.0;
        }
        else
        {
            v54 = 1.0 / v11;
            v16 = (float)(v54 * *(float *)v51);
            v17 = (float)(v54 * *(float *)&v51[1]);
            v18 = (float)(v54 * *(float *)&v51[2]);
        }
        v55 = 5.0 * v16;
        v24 = (float)v55;
        v56 = 5.0 * v17;
        v25 = (float)v56;
        v26 = (float)(5.0 * v18);
        v38 = (float)(v55 + v35);
        v39 = (float)(v56 + v36);
        v40 = v37 + v26;
        v44 = v38;
        v45 = v39;
        v46 = v40;
        v57 = &gpGlobals->field_28;
        v14 = (float)(2000.0 * gpGlobals->field_28);
        v15 = (float)(2000.0 * *(float *)&v57[1]);
        v16 = (float)(2000.0 * *(float *)&v57[2]);
        v7 = -v4;
        v58 = (double)v7;
        v59 = &gpGlobals->field_40;
        v60 = v58 * gpGlobals->field_40;
        v17 = (float)v60;
        v61 = v58 * *(float *)&v59[1];
        v18 = (float)v61;
        v19 = (float)(v58 * *(float *)&v59[2]);
        v11 = (float)(v60 + v14);
        v12 = (float)(v61 + v15);
        v13 = v16 + v19;
        v62 = (double)v3;
        v63 = &gpGlobals->field_34;
        v64 = v62 * gpGlobals->field_34;
        v20 = (float)v64;
        v65 = v62 * *(float *)&v63[1];
        v21 = (float)v65;
        v22 = (float)(v62 * *(float *)&v63[2]);
        v8 = (float)(v64 + v11);
        v9 = (float)(v65 + v12);
        v10 = v13 + v22;
        v41 = v8;
        v42 = v9;
        v43 = v10;
        v1 = 5;
    }
    else
    {
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 128) + 96) + 480))(&v14, *(int *)(*(unsigned int *)&a0 + 128));
        v66 = &gpGlobals->field_40;
        v67 = -10.0 * gpGlobals->field_40;
        v17 = (float)v67;
        v68 = -10.0 * *(float *)&v66[1];
        v18 = (float)v68;
        v19 = (float)(-10.0 * *(float *)&v66[2]);
        v11 = (float)(v67 + v14);
        v12 = (float)(v68 + v15);
        v13 = v16 + v19;
        v69 = &gpGlobals->field_28;
        v70 = gpGlobals->field_28 * gpGlobals->field_28 + *(float *)&v69[1] * *(float *)&v69[1] + *(float *)&v69[2] * *(float *)&v69[2];
        v71 = sqrt(v70);
        if (isnan(v71))
            sub_487dc0(*(unsigned int *)&v70);
        else
            v70 = v71;
        v27 = (float)v70;
        if (v27 == 0.0f)
        {
            v23 = 0.0f;
            v24 = 0.0f;
            v25 = 1.0;
        }
        else
        {
            v72 = 1.0 / v27;
            v23 = (float)(v72 * *(float *)v69);
            v24 = (float)(v72 * *(float *)&v69[1]);
            v25 = (float)(v72 * *(float *)&v69[2]);
        }
        v73 = 5.0 * v23;
        v20 = (float)v73;
        v74 = 5.0 * v24;
        v21 = (float)v74;
        v22 = (float)(5.0 * v25);
        v8 = (float)(v73 + v11);
        v9 = (float)(v74 + v12);
        v10 = v13 + v22;
        v44 = v8;
        v45 = v9;
        v46 = v10;
        v75 = &gpGlobals->field_28;
        v14 = (float)(2000.0 * gpGlobals->field_28);
        v15 = (float)(2000.0 * *(float *)&v75[1]);
        v16 = (float)(2000.0 * *(float *)&v75[2]);
        v76 = (double)v4;
        v77 = &gpGlobals->field_40;
        v78 = v76 * gpGlobals->field_40;
        v17 = (float)v78;
        v79 = v76 * *(float *)&v77[1];
        v18 = (float)v79;
        v19 = (float)(v76 * *(float *)&v77[2]);
        v11 = (float)(v78 + v14);
        v12 = (float)(v79 + v15);
        v13 = v16 + v19;
        v80 = (double)v3;
        v81 = &gpGlobals->field_34;
        v82 = v80 * gpGlobals->field_34;
        v20 = (float)v82;
        v83 = v80 * *(float *)&v81[1];
        v21 = (float)v83;
        v22 = (float)(v80 * *(float *)&v81[2]);
        v8 = (float)(v82 + v11);
        v9 = (float)(v83 + v12);
        v10 = v13 + v22;
        v41 = v8;
        v42 = v9;
        v43 = v10;
        v1 = 6;
    }
    sub_48d680(*(int *)(*(unsigned int *)&a0 + 128));
    *(unsigned int *)(*(unsigned int *)&a0 + 472) = !*(int *)(*(unsigned int *)&a0 + 472);
    v8 = v44;
    v9 = v45;
    v10 = v46;
    v11 = v41;
    v12 = v42;
    v13 = v43;
    v2 = *(short *)(*(unsigned int *)&a0 + 480);
    v1 = *(short *)(*(unsigned int *)&a0 + 478);
    v0 = *(short *)(*(unsigned int *)&a0 + 476);
    sub_48aef0(a0);
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v7 = (int)(v13 * 5.0);
    sub_489210(*(int *)*(int *)(*(unsigned int *)&a0 + 128), &v8, &v11, v7);
    return v13 * 5.0;
}

