// CheckForCollide__FP7edict_sif @0x17d330 size=5857
typedef struct st_57d330_0 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[96];
    float field_f4;
    float field_f8;
    float field_fc;
    char padding_100[392];
    int field_288;
} st_57d330_0;

typedef struct st_57d330_1 {
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
} st_57d330_1;

extern st_57d330_1 *gpGlobals;

char CheckForCollide__FP7edict_sif(st_57d330_0 *a0, unsigned int a1, float a2)
{
    double v20;  // mm7
    unsigned int *v21;  // edx
    unsigned int *v30;  // edx
    unsigned int *v31;  // edx
    unsigned int *v32;  // eax
    unsigned int *v33;  // edx
    unsigned int *v34;  // eax
    unsigned int *v35;  // edx
    unsigned int *v36;  // eax
    unsigned int *v37;  // edx
    unsigned int *v38;  // eax
    unsigned int *v39;  // edx
    double v22;  // mm5
    unsigned int *v40;  // eax
    unsigned int *v41;  // edx
    unsigned int *v42;  // eax
    unsigned int *v43;  // edx
    unsigned int *v44;  // eax
    unsigned int *v45;  // edx
    unsigned int *v46;  // eax
    unsigned int *v47;  // edx
    unsigned int *v48;  // eax
    unsigned int *v49;  // edx
    double v23;  // mm5
    unsigned int *v50;  // eax
    unsigned int *v51;  // edx
    unsigned int *v52;  // eax
    unsigned int *v53;  // edx
    unsigned int *v54;  // eax
    unsigned int *v55;  // edx
    unsigned int *v56;  // eax
    unsigned int *v57;  // edx
    unsigned int *v58;  // eax
    unsigned int *v59;  // edx
    unsigned int *v24;  // edx
    double v25;  // mm7
    unsigned int *v26;  // edx
    double v27;  // mm5
    double v28;  // mm5
    unsigned int *v29;  // edx
    float v0;  // [bp-0xe8]
    float v1;  // [bp-0xe4]
    float v2;  // [bp-0xe0]
    float v3;  // [bp-0xdc]
    float v4;  // [bp-0xd8]
    float v5;  // [bp-0xd4]
    float v6;  // [bp-0xd0]
    float v7;  // [bp-0xcc]
    float v8;  // [bp-0xc8]
    float v9;  // [bp-0xc4]
    float v10;  // [bp-0xc0]
    float v11;  // [bp-0xbc]
    float v12;  // [bp-0x84]
    float v13;  // [bp-0x80]
    float v14;  // [bp-0x7c]
    float v15;  // [bp-0x64]
    float v16;  // [bp-0x60]
    float v17;  // [bp-0x5c]
    char v18;  // [bp-0x44]
    float v19;  // [bp-0x34]

    UTIL_MakeVectors(&a0->field_f4);
    if (a1 & 2 || a1 == 128)
    {
        v15 = a0->field_88;
        v16 = a0->field_8c;
        v17 = a0->field_90;
        v20 = -a2;
        v21 = &gpGlobals->field_40;
        v22 = v20 * gpGlobals->field_40;
        v1 = (float)v22;
        v23 = v20 * *(float *)&v21[1];
        v2 = (float)v23;
        v3 = (float)(v20 * *(float *)&v21[2]);
        v9 = (float)(v22 + v15);
        v10 = (float)(v23 + v16);
        v11 = v17 + v3;
        v12 = v9;
        v13 = v10;
        v14 = v11;
        UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
        if (1.0 > v19)
            return 1;
    }
    if (a1 & 4 || a1 == 128)
    {
        v15 = a0->field_88;
        v16 = a0->field_8c;
        v17 = a0->field_90;
        v24 = &gpGlobals->field_40;
        v4 = a2 * gpGlobals->field_40;
        v5 = a2 * *(float *)&v24[1];
        v6 = a2 * *(float *)&v24[2];
        v1 = v15 + v4;
        v2 = v16 + v5;
        v3 = v17 + v6;
        v12 = v1;
        v13 = v2;
        v14 = v3;
        UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
        if (1.0 > v19)
            return 1;
    }
    if (a1 & 8 || a1 == 128)
    {
        v15 = a0->field_88;
        v16 = a0->field_8c;
        v17 = a0->field_90;
        v25 = -a2;
        v26 = &gpGlobals->field_28;
        v27 = v25 * gpGlobals->field_28;
        v4 = (float)v27;
        v28 = v25 * *(float *)&v26[1];
        v5 = (float)v28;
        v6 = (float)(v25 * *(float *)&v26[2]);
        v1 = (float)(v27 + v15);
        v2 = (float)(v28 + v16);
        v3 = v17 + v6;
        v12 = v1;
        v13 = v2;
        v14 = v3;
        UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
        if (1.0 > v19)
            return 1;
    }
    if (a1 & 16 || a1 == 128)
    {
        v15 = a0->field_88;
        v16 = a0->field_8c;
        v17 = a0->field_90;
        v29 = &gpGlobals->field_28;
        v4 = a2 * gpGlobals->field_28;
        v5 = a2 * *(float *)&v29[1];
        v6 = a2 * *(float *)&v29[2];
        v1 = v15 + v4;
        v2 = v16 + v5;
        v3 = v17 + v6;
        v12 = v1;
        v13 = v2;
        v14 = v3;
        UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
        if (1.0 > v19)
            return 1;
    }
    if (a1 & 32 || a1 == 128)
    {
        v15 = a0->field_88;
        v16 = a0->field_8c;
        v17 = a0->field_90;
        v30 = &gpGlobals->field_34;
        v4 = a2 * gpGlobals->field_34;
        v5 = a2 * *(float *)&v30[1];
        v6 = a2 * *(float *)&v30[2];
        v1 = v15 + v4;
        v2 = v16 + v5;
        v3 = v17 + v6;
        v12 = v1;
        v13 = v2;
        v14 = v3;
        UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
        if (1.0 > v19)
            goto LABEL_57e9fe;
    }
    if (a1 & 64 || a1 == 128)
    {
        v15 = a0->field_88;
        v16 = a0->field_8c;
        v17 = a0->field_90;
        v31 = &gpGlobals->field_34;
        v4 = a2 * gpGlobals->field_34;
        v5 = a2 * *(float *)&v31[1];
        v6 = a2 * *(float *)&v31[2];
        v1 = v15 - v4;
        v2 = v16 - v5;
        v3 = v17 - v6;
        v12 = v1;
        v13 = v2;
        v14 = v3;
        UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
        if (1.0 <= v19)
            goto LABEL_57d884;
    }
    else
    {
LABEL_57d884:
        if (a1 & 0x100 || a1 == 128)
        {
            v15 = a0->field_88;
            v16 = a0->field_8c;
            v17 = a0->field_90;
            v32 = &a0->field_f4;
            v1 = a0->field_f4;
            v2 = *(float *)&v32[1];
            v3 = *(float *)&v32[2];
            v1 = -45.0f;
            UTIL_MakeVectors(&v1);
            v33 = &gpGlobals->field_28;
            v7 = a2 * gpGlobals->field_28;
            v8 = a2 * *(float *)&v33[1];
            v9 = a2 * *(float *)&v33[2];
            v4 = v15 + v7;
            v5 = v16 + v8;
            v6 = v17 + v9;
            v12 = v4;
            v13 = v5;
            v14 = v6;
            UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
            if (1.0 <= v19)
                goto LABEL_57d9a2;
        }
        else
        {
LABEL_57d9a2:
            if (a1 & 0x200 || a1 == 128)
            {
                v15 = a0->field_88;
                v16 = a0->field_8c;
                v17 = a0->field_90;
                v34 = &a0->field_f4;
                v1 = a0->field_f4;
                v2 = *(float *)&v34[1];
                v3 = *(float *)&v34[2];
                v1 = 45.0f;
                UTIL_MakeVectors(&v1);
                v35 = &gpGlobals->field_28;
                v7 = a2 * gpGlobals->field_28;
                v8 = a2 * *(float *)&v35[1];
                v9 = a2 * *(float *)&v35[2];
                v4 = v15 + v7;
                v5 = v16 + v8;
                v6 = v17 + v9;
                v12 = v4;
                v13 = v5;
                v14 = v6;
                UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                if (1.0 <= v19)
                    goto LABEL_57dac0;
            }
            else
            {
LABEL_57dac0:
                if (a1 & 0x400 || a1 == 128)
                {
                    v15 = a0->field_88;
                    v16 = a0->field_8c;
                    v17 = a0->field_90;
                    v36 = &a0->field_f4;
                    v1 = a0->field_f4;
                    v2 = *(float *)&v36[1];
                    v3 = *(float *)&v36[2];
                    v1 = -45.0f;
                    v0 = (float)(v2 - 45.0);
                    UTIL_WrapAngle(v0);
                    v2 = v0;
                    UTIL_MakeVectors(&v1);
                    v37 = &gpGlobals->field_28;
                    v7 = a2 * gpGlobals->field_28;
                    v8 = a2 * *(float *)&v37[1];
                    v9 = a2 * *(float *)&v37[2];
                    v4 = v15 + v7;
                    v5 = v16 + v8;
                    v6 = v17 + v9;
                    v12 = v4;
                    v13 = v5;
                    v14 = v6;
                    UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                    if (1.0 <= v19)
                        goto LABEL_57dc0a;
                }
                else
                {
LABEL_57dc0a:
                    if (a1 & 0x800 || a1 == 128)
                    {
                        v15 = a0->field_88;
                        v16 = a0->field_8c;
                        v17 = a0->field_90;
                        v38 = &a0->field_f4;
                        v1 = a0->field_f4;
                        v2 = *(float *)&v38[1];
                        v3 = *(float *)&v38[2];
                        v1 = -45.0f;
                        v0 = (float)(45.0 + v2);
                        UTIL_WrapAngle(v0);
                        v2 = v0;
                        UTIL_MakeVectors(&v1);
                        v39 = &gpGlobals->field_28;
                        v7 = a2 * gpGlobals->field_28;
                        v8 = a2 * *(float *)&v39[1];
                        v9 = a2 * *(float *)&v39[2];
                        v4 = v15 + v7;
                        v5 = v16 + v8;
                        v6 = v17 + v9;
                        v12 = v4;
                        v13 = v5;
                        v14 = v6;
                        UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                        if (1.0 <= v19)
                            goto LABEL_57dd54;
                    }
                    else
                    {
LABEL_57dd54:
                        if (a1 & 0x1000 || a1 == 128)
                        {
                            v15 = a0->field_88;
                            v16 = a0->field_8c;
                            v17 = a0->field_90;
                            v40 = &a0->field_f4;
                            v1 = a0->field_f4;
                            v2 = *(float *)&v40[1];
                            v3 = *(float *)&v40[2];
                            v1 = -45.0f;
                            v0 = (float)(v2 - 45.0);
                            UTIL_WrapAngle(v0);
                            v2 = v0;
                            UTIL_MakeVectors(&v1);
                            v41 = &gpGlobals->field_28;
                            v7 = a2 * gpGlobals->field_28;
                            v8 = a2 * *(float *)&v41[1];
                            v9 = a2 * *(float *)&v41[2];
                            v4 = v15 - v7;
                            v5 = v16 - v8;
                            v6 = v17 - v9;
                            v12 = v4;
                            v13 = v5;
                            v14 = v6;
                            UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                            if (1.0 <= v19)
                                goto LABEL_57de9e;
                        }
                        else
                        {
LABEL_57de9e:
                            if (a1 & 0x2000 || a1 == 128)
                            {
                                v15 = a0->field_88;
                                v16 = a0->field_8c;
                                v17 = a0->field_90;
                                v42 = &a0->field_f4;
                                v1 = a0->field_f4;
                                v2 = *(float *)&v42[1];
                                v3 = *(float *)&v42[2];
                                v1 = -45.0f;
                                v0 = (float)(45.0 + v2);
                                UTIL_WrapAngle(v0);
                                v2 = v0;
                                UTIL_MakeVectors(&v1);
                                v43 = &gpGlobals->field_28;
                                v7 = a2 * gpGlobals->field_28;
                                v8 = a2 * *(float *)&v43[1];
                                v9 = a2 * *(float *)&v43[2];
                                v4 = v15 - v7;
                                v5 = v16 - v8;
                                v6 = v17 - v9;
                                v12 = v4;
                                v13 = v5;
                                v14 = v6;
                                UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                                if (1.0 <= v19)
                                    goto LABEL_57dfe8;
                            }
                            else
                            {
LABEL_57dfe8:
                                if (a1 & 0x4000 || a1 == 128)
                                {
                                    v15 = a0->field_88;
                                    v16 = a0->field_8c;
                                    v17 = a0->field_90;
                                    v44 = &a0->field_f4;
                                    v1 = a0->field_f4;
                                    v2 = *(float *)&v44[1];
                                    v3 = *(float *)&v44[2];
                                    v1 = 45.0f;
                                    v0 = (float)(v2 - 45.0);
                                    UTIL_WrapAngle(v0);
                                    v2 = v0;
                                    UTIL_MakeVectors(&v1);
                                    v45 = &gpGlobals->field_28;
                                    v7 = a2 * gpGlobals->field_28;
                                    v8 = a2 * *(float *)&v45[1];
                                    v9 = a2 * *(float *)&v45[2];
                                    v4 = v15 + v7;
                                    v5 = v16 + v8;
                                    v6 = v17 + v9;
                                    v12 = v4;
                                    v13 = v5;
                                    v14 = v6;
                                    UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                                    if (1.0 <= v19)
                                        goto LABEL_57e132;
                                }
                                else
                                {
LABEL_57e132:
                                    if ((short)a1 < 0 || a1 == 128)
                                    {
                                        v15 = a0->field_88;
                                        v16 = a0->field_8c;
                                        v17 = a0->field_90;
                                        v46 = &a0->field_f4;
                                        v1 = a0->field_f4;
                                        v2 = *(float *)&v46[1];
                                        v3 = *(float *)&v46[2];
                                        v1 = 45.0f;
                                        v0 = (float)(45.0 + v2);
                                        UTIL_WrapAngle(v0);
                                        v2 = v0;
                                        UTIL_MakeVectors(&v1);
                                        v47 = &gpGlobals->field_28;
                                        v7 = a2 * gpGlobals->field_28;
                                        v8 = a2 * *(float *)&v47[1];
                                        v9 = a2 * *(float *)&v47[2];
                                        v4 = v15 + v7;
                                        v5 = v16 + v8;
                                        v6 = v17 + v9;
                                        v12 = v4;
                                        v13 = v5;
                                        v14 = v6;
                                        UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                                        if (1.0 <= v19)
                                            goto LABEL_57e279;
                                    }
                                    else
                                    {
LABEL_57e279:
                                        if (a1 & 0x10000 || a1 == 128)
                                        {
                                            v15 = a0->field_88;
                                            v16 = a0->field_8c;
                                            v17 = a0->field_90;
                                            v48 = &a0->field_f4;
                                            v1 = a0->field_f4;
                                            v2 = *(float *)&v48[1];
                                            v3 = *(float *)&v48[2];
                                            v1 = 45.0f;
                                            v0 = (float)(v2 - 45.0);
                                            UTIL_WrapAngle(v0);
                                            v2 = v0;
                                            UTIL_MakeVectors(&v1);
                                            v49 = &gpGlobals->field_28;
                                            v7 = a2 * gpGlobals->field_28;
                                            v8 = a2 * *(float *)&v49[1];
                                            v9 = a2 * *(float *)&v49[2];
                                            v4 = v15 - v7;
                                            v5 = v16 - v8;
                                            v6 = v17 - v9;
                                            v12 = v4;
                                            v13 = v5;
                                            v14 = v6;
                                            UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                                            if (1.0 <= v19)
                                                goto LABEL_57e3c3;
                                        }
                                        else
                                        {
LABEL_57e3c3:
                                            if (a1 & 0x20000 || a1 == 128)
                                            {
                                                v15 = a0->field_88;
                                                v16 = a0->field_8c;
                                                v17 = a0->field_90;
                                                v50 = &a0->field_f4;
                                                v1 = a0->field_f4;
                                                v2 = *(float *)&v50[1];
                                                v3 = *(float *)&v50[2];
                                                v1 = 45.0f;
                                                v0 = (float)(45.0 + v2);
                                                UTIL_WrapAngle(v0);
                                                v2 = v0;
                                                UTIL_MakeVectors(&v1);
                                                v51 = &gpGlobals->field_28;
                                                v7 = a2 * gpGlobals->field_28;
                                                v8 = a2 * *(float *)&v51[1];
                                                v9 = a2 * *(float *)&v51[2];
                                                v4 = v15 - v7;
                                                v5 = v16 - v8;
                                                v6 = v17 - v9;
                                                v12 = v4;
                                                v13 = v5;
                                                v14 = v6;
                                                UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                                                if (1.0 <= v19)
                                                    goto LABEL_57e50d;
                                            }
                                            else
                                            {
LABEL_57e50d:
                                                if (a1 & 0x40000 || a1 == 128)
                                                {
                                                    v15 = a0->field_88;
                                                    v16 = a0->field_8c;
                                                    v17 = a0->field_90;
                                                    v52 = &a0->field_f4;
                                                    v1 = a0->field_f4;
                                                    v2 = *(float *)&v52[1];
                                                    v3 = *(float *)&v52[2];
                                                    v0 = (float)(v2 - 45.0);
                                                    UTIL_WrapAngle(v0);
                                                    v2 = v0;
                                                    UTIL_MakeVectors(&v1);
                                                    v53 = &gpGlobals->field_28;
                                                    v7 = a2 * gpGlobals->field_28;
                                                    v8 = a2 * *(float *)&v53[1];
                                                    v9 = a2 * *(float *)&v53[2];
                                                    v4 = v15 - v7;
                                                    v5 = v16 - v8;
                                                    v6 = v17 - v9;
                                                    v12 = v4;
                                                    v13 = v5;
                                                    v14 = v6;
                                                    UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                                                    if (1.0 <= v19)
                                                        goto LABEL_57e64b;
                                                }
                                                else
                                                {
LABEL_57e64b:
                                                    if (a1 & 0x80000 || a1 == 128)
                                                    {
                                                        v15 = a0->field_88;
                                                        v16 = a0->field_8c;
                                                        v17 = a0->field_90;
                                                        v54 = &a0->field_f4;
                                                        v1 = a0->field_f4;
                                                        v2 = *(float *)&v54[1];
                                                        v3 = *(float *)&v54[2];
                                                        v0 = (float)(45.0 + v2);
                                                        UTIL_WrapAngle(v0);
                                                        v2 = v0;
                                                        UTIL_MakeVectors(&v1);
                                                        v55 = &gpGlobals->field_28;
                                                        v7 = a2 * gpGlobals->field_28;
                                                        v8 = a2 * *(float *)&v55[1];
                                                        v9 = a2 * *(float *)&v55[2];
                                                        v4 = v15 - v7;
                                                        v5 = v16 - v8;
                                                        v6 = v17 - v9;
                                                        v12 = v4;
                                                        v13 = v5;
                                                        v14 = v6;
                                                        UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                                                        if (1.0 <= v19)
                                                            goto LABEL_57e789;
                                                    }
                                                    else
                                                    {
LABEL_57e789:
                                                        if (a1 & 0x80000 || a1 == 128)
                                                        {
                                                            v15 = a0->field_88;
                                                            v16 = a0->field_8c;
                                                            v17 = a0->field_90;
                                                            v56 = &a0->field_f4;
                                                            v1 = a0->field_f4;
                                                            v2 = *(float *)&v56[1];
                                                            v3 = *(float *)&v56[2];
                                                            v0 = (float)(45.0 + v2);
                                                            UTIL_WrapAngle(v0);
                                                            v2 = v0;
                                                            UTIL_MakeVectors(&v1);
                                                            v57 = &gpGlobals->field_28;
                                                            v7 = a2 * gpGlobals->field_28;
                                                            v8 = a2 * *(float *)&v57[1];
                                                            v9 = a2 * *(float *)&v57[2];
                                                            v4 = v15 + v7;
                                                            v5 = v16 + v8;
                                                            v6 = v17 + v9;
                                                            v12 = v4;
                                                            v13 = v5;
                                                            v14 = v6;
                                                            UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                                                            if (1.0 <= v19)
                                                                goto LABEL_57e8c7;
                                                        }
                                                        else
                                                        {
LABEL_57e8c7:
                                                            if (!(a1 & 0x80000) && a1 != 128)
                                                                return 0;
                                                            v15 = a0->field_88;
                                                            v16 = a0->field_8c;
                                                            v17 = a0->field_90;
                                                            v58 = &a0->field_f4;
                                                            v1 = a0->field_f4;
                                                            v2 = *(float *)&v58[1];
                                                            v3 = *(float *)&v58[2];
                                                            v0 = (float)(45.0 + v2);
                                                            UTIL_WrapAngle(v0);
                                                            v2 = v0;
                                                            UTIL_MakeVectors(&v1);
                                                            v59 = &gpGlobals->field_28;
                                                            v7 = a2 * gpGlobals->field_28;
                                                            v8 = a2 * *(float *)&v59[1];
                                                            v9 = a2 * *(float *)&v59[2];
                                                            v4 = v15 + v7;
                                                            v5 = v16 + v8;
                                                            v6 = v17 + v9;
                                                            v12 = v4;
                                                            v13 = v5;
                                                            v14 = v6;
                                                            UTIL_TraceHull(&v15, &v12, 0, 1, a0->field_288, &v18);
                                                            if (1.0 <= v19)
                                                                return 0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
LABEL_57e9fe:
    return 1;
}

