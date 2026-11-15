// TaskThink__10CSwoopTask @0x14d7e0 size=3187
typedef struct st_54d7e0_3 {
    char padding_0[136];
    unsigned int field_88;
} st_54d7e0_3;

typedef struct st_54d7e0_6 {
    unsigned int field_0;
    char padding_4[1280];
    unsigned int field_504;
    char padding_508[1120];
    struct st_54d7e0_3 *field_968;
    char padding_96c[148];
    struct st_54d7e0_4 *field_a00;
    struct st_54d7e0_5 *field_a04;
    char padding_a08[476];
    unsigned int field_be4;
    char padding_be8[20];
    unsigned int field_bfc;
} st_54d7e0_6;

typedef struct st_54d7e0_5 {
    unsigned short field_0;
    char padding_2[38];
    unsigned short field_28;
    char padding_2a[10];
    unsigned int field_34;
} st_54d7e0_5;

typedef struct st_54d7e0_4 {
    char padding_0[64];
    char field_40;
} st_54d7e0_4;

typedef struct st_54d7e0_1 {
    float field_0;
} st_54d7e0_1;

typedef struct st_54d7e0_0 {
    unsigned int field_0;
} st_54d7e0_0;

extern st_54d7e0_0 *g_616928;
extern st_54d7e0_0 *g_61692c;
extern st_54d7e0_1 *gpGlobals;
extern char g_6253c6;
extern char g_6253c7;

