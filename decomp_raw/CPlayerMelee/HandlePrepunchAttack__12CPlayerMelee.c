// HandlePrepunchAttack__12CPlayerMelee @0x109040 size=1786
typedef struct st_509040_1 {
    char padding_0[360];
    unsigned int field_168;
} st_509040_1;

typedef struct st_509040_0 {
    float field_0;
    char padding_4[60];
    float field_40;
    float field_44;
    float field_48;
} st_509040_0;

extern float g_5bd1e4;
extern float g_5bd1f8;
extern float g_5bd20c;
extern float g_5bd220;
extern float g_5bd234;
extern float g_5bd248;
extern st_509040_0 *gpGlobals;

double HandlePrepunchAttack__12CPlayerMelee(float idx)
{
    unsigned int index;  // edx
    double v25;  // mm7
    unsigned int *v34;  // edx
    double v35;  // mm5
    double v36;  // mm5
    st_509040_1 *v37;  // edx
    double v38;  // mm5
    char *v39;  // eax
    unsigned int *v40;  // edx
    double v41;  // mm5
    double v42;  // mm5
    st_509040_1 *v43;  // edx
    double v26;  // mm7
    double v44;  // mm5
    double v45;  // mm7
    double v27;  // mm7
    int v28;  // eax
    double v29;  // mm7
    unsigned int *v30;  // edx
    int v31;  // edx
    unsigned long long v33;  // 4261
    int v0;  // [bp-0xa8], Other Possible Types: unsigned int
    float v1;  // [bp-0xa0]
    unsigned int v2;  // [bp-0x9c]
    unsigned int v3;  // [bp-0x98]
    unsigned int v4;  // [bp-0x94]
    double v5;  // [bp-0x74]
    float v6;  // [bp-0x68]
    float v7;  // [bp-0x64]
    float v8;  // [bp-0x60]
    float v9;  // [bp-0x5c]
    float v10;  // [bp-0x58]
    float v11;  // [bp-0x54]
    float v12;  // [bp-0x48]
    float v13;  // [bp-0x44]
    float v14;  // [bp-0x40]
    int v15;  // [bp-0x28]
    double v16;  // [bp-0x24], Other Possible Types: unsigned int, float
    unsigned int v17;  // [bp-0x20], Other Possible Types: float
    unsigned int v18;  // [bp-0x1c], Other Possible Types: float
    unsigned short v19;  // [bp-0x18], Other Possible Types: float
    unsigned short v20;  // [bp-0x16]
    float v21;  // [bp-0x14]
    float v22;  // [bp-0x10]

    if (!*(int *)(*(int *)(*(unsigned int *)&idx + 304) + 208))
    {
        index = *(int *)*(int *)(*(unsigned int *)&idx + 292);
        v16 = g_5bd20c * *(float *)(*(unsigned int *)&idx + 272);
        v17 = g_5bd20c * *(float *)(*(unsigned int *)&idx + 276);
        v18 = g_5bd20c * *(float *)(*(unsigned int *)&idx + 280);
    }
    else
    {
        index = *(int *)*(int *)(*(unsigned int *)&idx + 292);
        v16 = 0;
        v17 = 0;
        v18 = 0;
    }
    *(float *)(index + 648) = v16;
    *(float *)(index + 652) = v17;
    *(float *)(index + 656) = v18;
    if (*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 384) & 1 && (v25 = (double)*(int *)(*(unsigned int *)&idx + 184), v25 >= g_5bd248))
    {
        if (*(int *)(*(unsigned int *)&idx + 0x100))
        {
            sub_489040(idx);
            return v25;
        }
        sub_489880(idx);
LABEL_509177:
        v0 = 3;
    }
    else
    {
        if (!(*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 385) & 8) || !(v25 = (double)*(int *)(*(unsigned int *)&idx + 184), v25 >= g_5bd248))
        {
            if (*(int *)(*(unsigned int *)&idx + 0x100))
            {
                if (*(float *)(*(unsigned int *)&idx + 148) + g_5bd1f8 < gpGlobals->field_0)
                    goto LABEL_5091e0;
            }
            else
            {
                if (*(float *)(*(unsigned int *)&idx + 148) + g_5bd1e4 < gpGlobals->field_0)
                {
LABEL_5091e0:
                    *(float *)(*(unsigned int *)&idx + 148) = gpGlobals->field_0;
                    *(unsigned int *)(*(unsigned int *)&idx + 184) = *(int *)(*(unsigned int *)&idx + 184) + 1;
                    if (*(int *)(*(unsigned int *)&idx + 184) == 1)
                    {
                        v4 = 1;
                        v3 = 0;
                    }
                    else
                    {
                        v4 = *(int *)(*(unsigned int *)&idx + 184);
                        v3 = 1;
                    }
                    sub_488530(idx);
                    v26 = (double)*(int *)(*(unsigned int *)&idx + 184);
                    if (v26 < g_5bd234)
                    {
                        sub_48b2b0(idx);
                        v27 = v26 + *(float *)(*(int *)(*(unsigned int *)&idx + 304) + 0x88);
                        *(float *)(*(int *)(*(unsigned int *)&idx + 304) + 0x88) = (float)v27;
                        if (!*(int *)(*(int *)(*(unsigned int *)&idx + 304) + 224))
                            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 304) + 224) = 1;
                        v28 = 15;
                        if (*(int *)(*(unsigned int *)&idx + 0x100))
                            v28 = 22;
                    }
                    else
                    {
                        if (!*(int *)(*(int *)(*(unsigned int *)&idx + 304) + 220))
                        {
                            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 304) + 220) = 1;
                            *(float *)(*(int *)(*(unsigned int *)&idx + 304) + 140) = *(float *)(*(int *)(*(unsigned int *)&idx + 304) + 0x88);
                            v26 = *(float *)(*(int *)(*(unsigned int *)&idx + 304) + 0x88) + gpGlobals->field_0;
                            *(float *)(*(int *)(*(unsigned int *)&idx + 304) + 0x88) = (float)v26;
                        }
                        sub_48b2b0(idx);
                        v29 = *(float *)(*(int *)(*(unsigned int *)&idx + 304) + 140) - v26 * 0.5;
                        *(float *)(*(int *)(*(unsigned int *)&idx + 304) + 140) = (float)v29;
                        sub_48b2b0(idx);
                        *(float *)(*(int *)(*(unsigned int *)&idx + 304) + 0x88) = (float)(*(float *)(*(int *)(*(unsigned int *)&idx + 304) + 0x88) - v29 * 0.5);
                        v30 = *(int *)(*(unsigned int *)&idx + 304);
                        v27 = 0.0;
                        if (0.0 > *(float *)&v30[35])
                        {
                            v27 = *(float *)&v30[0x22] - *(float *)&v30[35];
                            *(float *)&v30[0x22] = (float)v27;
                            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 304) + 140) = 0;
                        }
                        v28 = 25;
                        if (*(int *)(*(unsigned int *)&idx + 0x100))
                            v28 = 37;
                    }
                    if (!sub_48c980(*(int *)(*(unsigned int *)&idx + 292), v28))
                    {
                        *(float *)&v16 = *(float *)(*(unsigned int *)&idx + 272);
                        *(float *)&v17 = *(float *)(*(unsigned int *)&idx + 276);
                        *(float *)&v18 = *(float *)(*(unsigned int *)&idx + 280);
                        sub_48a700(idx, 0);
                        *(unsigned int *)&v19 = -v16;
                        *(unsigned int *)&v21 = -v17;
                        *(unsigned int *)&v22 = -v18;
                        sub_489100(*(int *)(*(unsigned int *)&idx + 304), *(int *)(*(unsigned int *)&idx + 292), &v19, 4);
                        return -*(float *)&v18;
                    }
                    if (*(int *)(*(int *)(*(unsigned int *)&idx + 304) + 212))
                    {
                        v31 = 20;
                        if (*(int *)(*(int *)(*(unsigned int *)&idx + 304) + 208))
                            v31 = 30;
                        if (sub_48c980(*(int *)(*(unsigned int *)&idx + 296), v31))
                            goto LABEL_5094db;
                        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 304) + 212) = 0;
                        v2 = 0x2000000;
                        sub_48b320(idx);
                        v0 = *(int *)*(int *)(*(unsigned int *)&idx + 292);
                        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 296) + 96) + 52))(*(int *)(*(unsigned int *)&idx + 296), v0, *(int *)*(int *)(*(unsigned int *)&idx + 292), (float)v27);
                        *(unsigned short *)&v0 = 1;
                        sub_48b670(*(int *)(*(unsigned int *)&idx + 304), v0, gpGlobals->field_0, 1, "ref_autopunch_hit");
                    }
                    else
                    {
                        v2 = 0x2000000;
                        sub_48b320(idx);
                        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 296) + 96) + 52))(*(int *)(*(unsigned int *)&idx + 296), *(int *)*(int *)(*(unsigned int *)&idx + 292), *(int *)*(int *)(*(unsigned int *)&idx + 292), (float)v27);
                    }
