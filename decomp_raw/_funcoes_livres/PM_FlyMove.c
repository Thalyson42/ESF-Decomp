// PM_FlyMove @0x18f610 size=1482
typedef struct st_58f610_4 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[92];
    unsigned int field_68;
    char padding_6c[20];
    unsigned int field_80;
    unsigned int field_84;
    char padding_88[324620];
    struct st_58f610_3 *field_4f494;
    char padding_4f498[140];
    struct st_58f610_2 *field_4f524;
} st_58f610_4;

typedef struct st_58f610_1 {
    char padding_0[16];
    float field_10;
    char padding_14[36];
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    char padding_44[24];
    float field_5c;
    float field_60;
    float field_64;
    char padding_68[92];
    float field_c4;
    char padding_c8[20];
    unsigned int field_dc;
    unsigned int field_e0;
    char padding_e4[324620];
    struct st_58f610_0 *field_4f4f0;
    char padding_4f4f4[140];
    struct st_58f610_2 *field_4f580;
} st_58f610_1;

typedef struct st_58f610_2 {
    unsigned int field_0;
} st_58f610_2;

typedef struct st_58f610_0 {
    char padding_0[44];
    float field_2c;
} st_58f610_0;

typedef struct st_58f610_3 {
    char padding_0[44];
    unsigned int field_2c;
} st_58f610_3;

extern float vec3_origin;
extern float g_5ccd84;
extern float g_5ccd88;
extern st_58f610_1 *pmove;