unsigned int TaskThink__10CSwoopTask(float idx)
{
    st_54d7e0_6 *v29;  // edx
    unsigned short v30;  // si
    unsigned int *v39;  // edx
    unsigned int idx1;  // edx
    float v41;  // 112
    float v42;  // 112
    float v43;  // 112
    double v44;  // mm7
    double v45;  // mm6
    unsigned int v46;  // eax
    unsigned int *v47;  // edx
    unsigned int index;  // edx
    unsigned int *v31;  // edx
    float v49;  // 112
    float v50;  // 112
    float v51;  // 112
    double v52;  // mm7
    double v53;  // mm6
    unsigned int v54;  // eax
    unsigned int v55;  // eax
    unsigned int v56;  // eax
    st_54d7e0_6 *v57;  // edx
    int v58;  // eax
    unsigned int idx2;  // edx
    unsigned int *v59;  // edx
    unsigned int v60;  // edx
    float v61;  // 112
    float v62;  // 112
    float v63;  // 112
    double v64;  // mm7
    double v65;  // mm6
    st_54d7e0_6 *v66;  // edx
    int v67;  // eax
    double v68;  // mm7
    float v33;  // 112
    double v69;  // mm6
    unsigned int *v71;  // edx
    st_54d7e0_6 *v72;  // esi
    st_54d7e0_6 *v73;  // eax
    st_54d7e0_6 *v74;  // edx
    int v75;  // eax
    st_54d7e0_6 *v76;  // edx
    float v34;  // 112
    float v35;  // 112
    double v36;  // mm7
    double v37;  // mm6
    unsigned short v38;  // si
    unsigned int v0;  // [bp-0xb0]
    unsigned int v1;  // [bp-0xac]
    unsigned int v2;  // [bp-0x9c]
    unsigned int v3;  // [bp-0x98]
    float v4;  // [bp-0x78]
    char v5;  // [bp-0x72]
    char v6;  // [bp-0x71]
    float v7;  // [bp-0x70]
    char v8;  // [bp-0x6c], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0x68]
    unsigned int v10;  // [bp-0x64]
    float v11;  // [bp-0x60]
    float v12;  // [bp-0x5c]
    float v13;  // [bp-0x4c]
    float v14;  // [bp-0x48]
    float v15;  // [bp-0x44]
    int v16;  // [bp-0x2c]
    unsigned short v17;  // [bp-0x28]
    unsigned short v18;  // [bp-0x26]
    unsigned short v19;  // [bp-0x26]
    float v20;  // [bp-0x24], Other Possible Types: int, unsigned int
    float v21;  // [bp-0x20], Other Possible Types: unsigned short, unsigned int
    unsigned short v22;  // [bp-0x1e]
    float v23;  // [bp-0x1c], Other Possible Types: unsigned int
    float v24;  // [bp-0x18]
    char v25;  // [bp-0x18]
    float v26;  // [bp-0x14]
    float v27;  // [bp-0x10]

    sub_48d0d0(*(int *)(*(unsigned int *)&idx + 8));
    if (*(float *)(*(int *)(*(unsigned int *)&idx + 8) + 0xbfc) != 0.0f && *(int *)(*(int *)(*(unsigned int *)&idx + 12) + 392) == 11 && *(int *)(*(unsigned int *)&idx + 16))
    {
        sub_48b300(*(int *)(*(unsigned int *)&idx + 8) + 1284);
        if (*(float *)(*(int *)(*(unsigned int *)&idx + 8) + 0xbfc) > 2.25f)
        {
            v29 = *(int *)(*(unsigned int *)&idx + 8);
            if (v29->field_a00->field_40)
            {
                v22 = __fnstcw();
                v21 = v22 | 0xc00;
                v20 = (int)*(float *)(v29->field_0 + 608);
                if (v20 > 250 && *(int *)(*(unsigned int *)&idx + 16))
                {
                    if (v29->field_504 != 4)
                    {
                        v18 = __fnstcw();
                        v17 = v18 | 0xc00;
                        v16 = (int)((double)v29->field_a04->field_0 * 0.75);
                        v30 = v16;
                        if (v29->field_a04->field_34 == 2)
                        {
                            v19 = v30;
                            v18 = __fnstcw();
                            v17 = v18 | 0xc00;
                            v16 = (int)(0.75 * (double)v19);
                        }
                        else
                        {
                            if (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2564) + 52))
                                goto LABEL_54d959;
                            v19 = v30;
                            v18 = __fnstcw();
                            v17 = v18 | 0xc00;
                            v16 = (int)((double)v19 * 1.25);
                        }
                        v30 = v16;
LABEL_54d959:
                        if ((int)g_616928(1, 100) <= v30 && (char)sub_489330(*(int *)(*(unsigned int *)&idx + 8), *(int *)(*(unsigned int *)&idx + 16)))
                        {
                            v31 = *(int *)*(int *)(*(unsigned int *)&idx + 16) + 8;
                            *(float *)&v20 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 16) + 8);
                            *(float *)&v21 = *(float *)&v31[1];
                            *(float *)&v23 = *(float *)&v31[2];
                            idx2 = *(int *)*(int *)(*(unsigned int *)&idx + 8) + 8;
                            v33 = *(float *)&v20 - *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 8);
                            v13 = v33;
                            v34 = *(float *)&v21 - *(float *)(idx2 + 4);
                            v14 = v34;
                            v35 = *(float *)&v23 - *(float *)(idx2 + 8);
                            v15 = v35;
                            v36 = v33 * v33 + v34 * v34 + v35 * v35;
                            v37 = sqrt(v36);
                            if (isnan(v37))
                                sub_487dc0(*(unsigned int *)&v36);
                            else
                                v36 = v37;
                            v11 = (float)v36;
                            if (v11 < 1500.0f)
                            {
                                v3 = 2;
                                v56 = sub_48c020(idx);
                                *(char *)(*(unsigned int *)&idx + 48) = 1;
                                return v56;
                            }
                        }
                    }
                    else
                    {
                        v18 = __fnstcw();
                        v17 = v18 | 0xc00;
                        v16 = (int)((double)*(short *)*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2564) * 0.75);
                        v38 = v16;
                        if (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2564) + 52) == 2)
                        {
                            v19 = v38;
                            v18 = __fnstcw();
                            v17 = v18 | 0xc00;
                            v16 = (int)(0.75 * (double)v19);
                        }
                        else
                        {
                            if (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2564) + 52))
                                goto LABEL_54dad2;
                            v19 = v38;
                            v18 = __fnstcw();
                            v17 = v18 | 0xc00;
                            v16 = (int)((double)v19 * 1.25);
                        }
                        v38 = v16;
