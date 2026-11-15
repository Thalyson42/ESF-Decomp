// TakeDamage__11CBasePlayerP9entvars_sT1fi @0xf3000 size=2108
typedef struct st_4f3000_2 {
    char padding_0[124];
    struct st_4f3000_3 *field_7c;
} st_4f3000_2;

typedef struct st_4f3000_16 {
    char padding_0[296];
    struct st_4f3000_5 *field_128;
    struct st_4f3000_5 *field_12c;
    char padding_130[8];
    unsigned int field_138;
    unsigned int field_13c;
    char padding_140[4];
    unsigned int field_144;
    char padding_148[680];
    unsigned int field_3f0;
    char padding_3f4[12];
    struct st_4f3000_7 *field_400;
    char padding_404[336];
    unsigned int field_554;
} st_4f3000_16;

typedef struct st_4f3000_0 {
    char padding_0[140];
    struct st_4f3000_1 *field_8c;
    char padding_90[16];
    struct st_4f3000_1 *field_a0;
} st_4f3000_0;

typedef struct st_4f3000_3 {
    struct st_4f3000_4 *field_0;
    char padding_4[92];
    struct st_4f3000_0 *field_60;
    char padding_64[696];
    float field_31c;
    char padding_320[4];
    unsigned int field_324;
    char padding_328[4];
    unsigned int field_32c;
    char padding_330[20];
    unsigned int field_344;
    char padding_348[4];
    unsigned int field_34c;
    char padding_350[4];
    unsigned int field_354;
    unsigned int field_358;
    unsigned int field_35c;
    char padding_360[12];
    int field_36c;
    char padding_370[16];
    char field_380;
    char padding_381[295];
    struct st_4f3000_5 *field_4a8;
    struct st_4f3000_5 *field_4ac;
    char padding_4b0[8];
    unsigned int field_4b8;
    unsigned int field_4bc;
    char padding_4c0[4];
    unsigned int field_4c4;
    char padding_4c8[680];
    unsigned int field_770;
    char padding_774[12];
    struct st_4f3000_7 *field_780;
    char padding_784[336];
    unsigned int field_8d4;
} st_4f3000_3;

typedef struct st_4f3000_5 {
    struct st_4f3000_6 *field_0;
} st_4f3000_5;

typedef struct st_4f3000_1 {
    unsigned int field_0;
} st_4f3000_1;

typedef struct st_4f3000_8 {
    char padding_0[40];
    struct st_4f3000_1 *field_28;
} st_4f3000_8;

typedef struct st_4f3000_4 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[76];
    unsigned int field_78;
    char padding_7c[228];
    unsigned int field_160;
    char padding_164[164];
    unsigned int field_208;
} st_4f3000_4;

typedef struct st_4f3000_9 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[36];
    char field_50;
    char padding_51[3];
    float field_54;
    char padding_58[432];
    struct st_4f3000_2 *field_208;
} st_4f3000_9;

typedef struct st_4f3000_6 {
    char padding_0[120];
    float field_78;
    char padding_7c[396];
    struct st_4f3000_2 *field_208;
} st_4f3000_6;

typedef struct st_4f3000_7 {
    char padding_0[96];
    struct st_4f3000_8 *field_60;
} st_4f3000_7;

typedef struct st_4f3000_10 {
    char padding_0[64];
    struct st_4f3000_1 *field_40;
} st_4f3000_10;

typedef struct st_4f3000_12 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4f3000_12;

typedef struct st_4f3000_11 {
    char padding_0[68];
    struct st_4f3000_10 *field_44;
} st_4f3000_11;

extern st_4f3000_11 *g_pGameRules;
extern st_4f3000_1 *g_616878;
extern st_4f3000_1 *g_61687c;
extern st_4f3000_1 *g_616880;
extern st_4f3000_1 *g_616888;
extern st_4f3000_1 *g_61688c;
extern st_4f3000_1 *g_6168d4;
extern st_4f3000_1 *g_6168dc;
extern st_4f3000_1 *g_616928;
extern st_4f3000_12 *gpGlobals;

