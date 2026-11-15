// AttackWithMelee__11CCombatTaskb @0x14bf50 size=4157
typedef struct st_54bf50_1 {
    char padding_0[136];
    unsigned int field_88;
} st_54bf50_1;

typedef struct st_54bf50_8 {
    char padding_0[8];
    struct st_54bf50_4 *field_8;
    struct st_54bf50_7 *field_c;
} st_54bf50_8;

typedef struct st_54bf50_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[244];
    unsigned int field_108;
} st_54bf50_2;

typedef struct st_54bf50_14 {
    struct st_54bf50_15 *field_0;
    char padding_4[2404];
    struct st_54bf50_1 *field_968;
    char padding_96c[144];
    char field_9fc;
    char padding_9fd[7];
    struct st_54bf50_6 *field_a04;
    char padding_a08[168];
    unsigned int field_ab0;
    char padding_ab4[184];
    struct st_54bf50_3 *field_b6c;
    char padding_b70[184];
    unsigned int field_c28;
} st_54bf50_14;

typedef struct st_54bf50_4 {
    struct st_54bf50_5 *field_0;
    char padding_4[2404];
    struct st_54bf50_1 *field_968;
    char padding_96c[144];
    char field_9fc;
    char padding_9fd[7];
    struct st_54bf50_6 *field_a04;
    char padding_a08[168];
    float field_ab0;
    char padding_ab4[184];
    struct st_54bf50_3 *field_b6c;
    char padding_b70[184];
    float field_c28;
} st_54bf50_4;

typedef struct st_54bf50_5 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[588];
    float field_260;
} st_54bf50_5;

typedef struct st_54bf50_15 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[588];
    unsigned int field_260;
} st_54bf50_15;

typedef struct st_54bf50_6 {
    short field_0;
    char padding_2[2];
    short field_4;
} st_54bf50_6;

typedef struct st_54bf50_7 {
    char padding_0[652];
    unsigned int field_28c;
} st_54bf50_7;

typedef struct st_54bf50_3 {
    struct st_54bf50_2 *field_0;
    char padding_4[992];
    unsigned int field_3e4;
} st_54bf50_3;

typedef struct st_54bf50_9 {
    struct st_54bf50_10 *field_0;
    struct st_54bf50_9 *field_4;
    struct st_54bf50_9 *field_8;
} st_54bf50_9;

typedef struct st_54bf50_10 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
} st_54bf50_10;

typedef struct st_54bf50_11 {
    float field_0;
} st_54bf50_11;

typedef struct st_54bf50_0 {
    unsigned int field_0;
} st_54bf50_0;

extern unsigned int FindSelection__t12TMultiChoice1Z10EComboTypePQ2t12TMultiChoice1Z10EComboType12SMultiChoicei;
extern st_54bf50_0 *g_616928;
extern st_54bf50_0 *g_61692c;
extern st_54bf50_11 *gpGlobals;

