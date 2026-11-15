// CheckObstacleToThrowAt__16CFinishMeleeTask @0x14a4c0 size=1375
typedef struct st_54a4c0_1 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[96];
    float field_f4;
    float field_f8;
    float field_fc;
} st_54a4c0_1;

typedef struct st_54a4c0_0 {
    char padding_0[12];
    struct st_54a4c0_1 *field_c;
    char padding_10[32];
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    char field_3c;
} st_54a4c0_0;

typedef struct st_54a4c0_2 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_54a4c0_2;

extern unsigned int _GLOBAL_OFFSET_TABLE_;
extern float g_vecZero;
extern float g_616790;
extern float g_616794;
extern st_54a4c0_2 *gpGlobals;

st_54a4c0_0 * CheckObstacleToThrowAt__16CFinishMeleeTask(st_54a4c0_0 *a0)
{
    unsigned int *v39;  // edx
    float v40;  // 128
    float v49;  // 112
    double v50;  // mm7
    double v51;  // mm6
    unsigned int *v52;  // edx
    float v53;  // 112
    float v54;  // 112
    float v55;  // 112
    double v56;  // mm7
    double v57;  // mm6
    double v58;  // mm7
    unsigned int *v41;  // edx
    unsigned int v59;  // ecx
    float *v42;  // esi
    unsigned int *v43;  // ecx
    unsigned int *v44;  // edx
    double v45;  // mm7
    unsigned int *v46;  // edx
    float v47;  // 112
    float v48;  // 112
    char *v0;  // [bp-0x180]
    int v1;  // [bp-0x17c]
    char i;  // [bp-0x175]
    float v3;  // [bp-0x174]
    float v4;  // [bp-0x170]
    float v5;  // [bp-0x16c]
    unsigned int v6;  // [bp-0x168]
    float v7;  // [bp-0x164]
    float v8;  // [bp-0x160]
    float v9;  // [bp-0x15c]
    float v10;  // [bp-0x158]
    float v11;  // [bp-0x154]
    float v12;  // [bp-0x150]
    float v13;  // [bp-0x14c]
    unsigned int v14;  // [bp-0x144]
    float v15;  // [bp-0x140]
    unsigned int v16;  // [bp-0x13c]
    char v17;  // [bp-0x124]
    float v18;  // [bp-0x114]
    float v19;  // [bp-0x110]
    float v20;  // [bp-0x10c]
    float v21;  // [bp-0x108]
    char v22;  // [bp-0xe4]
    float v23;  // [bp-0xd4]
    float v24;  // [bp-0xd0]
    float v25;  // [bp-0xcc]
    float v26;  // [bp-0xc8]
    float v27;  // [bp-0xa4]
    float v28;  // [bp-0xa0]
    float v29;  // [bp-0x9c]
    float v30;  // [bp-0x64]
    float v31;  // [bp-0x60]
    float v32;  // [bp-0x5c]
    float v33;  // [bp-0x44]
    float v34;  // [bp-0x40]
    float v35;  // [bp-0x3c]
    unsigned int v36;  // [bp-0x24]
    float v37;  // [bp-0x20]
    unsigned int v38;  // [bp-0x1c]

    v6 = 0;
    v5 = 0;
    v3 = 9999.0f;
    v27 = g_vecZero;
    v28 = g_616790;
    v29 = g_616794;
    i = 0;
    do
    {
        if (i <= 4)
            goto *((void *)((unsigned int *)((char *)&_GLOBAL_OFFSET_TABLE_ - *(int *)((char *)&(&_GLOBAL_OFFSET_TABLE_)[i] - 824732))));
        v1 = 0;
        v0 = &v14;
        do
        {
            if ((unsigned int)v1 <= 4)
                goto *((void *)((unsigned int *)((char *)&_GLOBAL_OFFSET_TABLE_ - *(int *)((char *)&(&_GLOBAL_OFFSET_TABLE_)[v1] - 824604))));
            v39 = &a0->field_c->field_f4;
            v7 = a0->field_c->field_f4;
            v8 = *(float *)&v39[1];
            v9 = *(float *)&v39[2];
            sub_489120(v0, &v7);
            v36 = v14;
            v37 = v15;
            v38 = v16;
            v40 = v5 + v37;
            sub_48d430(v40);
            v37 = v40;
            v36 = v6;
            sub_48a800(&v36);
            v41 = &gpGlobals->field_28;
            v10 = (float)(3000.0 * gpGlobals->field_28);
            v11 = (float)(3000.0 * *(float *)&v41[1]);
            v12 = (float)(3000.0 * *(float *)&v41[2]);
            v42 = a0->field_c;
            v43 = v42 + 0x22;
            v7 = v42[0x22] + v10;
            v8 = *(float *)&v43[1] + v11;
            v9 = *(float *)&v43[2] + v12;
            v33 = v7;
            v34 = v8;
            v35 = v9;
            v44 = &gpGlobals->field_28;
            v10 = (float)(3000.0 * gpGlobals->field_28);
            v45 = 3000.0 * *(float *)&v44[2];
            v11 = (float)(3000.0 * *(float *)&v44[1]);
            v12 = (float)v45;
            v7 = v42[0x22] - v10;
            v8 = *(float *)&v43[1] - v11;
            v9 = (float)(*(float *)&v43[2] - v45);
            v30 = v7;
            v31 = v8;
            v32 = v9;
            sub_488460(v43, &v33, 1, 1, v42, &v22);
            sub_488460(&a0->field_c->field_88, &v30, 1, 1, a0->field_c, &v17);
            v46 = &a0->field_c->field_88;
            v47 = v24 - a0->field_c->field_88;
            v7 = v47;
            v48 = v25 - *(float *)&v46[1];
            v8 = v48;
            v49 = v26 - *(float *)&v46[2];
            v9 = v49;
            v50 = v47 * v47 + v48 * v48 + v49 * v49;
            v51 = sqrt(v50);
            if (isnan(v51))
                sub_487dc0(*(unsigned int *)&v50);
            else
                v50 = v51;
            v4 = (float)v50;
            v52 = &a0->field_c->field_88;
            v53 = v19 - a0->field_c->field_88;
            v7 = v53;
            v54 = v20 - *(float *)&v52[1];
            v8 = v54;
            v55 = v21 - *(float *)&v52[2];
            v9 = v55;
            v56 = v53 * v53 + v54 * v54 + v55 * v55;
            v57 = sqrt(v56);
            if (isnan(v57))
                sub_487dc0(*(unsigned int *)&v56);
            else
                v56 = v57;
            v13 = (float)v56;
            v58 = v13;
            if (v58 <= v4 || 0.0 >= v23)
            {
LABEL_54a90e:
                if (0.0 >= v18 || v58 <= 125.0)
                    goto LABEL_54a976;
                v33 = v30;
                v34 = v31;
                v35 = v32;
                goto LABEL_54a943;
            }
            else if (v4 <= 125.0f)
            {
                goto LABEL_54a90e;
            }
            else
            {
                v58 = v4;
LABEL_54a943:
                if (v58 < v3)
                {
                    v3 = (float)v58;
                    v27 = v33;
                    v28 = v34;
                    v29 = v35;
                    continue;
                }
LABEL_54a976:
            }
        } while ((v1 += 1, v1 <= 4));
        i += 1;
    } while (i <= 4);
    v59 = 0;
    if (g_vecZero == v27 && g_616790 == v28)
        v59 = g_616794 == v29;
    if (!v59)
    {
        *(float *)&a0->field_30 = v27;
        *(float *)&a0->field_34 = v28;
        *(float *)&a0->field_38 = v29;
    }
    a0->field_3c = 1;
    return a0;
}

