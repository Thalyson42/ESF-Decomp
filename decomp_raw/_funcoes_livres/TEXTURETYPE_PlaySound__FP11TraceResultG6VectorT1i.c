// TEXTURETYPE_PlaySound__FP11TraceResultG6VectorT1i @0x11dd30 size=1611
typedef struct st_51dd30_6 {
    char padding_0[124];
    struct st_51dd30_4 *field_7c;
} st_51dd30_6;

typedef struct st_51dd30_10 {
    char padding_0[28];
    struct st_51dd30_6 *field_1c;
} st_51dd30_10;

typedef struct st_51dd30_1 {
    unsigned int field_0;
} st_51dd30_1;

typedef struct st_51dd30_3 {
    char padding_0[40];
    struct st_51dd30_1 *field_28;
} st_51dd30_3;

typedef struct st_51dd30_7 {
    char padding_0[16];
    float field_10;
    char field_14;
    char padding_15[27];
    struct st_51dd30_6 *field_30;
} st_51dd30_7;

typedef struct st_51dd30_5 {
    unsigned int field_0;
    char padding_4[516];
    unsigned int field_208;
} st_51dd30_5;

typedef struct st_51dd30_4 {
    struct st_51dd30_5 *field_0;
    char padding_4[92];
    struct st_51dd30_3 *field_60;
} st_51dd30_4;

typedef struct st_51dd30_8 {
    char field_0;
} st_51dd30_8;

typedef struct st_51dd30_0 {
    char padding_0[224];
    struct st_51dd30_1 *field_e0;
} st_51dd30_0;

typedef struct st_51dd30_9 {
    char padding_0[152];
    unsigned int field_98;
} st_51dd30_9;

typedef struct st_51dd30_2 {
    char padding_0[68];
    struct st_51dd30_0 *field_44;
} st_51dd30_2;

extern st_51dd30_2 *g_pGameRules;
extern char _GLOBAL_OFFSET_TABLE_;
extern st_51dd30_1 *g_616850;
extern st_51dd30_1 *g_6168d4;
extern st_51dd30_1 *g_616928;
extern st_51dd30_1 *g_61692c;
extern st_51dd30_9 *gpGlobals;

double TEXTURETYPE_PlaySound__FP11TraceResultG6VectorT1i(st_51dd30_7 *a0, float *a1, float *a2)
{
    st_51dd30_6 *v28;  // eax
    st_51dd30_4 *v29;  // eax
    st_51dd30_4 *v30;  // edi
    unsigned int *v31;  // eax
    char *iter;  // eax
    unsigned int v33;  // eax
    unsigned int v34;  // eax
    st_51dd30_10 *v0;  // [bp-0x118]
    unsigned int v1;  // [bp-0x114]
    float v2;  // [bp-0x110]
    st_51dd30_8 *v3;  // [bp-0x10c]
    float v4;  // [bp-0x10c]
    st_51dd30_10 *v5;  // [bp-0x108], Other Possible Types: unsigned int
    unsigned int v6;  // [bp-0x104]
    unsigned int v7;  // [bp-0x100]
    unsigned int v8;  // [bp-0xfc], Other Possible Types: float
    char *v9;  // [bp-0xf8], Other Possible Types: unsigned int
    char *v10;  // [bp-0xf4], Other Possible Types: unsigned int
    char v11[4];  // [bp-0xcc]
    float v12;  // [bp-0xc8]
    unsigned int v13;  // [bp-0xc4]
    double v14;  // [bp-0xc0]
    char v15[7];  // [bp-0xbc]
    char v17;  // [bp-0xb5]
    unsigned int v18;  // [bp-0xa4]
    unsigned int v19;  // [bp-0xa0]
    float v20;  // [bp-0x84]
    float v21;  // [bp-0x80]
    float v22;  // [bp-0x7c]
    float v23;  // [bp-0x64]
    float v24;  // [bp-0x60]
    float v25;  // [bp-0x5c]
    char v26;  // [bp-0x44]
    char v27;  // [bp-0x38]

    v12 = 0.800000011920929f;
    if (!g_pGameRules->field_44->field_e0(g_pGameRules))
        return 0.0;
    v28 = a0->field_30;
    if (a0->field_30 || (v28 = g_6168d4(0), v28))
        v29 = v28->field_7c;
    else
        v29 = NULL;
    v30 = v29;
    v17 = 0;
    if (v30 && v30->field_60->field_28(v30) && v30->field_60->field_28(v30) != 1)
    {
        v17 = 70;
    }
    else
    {
        v23 = *a1;
        v24 = a1[1];
        v25 = a1[2];
        v20 = *a2;
        v21 = a2[1];
        v22 = a2[2];
        if (v30)
        {
            v10 = &v20;
            v9 = &v23;
            v8 = v30->field_0->field_208;
            v31 = g_616850;
        }
        else
        {
            v10 = &v20;
            v9 = &v23;
            v8 = g_6168d4(0);
            v31 = g_616850;
        }
        iter = v31(v8, v9, v10);
        if (iter)
        {
            if (*iter == 45 || *iter == 43)
                iter += 2;
            if (*iter == 123)
            {
                iter += 1;
            }
            else if (*iter == 33)
            {
                iter += 1;
            }
            else if (*iter == 126)
            {
                iter += 1;
            }
            else if (*iter == 32)
            {
                iter += 1;
            }
            sub_48e110(&v26, iter);
            v27 = 0;
            v3 = &v26;
            v17 = sub_488a10(v3);
        }
    }
    if ((char)(v17 - 67) <= 22)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v17] - 1006888)]));
    }
    else
    {
        strncpy(v15, "fff?", 4);
        v14 = 0.6000000238418579f;
        v18 = "player/pl_step1.wav";
        v19 = "player/pl_step2.wav";
        v13 = 2;
        if (v30 && !sub_488af0(v30->field_0->field_0 + gpGlobals->field_98, "func_breakable"))
        {
            *(float *)&*(uint32_t *)v15 = (float)((double)*(uint32_t *)v15 / 1.5);
            v14 = (float)(0.5 * v14);
        }
        else if (v17 == 80 && a0->field_10 != 1.0 && g_616928(0, 1))
        {
            sub_48a3b0(&a0->field_14);
            strncpy(&v3, "333?", 4);
            g_61692c(v3, 0x3f800000);
            strncpy(v11, "333?", 4);
            v33 = g_616928(0, 1);
            if (v33)
            {
                if (v33 != 1)
                    goto LABEL_51e2fd;
                v10 = 100;
                v9 = 0;
                v8 = 0.800000011920929f;
                v7 = (unsigned int)v11;
                v34 = "buttons/spark6.wav";
            }
            else
            {
                v10 = 100;
                v9 = 0;
                v8 = 0.800000011920929f;
                v7 = (unsigned int)v11;
                v34 = "buttons/spark5.wav";
            }
            v6 = v34;
            v5 = &a0->field_14;
            sub_4897b0(g_6168d4(0));
        }
LABEL_51e2fd:
        v6 = g_616928(0, 15) + 96;
        v5 = 0;
        v4 = v12;
        *(uint32_t *)&v2 = *(uint32_t *)v15;
        v1 = (&v18)[g_616928(0, v13 - 1)];
        v0 = &a0->field_14;
        sub_4897b0(g_6168d4(0));
        return v14;
    }
}

