// TaskThink__13CKameTorpTask @0x151d10 size=1319
typedef struct st_551d10_2 {
    char padding_0[364];
    struct st_551d10_1 *field_16c;
} st_551d10_2;

typedef struct st_551d10_4 {
    struct st_551d10_3 *field_0;
    char padding_4[812];
    unsigned int field_330;
    char padding_334[1980];
    char field_af0;
    char padding_af1[123];
    unsigned int field_b6c;
    char padding_b70[1152];
    unsigned int field_ff0;
} st_551d10_4;

typedef struct st_551d10_1 {
    unsigned int field_0;
} st_551d10_1;

typedef struct st_551d10_3 {
    char padding_0[608];
    unsigned int field_260;
} st_551d10_3;

typedef struct st_551d10_0 {
    float field_0;
} st_551d10_0;

extern unsigned int g_vecZero;
extern float g_616790;
extern float g_616794;
extern st_551d10_2 g_engfuncs;
extern st_551d10_1 *g_616928;
extern st_551d10_1 *g_61692c;
extern st_551d10_0 *gpGlobals;

float TaskThink__13CKameTorpTask(float idx)
{
    st_551d10_4 *v19;  // edx
    unsigned int v20;  // 128
    double v29;  // mm7
    st_551d10_4 *v21;  // edx
    unsigned int v22;  // 128
    float v23;  // 128
    unsigned int v24;  // ecx
    st_551d10_4 *v25;  // esi
    float v26;  // 128
    float v27;  // 128
    double v28;  // mm7
    st_551d10_2 *v0;  // [bp-0x7c]
    st_551d10_2 *v1;  // [bp-0x78]
    int v2;  // [bp-0x74], Other Possible Types: unsigned int
    float v3;  // [bp-0x70]
    unsigned short v4;  // [bp-0x70]
    unsigned short v5;  // [bp-0x6e]
    float v6;  // [bp-0x6c]
    char v7;  // [bp-0x54], Other Possible Types: unsigned int
    unsigned int v8;  // [bp-0x50]
    unsigned int v9;  // [bp-0x4c]
    int v10;  // [bp-0x34], Other Possible Types: unsigned int
    unsigned int v11;  // [bp-0x30], Other Possible Types: unsigned short
    float v12;  // [bp-0x30]
    unsigned short v13;  // [bp-0x2e]
    float v14;  // [bp-0x2c]
    unsigned int v15;  // [bp-0x28]
    float v16;  // [bp-0x24]
    float v17;  // [bp-0x20]

    sub_48d0d0(*(int *)(*(unsigned int *)&idx + 8));
    if (*(float *)(*(unsigned int *)&idx + 48) < *(float *)gpGlobals && 0.0 < *(float *)(*(unsigned int *)&idx + 48))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 44) = 2;
        *(unsigned int *)(*(unsigned int *)&idx + 48) = 0;
        *(float *)(*(unsigned int *)&idx + 52) = (float)(3.0 + *(float *)gpGlobals);
    }
    v19 = *(int *)(*(unsigned int *)&idx + 8);
    v20 = *&v19->field_0->field_260;
    *(unsigned short *)((char *)&v11 + 2) = __fnstcw();
    *(unsigned int *)&v12 = _INSERT(v11, 0, *(unsigned short *)((void*)&v11 + 2) | 0xc00);
    v10 = (int)__int_as_float(v20);
    if ((int)v10 <= 149)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 44) = 1;
        v19->field_af0 = 0;
    }
    if (*(int *)(*(unsigned int *)&idx + 44) == 1)
    {
        v21 = *(int *)(*(unsigned int *)&idx + 8);
        v22 = *&v21->field_0->field_260;
        v13 = __fnstcw();
        v11 = v13 | 0xc00;
        v10 = (int)__int_as_float(v22);
        if (v10 > 700)
        {
            *(unsigned int *)(*(unsigned int *)&idx + 44) = 0;
            if (!v21->field_330)
                return __int_as_float(v22);
            sub_48ba60(v21);
            return __int_as_float(v22);
        }
        else
        {
            if (!*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 816))
            {
                sub_48dd60(*(int *)(*(unsigned int *)&idx + 8));
                return __int_as_float(v22);
            }
            return __int_as_float(v22);
        }
    }
    else if (*(int *)(*(unsigned int *)&idx + 44) == 2)
    {
        if (!*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2924))
        {
            v23 = *(float *)(*(unsigned int *)&idx + 48);
            if (v23 >= *(float *)gpGlobals)
            {
                *(unsigned int *)(*(unsigned int *)&idx + 44) = 4;
                return v23;
            }
            if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2924))
                goto LABEL_551f41;
            if (!*(char *)(*(unsigned int *)&idx + 40))
            {
                sub_487b60(&v10, *(int *)(*(unsigned int *)&idx + 8), 1000.0f);
                v24 = 0;
                if (*(float *)&g_vecZero == *(float *)&v10 && g_616790 == v12)
                    v24 = g_616794 == v14;
                if (!v24)
                {
                    v15 = v10;
                    v16 = v12;
                    v17 = v14;
                    v25 = *(int *)(*(unsigned int *)&idx + 8);
                    v2 = v15;
                    v3 = v16;
                    v6 = v17;
                    sub_48a170(&v7, v25, &v2);
                    *(unsigned int *)&v25->padding_b70[160] = v7;
                    *(unsigned int *)&v25->padding_b70[164] = v8;
                    *(unsigned int *)&v25->padding_b70[168] = v9;
                }
                *(char *)(*(unsigned int *)&idx + 40) = 1;
            }
        }
        else
        {
LABEL_551f41:
            if (*(float *)(*(unsigned int *)&idx + 48) >= *(float *)gpGlobals)
            {
                v5 = __fnstcw();
                v4 = v5 | 0xc00;
                v2 = (int)*(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 608);
                if (v2 > 10 && !(char)sub_48bf70(*(int *)(*(unsigned int *)&idx + 8), *(int *)(*(unsigned int *)&idx + 16)))
                    return *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 608);
            }
        }
        if (!g_616928(0, 4))
            *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 513) = *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 513) | 8;
        v26 = *(float *)(*(unsigned int *)&idx + 52);
        if (v26 < *(float *)gpGlobals)
            *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
        if ((unsigned short)sub_48dae0(idx))
            return v26;
        *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
        return v26;
    }
    else if (!*(int *)(*(unsigned int *)&idx + 44))
    {
        sub_48b890(idx);
        return __int_as_float(v20);
    }
    else if (*(int *)(*(unsigned int *)&idx + 44) == 3)
    {
        sub_488e30(*(int *)(*(unsigned int *)&idx + 8), *(int *)(*(unsigned int *)&idx + 28));
        v27 = *(float *)(*(unsigned int *)&idx + 24);
        if (v27 > *(float *)gpGlobals)
            return v27;
        *(unsigned int *)(*(unsigned int *)&idx + 28) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 44) = 0;
        return v27;
    }
    else if (*(int *)(*(unsigned int *)&idx + 44) != 4)
    {
        return __int_as_float(v20);
    }
    else if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2924))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 44) = 2;
        return __int_as_float(v20);
    }
    else if (*(float *)(*(unsigned int *)&idx + 36) < *(float *)gpGlobals)
    {
        v1 = &g_engfuncs.padding_0[0];
        g_61692c(1.75f, 2.75f);
        v28 = 1.75 + *(float *)gpGlobals;
        *(float *)(*(unsigned int *)&idx + 36) = (float)v28;
        if (!(char)sub_487f70(idx))
            return v28;
        *(unsigned int *)(*(unsigned int *)&idx + 44) = 3;
        v1->field_16c(0.12999999523162842f, 0.25f);
        *(float *)(*(unsigned int *)&idx + 24) = (float)(0.12999999523162842 + *(float *)gpGlobals);
        v1->field_16c(0.20000000298023224f, 0.44999998807907104f);
        *(float *)(*(unsigned int *)&idx + 32) = (float)(0.20000000298023224 + *(float *)(*(unsigned int *)&idx + 24));
        return v28;
    }
    else if (*(float *)(*(unsigned int *)&idx + 32) < *(float *)gpGlobals)
    {
        v0 = &g_engfuncs.padding_0[0];
        g_61692c(0.3499999940395355f, 0.75f);
        *(float *)(*(unsigned int *)&idx + 32) = (float)(0.3499999940395355 + *(float *)gpGlobals);
        if (!*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 0xff0))
        {
            v0->field_16c(40.0f, 50.0f);
            v29 = 40.0 + *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3092);
        }
        else
        {
            g_61692c(40.0f, 50.0f);
            v29 = *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3092) - 40.0;
        }
        sub_48d430((float)v29);
        *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3092) = (float)v29;
        return v29;
    }
    else
    {
        return *(float *)(*(unsigned int *)&idx + 32);
    }
}

