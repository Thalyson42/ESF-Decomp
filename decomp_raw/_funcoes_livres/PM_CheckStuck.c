// PM_CheckStuck @0x1915e0 size=1029
typedef struct st_5915e0_1 {
    unsigned int field_0;
} st_5915e0_1;

typedef struct st_5915e0_0 {
    int field_0;
    int field_4;
    char padding_8[48];
    float field_38;
    float field_3c;
    float field_40;
    char padding_44[283698];
    char field_45476;
    char padding_45477[41189];
    struct st_5915e0_1 *field_4f55c;
    char padding_4f560[12];
    struct st_5915e0_1 *field_4f56c;
    struct st_5915e0_1 *field_4f570;
} st_5915e0_0;

extern st_5915e0_0 *pmove;
extern char rgStuckCheckTime.296;

unsigned int PM_CheckStuck(void)
{
    unsigned int v23;  // edi
    double v24;  // mm7
    unsigned int v26;  // edi
    double v27;  // mm7
    double v28;  // mm7
    float v0;  // [bp-0xfc]
    float v1;  // [bp-0xf8]
    float v2;  // [bp-0xf4]
    float v3;  // [bp-0xf0]
    float v4;  // [bp-0xec]
    float v5;  // [bp-0xe8]
    float v6;  // [bp-0xe4]
    int v7;  // [bp-0xe0]
    int v8;  // [bp-0xdc]
    unsigned int v9;  // [bp-0xd8]
    float v10;  // [bp-0xc8]
    char v11;  // [bp-0xc4]
    float v12;  // [bp-0x64]
    float v13;  // [bp-0x60]
    float v14;  // [bp-0x5c]
    char v15;  // [bp-0x44]
    float v16;  // [bp-0x44]
    float v17;  // [bp-0x40]
    float v18;  // [bp-0x3c]
    float v19;  // [bp-0x24]
    float v20;  // [bp-0x20]
    float v21;  // [bp-0x1c]

    v23 = pmove->field_4f55c(&pmove->field_38, &v11);
    if (v23 == 0xffffffff)
    {
        sub_489160(pmove->field_0, pmove->field_4);
    }
    else
    {
        v19 = pmove->field_38;
        v20 = pmove->field_3c;
        v24 = pmove->field_40;
        v21 = (float)v24;
        if (!pmove->field_4 && (!v23 || *(int *)&pmove->padding_44[572 + 224 * v23]))
        {
            v7 = 0;
            sub_489160(pmove->field_0, pmove->field_4);
            do
            {
                sub_4886a0(pmove->field_0, pmove->field_4, &v15);
                v12 = v19 + v16;
                v13 = v20 + v17;
                v24 = v21 + v18;
                v14 = (float)v24;
                if (pmove->field_4f55c(&v12, &v11) == 0xffffffff)
                {
                    sub_489160(pmove->field_0, pmove->field_4);
                    goto LABEL_59183a;
                }
            } while ((v7 += 1, v7 <= 53));
        }
        v9 = !pmove->field_4;
        pmove->field_4f56c();
        v10 = (float)v24;
        if ((isunordered(v10 - 0.05, *(float *)&(&rgStuckCheckTime.296)[8 * pmove->field_0 + 4 * v9]) ? 0x44 : v10 - 0.05 == *(float *)&(&rgStuckCheckTime.296)[8 * pmove->field_0 + 4 * v9] ? 63 : v10 - 0.05 < *(float *)&(&rgStuckCheckTime.296)[8 * pmove->field_0 + 4 * v9] ? 0 : 0xff) < 64)
        {
LABEL_5919d1:
            return 1;
        }
        *(float *)&(&rgStuckCheckTime.296)[8 * pmove->field_0 + 4 * v9] = v10;
        pmove->field_4f570(v23, &v11);
        v8 = sub_4886a0(pmove->field_0, pmove->field_4, &v15);
        v12 = v19 + v16;
        v13 = v20 + v17;
        v14 = v21 + v18;
        v26 = pmove->field_4f55c(&v12, 0);
        if (v26 == 0xffffffff)
        {
            sub_489160(pmove->field_0, pmove->field_4);
            if (v8 > 26)
            {
LABEL_59183a:
                pmove->field_38 = v12;
                pmove->field_3c = v13;
                pmove->field_40 = v14;
            }
        }
        else
        {
            if (pmove->field_45476 & 7 && *(int *)&pmove->padding_44[556 + 224 * v26])
            {
                v3 = 8.0f;
                v2 = 18.0f;
                v1 = v3;
                v0 = (float)(v2 * 4.0);
                v4 = 0;
                if (v4 <= v0)
                {
                    do
                    {
                        v27 = -v1;
LABEL_59198b:
                        v6 = (float)v27;
                        if (v27 <= v1)
                        {
                            v28 = -v1;
                            while (1)
                            {
                                v5 = (float)v28;
                                if (v28 <= v1)
                                {
                                    v12 = v19;
                                    v13 = v20;
                                    v14 = v21;
                                    v12 += v6;
                                    v13 += v5;
                                    v14 += v4;
                                    if (pmove->field_4f55c(&v12, 0) == 0xffffffff)
                                        goto LABEL_59183a;
                                    v28 = v5 + v3;
                                }
                                else
                                {
                                    v27 = v6 + v3;
                                    goto LABEL_59198b;
                                }
                            }
                        }
                    } while ((v4 += v2, v4 <= v0));
                }
            }
            goto LABEL_5919d1;
        }
    }
    return 0;
}