unsigned int TakeDamage__11CBasePlayerP9entvars_sT1fi(st_4f3000_3 *a0, st_4f3000_9 *a1, st_4f3000_6 *a2, float a3, int a4)
{
    st_4f3000_2 *v15;  // eax
    st_4f3000_7 *v16;  // eax
    int v25;  // edx
    unsigned int *v26;  // edx
    double v27;  // mm5
    double v28;  // mm5
    unsigned int *v29;  // eax
    st_4f3000_9 *v30;  // esi
    unsigned int *v31;  // edx
    double v32;  // mm5
    double v33;  // mm5
    unsigned int *v34;  // eax
    st_4f3000_7 *v17;  // esi
    st_4f3000_9 *v35;  // edx
    unsigned int *v36;  // ecx
    unsigned int *v37;  // edx
    double v38;  // mm5
    double v39;  // mm5
    unsigned int *v40;  // eax
    unsigned int v41;  // eax
    unsigned int v42;  // eax
    unsigned int v18;  // eax
    st_4f3000_3 *v19;  // eax
    st_4f3000_16 *v20;  // eax
    st_4f3000_16 *v21;  // eax
    int v22;  // edx
    unsigned int v23;  // esi
    double v24;  // mm7
    int v0;  // [bp-0x74], Other Possible Types: unsigned int
    int v1;  // [bp-0x50]
    unsigned int v2;  // [bp-0x4c]
    st_4f3000_3 *v3;  // [bp-0x48]
    float v4;  // [bp-0x44]
    unsigned int v5;  // [bp-0x40]
    float v6;  // [bp-0x3c]
    float v7;  // [bp-0x38]
    float v8;  // [bp-0x34]
    float v9;  // [bp-0x30]
    float v10;  // [bp-0x2c]
    float v11;  // [bp-0x28]
    int v12;  // [bp-0xc]
    unsigned short v13;  // [bp-0x8]
    unsigned short v14;  // [bp-0x6]

    v4 = *(float *)&a0->field_0->field_160;
    if (!a0->field_60->field_8c(a0))
        return 0;
    v15 = a1->field_208;
    if (a1->field_208 || (v15 = g_6168d4(0), v15))
        v16 = v15->field_7c;
    else
        v16 = NULL;
    v17 = v16;
    v18 = a2->field_208;
    if (a2->field_208 || (v18 = g_6168d4(0), v18))
        v19 = *(int *)(v18 + 124);
    else
        v19 = NULL;
    v3 = v19;
    if (g_pGameRules->field_44->field_40(g_pGameRules, a0, v3) && !a0->field_34c && (!a0->field_4c4 || a4 & 0x2400000 && !(v20 = &a0->field_380, v20->field_138 && a2 != *(int *)v20->field_128 || (v21 = &a0->field_380, v21->field_13c && a2 != *(int *)v21->field_12c))) && sub_48cd10(&a0->field_380, v17, a4))
    {
        v2 = v17->field_60->field_28(v17) == 14;
        if (!a0->field_35c && (!a0->field_358 || a0->field_780 == v17) && (!a0->field_354 || !a0->field_36c || sub_488ac0(a0->field_36c, a1)))
        {
            v14 = __fnstcw();
            v13 = v14 | 0xc00;
            v12 = (int)a3;
            a0->field_8d4 = v12;
            if (a0->field_324)
                a3 = (float)(0.75 * a3);
            if (a0->field_770)
                a3 = (float)(0.5 * a3);
            v14 = __fnstcw();
            v13 = v14 | 0xc00;
            v1 = (int)*(float *)&a0->field_0->field_78;
            v1 += 360;
            v1 = v1 % 360;
            v14 = __fnstcw();
            v13 = v14 | 0xc00;
            v12 = (int)a1->field_54;
            v22 = (v12 + 540) % 360;
            v23 = 0;
            if (a0->field_32c && v22 < v1 + 75 && v22 > v1 - 75)
            {
                a3 = (float)(0.25 * a3);
                v23 = 1;
            }
            if (a4 & 0x100000 && v3->field_60->field_a0(v3) && a3 >= *(float *)&a0->field_0->field_160 && v3 != a0)
            {
                sub_48b180(a0, v3);
            }
            else
            {
                if (v3->field_60->field_a0(v3))
                {
                    if (v2)
                    {
                        v0 = 10;
                    }
                    else
                    {
                        if (a4 & 0x2400000)
                        {
                            v24 = (a3 < *(float *)&a0->field_0->field_160 ? a3 + a3 : *(float *)&a0->field_0->field_160 + *(float *)&a0->field_0->field_160);
                        }
                        else
                        {
                            v24 = a3;
                            if (v24 >= *(float *)&a0->field_0->field_160)
                                v24 = *(float *)&a0->field_0->field_160;
                        }
                        v14 = __fnstcw();
                        v13 = v14 | 0xc00;
                        v12 = (int)v24;
                        v0 = v12;
                    }
                    sub_489350(v3, a0);
                }
                if (!a0->field_344 && a4 & 0x1000000)
                {
                    v6 = 255.0f;
                    v7 = 255.0f;
                    v8 = 255.0f;
                    sub_48df50(a0, &v6, 1.1666666269302368f, 2.3333332538604736f, 0xff, 0);
                    a0->field_344 = 1;
                    a0->field_31c = (float)(3.5 + gpGlobals->field_0);
                }
                if (v3 != a0 || !((char)a4 & 2))
                {
                    v14 = __fnstcw();
                    v13 = v14 | 0xc00;
                    v12 = (int)a2->field_78;
                    v25 = (v12 + 540) % 360;
                    if (!a0->field_344 && (char)a4 & 2 && v25 < v1 + 75 && v25 > v1 - 75)
                    {
                        v6 = 255.0f;
                        v7 = 255.0f;
                        v8 = 255.0f;
                        sub_48df50(a0, &v6, 4.0f, 8.0f, 0xff, 0);
                        a0->field_344 = 1;
                        a0->field_31c = (float)(gpGlobals->field_0 + 12.0);
                    }
                    if (*(char *)((void*)&a4 + 2) & 96)
                    {
                        if (v23)
                        {
                            sub_48a800(&a1->field_50);
                            if (a4 & 0x200000)
                            {
                                v26 = &gpGlobals->field_28;
                                v27 = 75.0 * gpGlobals->field_28;
                                v9 = (float)v27;
                                v28 = 75.0 * *(float *)&v26[1];
                                v10 = (float)v28;
                                v11 = (float)(75.0 * *(float *)&v26[2]);
                                v29 = &a1->field_20;
                                v30 = a1;
                                v6 = (float)(v30->field_20 - v27);
                                v7 = (float)(*(float *)&v29[1] - v28);
                                v8 = *(float *)&v29[2] - v11;
                                v30->field_20 = v6;
                                v30->field_24 = v7;
                                v30->field_28 = v8;
                            }
                            else
                            {
                                v31 = &gpGlobals->field_28;
                                v32 = 250.0 * gpGlobals->field_28;
                                v9 = (float)v32;
                                v33 = 250.0 * *(float *)&v31[1];
                                v10 = (float)v33;
                                v11 = (float)(250.0 * *(float *)&v31[2]);
                                v34 = &a1->field_20;
                                v35 = a1;
                                v6 = (float)(v35->field_20 - v32);
                                v7 = (float)(*(float *)&v34[1] - v33);
                                v8 = *(float *)&v34[2] - v11;
                                v35->field_20 = v6;
                                v35->field_24 = v7;
                                v35->field_28 = v8;
                            }
                        }
                        else
                        {
                            sub_48a800(&a1->field_50);
                            v36 = a0->field_0;
                            v37 = &gpGlobals->field_28;
                            v38 = 50.0 * gpGlobals->field_28;
                            v9 = (float)v38;
                            v39 = 50.0 * *(float *)&v37[1];
                            v10 = (float)v39;
                            v11 = (float)(50.0 * *(float *)&v37[2]);
                            v40 = v36 + 8;
                            v6 = (float)(v38 + *(float *)&v36[8]);
                            v7 = (float)(v39 + *(float *)&v40[1]);
                            v8 = *(float *)&v40[2] + v11;
                            *(float *)&v36[8] = v6;
                            *(float *)&v36[9] = v7;
                            *(float *)&v36[10] = v8;
                        }
                    }
                    v14 = __fnstcw();
                    v13 = v14 | 0xc00;
                    v12 = (int)a3;
                    v5 = sub_48a8f0(a0, a1, a2, (float)v12, a4);
                    if (v5 && 1.0 <= a3)
                        sub_488d00(a0);
                    g_616878(9, 0x33, 0, 0);
                    g_616880(9);
                    g_616880(2);
                    v41 = g_6168dc(a0->field_0->field_208);
                    g_616888(v41);
                    v42 = g_6168dc(a1->field_208);
                    g_616888(v42);
                    g_61688c(5);
                    g_61687c();
                    *(float *)&a0->field_0->padding_2c[60] = -2.0f;
                    if (!v5 || !(a4 & 0xffffc000) || v4 >= 75.0f)
                        return v5;
                    if (v4 >= 50.0f)
                    {
                        sub_489ad0(a0, "!HEV_HLTH1", 0, 600);
                    }
                    else if (!g_616928(0, 3))
                    {
                        sub_489ad0(a0, "!HEV_DMG7", 0, 300);
                    }
                    return v5;
                }
            }
        }
    }
    return 0;
}