double AttackWithMelee__11CCombatTaskb(st_54bf50_8 *a0, char a1)
{
    st_54bf50_14 *v48;  // edx
    int v49;  // eax
    float v58;  // 112
    float v59;  // 112
    double v60;  // mm7
    double v61;  // mm6
    st_54bf50_9 **v62;  // eax
    unsigned int *v63;  // eax
    st_54bf50_9 **v64;  // esi
    st_54bf50_9 *v65;  // edi
    st_54bf50_9 *v66;  // edi
    st_54bf50_9 *v67;  // eax
    int v50;  // eax
    unsigned int *v68;  // eax
    st_54bf50_9 **v69;  // esi
    st_54bf50_9 *v70;  // edi
    st_54bf50_9 *v71;  // edi
    st_54bf50_9 *v72;  // eax
    unsigned int *v73;  // eax
    st_54bf50_9 **v74;  // esi
    st_54bf50_9 *v75;  // edi
    st_54bf50_9 *v76;  // edi
    st_54bf50_9 *v77;  // eax
    st_54bf50_8 *v51;  // ecx
    unsigned int *v78;  // eax
    st_54bf50_9 **v79;  // esi
    st_54bf50_9 *v80;  // edi
    st_54bf50_9 *v81;  // edi
    st_54bf50_9 *v82;  // eax
    unsigned int *v83;  // eax
    st_54bf50_9 **v84;  // esi
    st_54bf50_9 *v85;  // edi
    st_54bf50_9 *v86;  // edi
    st_54bf50_9 *v87;  // eax
    st_54bf50_8 *v52;  // edx
    st_54bf50_9 *v89;  // esi
    st_54bf50_9 *v90;  // esi
    st_54bf50_9 *v91;  // esi
    unsigned int *v92;  // eax
    double v93;  // mm7
    st_54bf50_9 **v94;  // edx
    unsigned int *v95;  // esi
    st_54bf50_9 *v96;  // ecx
    st_54bf50_9 *v97;  // eax
    float v53;  // 128
    unsigned int *v98;  // eax
    st_54bf50_9 **v99;  // edi
    st_54bf50_9 *node;  // esi
    st_54bf50_9 *v101;  // eax
    st_54bf50_14 *v54;  // ecx
    unsigned int *v55;  // edx
    unsigned int *v56;  // edx
    float v57;  // 112
    st_54bf50_8 *v0;  // [bp-0x11c]
    int v1;  // [bp-0x118]
    char *v2;  // [bp-0xf8]
    unsigned int v3;  // [bp-0xf4]
    unsigned int *v4;  // [bp-0xf0]
    unsigned int v5;  // [bp-0xec]
    char *v6;  // [bp-0xe8]
    char v7;  // [bp-0xe1]
    st_54bf50_9 *v8;  // [bp-0xe0]
    char v9;  // [bp-0xd9]
    unsigned int *v10;  // [bp-0xd8]
    char v11;  // [bp-0xd1]
    st_54bf50_9 *v12;  // [bp-0xd0]
    char v13;  // [bp-0xc9]
    unsigned int *v14;  // [bp-0xc8]
    char v15;  // [bp-0xc1]
    st_54bf50_9 *v16;  // [bp-0xc0]
    char v17;  // [bp-0xb9]
    unsigned int *v18;  // [bp-0xb8]
    char v19;  // [bp-0xb1]
    st_54bf50_9 *v20;  // [bp-0xb0]
    char v21;  // [bp-0xa9]
    unsigned int *v22;  // [bp-0xa8]
    char v23;  // [bp-0xa1]
    st_54bf50_9 *v24;  // [bp-0xa0]
    char v25;  // [bp-0x99]
    unsigned int *v26;  // [bp-0x98]
    float v27;  // [bp-0x94]
    short v28;  // [bp-0x90]
    short v29;  // [bp-0x8e]
    short v30;  // [bp-0x8c]
    short v31;  // [bp-0x8a]
    char v32;  // [bp-0x88], Other Possible Types: unsigned int
    unsigned int iter;  // [bp-0x84]
    st_54bf50_9 **v34;  // [bp-0x80], Other Possible Types: unsigned int
    unsigned short v35;  // [bp-0x7c]
    unsigned short v36;  // [bp-0x7a]
    int v37;  // [bp-0x78]
    unsigned short v38;  // [bp-0x74]
    unsigned short v39;  // [bp-0x72]
    float v40;  // [bp-0x58]
    float v41;  // [bp-0x54]
    float v42;  // [bp-0x50]
    int v43;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned int v44;  // [bp-0x34], Other Possible Types: unsigned short
    unsigned short v45;  // [bp-0x32]
    unsigned int v46;  // [bp-0x30]
    int v47;  // [bp-0x18]

    if (25.0 <= a0->field_8->field_c28 && a0->field_8->field_9fc > 2)
        return 25.0;
    v47 = sub_48a780(a0->field_8);
    if (*(float *)&v47 == 0.0f)
        return (double)v47;
    v48 = a0->field_8;
    if (v48->field_968)
    {
        if (a0->field_c->field_28c == 7)
        {
            if (v48->field_968->field_88 == 2)
                goto LABEL_54c01a;
            v49 = "weapon_sword";
            goto LABEL_54c010;
        }
        else
        {
            v48 = a0->field_8;
            if (a0->field_8->field_968->field_88 != 1)
            {
                v49 = "weapon_melee";
LABEL_54c010:
                sub_48ce10(v48, v49);
            }
        }
    }
LABEL_54c01a:
    if (a0->field_8->field_a04->field_0 <= 99)
    {
        v50 = g_616928(1, 100);
        v51 = a0;
        if (v50 <= v51->field_8->field_a04->field_4)
            sub_48c020(v51, 28);
    }
    if (!a1)
    {
        v52 = a0;
        v53 = v52->field_8->field_0->field_260;
        v45 = __fnstcw();
        v44 = v45 | 0xc00;
        v43 = (int)v53;
        if (v43 > 149)
        {
            sub_48c020(a0, 2);
            return v53;
        }
        sub_48c020(v52, 25);
        return v53;
    }
    else
    {
        v31 = 25;
        v30 = 50;
        v29 = 25;
        v28 = 50;
        v54 = a0->field_8;
        v55 = &v54->field_b6c->field_0->field_8;
        *(float *)&v43 = v54->field_b6c->field_0->field_8;
        *(float *)&v44 = *(float *)&v55[1];
        *(float *)&v46 = *(float *)&v55[2];
        v56 = &v54->field_0->field_8;
        v57 = *(float *)&v43 - *(float *)&v54->field_0->field_8;
        v40 = v57;
        v58 = *(float *)&v44 - *(float *)&v56[1];
        v41 = v58;
        v59 = *(float *)&v46 - *(float *)&v56[2];
        v42 = v59;
        v60 = v57 * v57 + v58 * v58 + v59 * v59;
        v61 = sqrt(v60);
        if (isnan(v61))
            sub_487dc0(*(unsigned int *)&v60);
        else
            v60 = v61;
        v27 = (float)v60;
        if (v27 > 1200.0f)
        {
            v31 = 0;
        }
        else if ((short)sub_48aab0(a0->field_8, a0->field_8->field_b6c) > 64)
        {
            v36 = __fnstcw();
            v35 = v36 | 0xc00;
            v47 = (int)((double)v31 * 0.25);
            v31 = v47;
        }
        if (a0->field_8->field_b6c->field_0->field_108 == 11)
        {
            v29 = 0;
            v31 = 0;
        }
        if (a0->field_8->field_b6c->field_3e4 == 1)
        {
            v36 = __fnstcw();
            v35 = v36 | 0xc00;
            v47 = (int)((double)v31 * 1.5);
            v31 = v47;
        }
        v36 = __fnstcw();
        v35 = v36 | 0xc00;
        v47 = (int)v27;
        v39 = __fnstcw();
        v38 = v39 | 0xc00;
        v37 = (int)a0->field_8->field_0->field_260;
        if (v47 / 400 > v37 / 200 - 1)
            v31 = 0;
        v39 = __fnstcw();
        v38 = v39 | 0xc00;
        v37 = (int)a0->field_8->field_0->field_260;
        if (v37 > 480)
            v28 = 0;
        if (v27 < 1250.0f)
            v30 = 0;
        if (v27 >= 850.0f && v27 <= 1750.0f)
            goto LABEL_54c353;
        v30 = 0;
LABEL_54c353:
        iter = 0;
        v62 = sub_48d6a0(8);
        *v62 = NULL;
        v62[1] = NULL;
        v34 = v62;
        if (v30)
        {
            v63 = sub_48d6a0(12);
            *v63 = 0;
            v63[1] = 0;
            v26 = v63;
            *v26 = iter;
            v26[1] = v30 + iter;
            v26[2] = 21;
            v64 = v34;
            if (!*v64)
            {
                v65 = sub_48d6a0(12);
                v25 = 1;
                v65->field_4 = NULL;
                v65->field_8 = NULL;
                sub_48d0e0(v65, 0, 4);
                v25 = 0;
                *v64 = v65;
                if (v25)
                    sub_48d4e0(v65);
                *v64->field_0 = v26;
                *v64->field_4 = NULL;
                *v64->field_8 = NULL;
                v64[1] = *v64;
            }
            else
            {
                v24 = v64[1];
                v66 = sub_48d6a0(12);
                v23 = 1;
                v66->field_4 = NULL;
                v66->field_8 = NULL;
                sub_48d0e0(v66, 0, 4);
                v23 = 0;
                v24->field_4 = v66;
                if (v23)
                    sub_48d4e0(v66);
                v64[1]->field_4->field_8 = v64[1];
                v67 = v64[1]->field_4;
                v64[1] = v67;
                v67->field_0 = v26;
                v64[1]->field_4 = NULL;
            }
            iter += v30;
            if (v30)
            {
                v68 = sub_48d6a0(12);
                *v68 = 0;
                v68[1] = 0;
                v22 = v68;
                *v22 = iter;
                v22[1] = v30 + iter;
                v22[2] = 22;
                v69 = v34;
                if (!*v69)
                {
                    v70 = sub_48d6a0(12);
                    v21 = 1;
                    v70->field_4 = NULL;
                    v70->field_8 = NULL;
                    sub_48d0e0(v70, 0, 4);
                    v21 = 0;
                    *v69 = v70;
                    if (v21)
                        sub_48d4e0(v70);
                    *v69->field_0 = v22;
                    *v69->field_4 = NULL;
                    *v69->field_8 = NULL;
                    v69[1] = *v69;
                }
                else
                {
                    v20 = v69[1];
                    v71 = sub_48d6a0(12);
                    v19 = 1;
                    v71->field_4 = NULL;
                    v71->field_8 = NULL;
                    sub_48d0e0(v71, 0, 4);
                    v19 = 0;
                    v20->field_4 = v71;
                    if (v19)
                        sub_48d4e0(v71);
                    v69[1]->field_4->field_8 = v69[1];
                    v72 = v69[1]->field_4;
                    v69[1] = v72;
                    v72->field_0 = v22;
                    v69[1]->field_4 = NULL;
                }
                iter += v30;
            }
        }
        if (v29)
        {
            v73 = sub_48d6a0(12);
            *v73 = 0;
            v73[1] = 0;
            v18 = v73;
            *v18 = iter;
            v18[1] = v29 + iter;
            v18[2] = 23;
            v74 = v34;
            if (!*v74)
            {
                v75 = sub_48d6a0(12);
                v17 = 1;
                v75->field_4 = NULL;
                v75->field_8 = NULL;
                sub_48d0e0(v75, 0, 4);
                v17 = 0;
                *v74 = v75;
                if (v17)
                    sub_48d4e0(v75);
                *v74->field_0 = v18;
                *v74->field_4 = NULL;
                *v74->field_8 = NULL;
                v74[1] = *v74;
            }
            else
            {
                v16 = v74[1];
                v76 = sub_48d6a0(12);
                v15 = 1;
                v76->field_4 = NULL;
                v76->field_8 = NULL;
                sub_48d0e0(v76, 0, 4);
                v15 = 0;
                v16->field_4 = v76;
                if (v15)
                    sub_48d4e0(v76);
                v74[1]->field_4->field_8 = v74[1];
                v77 = v74[1]->field_4;
                v74[1] = v77;
                v77->field_0 = v18;
                v74[1]->field_4 = NULL;
            }
            iter += v29;
        }
        if (v28)
        {
            v78 = sub_48d6a0(12);
            *v78 = 0;
            v78[1] = 0;
            v14 = v78;
            *v14 = iter;
            v14[1] = v28 + iter;
            v14[2] = 24;
            v79 = v34;
            if (!*v79)
            {
                v80 = sub_48d6a0(12);
                v13 = 1;
                v80->field_4 = NULL;
                v80->field_8 = NULL;
                sub_48d0e0(v80, 0, 4);
                v13 = 0;
                *v79 = v80;
                if (v13)
                    sub_48d4e0(v80);
                *v79->field_0 = v14;
                *v79->field_4 = NULL;
                *v79->field_8 = NULL;
                v79[1] = *v79;
            }
            else
            {
                v12 = v79[1];
                v81 = sub_48d6a0(12);
                v11 = 1;
                v81->field_4 = NULL;
                v81->field_8 = NULL;
                sub_48d0e0(v81, 0, 4);
                v11 = 0;
                v12->field_4 = v81;
                if (v11)
                    sub_48d4e0(v81);
                v79[1]->field_4->field_8 = v79[1];
                v82 = v79[1]->field_4;
                v79[1] = v82;
                v82->field_0 = v14;
                v79[1]->field_4 = NULL;
            }
            iter += v28;
        }
        if (v31)
        {
            v83 = sub_48d6a0(12);
            *v83 = 0;
            v83[1] = 0;
            v10 = v83;
            *v10 = iter;
            v10[1] = v31 + iter;
            v10[2] = 20;
            v84 = v34;
            if (!*v84)
            {
                v85 = sub_48d6a0(12);
                v9 = 1;
                v85->field_4 = NULL;
                v85->field_8 = NULL;
                sub_48d0e0(v85, 0, 4);
                v9 = 0;
                *v84 = v85;
                if (v9)
                    sub_48d4e0(v85);
                *v84->field_0 = v10;
                *v84->field_4 = NULL;
                *v84->field_8 = NULL;
                v84[1] = *v84;
            }
            else
            {
                v8 = v84[1];
                v86 = sub_48d6a0(12);
                v7 = 1;
                v86->field_4 = NULL;
                v86->field_8 = NULL;
                sub_48d0e0(v86, 0, 4);
                v7 = 0;
                v8->field_4 = v86;
                if (v7)
                    sub_48d4e0(v86);
                v84[1]->field_4->field_8 = v84[1];
                v87 = v84[1]->field_4;
                v84[1] = v87;
                v87->field_0 = v10;
                v84[1]->field_4 = NULL;
            }
            iter += v31;
        }
        v6 = &v32;
        v5 = g_616928(0, iter);
        v3 = _INSERT(v5, 0, 0) | 0xffff0000;
        v4 = &FindSelection__t12TMultiChoice1Z10EComboTypePQ2t12TMultiChoice1Z10EComboType12SMultiChoicei;
        v89 = *v34;
        if (*v34)
        {
            v2 = (char *)&iter + (unsigned short)v3;
            do
            {
                v90 = v89;
                v91 = v90->field_4;
                if ((char)v4(v2, v90->field_0, v5))
                {
                    v92 = &v90->field_0->field_0;
                    goto LABEL_54cd6f;
                }
            } while ((v89 = v91, v90->field_4));
            v92 = NULL;
LABEL_54cd6f:
            if (!v92)
                goto LABEL_54cd90;
            v32 = v92[2];
            v1 = v32;
            v0 = a0;
        }
        else
        {
LABEL_54cd90:
            v1 = 2;
            v0 = a0;
        }
        sub_48c020(v0, v1);
        g_61692c(10.0f, 20.0f);
        v93 = 10.0 + *(float *)gpGlobals;
        a0->field_8->field_ab0 = (float)v93;
        while (*v34 && (v94 = v34, *v94))
        {
            v95 = &*v94->field_0->field_0;
            v96 = *v94;
            if (v96)
            {
                if (v96 == v94[1])
                    v94[1] = v96->field_4;
                v97 = *v94->field_4;
                *v94 = v97;
                if (v97)
                    v97->field_8 = NULL;
                v96->field_4 = NULL;
                sub_48d4e0(v96);
            }
            v98 = v95;
            if (!v98)
                break;
            sub_48d4e0(v98);
        }
        if (v34)
        {
            v99 = v34;
            node = *v99;
            if (*v99)
            {
                do
                {
                    v101 = node;
                    node = node->field_4;
                    v101->field_4 = NULL;
                    v101->field_8 = NULL;
                    sub_48d4e0(v101);
                } while (node);
            }
            v99[1] = NULL;
            *v99 = NULL;
            sub_48d4e0(v99);
        }
        v34 = 0;
        return v93;
    }
}

