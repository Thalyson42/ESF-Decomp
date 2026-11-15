// GetWallJumpAnim__11CBasePlayerPcG6VectorT1 @0xf6350 size=1537
typedef struct st_4f6350_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[12];
    float field_40;
    float field_44;
    float field_48;
} st_4f6350_0;

extern st_4f6350_0 *gpGlobals;

int GetWallJumpAnim__11CBasePlayerPcG6VectorT1(unsigned int *a0, int a1, float *a2, int a3)
{
    unsigned int *v24;  // edx
    float v25;  // 128
    double v34;  // mm6
    double v35;  // mm7
    double v36;  // mm7
    double v37;  // mm6
    double v38;  // mm7
    double v39;  // mm7
    double v40;  // mm6
    double v41;  // mm7
    float v42;  // 112
    float v43;  // 112
    unsigned int *v26;  // edx
    float v44;  // 112
    double v45;  // mm7
    double v46;  // mm6
    int v47;  // eax
    float v48;  // 112
    float v49;  // 112
    float v50;  // 112
    double v51;  // mm7
    double v52;  // mm6
    float v53;  // 112
    double v27;  // mm7
    float v54;  // 112
    float v55;  // 112
    double v56;  // mm7
    double v57;  // mm6
    double v28;  // mm6
    double v29;  // mm7
    double v30;  // mm7
    double v31;  // mm6
    double v32;  // mm7
    double v33;  // mm7
    float v0;  // [bp-0xc4]
    float v1;  // [bp-0xc0]
    float v2;  // [bp-0xbc]
    float v3;  // [bp-0xb8]
    float v4;  // [bp-0xb4]
    float v5;  // [bp-0xb0]
    float v6;  // [bp-0xac]
    float v7;  // [bp-0xa8]
    float v8;  // [bp-0xa4]
    float v9;  // [bp-0xa0]
    float v10;  // [bp-0x9c]
    float v11;  // [bp-0x94]
    float v12;  // [bp-0x84]
    float v13;  // [bp-0x80]
    float v14;  // [bp-0x7c]
    float v15;  // [bp-0x64]
    float v16;  // [bp-0x60]
    float v17;  // [bp-0x5c]
    float v18;  // [bp-0x44]
    float v19;  // [bp-0x40]
    float v20;  // [bp-0x3c]
    float v21;  // [bp-0x24]
    float v22;  // [bp-0x20]
    float v23;  // [bp-0x1c]

    sub_48e110(a3, a1);
    sub_48a800(*a0 + 80);
    v24 = &gpGlobals->field_28;
    v25 = gpGlobals->field_28;
    v21 = v25;
    v22 = *(float *)&v24[1];
    v23 = *(float *)&v24[2];
    v18 = (float)(-1.0 * v25);
    v19 = (float)(-1.0 * v22);
    v20 = (float)(-1.0 * v23);
    v26 = &gpGlobals->field_40;
    v15 = gpGlobals->field_40;
    v16 = *(float *)&v26[1];
    v17 = *(float *)&v26[2];
    v12 = (float)(-1.0 * v15);
    v13 = (float)(-1.0 * v16);
    a2[2] = 0.0f;
    v14 = 0.0f;
    v17 = 0.0f;
    v20 = 0.0f;
    v23 = 0.0f;
    v27 = 0.0 + v25 * v21 + v22 * v22;
    v28 = sqrt(v27);
    if (isnan(v28))
        sub_487dc0(*(unsigned int *)&v27);
    else
        v27 = v28;
    v3 = (float)v27;
    if (v3 == 0.0f)
    {
        v8 = 0.0f;
        v9 = 0.0f;
        v10 = 1.0;
    }
    else
    {
        v29 = 1.0 / v3;
        v8 = (float)(v29 * v21);
        v9 = (float)(v29 * v22);
        v10 = (float)(v29 * v23);
    }
    v21 = v8;
    v22 = v9;
    v23 = v10;
    v30 = v18 * v18 + v19 * v19 + v20 * v20;
    v31 = sqrt(v30);
    if (isnan(v31))
        sub_487dc0(*(unsigned int *)&v30);
    else
        v30 = v31;
    v6 = (float)v30;
    if (v6 == 0.0f)
    {
        v0 = 0.0f;
        v1 = 0.0f;
        v2 = 1.0;
    }
    else
    {
        v32 = 1.0 / v6;
        v0 = (float)(v32 * v18);
        v1 = (float)(v32 * v19);
        v2 = (float)(v32 * v20);
    }
    v18 = v0;
    v19 = v1;
    v20 = v2;
    v33 = v15 * v15 + v16 * v16 + v17 * v17;
    v34 = sqrt(v33);
    if (isnan(v34))
        sub_487dc0(*(unsigned int *)&v33);
    else
        v33 = v34;
    v6 = (float)v33;
    if (v6 == 0.0f)
    {
        v0 = 0.0f;
        v1 = 0.0f;
        v2 = 1.0;
    }
    else
    {
        v35 = 1.0 / v6;
        v0 = (float)(v35 * v15);
        v1 = (float)(v35 * v16);
        v2 = (float)(v35 * v17);
    }
    v15 = v0;
    v16 = v1;
    v17 = v2;
    v36 = v12 * v12 + v13 * v13 + v14 * v14;
    v37 = sqrt(v36);
    if (isnan(v37))
        sub_487dc0(*(unsigned int *)&v36);
    else
        v36 = v37;
    v6 = (float)v36;
    if (v6 == 0.0f)
    {
        v0 = 0.0f;
        v1 = 0.0f;
        v2 = 1.0;
    }
    else
    {
        v38 = 1.0 / v6;
        v0 = (float)(v38 * v12);
        v1 = (float)(v38 * v13);
        v2 = (float)(v38 * v14);
    }
    v12 = v0;
    v13 = v1;
    v14 = v2;
    v39 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v40 = sqrt(v39);
    if (isnan(v40))
        sub_487dc0(*(unsigned int *)&v39);
    else
        v39 = v40;
    v6 = (float)v39;
    if (v6 == 0.0f)
    {
        v0 = 0.0f;
        v1 = 0.0f;
        v2 = 1.0;
    }
    else
    {
        v41 = 1.0 / v6;
        v0 = (float)(v41 * *a2);
        v1 = (float)(v41 * a2[1]);
        v2 = (float)(v41 * a2[2]);
    }
    *a2 = v0;
    a2[1] = v1;
    a2[2] = v2;
    v42 = v21 - *a2;
    v0 = v42;
    v43 = v22 - a2[1];
    v1 = v43;
    v44 = v23 - a2[2];
    v2 = v44;
    v45 = v42 * v42 + v43 * v43 + v44 * v44;
    v46 = sqrt(v45);
    if (isnan(v46))
        sub_487dc0(*(unsigned int *)&v45);
    else
        v45 = v46;
    v6 = (float)v45;
    if (v6 <= 0.8)
    {
        v47 = "back";
    }
    else
    {
        v48 = v15 - *a2;
        v3 = v48;
        v49 = v16 - a2[1];
        v4 = v49;
        v50 = v17 - a2[2];
        v5 = v50;
        v51 = v48 * v48 + v49 * v49 + v50 * v50;
        v52 = sqrt(v51);
        if (isnan(v52))
            sub_487dc0(*(unsigned int *)&v51);
        else
            v51 = v52;
        v9 = (float)v51;
        if (v9 <= 0.8)
        {
            v47 = "left";
        }
        else
        {
            v53 = v12 - *a2;
            v6 = v53;
            v54 = v13 - a2[1];
            v7 = v54;
            v55 = v14 - a2[2];
            v8 = v55;
            v56 = v53 * v53 + v54 * v54 + v55 * v55;
            v57 = sqrt(v56);
            if (isnan(v57))
                sub_487dc0(*(unsigned int *)&v56);
            else
                v56 = v57;
            v11 = (float)v56;
            if (v11 > 0.8)
                return sub_48c150(a3, "forward");
            v47 = "right";
        }
    }
    return sub_48c150(a3, v47);
}