LABEL_54dad2:
                        if ((int)g_616928(1, 100) <= v38)
                        {
                            v22 = __fnstcw();
                            v21 = v22 | 0xc00;
                            v20 = (int)*(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 608);
                            if (v20 > 250 && (char)sub_489330(*(int *)(*(unsigned int *)&idx + 8), *(int *)(*(unsigned int *)&idx + 16)))
                            {
                                v39 = *(int *)*(int *)(*(unsigned int *)&idx + 16) + 8;
                                *(float *)&v20 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 16) + 8);
                                *(float *)&v21 = *(float *)&v39[1];
                                *(float *)&v23 = *(float *)&v39[2];
                                idx1 = *(int *)*(int *)(*(unsigned int *)&idx + 8) + 8;
                                v41 = *(float *)&v20 - *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 8);
                                v13 = v41;
                                v42 = *(float *)&v21 - *(float *)(idx1 + 4);
                                v14 = v42;
                                v43 = *(float *)&v23 - *(float *)(idx1 + 8);
                                v15 = v43;
                                v44 = v41 * v41 + v42 * v42 + v43 * v43;
                                v45 = sqrt(v44);
                                if (isnan(v45))
                                    sub_487dc0(*(unsigned int *)&v44);
                                else
                                    v44 = v45;
                                v11 = (float)v44;
                                if (v11 > 1250.0f)
                                {
                                    v46 = sub_48a210(*(int *)(*(unsigned int *)&idx + 8));
                                    if (v46 != 38)
                                    {
                                        v2 = v46;
                                        v56 = sub_48c020(idx);
                                        *(char *)(*(unsigned int *)&idx + 48) = 1;
                                        return v56;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 1284) == 4)
        {
            if (!*(short *)*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2564) || !g_6253c7 || !g_6253c6)
            {
                *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
                v76 = *(int *)(*(unsigned int *)&idx + 8);
                if (!v76->field_968)
                    return v56;
                if (v76->field_968->field_88 - 1 <= 1)
                {
                    sub_48ce10(v76, "weapon_genericbeam");
                    return v56;
                }
                return v56;
            }
            if (sub_4897e0(*(int *)(*(unsigned int *)&idx + 8), *(int *)(*(unsigned int *)&idx + 16)))
            {
                if (20.0 > *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3112) && 20.0 > *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3116))
                {
                    *(float *)(*(unsigned int *)&idx + 52) = *(float *)gpGlobals;
                    goto LABEL_54e080;
                }
                if (1.0 < *(float *)gpGlobals - *(float *)(*(unsigned int *)&idx + 52) && (v57 = *(int *)(*(unsigned int *)&idx + 8), v57->field_a00->field_40 && (v22 = __fnstcw(), v21 = v22 | 0xc00, v20 = (int)*(float *)(v57->field_0 + 608), v20 > 250 && (v58 = sub_488c10(v57, *(int *)(*(unsigned int *)&idx + 16)), v58 != 38))))
                {
                    sub_48c020(idx, v58);
                    *(char *)(*(unsigned int *)&idx + 48) = 1;
                }
                else
                {
LABEL_54e080:
                    v59 = *(int *)*(int *)(*(unsigned int *)&idx + 16) + 8;
                    *(float *)&v20 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 16) + 8);
                    *(float *)&v21 = *(float *)&v59[1];
                    *(float *)&v23 = *(float *)&v59[2];
                    v60 = *(int *)*(int *)(*(unsigned int *)&idx + 8) + 8;
                    v61 = *(float *)&v20 - *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 8);
                    v13 = v61;
                    v62 = *(float *)&v21 - *(float *)(v60 + 4);
                    v14 = v62;
                    v63 = *(float *)&v23 - *(float *)(v60 + 8);
                    v15 = v63;
                    v64 = v61 * v61 + v62 * v62 + v63 * v63;
                    v65 = sqrt(v64);
                    if (isnan(v65))
                        sub_487dc0(*(unsigned int *)&v64);
                    else
                        v64 = v65;
                    v4 = (float)v64;
                    if (100.0f >= *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3112) || v4 <= 700.0f)
                    {
                        v66 = *(int *)(*(unsigned int *)&idx + 8);
                        if (v66->field_968)
                        {
                            if (v66->field_968->field_88 != 2 && *(int *)(*(int *)(*(unsigned int *)&idx + 12) + 652) == 7)
                            {
                                v67 = "weapon_sword";
                            }
                            else
                            {
                                v66 = *(int *)(*(unsigned int *)&idx + 8);
                                if (v66->field_968->field_88 == 1 || *(int *)(*(int *)(*(unsigned int *)&idx + 12) + 652) == 7)
                                    goto LABEL_54e191;
                                v67 = "weapon_melee";
                            }
                            sub_48ce10(v66, v67);
                        }
LABEL_54e191:
                        if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 3044))
                        {
                            if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 3044) == 2)
                            {
                                v68 = 200.0;
                                v69 = 1700.0;
                            }
                            else
                            {
                                v68 = 750.0;
                                v69 = 2200.0;
                            }
                            if ((isunordered(v68, v4) ? 0x44 : v68 == v4 ? 63 : v68 < v4 ? 0 : 0xff) < 64 && v69 >= v4)
                            {
                                v71 = *(int *)*(int *)(*(unsigned int *)&idx + 16) + 8;
                                *(float *)&v20 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 16) + 8);
                                *(float *)&v21 = *(float *)&v71[1];
                                *(float *)&v23 = *(float *)&v71[2];
                                v72 = *(int *)(*(unsigned int *)&idx + 8);
                                *(float *)&v8 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 16) + 8);
                                *(float *)&v9 = *(float *)&v71[1];
                                *(float *)&v10 = *(float *)&v71[2];
                                sub_48a170(&v13, v72, &v8);
                                *(float *)&v72[1].padding_4[12] = v13;
                                *(float *)&v72[1].padding_4[16] = v14;
                                *(float *)&v72[1].padding_4[20] = v15;
                                if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 3044) == 2)
                                {
                                    if (*(short *)(*(unsigned int *)&idx + 26) > 0)
                                    {
                                        if (*(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3048) < *(float *)(*(unsigned int *)&idx + 32))
                                            goto LABEL_54e2dc;
                                        v16 = g_616928(0xffffffee, 0xfffffff0);
                                        *(float *)(*(unsigned int *)&idx + 32) = (float)v16;
                                        v1 = 0xfffffffd;
                                        v0 = 0xfffffffe;
                                        goto LABEL_54e2cd;
                                    }
                                    else
                                    {
                                        if (*(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3048) <= *(float *)(*(unsigned int *)&idx + 32))
                                        {
                                            v16 = g_616928(16, 18);
                                            *(float *)(*(unsigned int *)&idx + 32) = (float)v16;
                                            v1 = 3;
                                            v0 = 2;
LABEL_54e2cd:
                                            *(unsigned short *)(*(unsigned int *)&idx + 26) = g_616928(v0, v1);
                                        }
                                    }
LABEL_54e2dc:
                                    if (*(short *)(*(unsigned int *)&idx + 28) > 0)
                                    {
                                        if (*(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3052) < *(float *)(*(unsigned int *)&idx + 36))
                                            goto LABEL_54e36c;
                                        v16 = g_616928(0xffffffee, 0xfffffff0);
                                        *(float *)(*(unsigned int *)&idx + 36) = (float)v16;
                                        v1 = 0xfffffffd;
                                        v0 = 0xfffffffe;
                                        goto LABEL_54e35d;
                                    }
                                    else
                                    {
                                        if (*(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3052) <= *(float *)(*(unsigned int *)&idx + 36))
                                        {
                                            v16 = g_616928(16, 18);
                                            *(float *)(*(unsigned int *)&idx + 36) = (float)v16;
                                            v1 = 3;
                                            v0 = 2;
LABEL_54e35d:
                                            *(unsigned short *)(*(unsigned int *)&idx + 28) = g_616928(v0, v1);
                                        }
                                    }
LABEL_54e36c:
                                    *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3048) = (float)((double)*(short *)(*(unsigned int *)&idx + 26) + *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3048));
                                    *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3052) = (float)((double)*(short *)(*(unsigned int *)&idx + 28) + *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3052));
                                }
                                v73 = *(int *)(*(unsigned int *)&idx + 8);
                                v24 = *(float *)&v73[1].padding_4[12] + *(float *)&v73->padding_be8[0];
                                v26 = *(float *)&v73[1].padding_4[16] + *(float *)&v73->padding_be8[4];
                                v27 = *(float *)&v73[1].padding_4[20] + *(float *)&v73->padding_be8[8];
                                sub_489120(&v20, &v24);
                                v74 = *(int *)(*(unsigned int *)&idx + 8);
                                *(unsigned int *)&v74[1].padding_4[12] = v20;
                                *(unsigned int *)&v74[1].padding_4[16] = v21;
                                *(unsigned int *)&v74[1].padding_4[20] = v23;
                            }
                        }
