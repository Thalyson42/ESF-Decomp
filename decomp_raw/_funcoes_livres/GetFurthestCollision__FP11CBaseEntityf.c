// GetFurthestCollision__FP11CBaseEntityf @0x17fb20 size=1249
typedef struct st_57fb20_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    int field_208;
} st_57fb20_0;

typedef struct st_57fb20_1 {
    struct st_57fb20_0 *field_0;
    float field_4;
    float field_8;
} st_57fb20_1;

typedef struct st_57fb20_2 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_57fb20_2;

extern unsigned int _GLOBAL_OFFSET_TABLE_;
extern float g_vecZero;
extern float g_vecZero+4;
extern float g_vecZero+8;
extern st_57fb20_2 *gpGlobals;

unsigned int * GetFurthestCollision__FP11CBaseEntityf(void)
{
    double v43;  // mm0
    float v52;  // 120
    float v53;  // 120
    double v54;  // mm0
    double v55;  // mm7
    unsigned int *v56;  // edx
    float v57;  // 120
    float v58;  // 120
    float v59;  // 120
    double v60;  // mm0
    double v61;  // mm7
    st_57fb20_1 *v44;  // edx
    float v62;  // eax
    double v45;  // mm0
    unsigned int *v46;  // edx
    unsigned int *v47;  // esi
    unsigned int *v48;  // ecx
    unsigned int *v49;  // edx
    unsigned int *v50;  // edx
    float v51;  // 120
    char *v0;  // [bp-0x188]
    char *v1;  // [bp-0x160]
    float v2;  // [bp-0x15c]
    int v3;  // [bp-0x158]
    float v4;  // [bp-0x154]
    float v5;  // [bp-0x150]
    int i;  // [bp-0x14c]
    int v7;  // [bp-0x148]
    float v8;  // [bp-0x144]
    float v9;  // [bp-0x140]
    float v10;  // [bp-0x13c]
    float v11;  // [bp-0x138]
    float v12;  // [bp-0x134]
    float v13;  // [bp-0x130]
    float v14;  // [bp-0x12c]
    unsigned int v15;  // [bp-0x124]
    float v16;  // [bp-0x120]
    unsigned int v17;  // [bp-0x11c]
    char v18;  // [bp-0x104]
    float v19;  // [bp-0xf0]
    float v20;  // [bp-0xec]
    float v21;  // [bp-0xe8]
    char v22;  // [bp-0xc4]
    float v23;  // [bp-0xb4]
    float v24;  // [bp-0xb0]
    float v25;  // [bp-0xac]
    float v26;  // [bp-0xa8]
    float v27;  // [bp-0x84]
    float v28;  // [bp-0x80]
    float v29;  // [bp-0x7c]
    float v30;  // [bp-0x64]
    float v31;  // [bp-0x60]
    float v32;  // [bp-0x5c]
    unsigned int v33;  // [bp-0x44]
    float v34;  // [bp-0x44]
    float v35;  // [bp-0x40]
    unsigned int v36;  // [bp-0x3c]
    float v37;  // [bp-0x24]
    float v38;  // [bp-0x20]
    float v39;  // [bp-0x1c]
    unsigned int *idx;  // [bp+0x4]
    st_57fb20_1 *v41;  // [bp+0x8]
    float v42;  // [bp+0xc]

    v37 = g_vecZero;
    v38 = g_vecZero+4;
    v39 = g_vecZero+8;
    v5 = 0;
    v2 = 0;
    v3 = 0;
    v7 = 0;
    while (1)
    {
        if ((unsigned int)v7 <= 4)
        {
            goto *((void *)((unsigned int *)((char *)&_GLOBAL_OFFSET_TABLE_ - *(int *)((char *)&(&_GLOBAL_OFFSET_TABLE_)[v7] - 606012))));
        }
        else
        {
            i = 0;
            v1 = &v15;
            do
            {
                if ((unsigned int)i <= 4)
                    goto *((void *)((unsigned int *)((char *)&_GLOBAL_OFFSET_TABLE_ - *(int *)((char *)&(&_GLOBAL_OFFSET_TABLE_)[i] - 605884))));
                v44 = v41;
                v0 = &v15;
                v8 = (float)v43;
                v9 = v44->field_4;
                v10 = v44->field_8;
                WrapAngles(v1, &v8);
                v33 = v15;
                v35 = v16;
                v36 = v17;
                v45 = v2 + v35;
                UTIL_WrapAngle((float)v45);
                v35 = (float)v45;
                UTIL_WrapAngle(v3);
                v34 = (float)v45;
                UTIL_MakeVectors(&v34);
                v46 = &gpGlobals->field_28;
                v11 = v42 * gpGlobals->field_28;
                v12 = v42 * *(float *)&v46[1];
                v13 = v42 * *(float *)&v46[2];
                v47 = v41->field_0;
                v48 = v47 + 2;
                v8 = *(float *)&v47[2] + v11;
                v9 = *(float *)&v48[1] + v12;
                v10 = *(float *)&v48[2] + v13;
                v30 = v8;
                v31 = v9;
                v32 = v10;
                v49 = &gpGlobals->field_28;
                v11 = v42 * gpGlobals->field_28;
                v12 = v42 * *(float *)&v49[1];
                v13 = v42 * *(float *)&v49[2];
                v8 = *(float *)&v47[2] - v11;
                v9 = *(float *)&v48[1] - v12;
                v10 = *(float *)&v48[2] - v13;
                v27 = v8;
                v28 = v9;
                v29 = v10;
                UTIL_TraceHull(v48, &v30, 1, 1, v47[130], &v22);
                UTIL_TraceHull(&v41->field_0->field_8, &v27, 1, 1, v41->field_0->field_208, &v18);
                v50 = &v41->field_0->field_8;
                v51 = v24 - v41->field_0->field_8;
                v8 = v51;
                v52 = v25 - *(float *)&v50[1];
                v9 = v52;
                v53 = v26 - *(float *)&v50[2];
                v10 = v53;
                v54 = v51 * v51 + v52 * v52 + v53 * v53;
                v55 = sqrt(v54);
                if (isnan(v55))
                    sqrt(*(unsigned int *)&v54);
                else
                    v54 = v55;
                v4 = (float)v54;
                v56 = &v41->field_0->field_8;
                v57 = v19 - v41->field_0->field_8;
                v8 = v57;
                v58 = v20 - *(float *)&v56[1];
                v9 = v58;
                v59 = v21 - *(float *)&v56[2];
                v10 = v59;
                v60 = v57 * v57 + v58 * v58 + v59 * v59;
                v61 = sqrt(v60);
                if (isnan(v61))
                    sqrt(*(unsigned int *)&v60);
                else
                    v60 = v61;
                v14 = (float)v60;
                v43 = v14;
                if (v43 < v4 && 1.0 > v23)
                {
                    v43 = v4;
                    v30 = v24;
                    v31 = v25;
                    v62 = v26;
                }
                else
                {
                    v30 = v19;
                    v31 = v20;
                    v62 = v21;
                }
                v32 = v62;
                if (v43 > v5)
                {
                    v5 = (float)v43;
                    v37 = v30;
                    v38 = v31;
                    v39 = v32;
                }
                i += 1;
            } while (i <= 4);
            v7 += 1;
            if (v7 > 4)
            {
                *(float *)idx = v37;
                *(float *)&idx[1] = v38;
                *(float *)&idx[2] = v39;
                return idx;
            }
        }
    }
}

