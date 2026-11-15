// BlockStruggleThink__16CExplodingAttack @0xbbde0 size=1326
typedef struct st_4bbde0_4 {
    struct st_4bbde0_3 *field_0;
    char padding_4[796];
    unsigned int field_320;
    char padding_324[52];
    unsigned int field_358;
    char padding_35c[980];
    unsigned int field_730;
} st_4bbde0_4;

typedef struct st_4bbde0_3 {
    char padding_0[264];
    unsigned int field_108;
} st_4bbde0_3;

typedef struct st_4bbde0_2 {
    char padding_0[32];
    char field_20;
    char padding_21[375];
    unsigned int field_198;
    char padding_19c[68];
    unsigned int field_1e0;
} st_4bbde0_2;

typedef struct st_4bbde0_1 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4bbde0_1;

typedef struct st_4bbde0_0 {
    unsigned int field_0;
} st_4bbde0_0;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern unsigned int gmsgPowerStruggle;
extern st_4bbde0_0 *g_616878;
extern st_4bbde0_0 *g_61687c;
extern st_4bbde0_0 *g_616884;
extern st_4bbde0_1 *gpGlobals;
extern char g_800000;

double BlockStruggleThink__16CExplodingAttack(float idx)
{
    double v23;  // mm7
    st_4bbde0_4 *v24;  // edx
    unsigned int v33;  // 120
    double v34;  // mm5
    double v35;  // mm4
    unsigned int *v36;  // edx
    double v37;  // mm7
    double v38;  // mm6
    st_4bbde0_2 *v39;  // ecx
    unsigned int *v40;  // edx
    double v41;  // mm6
    double v42;  // mm7
    double v25;  // mm7
    unsigned int *v43;  // edx
    st_4bbde0_3 *v44;  // ecx
    st_4bbde0_2 *v45;  // edx
    st_4bbde0_2 *v46;  // edx
    double v47;  // mm7
    unsigned int v27;  // esi
    double v28;  // mm7
    double v29;  // mm7
    st_4bbde0_2 *v30;  // ecx
    unsigned int *v31;  // edx
    double v32;  // mm7
    float v0;  // [bp-0xd0]
    int v1;  // [bp-0xcc], Other Possible Types: unsigned int
    float v2;  // [bp-0xa0]
    float v3;  // [bp-0x90]
    unsigned short v4;  // [bp-0x8c]
    unsigned short v5;  // [bp-0x8a]
    float v6;  // [bp-0x88]
    float v7;  // [bp-0x84]
    float v8;  // [bp-0x80]
    float v9;  // [bp-0x7c]
    float v10;  // [bp-0x78]
    float v11;  // [bp-0x74]
    float v12;  // [bp-0x68]
    float v13;  // [bp-0x64]
    float v14;  // [bp-0x60]
    float v15;  // [bp-0x48]
    float v16;  // [bp-0x44]
    float v17;  // [bp-0x40]
    float v18;  // [bp-0x28]
    float v19;  // [bp-0x24]
    float v20;  // [bp-0x20]
    int v21;  // [bp-0x8], Other Possible Types: unsigned int

    if (!sub_48b6d0(idx, *(int *)(*(unsigned int *)&idx + 700)))
    {
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 0x200))(idx);
        return v23;
    }
    v24 = *(int *)(*(unsigned int *)&idx + 700);
    v25 = (double)(int)v24->field_730;
    if (v25 > *(float *)(*(int *)idx + 480))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 688) = 0;
        v24->field_358 = 0;
        g_616878(1, gmsgPowerStruggle, 0, *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 700) + 520));
        v1 = 127;
        g_616884(v1);
        g_61687c(v1);
        if (*(int *)(*(int *)(*(unsigned int *)&idx + 700) + 800))
            *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 700) + 264) = 14;
        else
            *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 700) + 264) = 3;
        *(unsigned int *)(*(unsigned int *)&idx + 692) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 728) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 20) = _INSERT((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 504))(idx, *(int *)(*(unsigned int *)&idx + 700), 0), 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 24) = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
        return v25;
    }
    else
    {
        v27 = *(int *)(*(int *)(*(unsigned int *)&idx + 700) + 1840);
        v21 = v27;
        if (*(float *)(*(int *)idx + 480) > (double)(int)v21)
        {
            v28 = 0.0;
            if (*(float *)(*(int *)idx + 480) != 0.0f)
            {
                v21 = v27;
                v28 = (*(float *)(*(int *)idx + 480) - (double)(int)v21) / *(float *)(*(int *)idx + 480);
                goto LABEL_4bbf8b;
            }
        }
        else if (!v27)
        {
            *(unsigned int *)(*(unsigned int *)&idx + 696) = 0;
        }
        else
        {
            v21 = v27;
            v28 = -((double)(int)v21 - *(float *)(*(int *)idx + 480)) / (double)(int)v21;
LABEL_4bbf8b:
            *(float *)(*(unsigned int *)&idx + 696) = (float)v28;
        }
        sub_488e40(*(int *)idx + 80);
        v21 = sub_48a780(*(int *)(*(unsigned int *)&idx + 700));
        v29 = (double)v21;
        v2 = (float)v29;
        if (v27)
        {
            v30 = *(int *)idx;
            v31 = &gpGlobals->field_28;
            v6 = (float)(v29 * gpGlobals->field_28);
            v7 = v2 * *(float *)&v31[1];
            v8 = v2 * *(float *)&v31[2];
            v12 = (float)(0.20000000298023224 * v6);
            v32 = 0.20000000298023224 * v8;
            v13 = (float)(0.20000000298023224 * v7);
            v14 = (float)v32;
            v33 = *&v30->field_1e0;
            v15 = __int_as_float(v33) * v12;
            v16 = __int_as_float(v33) * v13;
            v34 = v32 * __int_as_float(v33);
            v17 = (float)v34;
            v21 = v27;
            v35 = (double)(int)v21;
            v18 = (float)(v15 / v35);
            v19 = (float)(v16 / v35);
            v20 = (float)(v34 / v35);
            *(float *)&v30->field_20 = v18;
            *(float *)&v30->padding_21[3] = v19;
            *(float *)&v30->padding_21[7] = v20;
            v36 = *(int *)idx + 32;
            v37 = *(float *)(*(int *)idx + 32) * *(float *)(*(int *)idx + 32) + *(float *)&v36[1] * *(float *)&v36[1] + *(float *)&v36[2] * *(float *)&v36[2];
            v38 = sqrt(v37);
            if (isnan(v38))
                sub_487dc0(*(unsigned int *)&v37);
            else
                v37 = v38;
            v9 = (float)v37;
            if (v9 <= v2)
                goto LABEL_4bc166;
            v39 = *(int *)idx;
            v40 = &gpGlobals->field_28;
            v41 = v2 * *(float *)&v40[1];
            v42 = v2 * *(float *)&v40[2];
            v6 = v2 * gpGlobals->field_28;
        }
        else
        {
            v39 = *(int *)idx;
            v43 = &gpGlobals->field_28;
            v9 = v2 * gpGlobals->field_28;
            v10 = v2 * *(float *)&v43[1];
            v11 = v2 * *(float *)&v43[2];
            v6 = (float)(0.20000000298023224 * v9);
            v41 = 0.20000000298023224 * v10;
            v42 = 0.20000000298023224 * v11;
        }
        v7 = (float)v41;
        v8 = (float)v42;
        *(float *)&v39->field_20 = v6;
        *(float *)&v39->padding_21[3] = v7;
        *(float *)&v39->padding_21[7] = v8;
LABEL_4bc166:
        g_616878(1, gmsgPowerStruggle, 0, *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 700) + 520));
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        v21 = (int)(-*(float *)(*(unsigned int *)&idx + 696) * 100.0);
        v1 = v21;
        g_616884(v1);
        g_61687c(v1);
        v44 = *(int *)*(int *)(*(unsigned int *)&idx + 700);
        v45 = *(int *)idx;
        *(int *)&v44[2].padding_0[112] = *(int *)&v45->field_20;
        *(int *)&v44[2].padding_0[116] = *(int *)&v45->padding_21[3];
        *(int *)&v44[2].padding_0[120] = *(int *)&v45->padding_21[7];
        if (*(int *)(*(unsigned int *)&idx + 692) && 0.0 < *(float *)(*(unsigned int *)&idx + 696))
        {
            v46 = *(int *)idx;
            v3 = (float)(*(float *)(*(unsigned int *)&idx + 728) + *(float *)(*(unsigned int *)&idx + 696) * *(float *)&v46->field_1e0 * 0.1);
            *(float *)(*(unsigned int *)&idx + 728) = v3;
            v5 = __fnstcw();
            v4 = v5 | 0xc00;
            v21 = (int)v3;
            if (v21 > 3)
            {
                v1 = &g_800000;
                v0 = (float)v21;
                (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 700) + 96) + 52))(*(int *)(*(unsigned int *)&idx + 700), *(int *)idx, (!v46->field_198 ? 0 : v46->field_198 + 128));
                *(float *)(*(unsigned int *)&idx + 728) = (float)(*(float *)(*(unsigned int *)&idx + 728) - (double)v21);
            }
        }
        v47 = 0.2 + gpGlobals->field_0;
        *(float *)(*(int *)idx + 260) = (float)v47;
        return v47;
    }
}

