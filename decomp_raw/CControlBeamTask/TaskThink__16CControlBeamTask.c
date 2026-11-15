// TaskThink__16CControlBeamTask @0x150e70 size=2433
typedef struct st_550e70_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_550e70_1;

typedef struct st_550e70_5 {
    char padding_0[4];
    unsigned int field_4;
    struct st_550e70_2 *field_8;
    struct st_550e70_4 *field_c;
    char padding_10[8];
    float field_18;
    char field_1c;
} st_550e70_5;

typedef struct st_550e70_9 {
    char padding_0[364];
    struct st_550e70_10 *field_16c;
} st_550e70_9;

typedef struct st_550e70_11 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[365];
    char field_179;
} st_550e70_11;

typedef struct st_550e70_3 {
    struct st_550e70_1 *field_0;
} st_550e70_3;

typedef struct st_550e70_10 {
    unsigned int field_0;
} st_550e70_10;

typedef struct st_550e70_2 {
    struct st_550e70_1 *field_0;
    char padding_4[824];
    unsigned int field_33c;
    char padding_340[1728];
    struct st_550e70_0 *field_a00;
    char padding_a04[176];
    float field_ab4;
    char padding_ab8[92];
    char field_b14;
    char padding_b15[87];
    struct st_550e70_3 *field_b6c;
    char padding_b70[160];
    float field_c10;
    float field_c14;
    unsigned int field_c18;
    char padding_c1c[1100];
    unsigned int field_1068;
} st_550e70_2;

typedef struct st_550e70_4 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[365];
    char field_201;
} st_550e70_4;

typedef struct st_550e70_8 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[60];
    char field_50;
    char padding_51[399];
    float field_1e0;
    char padding_1e4[36];
    int field_208;
} st_550e70_8;

typedef struct st_550e70_6 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    int field_208;
} st_550e70_6;

typedef struct st_550e70_0 {
    char padding_0[56];
    float field_38;
} st_550e70_0;

typedef struct st_550e70_7 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_550e70_7;

extern st_550e70_9 g_engfuncs;
extern st_550e70_10 *g_616928;
extern st_550e70_10 *g_61692c;
extern st_550e70_7 *gpGlobals;

