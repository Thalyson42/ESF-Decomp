// PM_UpdateStepSound @0x18e9a0 size=1004
typedef struct st_58e9a0_1 {
    unsigned int field_0;
} st_58e9a0_1;

typedef struct st_58e9a0_0 {
    char padding_0[56];
    float field_38;
    float field_3c;
    float field_40;
    char padding_44[24];
    char field_5c;
    char padding_5d[55];
    int field_94;
    char padding_98[33];
    char field_b9;
    char padding_ba[2];
    unsigned int field_bc;
    char padding_c0[28];
    unsigned int field_dc;
    unsigned int field_e0;
    char padding_e4[268];
    char field_1f0;
    char padding_1f1[324363];
    float field_4f4fc;
    char padding_4f500[44];
    float field_4f52c;
    char padding_4f530[68];
    struct st_58e9a0_1 *field_4f574;
} st_58e9a0_0;

extern st_58e9a0_0 *pmove;
extern char _GLOBAL_OFFSET_TABLE_;

double PM_UpdateStepSound(void)
{
    double v19;  // mm7
    double v20;  // mm7
    double v29;  // mm7
    double v21;  // mm0
    unsigned int v22;  // eax
    double v23;  // mm0
    int v24;  // ecx
    double v25;  // mm0
    double v26;  // mm7
    double v27;  // mm7
    double v28;  // mm7
    unsigned int v0;  // [bp-0x94]
    float v1;  // [bp-0x90]
    float v2;  // [bp-0x8c]
    float v3;  // [bp-0x88]
    float v4;  // [bp-0x84]
    unsigned int v5;  // [bp-0x80]
    unsigned short v6;  // [bp-0x7c]
    unsigned short v7;  // [bp-0x7a]
    int v8;  // [bp-0x78]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    float v12;  // [bp-0x44]
    float v13;  // [bp-0x40]
    float v14;  // [bp-0x3c]
    float v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]

    if (pmove->field_94 > 0)
    {
        return v29;
    }
    else if (pmove->field_b9 & 16)
    {
        return v28;
    }
    else if (pmove->field_dc != 15)
    {
        PM_CatagorizeTextureType();
        Length(&pmove->field_5c);
        v4 = (float)v19;
        v0 = pmove->field_dc == 5;
        if (v0)
        {
            v2 = 60.0f;
            v3 = 80.0f;
            v20 = 100.0;
            v1 = 100.0f;
        }
        else
        {
            v2 = 80.0f;
            v20 = 90.0;
            v3 = 90.0f;
            v1 = 0;
        }
        if (!v0 && pmove->field_e0 == 0xffffffff)
            return v20;
        Length(&pmove->field_5c);
        if (0.0 >= v21)
            return 0.0;
        if (v4 < v2 && pmove->field_94)
            return 0.0;
        v5 = v4 < v3;
        v9 = pmove->field_38;
        v10 = pmove->field_3c;
        v11 = pmove->field_40;
        v15 = pmove->field_38;
        v16 = pmove->field_3c;
        v17 = pmove->field_40;
        v12 = pmove->field_38;
        v13 = pmove->field_3c;
        v14 = pmove->field_40;
        v22 = pmove->field_bc * 3;
        v23 = (&pmove->field_4f52c)[v22] - (&pmove->field_4f4fc)[v22];
        v17 = (float)(pmove->field_40 - v23 * 0.3);
        v14 = (float)(pmove->field_40 - v23 * 0.5);
        if (v0)
        {
            v24 = 8;
            v25 = 0.3499999940395355;
            pmove->field_94 = 350;
        }
        else if (pmove->field_4f574(&v15, 0) == 0xfffffffd)
        {
            v24 = 7;
            v25 = 0.6499999761581421;
            pmove->field_94 = 600;
        }
        else
        {
            if (pmove->field_4f574(&v12, 0) == 0xfffffffd)
            {
                v24 = 6;
                if (!v5)
                    goto LABEL_58ec04;
LABEL_58ebfc:
                v25 = 0.20000000298023224;
            }
            else
            {
                v24 = PM_MapTextureTypeStepType(pmove->field_1f0);
                if ((char)(pmove->field_1f0 - 67) <= 19)
                    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * pmove->field_1f0] - 544648)]));
                if (v5)
                    goto LABEL_58ebfc;
LABEL_58ec04:
                v25 = 0.5;
            }
            if (v5)
                pmove->field_94 = 400;
            else
                pmove->field_94 = 300;
        }
        v26 = (double)pmove->field_94 + v1;
        v7 = __fnstcw();
        v6 = v7 | 0xc00;
        v8 = (int)v26;
        pmove->field_94 = v8;
        PM_PlayStepSound(v24, (float)v25);
        return v26;
    }
    else
    {
        return v27;
    }
}

