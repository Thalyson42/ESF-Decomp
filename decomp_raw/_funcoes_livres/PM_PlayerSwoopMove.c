// PM_PlayerSwoopMove @0x190b40 size=1350
typedef struct st_590b40_2 {
    unsigned int field_0;
} st_590b40_2;

typedef struct st_590b40_1 {
    char padding_0[16];
    float field_10;
    char padding_14[8];
    float field_1c;
    char padding_20[16];
    float field_30;
} st_590b40_1;

typedef struct st_590b40_0 {
    char padding_0[16];
    float field_10;
    char padding_14[36];
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    float field_44;
    float field_48;
    float field_4c;
    char padding_50[12];
    float field_5c;
    float field_60;
    float field_64;
    char padding_68[12];
    float field_74;
    float field_78;
    float field_7c;
    char padding_80[68];
    float field_c4;
    char padding_c8[300];
    unsigned int field_1f4;
    char padding_1f8[72];
    float field_240;
    float field_244;
    char padding_248[324264];
    struct st_590b40_1 *field_4f4f0;
    char padding_4f4f4[140];
    struct st_590b40_2 *field_4f580;
} st_590b40_0;

extern st_590b40_0 *pmove;
extern char _GLOBAL_OFFSET_TABLE_;

double PM_PlayerSwoopMove(void)
{
    int idx;  // ecx
    double v42;  // 128
    float v43;  // 128
    float v44;  // 128
    float v45;  // 120
    double v46;  // mm7
    double v47;  // mm7
    int index;  // ecx
    unsigned int *v49;  // edx
    double v50;  // mm7
    uint160_t v0;  // [bp-0x1d0]
    int v1;  // [bp-0x1bc]
    int v2;  // [bp-0x1b8]
    int v3;  // [bp-0x1b4]
    float v4;  // [bp-0x19c]
    float v5;  // [bp-0x198]
    float v6;  // [bp-0x194]
    double v7;  // [bp-0x190]
    unsigned short v8;  // [bp-0x188]
    unsigned short v9;  // [bp-0x186]
    unsigned int v10;  // [bp-0x184]
    unsigned int v11;  // [bp-0x180]
    unsigned int v12;  // [bp-0x170]
    unsigned int v13;  // [bp-0x16c]
    double v14;  // [bp-0x168]
    float v15;  // [bp-0x124]
    float v16;  // [bp-0x120]
    float v17;  // [bp-0x11c]
    unsigned int v18;  // [bp-0x104]
    unsigned int v19;  // [bp-0x100]
    float v20;  // [bp-0xfc]
    unsigned int v21;  // [bp-0xe4]
    unsigned int v22;  // [bp-0xe0]
    float v23;  // [bp-0xdc]
    float v24;  // [bp-0xc4]
    unsigned int v25;  // [bp-0xc0]
    double v26;  // [bp-0xbc]
    char v27;  // [bp-0xa4]
    char v28;  // [bp-0x84]
    char v29;  // [bp-0x64]
    float v30;  // [bp-0x44]
    float v31;  // [bp-0x40]
    float v32;  // [bp-0x3c]
    float v33;  // [bp-0x24]
    unsigned int v34;  // [bp-0x20]
    double v35;  // [bp-0x1c]
    int v36;  // [bp+0x0]
    int v37;  // [bp+0x4]
    int v38;  // [bp+0x8]
    int v39;  // [bp+0xc]
    unsigned int v40;  // [bp+0x10]

    v30 = pmove->field_44;
    v31 = pmove->field_48;
    v32 = pmove->field_4c;
    *(char **)((char *)&v0 + 16) = &v27;
    *(char **)((char *)&v0 + 12) = &v28;
    *(char **)((char *)&v0 + 8) = &v29;
    *(float **)((char *)&v0 + 4) = &v30;
    AngleVectors(*(unsigned int *)((void*)&v0 + 4), *(unsigned int *)((void*)&v0 + 8), *(unsigned int *)((void*)&v0 + 12), *(unsigned int *)((void*)&v0 + 16), v1, v2, v3);
    v9 = __fnstcw();
    v8 = v9 | 0xc00;
    v6 = pmove->field_244;
    if ((unsigned int)(int)pmove->field_240 <= 5)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * pmove->field_240] - 536300)]));
    }
    else
    {
        idx = 0;
        do
        {
            (&v33)[idx] = v6 * *(float *)&(&v29)[4 * idx];
            idx += 1;
        } while (idx <= 2);
        v24 = v33;
        v25 = v34;
        v42 = v35;
        v26 = v42;
        *(float **)((char *)&v0 + 4) = &v24;
        VectorNormalize(v36);
        v7 = v42;
        esp = (char *)&v0 + 16;
        if (v42 > *(float *)&pmove->field_1f4)
        {
            *(float **)((char *)&v0 + 8) = &v33;
            *(double *)((char *)&v0 + 4) = *(float *)&pmove->field_1f4 / v42;
            *(float **)&v0 = &v33;
            VectorScale(v36, v37, v38);
            v7 = *(float *)&pmove->field_1f4;
            esp = (char *)&v0 + 12;
        }
        v43 = pmove->field_5c + pmove->field_74;
        pmove->field_5c = v43;
        pmove->field_60 = pmove->field_60 + pmove->field_78;
        pmove->field_64 = pmove->field_64 + pmove->field_7c;
        v15 = v43;
        v16 = pmove->field_60;
        v44 = pmove->field_64;
        v17 = v44;
        esp = esp - 12;
        *(float **)(esp - 4) = &v15;
        VectorNormalize(v36);
        v45 = v44;
        esp = esp + 8;
        if (v45 != 0.0f)
        {
            v5 = v45 - v44 * pmove->field_10 * pmove->field_4f4f0->field_1c * pmove->field_c4;
            if (v5 < 0.0f)
            {
                v46 = v45;
                v5 = 0.0f;
            }
            else
            {
                v46 = v45;
            }
            esp = esp - 4;
            *(st_590b40_0 **)(esp - 4) = &pmove->field_5c;
            esp = esp - 8;
            *(float *)esp = (float)(v5 / v46);
            *(st_590b40_0 **)(esp - 4) = &pmove->field_5c;
            VectorScale(v36, v37, v38);
            esp = esp + 8;
        }
        else
        {
            v5 = 0;
        }
        if (v7 < 0.10000000149011612f)
            return v7;
        v4 = (float)(v7 - v5);
        if (0.0 < v4)
        {
            esp = esp - 12;
            *(float **)(esp - 4) = &v33;
            VectorNormalize(v36);
            v47 = v7 * pmove->field_4f4f0->field_10 * pmove->field_10 * pmove->field_c4;
            esp = esp + 8;
            if (v47 > v4)
                v47 = v4;
            index = 0;
            do
            {
                v49 = &pmove->field_5c;
                *(float *)&v49[index] = (float)(v47 * (&v33)[index] + *(float *)&v49[index]);
                index += 1;
            } while (index <= 2);
        }
        esp = esp - 4;
        *(unsigned int **)(esp - 4) = &v18;
        *(st_590b40_0 **)(esp - 4) = &pmove->field_5c;
        esp = esp - 8;
        *(float *)esp = pmove->field_10;
        *(st_590b40_0 **)(esp - 4) = &pmove->field_38;
        VectorMA(v36, v37, v38, v39);
        v21 = v18;
        v22 = v19;
        v23 = v20;
        v50 = 1.0 + pmove->field_4f4f0->field_30 + v23;
        v23 = (float)v50;
        esp = esp - 20;
        esp = esp - 4;
        *(unsigned int *)(esp - 4) = 0xffffffff;
        esp = esp - 4;
        *(unsigned int *)(esp - 4) = 0;
        esp = esp - 4;
        *(unsigned int **)(esp - 4) = &v18;
        *(unsigned int **)(esp - 4) = &v21;
        *(unsigned int **)(esp - 8) = &v10;
        pmove->field_4f580(v36, v37, v38, v39, v40);
        if (!v11 && !v10)
        {
            pmove->field_38 = v12;
            pmove->field_3c = v13;
            *(double *)&pmove->field_40 = v14;
            return v14;
        }
        PM_FlyMove();
        return v50;
    }
}

