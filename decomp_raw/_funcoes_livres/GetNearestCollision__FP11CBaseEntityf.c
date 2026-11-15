// GetNearestCollision__FP11CBaseEntityf @0x17f610 size=1284
typedef struct st_57f610_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[60];
    float field_50;
    float field_54;
    float field_58;
    char padding_5c[428];
    int field_208;
} st_57f610_0;

typedef struct st_57f610_1 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_57f610_1;

extern unsigned int _GLOBAL_OFFSET_TABLE_;
extern float g_vecZero;
extern float g_616790;
extern float g_616794;
extern st_57f610_1 *gpGlobals;

unsigned int * GetNearestCollision__FP11CBaseEntityf(void)
{
    unsigned int *v43;  // edx
    float v44;  // 128
    double v53;  // mm7
    double v54;  // mm6
    unsigned int *v55;  // edx
    float v56;  // 112
    float v57;  // 112
    float v58;  // 112
    double v59;  // mm7
    double v60;  // mm6
    double v61;  // mm7
    float v62;  // eax
    unsigned int *v45;  // edx
    st_57f610_0 *v46;  // esi
    unsigned int *v47;  // ecx
    unsigned int *v48;  // edx
    unsigned int *v49;  // edx
    float v50;  // 112
    float v51;  // 112
    float v52;  // 112
    char *v0;  // [bp-0x160]
    float v1;  // [bp-0x15c]
    int v2;  // [bp-0x158]
    float v3;  // [bp-0x154]
    float v4;  // [bp-0x150]
    int v5;  // [bp-0x14c]
    int v6;  // [bp-0x148]
    float v7;  // [bp-0x144]
    float v8;  // [bp-0x140]
    float v9;  // [bp-0x13c]
    float v10;  // [bp-0x138]
    float v11;  // [bp-0x134]
    float v12;  // [bp-0x130]
    float v13;  // [bp-0x12c]
    unsigned int v14;  // [bp-0x124]
    float v15;  // [bp-0x120]
    unsigned int v16;  // [bp-0x11c]
    char v17;  // [bp-0x104]
    float v18;  // [bp-0xf4]
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
    st_57f610_0 **v41;  // [bp+0x8]
    float v42;  // [bp+0xc]

    v37 = g_vecZero;
    v38 = g_616790;
    v39 = g_616794;
    v4 = 9999.900390625f;
    v1 = 0;
    v2 = 0;
    v6 = 0;
    while (1)
    {
        if ((unsigned int)v6 <= 4)
        {
            goto *((void *)((unsigned int *)((char *)&_GLOBAL_OFFSET_TABLE_ - *(int *)((char *)&(&_GLOBAL_OFFSET_TABLE_)[v6] - 607308))));
        }
        else
        {
            v5 = 0;
            v0 = &v14;
            do
            {
                if ((unsigned int)v5 <= 4)
                    goto *((void *)((unsigned int *)((char *)&_GLOBAL_OFFSET_TABLE_ - *(int *)((char *)&(&_GLOBAL_OFFSET_TABLE_)[v5] - 607180))));
                v43 = &*v41->field_50;
                v7 = *v41->field_50;
                v8 = *(float *)&v43[1];
                v9 = *(float *)&v43[2];
                sub_489120(v0, &v7);
                v33 = v14;
                v35 = v15;
                v36 = v16;
                v44 = v1 + v35;
                sub_48d430(v44);
                v35 = v44;
                sub_48d430(v2);
                v34 = v35;
                sub_48a800(&v34);
                v45 = &gpGlobals->field_28;
                v10 = v42 * gpGlobals->field_28;
                v11 = v42 * *(float *)&v45[1];
                v12 = v42 * *(float *)&v45[2];
                v46 = *v41;
                v47 = &v46->field_8;
                v7 = v46->field_8 + v10;
                v8 = *(float *)&v47[1] + v11;
                v9 = *(float *)&v47[2] + v12;
                v30 = v7;
                v31 = v8;
                v32 = v9;
                v48 = &gpGlobals->field_28;
                v10 = v42 * gpGlobals->field_28;
                v11 = v42 * *(float *)&v48[1];
                v12 = v42 * *(float *)&v48[2];
                v7 = v46->field_8 - v10;
                v8 = *(float *)&v47[1] - v11;
                v9 = *(float *)&v47[2] - v12;
                v27 = v7;
                v28 = v8;
                v29 = v9;
                sub_488460(v47, &v30, 1, 1, v46->field_208, &v22);
                sub_488460(&*v41->field_8, &v27, 1, 1, *v41->field_208, &v17);
                v49 = &*v41->field_8;
                v50 = v24 - *v41->field_8;
                v7 = v50;
                v51 = v25 - *(float *)&v49[1];
                v8 = v51;
                v52 = v26 - *(float *)&v49[2];
                v9 = v52;
                v53 = v50 * v50 + v51 * v51 + v52 * v52;
                v54 = sqrt(v53);
                if (isnan(v54))
                    sub_487dc0(*(unsigned int *)&v53);
                else
                    v53 = v54;
                v3 = (float)v53;
                v55 = &*v41->field_8;
                v56 = v19 - *v41->field_8;
                v7 = v56;
                v57 = v20 - *(float *)&v55[1];
                v8 = v57;
                v58 = v21 - *(float *)&v55[2];
                v9 = v58;
                v59 = v56 * v56 + v57 * v57 + v58 * v58;
                v60 = sqrt(v59);
                if (isnan(v60))
                    sub_487dc0(*(unsigned int *)&v59);
                else
                    v59 = v60;
                v13 = (float)v59;
                v61 = v13;
                if (v61 > v3 && 1.0 > v23)
                {
                    v61 = v3;
                    v30 = v24;
                    v31 = v25;
                    v62 = v26;
                }
                else
                {
                    if ((isunordered(v61, v3) ? 0x44 : v61 == v3 ? 63 : v61 < v3 ? 0 : 0xff) >= 64 || 1.0 <= v18)
                        goto LABEL_57fac6;
                    v30 = v19;
                    v31 = v20;
                    v62 = v21;
                }
                v32 = v62;
                if (v61 < v4)
                {
                    v4 = (float)v61;
                    v37 = v30;
                    v38 = v31;
                    v39 = v32;
                    continue;
                }
LABEL_57fac6:
            } while ((v5 += 1, v5 <= 4));
            v6 += 1;
            if (v6 > 4)
            {
                *(float *)idx = v37;
                *(float *)&idx[1] = v38;
                *(float *)&idx[2] = v39;
                return idx;
            }
        }
    }
}

