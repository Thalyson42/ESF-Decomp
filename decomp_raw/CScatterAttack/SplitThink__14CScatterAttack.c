// SplitThink__14CScatterAttack @0x10ff20 size=609
typedef struct st_50ff20_5 {
    char padding_0[140];
    struct st_50ff20_2 *field_8c;
} st_50ff20_5;

typedef struct st_50ff20_8 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[364];
    struct st_50ff20_4 *field_178;
} st_50ff20_8;

typedef struct st_50ff20_7 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[364];
    struct st_50ff20_4 *field_198;
} st_50ff20_7;

typedef struct st_50ff20_2 {
    unsigned int field_0;
} st_50ff20_2;

typedef struct st_50ff20_4 {
    char padding_0[428];
    unsigned int field_1ac;
} st_50ff20_4;

typedef struct st_50ff20_6 {
    struct st_50ff20_4 *field_0;
    char padding_4[92];
    struct st_50ff20_5 *field_60;
} st_50ff20_6;

typedef struct st_50ff20_1 {
    char padding_0[32];
    struct st_50ff20_2 *field_20;
} st_50ff20_1;

typedef struct st_50ff20_0 {
    float field_0;
    char padding_4[140];
    int field_90;
} st_50ff20_0;

typedef struct st_50ff20_3 {
    char padding_0[68];
    struct st_50ff20_1 *field_44;
} st_50ff20_3;

extern char NormalThink__12CMagicAttack;
extern st_50ff20_3 *g_pGameRules;
extern st_50ff20_0 *gpGlobals;

unsigned int * SplitThink__14CScatterAttack(float idx)
{
    st_50ff20_4 *v13;  // eax
    st_50ff20_4 *v14;  // eax
    st_50ff20_6 *v15;  // edi
    unsigned int j;  // esi
    st_50ff20_7 *v17;  // edx
    unsigned int *v18;  // eax
    st_50ff20_8 *v19;  // eax
    unsigned int v0;  // [bp-0x68]
    int iter;  // [bp-0x64]
    st_50ff20_4 *v2;  // [bp-0x60]
    int v3;  // [bp-0x4c]
    unsigned short v4;  // [bp-0x48]
    unsigned short v5;  // [bp-0x46]
    unsigned int v6;  // [bp-0x44]
    unsigned int v7;  // [bp-0x40]
    unsigned int v8;  // [bp-0x3c]
    unsigned int v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x20]
    unsigned int v11;  // [bp-0x1c]

    if (*(int *)(*(int *)idx + 408))
    {
        v13 = *(int *)(*(int *)idx + 408);
        v14 = v13;
        if (!v14 || !(v14 = &v13->padding_0[128], v2 = v14, v13 != 0xffffff80))
        {
            *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v14, 0, 0) | 0xffff0000;
            *(char **)(*(unsigned int *)&idx + 16) = &NormalThink__12CMagicAttack;
            *(float *)(*(int *)idx + 260) = gpGlobals->field_0;
            return gpGlobals;
        }
        else if (*(int *)(*(unsigned int *)&idx + 944) <= 24)
        {
            iter = 1;
            while (iter <= gpGlobals->field_90)
            {
                v15 = sub_48a500(iter);
                if (!v15)
                {
                    iter += 1;
                }
                else if (!v15->field_60->field_8c(v15))
                {
                    iter += 1;
                }
                else if (v15->field_0 == v2)
                {
                    iter += 1;
                }
                else if (v15->field_0->field_1ac == v2->field_1ac && g_pGameRules->field_44->field_20(g_pGameRules))
                {
                    iter += 1;
                }
                else if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 280))(idx, v15))
                {
                    v0 = 0;
                    for (j = 0; (int)j < *(int *)(*(unsigned int *)&idx + 944); j += 1)
                    {
                        if (sub_488810(*(unsigned int *)&idx + j * 8 + 744) == v15)
                        {
                            v0 = 1;
                            break;
                        }
                    }
                    if (!v0)
                    {
                        v17 = *(int *)idx;
                        v18 = &v17->field_8;
                        *(float *)&v9 = *(float *)&v17->field_8;
                        *(float *)&v10 = *(float *)&v18[1];
                        *(float *)&v11 = *(float *)&v18[2];
                        v19 = &v17->field_20;
                        *(float *)&v6 = *(float *)&v17->field_20;
                        *(float *)&v7 = *(float *)&v19->field_4;
                        *(float *)&v8 = *(float *)&v19->field_8;
                        v5 = __fnstcw();
                        v4 = v5 | 0xc00;
                        v3 = (int)(*(float *)&v17[1].padding_2c[24] * 0.5);
                        sub_48a3d0(v2, &v9, &v6, v3, *(short *)(*(unsigned int *)&idx + 734), *(short *)(*(unsigned int *)&idx + 736), *(short *)(*(unsigned int *)&idx + 732), *(float *)(*(unsigned int *)&idx + 740), v15);
                        sub_48d960(*(unsigned int *)&idx + *(int *)(*(unsigned int *)&idx + 944) * 8 + 744, v15);
                        *(unsigned int *)(*(unsigned int *)&idx + 944) = *(int *)(*(unsigned int *)&idx + 944) + 1;
                        break;
                    }
                    else
                    {
                        iter += 1;
                    }
                }
                else
                {
                    iter += 1;
                }
            }
        }
    }
    sub_487d50(idx);
    *(float *)(*(int *)idx + 260) = (float)(0.2 + gpGlobals->field_0);
    return gpGlobals;
}