LABEL_5094db:
                    if (*(int *)(*(int *)(*(unsigned int *)&idx + 304) + 208))
                    {
                        v15 = *(int *)(*(unsigned int *)&idx + 184) / 2;
                        v5 = (double)v15;
                        v16 = -*(float *)(*(unsigned int *)&idx + 272);
                        v17 = -*(float *)(*(unsigned int *)&idx + 276);
                        v18 = -*(float *)(*(unsigned int *)&idx + 280);
                        sub_48a800(&v16);
                        v20 = __fnstcw();
                        v19 = _INSERT(v20, 1, *(char *)((void*)&v20 + 1) & 243 | 8);
                        v33 = _ccall(v19);
                        v16 = rint(v5);
                        if (v5 == v16)
                        {
                            v34 = &gpGlobals->field_40;
                            v35 = 2.5 * gpGlobals->field_40;
                            v19 = (float)v35;
                            v36 = 2.5 * *(float *)&v34[1];
                            v21 = (float)v36;
                            v22 = (float)(2.5 * *(float *)&v34[2]);
                            v37 = *(int *)*(int *)(*(unsigned int *)&idx + 296) + 8;
                            v16 = (float)(v35 + *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 8));
                            v17 = (float)(v36 + *(float *)&v37->padding_0[4]);
                            v18 = *(float *)&v37->padding_0[8] + v22;
                            v38 = -*(float *)(*(unsigned int *)&idx + 272);
                            v6 = (float)v38;
                            v7 = -*(float *)(*(unsigned int *)&idx + 276);
                            v8 = -*(float *)(*(unsigned int *)&idx + 280);
                            v12 = (float)(v38 * 75.0);
                            v13 = (float)(75.0 * v7);
                            v14 = (float)(75.0 * v8);
                            v3 = 6;
                            v2 = 10;
                            v1 = 5.0f;
                            v39 = &v12;
                        }
                        else
                        {
                            v40 = &gpGlobals->field_40;
                            v41 = 2.5 * gpGlobals->field_40;
                            v19 = (float)v41;
                            v42 = 2.5 * *(float *)&v40[1];
                            v21 = (float)v42;
                            v22 = (float)(2.5 * *(float *)&v40[2]);
                            v43 = *(int *)*(int *)(*(unsigned int *)&idx + 296) + 8;
                            v16 = (float)(*(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 8) - v41);
                            v17 = (float)(*(float *)&v43->padding_0[4] - v42);
                            v18 = *(float *)&v43->padding_0[8] - v22;
                            v44 = -*(float *)(*(unsigned int *)&idx + 272);
                            v9 = (float)v44;
                            v10 = -*(float *)(*(unsigned int *)&idx + 276);
                            v11 = -*(float *)(*(unsigned int *)&idx + 280);
                            v6 = (float)(v44 * 75.0);
                            v7 = (float)(75.0 * v10);
                            v8 = (float)(75.0 * v11);
                            v3 = 6;
                            v2 = 10;
                            v1 = 5.0f;
                            v39 = &v6;
                        }
                        sub_48a6f0(*(int *)(*(unsigned int *)&idx + 304), &v16, v39);
                    }
                }
            }
            v45 = (double)*(int *)(*(unsigned int *)&idx + 184);
            if (g_5bd220 != v45 || *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 368))
                return v45;
            sub_489040(idx);
            return v45;
        }
        if (*(int *)(*(unsigned int *)&idx + 0x100))
        {
            sub_489040(idx);
            return v25;
        }
        sub_489880(idx);
        if (*(int *)(*(int *)(*(unsigned int *)&idx + 304) + 212) || *(int *)(*(unsigned int *)&idx + 184) > 6)
            goto LABEL_509177;
        v3 = 5;
    }
    sub_489610(idx);
    return v25;
}