LABEL_54e3f7:
                        sub_48c350(*(int *)(*(unsigned int *)&idx + 8));
                        if (!*(char *)(*(unsigned int *)&idx + 24))
                            sub_48cd50(idx);
                        if (*(char *)(*(unsigned int *)&idx + 25))
                            *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 513) = *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 513) | 8;
                        v75 = sub_48df40(*(int *)(*(unsigned int *)&idx + 8));
                        if (v75 == 38)
                            return v56;
                        sub_48c020(idx, v75);
                        return v56;
                    }
                }
            }
        }
        else if (*(float *)(*(unsigned int *)&idx + 40) >= *(float *)gpGlobals)
        {
            if (*(float *)(*(unsigned int *)&idx + 44) >= *(float *)gpGlobals || !*(char *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 0xa00) + 64) || !(v22 = __fnstcw(), v21 = v22 | 0xc00, v20 = (int)*(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 608), v20 > 250))
                goto LABEL_54e3f7;
            g_61692c(0.20000000298023224f, 0.5f);
            *(float *)(*(unsigned int *)&idx + 44) = (float)(0.20000000298023224 + *(float *)gpGlobals);
            v7 = 9999.900390625f;
            if (*(int *)(*(unsigned int *)&idx + 16))
            {
                v47 = *(int *)*(int *)(*(unsigned int *)&idx + 16) + 8;
                *(float *)&v20 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 16) + 8);
                *(float *)&v21 = *(float *)&v47[1];
                *(float *)&v23 = *(float *)&v47[2];
                index = *(int *)*(int *)(*(unsigned int *)&idx + 8) + 8;
                v49 = *(float *)&v20 - *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 8);
                v13 = v49;
                v50 = *(float *)&v21 - *(float *)(index + 4);
                v14 = v50;
                v51 = *(float *)&v23 - *(float *)(index + 8);
                v15 = v51;
                v52 = v49 * v49 + v50 * v50 + v51 * v51;
                v53 = sqrt(v52);
                if (isnan(v53))
                    sub_487dc0(*(unsigned int *)&v52);
                else
                    v52 = v53;
                v7 = (float)v52;
                if (!*(int *)(*(unsigned int *)&idx + 16) || !(v54 = g_616928(1, 100), (int)g_616928(1, 100) <= *(short *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2564) + 40) && (char)sub_489330(*(int *)(*(unsigned int *)&idx + 8), *(int *)(*(unsigned int *)&idx + 16)) && v7 < 750.0f))
                    goto LABEL_54de54;
                v6 = 50;
                if (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2564) + 52) == 2)
                {
                    v6 = 25;
                }
                else if (!*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2564) + 52))
                {
                    v6 = 75;
                }
                v5 = 0;
                if (*(short *)*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2564) > 0 && g_6253c7 && g_6253c6)
                    v5 = (char)sub_48bf70(*(int *)(*(unsigned int *)&idx + 8), *(int *)(*(unsigned int *)&idx + 16)) != 0;
                if ((int)g_616928(1, 100) <= v6 && v5)
                {
                    v3 = 2;
                    v56 = sub_48c020(idx);
                    *(char *)(*(unsigned int *)&idx + 48) = 1;
                    return v56;
                }
                v46 = sub_48b2a0(*(int *)(*(unsigned int *)&idx + 8));
                if (v46 != 38)
                {
                    v2 = v46;
                    v56 = sub_48c020(idx);
                    *(char *)(*(unsigned int *)&idx + 48) = 1;
                    return v56;
                }
                goto LABEL_54e3f7;
            }
            else
            {
LABEL_54de54:
                sub_489b10(&v25, *(int *)(*(unsigned int *)&idx + 8) + 1284);
                v20 = (float)(50.0 * v24);
                v21 = (float)(50.0 * v26);
                v23 = (float)(50.0 * v27);
                sub_488460(*(int *)(*(unsigned int *)&idx + 12) + 0x88, &v20, 1, 1, *(int *)(*(unsigned int *)&idx + 12), &v8);
                if (1.0 <= v12)
                    goto LABEL_54e3f7;
                if (v7 < 750.0f)
                {
                    v55 = g_616928(1, 100);
                    if ((int)v55 <= *(short *)(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2564) + 40))
                    {
                        v46 = sub_48b2a0(*(int *)(*(unsigned int *)&idx + 8));
                        if (v46 != 38)
                        {
                            v2 = v46;
                            v56 = sub_48c020(idx);
                            *(char *)(*(unsigned int *)&idx + 48) = 1;
                            return v56;
                        }
                    }
                }
                if (0.20000000298023224f <= v12)
                    goto LABEL_54e3f7;
            }
        }
    }
    *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
    return v56;
}