double TaskThink__16CControlBeamTask(st_550e70_5 *a0)
{
    double v32;  // mm7
    st_550e70_6 **v33;  // esi
    double v42;  // mm6
    unsigned int *v43;  // edx
    float v44;  // 112
    float v45;  // 112
    float v46;  // 112
    double v47;  // mm7
    double v48;  // mm6
    st_550e70_11 *v49;  // edx
    float v50;  // 112
    float v51;  // 112
    unsigned int *v34;  // edx
    float v52;  // 112
    double v53;  // mm7
    double v54;  // mm6
    st_550e70_2 *v55;  // esi
    unsigned int *v56;  // edx
    st_550e70_8 **v57;  // esi
    unsigned int *v58;  // edx
    unsigned int *v59;  // edx
    float v60;  // 112
    float v61;  // 112
    unsigned int *v35;  // edx
    float v62;  // 112
    double v63;  // mm7
    double v64;  // mm6
    unsigned int *v65;  // edx
    unsigned int *v66;  // edx
    double v67;  // mm5
    double v68;  // mm5
    unsigned int *v69;  // eax
    double v70;  // mm7
    double v71;  // mm7
    st_550e70_2 *v36;  // esi
    unsigned int *v72;  // eax
    double v73;  // mm7
    unsigned int *v37;  // edx
    float v38;  // 112
    float v39;  // 112
    float v40;  // 112
    double v41;  // mm7
    float v0;  // [bp-0xf8]
    float v1;  // [bp-0xf4]
    char *v2;  // [bp-0xe8], Other Possible Types: int
    st_550e70_9 *v3;  // [bp-0xc8]
    st_550e70_9 *v4;  // [bp-0xc4]
    double v5;  // [bp-0xc0]
    float v6;  // [bp-0xbc]
    st_550e70_1 **v7;  // [bp-0xb8]
    float v8;  // [bp-0xb4]
    float v9;  // [bp-0xb0]
    float v10;  // [bp-0xac]
    float v11;  // [bp-0xa8]
    float v12;  // [bp-0xa4]
    float v13;  // [bp-0xa0]
    double v14;  // [bp-0x9c], Other Possible Types: float
    float v15;  // [bp-0x98]
    char v16;  // [bp-0x94]
    float v17;  // [bp-0x94]
    float v18;  // [bp-0x90]
    float v19;  // [bp-0x8c]
    float v20;  // [bp-0x88]
    float v21;  // [bp-0x84]
    float v22;  // [bp-0x80]
    float v23;  // [bp-0x7c]
    float v24;  // [bp-0x78]
    float v25;  // [bp-0x74]
    float v26;  // [bp-0x70]
    float v27;  // [bp-0x6c]
    float v28;  // [bp-0x54]
    float v29;  // [bp-0x50]
    float v30;  // [bp-0x4c]
    float v31;  // [bp-0x8]

    a0->field_8->field_ab4 = (float)(1.5 + gpGlobals->field_0);
    if (a0->field_8->field_33c || !(v32 = a0->field_18 - gpGlobals->field_0, v32 <= 9.5))
    {
        v32 = a0->field_18;
        if (v32 < gpGlobals->field_0)
        {
LABEL_5517d3:
            a0->field_c->field_201 = a0->field_c->field_201 | 8;
        }
        else if ((char)sub_489f70(a0->field_8, a0->field_8->field_b6c))
        {
            v7 = sub_489660(a0->field_8);
            if (v7)
            {
                v33 = sub_489660(a0->field_8->field_b6c);
                v34 = &*v7->field_8;
                v28 = *v7->field_8;
                v29 = *(float *)&v34[1];
                v30 = *(float *)&v34[2];
                if (v33 && ((char)sub_48ccf0(*v33->field_208) || (char)sub_48ab40(*v33->field_208)) && (char)sub_489330(v7, v33))
                {
                    v35 = &*v33->field_8;
                    v25 = *v33->field_8;
                    v26 = *(float *)&v35[1];
                    v27 = *(float *)&v35[2];
                    v36 = a0->field_8;
                    v8 = *v33->field_8;
                    v9 = *(float *)&v35[1];
                    v10 = *(float *)&v35[2];
                    sub_48a170(&v16, v36, &v8);
                    v36->field_c10 = v17;
                    v36->field_c14 = v18;
                    *(float *)&v36->field_c18 = v19;
                    a0->field_1c = 1;
                    return v10;
                }
                v8 = v28;
                v9 = v29;
                v10 = v30;
                v37 = &a0->field_8->field_0->field_8;
                v38 = v8 - a0->field_8->field_0->field_8;
                v20 = v38;
                v39 = v9 - *(float *)&v37[1];
                v21 = v39;
                v40 = v10 - *(float *)&v37[2];
                v22 = v40;
                v41 = v38 * v38 + v39 * v39 + v40 * v40;
                v42 = sqrt(v41);
                if (isnan(v42))
                    sub_487dc0(*(unsigned int *)&v41);
                else
                    v41 = v42;
                v6 = (float)v41;
                v43 = *(int *)a0->field_8->field_b6c + 8;
                v44 = v28 - *(float *)(*(int *)a0->field_8->field_b6c + 8);
                v8 = v44;
                v45 = v29 - *(float *)&v43[1];
                v9 = v45;
                v46 = v30 - *(float *)&v43[2];
                v10 = v46;
                v47 = v44 * v44 + v45 * v45 + v46 * v46;
                v48 = sqrt(v47);
                if (isnan(v48))
                    sub_487dc0(*(unsigned int *)&v47);
                else
                    v47 = v48;
                v14 = (float)v47;
                v32 = v14;
                if (a0->field_8->field_b14)
                {
                    if (v32 > a0->field_8->field_a00->field_38)
                        goto LABEL_55113f;
                    goto LABEL_5517d3;
                }
                else
                {
LABEL_55113f:
                    v49 = &a0->field_c->field_88;
                    v8 = a0->field_c->field_88;
                    v9 = *(float *)&v49->field_4;
                    v10 = *(float *)&v49->field_8;
                    v11 = v28;
                    v12 = v29;
                    v13 = v30;
                    v50 = v11 - v8;
                    v23 = v50;
                    v51 = v12 - v9;
                    v24 = v51;
                    v52 = v13 - v10;
                    v25 = v52;
                    v53 = v50 * v50 + v51 * v51 + v52 * v52;
                    v54 = sqrt(v53);
                    if (isnan(v54))
                        sub_487dc0(*(unsigned int *)&v53);
                    else
                        v53 = v54;
                    v18 = (float)v53;
                    v32 = v18;
                    if (v6 - 500.0 <= v32)
                    {
                        if (v6 - 100.0 >= v32)
                        {
                            v55 = a0->field_8;
                            v56 = *(int *)v55->field_b6c + 8;
                            v8 = *(float *)(*(int *)v55->field_b6c + 8);
                            v9 = *(float *)&v56[1];
                            v10 = *(float *)&v56[2];
                            v11 = *(float *)(*(int *)v55->field_b6c + 8);
                            v12 = *(float *)&v56[1];
                            v13 = *(float *)&v56[2];
                            sub_48a170(&v20, v55, &v11);
                            v55->field_c10 = v20;
                            v55->field_c14 = v21;
                            *(float *)&v55->field_c18 = v22;
                            return v13;
                        }
                        sub_48b720(a0->field_8, a0->field_8->field_b6c);
                        return v32;
                    }
                    goto LABEL_5517d3;
                }
            }
            else
            {
                v32 = a0->field_18 - gpGlobals->field_0;
                if (v32 >= 9.0)
                {
                    sub_48b720(a0->field_8, a0->field_8->field_b6c);
                    return v32;
                }
            }
        }
        else
        {
            v57 = sub_489660(a0->field_8);
            if (!v57)
                goto LABEL_5517d3;
            v5 = (float)(12.0 * *v57->field_1e0);
            v58 = &*v57->field_8;
            v8 = *v57->field_8;
            v9 = *(float *)&v58[1];
            v10 = *(float *)&v58[2];
            v59 = &a0->field_8->field_0->field_8;
            v60 = v8 - a0->field_8->field_0->field_8;
            v20 = v60;
            v61 = v9 - *(float *)&v59[1];
            v21 = v61;
            v62 = v10 - *(float *)&v59[2];
            v22 = v62;
            v63 = v60 * v60 + v61 * v61 + v62 * v62;
            v64 = sqrt(v63);
            if (isnan(v64))
                sub_487dc0(*(unsigned int *)&v63);
            else
                v63 = v64;
            v14 = (float)v63;
            if (v14 >= v5)
                return v14;
            sub_48a800(&*v57->field_50);
            v65 = &*v57->field_8;
            v8 = *v57->field_8;
            v9 = *(float *)&v65[1];
            v10 = *(float *)&v65[2];
            v66 = &gpGlobals->field_28;
            v67 = 800.0 * gpGlobals->field_28;
            v14 = (float)v67;
            v68 = 800.0 * *(float *)&v66[1];
            v15 = (float)v68;
            v17 = (float)(800.0 * *(float *)&v66[2]);
            v11 = (float)(v67 + v8);
            v12 = (float)(v68 + v9);
            v13 = v10 + v17;
            v2 = &v14;
            sub_488460(&v8, &v11, 1, 1, *v57->field_208, v2);
            v32 = 800.0;
            v31 = (float)(800.0 * v19);
            if (v31 >= 800.0f)
                return 800.0;
            *(unsigned short *)&v2 = 1;
            if ((char)sub_48dc80(a0->field_8, v2))
            {
                a0->field_8->field_1068 = 22;
            }
            else
            {
                v4 = &g_engfuncs.padding_0[0];
                if (!g_616928(0, 1))
                {
                    if (!(char)sub_487c70(*v57->field_208, 2, 800.0f))
                    {
                        v1 = 50.0f;
                        v0 = 40.0f;
                        v69 = v4->field_16c;
LABEL_551630:
                        v69(v0, v1);
                        v70 = 40.0 + a0->field_8->field_c14;
                    }
                    else
                    {
                        if ((char)sub_487c70(*v57->field_208, 4, 800.0f))
                            goto LABEL_551654;
LABEL_5515a6:
                        g_61692c(40.0f, 50.0f);
                        v70 = a0->field_8->field_c14 - 40.0;
                    }
                    sub_48d430((float)v70);
                    a0->field_8->field_c14 = (float)v70;
                    return v70;
                }
                if (!(char)sub_487c70(*v57->field_208, 4, 800.0f))
                    goto LABEL_5515a6;
                if (!(char)sub_487c70(*v57->field_208, 2, 800.0f))
                {
                    v1 = 50.0f;
                    v0 = 40.0f;
                    v69 = g_61692c;
                    goto LABEL_551630;
                }
                else
                {
LABEL_551654:
                    v3 = &g_engfuncs.padding_0[0];
                    if (!g_616928(0, 1))
                    {
                        if (!(char)sub_487c70(*v57->field_208, 64, 800.0f))
                        {
                            v1 = 50.0f;
                            v71 = 40.0;
                            v0 = 40.0f;
                            v72 = v3->field_16c;
LABEL_5517b0:
                            v72(v0, v1);
                            v73 = v71 + a0->field_8->field_c10;
                        }
                        else
                        {
                            if ((char)sub_487c70(*v57->field_208, 32, 800.0f))
                                return 800.0;
LABEL_551726:
                            g_61692c(40.0f, 50.0f);
                            v73 = a0->field_8->field_c10 - 40.0;
                        }
                        sub_48d430((float)v73);
                        a0->field_8->field_c10 = (float)v73;
                        return v73;
                    }
                    if (!(char)sub_487c70(*v57->field_208, 32, 800.0f))
                        goto LABEL_551726;
                    v71 = 800.0;
                    if ((char)sub_487c70(*v57->field_208, 64, 800.0f))
                        return 800.0;
                    v1 = 50.0f;
                    v0 = 40.0f;
                    v72 = g_61692c;
                    goto LABEL_5517b0;
                }
            }
        }
    }
    a0->field_4 = 2;
    return v32;
}

