// BotCombatMovement__4CBot @0x171010 size=1754
typedef struct st_571010_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[96];
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[244];
    unsigned int field_174;
    unsigned int field_178;
    unsigned int field_17c;
    char padding_180[136];
    int field_208;
} st_571010_0;

typedef struct st_571010_4 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_571010_4;

typedef struct st_571010_2 {
    unsigned int field_0;
} st_571010_2;

extern unsigned int _GLOBAL_OFFSET_TABLE_;
extern st_571010_2 *g_61692c;
extern st_571010_4 *gpGlobals;
extern char g_6253c8;

double BotCombatMovement__4CBot(float a0)
{
    void* v16;  // esi
    unsigned int *v17;  // edx
    int j;  // edi
    unsigned int *v27;  // edx
    float v28;  // 128
    unsigned int *v29;  // edx
    double v30;  // mm5
    double v31;  // mm5
    double v32;  // mm7
    double v33;  // mm6
    double v34;  // mm5
    unsigned int *v35;  // edx
    unsigned int *v18;  // edx
    double v36;  // mm5
    double v37;  // mm5
    st_571010_0 *v38;  // edx
    unsigned int *v39;  // eax
    unsigned int *v40;  // edx
    float v41;  // 112
    float v42;  // 112
    float v43;  // 112
    double v44;  // mm7
    double v45;  // mm6
    float v19;  // 112
    unsigned int *v46;  // edx
    float v47;  // 112
    float v48;  // 112
    float v49;  // 112
    double v50;  // mm7
    double v51;  // mm6
    float v52;  // 128
    double v53;  // mm7
    float v20;  // 112
    float v21;  // 112
    double v22;  // mm7
    double v23;  // mm6
    double v24;  // mm7
    double v25;  // mm7
    unsigned int v0;  // [bp-0xf0]
    char *v1;  // [bp-0xec]
    char v2;  // [bp-0xe6]
    char v3;  // [bp-0xe5]
    int v4;  // [bp-0xe4]
    int v5;  // [bp-0xe0]
    float v6;  // [bp-0xdc]
    float v7;  // [bp-0xd8]
    int i;  // [bp-0xd4]
    float v9;  // [bp-0xd0]
    float v10;  // [bp-0xcc]
    uint23376_t v11;  // [bp-0xc8]
    float v12;  // [bp-0xc8]
    uint23376_t v13;  // [bp-0xc8]
    float v14;  // [bp-0xc4]
    float v15;  // [bp-0xc0]

    *(uint23376_t **)((char *)&v11 + 196) = (char *)&v11 + 200;
    v16 = *(unsigned int *)((void*)&v11 + 0xcc);
    if (!(int)v16[2924])
        return v53;
    *(unsigned int *)((char *)&v11 + 192) = sub_48a780(v16);
    if ((double)(int)*(unsigned int *)((void*)&v11 + 192) == 0.0)
    {
        return (double)(int)*(unsigned int *)((void*)&v11 + 192);
    }
    else if (g_6253c8)
    {
        v17 = *(int *)(int)v16[2924] + 8;
        *(float *)((char *)&v11 + 160) = *(float *)(*(int *)(int)v16[2924] + 8);
        *(float *)((char *)&v11 + 164) = *(float *)&v17[1];
        *(float *)((char *)&v11 + 168) = *(float *)&v17[2];
        v18 = *(int *)v16 + 8;
        v19 = *(unsigned int *)((void*)&v11 + 160) - *(float *)(*(int *)v16 + 8);
        v13 = _INSERT(v11, 128, v19);
        v20 = *(unsigned int *)((void*)&v11 + 164) - *(float *)&v18[1];
        *(float *)((char *)&v13 + 132) = v20;
        v21 = *(unsigned int *)((void*)&v11 + 168) - *(float *)&v18[2];
        v11 = _INSERT(v13, 0x88, v21);
        v22 = v19 * v19 + v20 * v20 + v21 * v21;
        v23 = sqrt(v22);
        if (isnan(v23))
            sub_487dc0(*(unsigned int *)&v22);
        else
            v22 = v23;
        v10 = (float)v22;
        if ((char)(char)v16[2556] > 2 && !(char)sub_489330(v16, (int)v16[2924]))
        {
            sub_48d0d0(v16);
            *(unsigned short *)&v16[2920] = 0;
            return v22;
        }
        v9 = 0;
        v6 = 0;
        v5 = 0;
        v4 = 0;
        v3 = !(int)v16[820];
        v24 = (float)v16[2916];
        if (v24 < gpGlobals->field_0)
        {
            g_61692c(1300.0f, 1600.0f);
            v2 = 1300.0 > v10;
            (*(int *)((int)v16[96] + 208))(&v11, v16);
            *(unsigned int *)((char *)&v11 + 120) = *(unsigned int *)&v11;
            *(unsigned int *)((char *)&v11 + 124) = *(unsigned int *)((void*)&v11 + 4);
            *(unsigned int *)((char *)&v11 + 128) = *(unsigned int *)((void*)&v11 + 8);
            i = 0;
            do
            {
                if (!i)
                {
                    v7 = 0;
                }
                else
                {
                    if (i == 1)
                    {
                        if (!v3)
                            continue;
                        v25 = -30.0;
                    }
                    else
                    {
                        v25 = 30.0;
                    }
                    v7 = (float)v25;
                }
                j = 0;
                v1 = &v11;
                v0 = i * 5;
                do
                {
                    if ((unsigned int)j <= 4)
                        goto *((void *)((unsigned int *)((char *)&_GLOBAL_OFFSET_TABLE_ - *(int *)((char *)&(&_GLOBAL_OFFSET_TABLE_)[j] - 665708))));
                    v27 = *(int *)v16 + 116;
                    *(float *)((char *)&v11 + 12) = *(float *)(*(int *)v16 + 116);
                    *(float *)((char *)&v11 + 16) = *(float *)&v27[1];
                    *(float *)((char *)&v11 + 20) = *(float *)&v27[2];
                    sub_489120(v1, (char *)&v11 + 12);
                    *(unsigned int *)((char *)&v11 + 108) = *(unsigned int *)&v11;
                    *(unsigned int *)((char *)&v11 + 112) = *(unsigned int *)((void*)&v11 + 4);
                    *(unsigned int *)((char *)&v11 + 116) = *(unsigned int *)((void*)&v11 + 8);
                    v28 = v6 + *(unsigned int *)((void*)&v11 + 112);
                    sub_48d430(v28);
                    *(float *)((char *)&v11 + 112) = v28;
                    sub_48d430(v7);
                    *(float *)((char *)&v11 + 108) = v28;
                    sub_48a800((char *)&v11 + 108);
                    if (v2)
                    {
                        v29 = &gpGlobals->field_28;
                        v30 = 10000.0 * gpGlobals->field_28;
                        *(float *)((char *)&v11 + 12) = (float)v30;
                        v31 = 10000.0 * *(float *)&v29[1];
                        *(float *)((char *)&v11 + 16) = (float)v31;
                        *(float *)((char *)&v11 + 20) = (float)(10000.0 * *(float *)&v29[2]);
                        v32 = (double)*(unsigned int *)((void*)&v11 + 120) - v30;
                        v33 = (double)*(unsigned int *)((void*)&v11 + 124) - v31;
                        v34 = (double)(*(unsigned int *)((void*)&v11 + 128) - *(unsigned int *)((void*)&v11 + 20));
                    }
                    else
                    {
                        v35 = &gpGlobals->field_28;
                        v36 = 10000.0 * gpGlobals->field_28;
                        *(float *)((char *)&v11 + 12) = (float)v36;
                        v37 = 10000.0 * *(float *)&v35[1];
                        *(float *)((char *)&v11 + 16) = (float)v37;
                        *(float *)((char *)&v11 + 20) = (float)(10000.0 * *(float *)&v35[2]);
                        v32 = v36 + (double)*(unsigned int *)((void*)&v11 + 120);
                        v33 = v37 + (double)*(unsigned int *)((void*)&v11 + 124);
                        v34 = (double)(*(unsigned int *)((void*)&v11 + 128) + *(unsigned int *)((void*)&v11 + 20));
                    }
                    v12 = (float)v32;
                    v14 = (float)v33;
                    v15 = (float)v34;
                    v11 = _INSERT(CONCAT(*(unsigned int *)&v12, 0), 120, v12);
                    *(unsigned int *)((char *)&v11 + 124) = *(unsigned int *)((void*)&v11 + 4);
                    *(unsigned int *)((char *)&v11 + 128) = *(unsigned int *)((void*)&v11 + 8);
                    v38 = *(int *)v16;
                    v39 = &v38->field_8;
                    *(float *)&v11 = *(float *)&v38->field_8 + *(float *)&v38->field_174;
                    *(float *)((char *)&v11 + 4) = *(float *)&v39[1] + *(float *)&v38->field_178;
                    *(float *)((char *)&v11 + 8) = *(float *)&v39[2] + *(float *)&v38->field_17c;
                    sub_488460(v1, (char *)&v11 + 120, 0, 1, v38->field_208, (char *)&v11 + 32);
                    v40 = *(int *)v16 + 8;
                    v41 = *(float *)(*(int *)v16 + 8) - *(unsigned int *)((void*)&v11 + 52);
                    v13 = _INSERT(v11, 0, v41);
                    v42 = *(float *)&v40[1] - *(unsigned int *)((void*)&v11 + 56);
                    *(float *)((char *)&v13 + 4) = v42;
                    v43 = *(float *)&v40[2] - *(unsigned int *)((void*)&v11 + 60);
                    v11 = _INSERT(v13, 8, v43);
                    v44 = v41 * v41 + v42 * v42 + v43 * v43;
                    v45 = sqrt(v44);
                    if (isnan(v45))
                        sub_487dc0(*(unsigned int *)&v44);
                    else
                        v44 = v45;
                    *(float *)((char *)&v11 + 4 * v0 + 4 * j + 132) = (float)v44;
                    v46 = *(int *)v16 + 8;
                    v47 = *(float *)(*(int *)v16 + 8) - *(unsigned int *)((void*)&v11 + 52);
                    v13 = _INSERT(v11, 0, v47);
                    v48 = *(float *)&v46[1] - *(unsigned int *)((void*)&v11 + 56);
                    *(float *)((char *)&v13 + 4) = v48;
                    v49 = *(float *)&v46[2] - *(unsigned int *)((void*)&v11 + 60);
                    v11 = _INSERT(v13, 8, v49);
                    v50 = v47 * v47 + v48 * v48 + v49 * v49;
                    v51 = sqrt(v50);
                    if (isnan(v51))
                        sub_487dc0(*(unsigned int *)&v50);
                    else
                        v50 = v51;
                    *(float *)((char *)&v11 + 24) = (float)v50;
                    v52 = *(float *)&*(unsigned int *)((void*)&v11 + 24);
                    if (v52 > v9)
                    {
                        v9 = v52;
                        *(unsigned int *)((char *)&v11 + 96) = *(unsigned int *)((void*)&v11 + 52);
                        *(unsigned int *)((char *)&v11 + 100) = *(unsigned int *)((void*)&v11 + 56);
                        *(unsigned int *)((char *)&v11 + 104) = *(unsigned int *)((void*)&v11 + 60);
                        v5 = i;
                        v4 = j;
                    }
                    j += 1;
                } while (j <= 4);
                i += 1;
            } while (i <= 2);
            *(unsigned short *)&v16[2920] = 0;
            g_61692c(0.800000011920929f, 1.2000000476837158f);
            v24 = 0.800000011920929 + gpGlobals->field_0;
            *(float *)&v16[2916] = (float)v24;
            if (v5 == 1)
            {
                *(char *)&v16[2920] = (char)v16[2920] | 32;
            }
            else if (v5 == 2)
            {
                *(char *)&v16[2920] = (char)v16[2920] | 64;
            }
            if ((unsigned int)v4 <= 4)
                goto *((void *)((unsigned int *)((char *)&_GLOBAL_OFFSET_TABLE_ - *(int *)((char *)&(&_GLOBAL_OFFSET_TABLE_)[v4] - 664716))));
        }
        sub_48d0d0(v16);
        sub_488e30(v16, (short)v16[2920]);
        sub_48d730(v16);
        return v24;
    }
    else
    {
        return (double)(int)*(unsigned int *)((void*)&v11 + 192);
    }
}