unsigned int PM_FlyMove(void)
{
    int idx;  // esi
    unsigned int *iter;  // edi
    st_58f610_1 *v49;  // edx
    unsigned int *k;  // esi
    unsigned int v42;  // ecx
    int v43;  // edx
    unsigned int v44;  // eax
    int v45;  // esi
    unsigned int v46;  // ecx
    int v47;  // esi
    int v48;  // ecx
    char v0;  // [bp-0x1f4]
    st_58f610_4 *v1;  // [bp-0x1b0]
    float *v2;  // [bp-0x17c]
    float *v3;  // [bp-0x178]
    float *v4;  // [bp-0x174]
    char *v5;  // [bp-0x170]
    char *v6;  // [bp-0x16c]
    unsigned int v7;  // [bp-0x168]
    float v8;  // [bp-0x164]
    float v9;  // [bp-0x160]
    int v10;  // [bp-0x15c]
    int node;  // [bp-0x158]
    float v12;  // [bp-0x148]
    char v13;  // [bp-0x144]
    char v14;  // [bp-0x124]
    float v15;  // [bp-0x114]
    unsigned int v16;  // [bp-0x110]
    unsigned int v17;  // [bp-0x10c]
    unsigned int v18;  // [bp-0x108]
    float v19;  // [bp-0x104]
    float v20;  // [bp-0x100]
    float v21;  // [bp-0xfc]
    unsigned int v22;  // [bp-0xc4]
    float v23;  // [bp-0xc0]
    float v24;  // [bp-0xbc]
    float v25;  // [bp-0xa4]
    float v26;  // [bp-0xa0]
    float v27;  // [bp-0x9c]
    float v28;  // [bp-0x84]
    float v29;  // [bp-0x80]
    float v30;  // [bp-0x7c]
    float v31;  // [bp-0x64]
    float v32;  // [bp-0x60]
    float v33;  // [bp-0x5c]
    char v34;  // [bp-0x58]
    char v35;  // [bp-0x24]
    float v36;  // [bp-0x20]
    float v37;  // [bp-0x1c]

    v7 = 0;
    v10 = 0;
    v25 = pmove->field_5c;
    v26 = pmove->field_60;
    v27 = pmove->field_64;
    v28 = pmove->field_5c;
    v29 = pmove->field_60;
    v30 = pmove->field_64;
    v8 = 0;
    v9 = pmove->field_10;
    node = 0;
    while (node < 4)
    {
        if (pmove->field_5c == 0.0f && pmove->field_60 == 0.0f && pmove->field_64 == 0.0f)
            break;
        idx = 0;
        do
        {
            *(float *)&(&v13)[4 * idx] = v9 * (&pmove->field_5c)[idx] + *(float *)&(&pmove->field_38)[idx];
            idx += 1;
        } while (idx <= 2);
        pmove->field_4f580(&v14, &pmove->field_38, &v13, 0, 0xffffffff);
        v8 += v15;
        if ((unsigned int)v14)
        {
            pmove->field_5c = vec3_origin;
            pmove->field_60 = g_5ccd84;
            pmove->field_64 = g_5ccd88;
            return 4;
        }
        if (0.0 < v15)
        {
            pmove->field_38 = v16;
            pmove->field_3c = v17;
            pmove->field_40 = v18;
            v25 = pmove->field_5c;
            v26 = pmove->field_60;
            v27 = pmove->field_64;
            v10 = 0;
        }
        if (v15 == 1.0f)
            break;
        v1 = &pmove->field_5c;
        iter = &v0;
        k = &v14;
        for (v42 = 0x11; v42; k += 1)
        {
            v42 -= 1;
            *iter = *k;
            iter += 1;
        }
        sub_48caf0();
        if (0.7 < v21)
            v7 |= 1;
        if (v21 == 0.0f)
            v7 |= 2;
        v9 -= v9 * v15;
        if (v10 <= 4)
        {
            v43 = v10;
            v44 = v43 * 12;
            *(float *)((char *)&v31 + v44) = v19;
            *(float *)((char *)&v32 + v44) = v20;
            *(float *)((char *)&v33 + v44) = v21;
            v10 = v43 + 1;
            if (pmove->field_dc == 3 && (pmove->field_e0 == 0xffffffff || pmove->field_c4 != 1.0f))
            {
                v45 = 0;
                if (0 < v10)
                {
                    v6 = &v22;
                    do
                    {
                        v46 = v45 * 12;
                        if (0.7 < *(float *)((char *)&v33 + v46))
                        {
                            sub_489f00(&v25, v46 + (char *)&v31, v6, 0x3f800000);
                            *(unsigned int *)&v25 = v22;
                            v26 = v23;
                            v27 = v24;
                        }
                        else
                        {
                            v12 = (float)((1.0 - pmove->field_c4) * pmove->field_4f4f0->field_2c + 1.0);
                            sub_489f00(&v25, &(&v31)[3 * v45], v6, v12);
                        }
                    } while ((v45 += 1, v45 < v10));
                }
                *(unsigned int *)&pmove->field_5c = v22;
                pmove->field_60 = v23;
                pmove->field_64 = v24;
                *(unsigned int *)&v25 = v22;
                v26 = v23;
                v27 = v24;
                node += 1;
                continue;
            }
            v47 = 0;
            if (0 < v10)
            {
                v5 = &v31;
                do
                {
                    sub_489f00(&v25, &v5[12 * v47], &pmove->field_5c, 0x3f800000);
                    v48 = 0;
                    if (0 < v10)
                    {
                        v4 = &v31;
                        v3 = &v32;
                        v2 = &v33;
                        do
                        {
                        } while ((v48 == v47 || 0.0 <= pmove->field_5c * v4[3 * v48] + pmove->field_60 * v3[3 * v48] + pmove->field_64 * v2[3 * v48]) && (v48 += 1, v48 < v10));
                    }
                } while (v48 != v10 && (v47 += 1, v47 < v10));
            }
            if (v47 == v10)
            {
                if (v10 != 2)
                    goto LABEL_58faa6;
                sub_4883f0(&v31, &v34, &v35);
                sub_48d230(&v35, v35 * pmove->field_5c + v36 * pmove->field_60 + v37 * pmove->field_64, &pmove->field_5c);
            }
            v49 = pmove;
            if (0.0 >= pmove->field_5c * v28 + pmove->field_60 * v29 + pmove->field_64 * v30)
            {
LABEL_58fb21:
                v49->field_5c = vec3_origin;
                v49->field_60 = g_5ccd84;
                v49->field_64 = g_5ccd88;
                break;
            }
            else
            {
                node += 1;
            }
        }
        else
        {
LABEL_58faa6:
            v49 = pmove;
            goto LABEL_58fb21;
        }
    }
    if (v8 == 0.0f)
    {
        pmove->field_5c = vec3_origin;
        pmove->field_60 = g_5ccd84;
        pmove->field_64 = g_5ccd88;
    }
    return v7;
}

