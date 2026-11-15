// TaskThink__10CBlockTask @0x183780 size=819
typedef struct st_583780_3 {
    char padding_0[136];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
} st_583780_3;

typedef struct st_583780_9 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
} st_583780_9;

typedef struct st_583780_5 {
    struct st_583780_6 *field_0;
    unsigned int field_4;
    struct st_583780_5 *field_8;
    char padding_c[12];
    float field_18;
    char padding_1c[784];
    unsigned int field_32c;
    char padding_330[40];
    unsigned int field_358;
    char padding_35c[320];
    unsigned int field_49c;
    char padding_4a0[1376];
    struct st_583780_1 *field_a00;
    char padding_a04[20];
    short field_a18;
    char padding_a1a[154];
    float field_ab4;
    char padding_ab8[8];
    struct st_583780_7 *field_ac0;
    char padding_ac4[332];
    unsigned int field_c10;
    unsigned int field_c14;
    unsigned int field_c18;
} st_583780_5;

typedef struct st_583780_10 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[60];
    unsigned int field_48;
    unsigned int field_4c;
    char padding_50[320];
    struct st_583780_3 *field_190;
} st_583780_10;

typedef struct st_583780_7 {
    struct st_583780_4 *field_0;
} st_583780_7;

typedef struct st_583780_4 {
    char padding_0[520];
    struct st_583780_2 *field_208;
} st_583780_4;

typedef struct st_583780_8 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[60];
    float field_d0;
    float field_d4;
    char padding_d8[320];
    struct st_583780_9 *field_218;
} st_583780_8;

typedef struct st_583780_2 {
    char padding_0[136];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
    char padding_94[60];
    unsigned int field_d0;
    unsigned int field_d4;
    char padding_d8[320];
    struct st_583780_3 *field_218;
} st_583780_2;

typedef struct st_583780_6 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[588];
    float field_260;
} st_583780_6;

typedef struct st_583780_1 {
    char padding_0[62];
    char field_3e;
} st_583780_1;

typedef struct st_583780_0 {
    unsigned int field_0;
} st_583780_0;

extern st_583780_0 *gpGlobals;

st_583780_5 * TaskThink__10CBlockTask(st_583780_5 *a0)
{
    st_583780_5 *v19;  // eax
    st_583780_5 *v20;  // eax
    double v29;  // mm7
    double v30;  // mm6
    double v31;  // mm5
    st_583780_5 *v32;  // esi
    st_583780_10 *v33;  // eax
    st_583780_5 *v21;  // edx
    st_583780_8 *v22;  // edi
    unsigned int *v23;  // edx
    unsigned int *v24;  // edx
    double v25;  // mm7
    double v26;  // mm7
    st_583780_5 *v27;  // edx
    st_583780_10 *v28;  // eax
    int v0;  // [bp-0xa8]
    float v1;  // [bp-0x84]
    char *v2;  // [bp-0x80]
    float v3;  // [bp-0x7c]
    float v4;  // [bp-0x78]
    float v5;  // [bp-0x64]
    float v6;  // [bp-0x60]
    float v7;  // [bp-0x5c]
    char v8;  // [bp-0x44]
    float v9;  // [bp-0x44]
    float v10;  // [bp-0x40]
    unsigned int v11;  // [bp-0x3c]
    float v12;  // [bp-0x24]
    unsigned int v13;  // [bp-0x20]
    float v14;  // [bp-0x20]
    unsigned int v15;  // [bp-0x1c]
    float v16;  // [bp-0x18]
    float v17;  // [bp-0x14]
    unsigned int v18;  // [bp-0x10], Other Possible Types: float

    sub_48d0d0(a0->field_8);
    if (a0->field_18 < *(float *)gpGlobals && !(v19 = a0->field_8, v19->field_358 || v19->field_49c == 2 || v19->field_a18 > 159) || (*(unsigned short *)((char *)&v13 + 2) = __fnstcw(), *(unsigned int *)&v14 = _INSERT(v13, 0, *(unsigned short *)((void*)&v13 + 2) | 0xc00), *(int *)&v12 = (int)a0->field_8->field_0->field_260, (int)*(unsigned int *)&v12 <= 1e-44))
    {
        if (a0->field_8->field_32c)
            sub_4895a0(a0->field_8);
        v20 = a0;
        v20->field_4 = 2;
    }
    else
    {
        v21 = a0->field_8;
        if (v21->field_358)
        {
            if (v21->field_a00->field_3e)
            {
                *(unsigned short *)&v0 = 1;
                sub_48ab70(v21, v0);
                a0->field_8->field_ab4 = (float)(*(float *)gpGlobals + 1.5);
            }
            v22 = (!a0->field_8->field_ac0 ? NULL : *(int *)(*(int *)a0->field_8->field_ac0 + 520));
            if (!(char)sub_48b960(v22) && (char)sub_4882c0(v22))
            {
                if (!(char)sub_48b960(v22->field_218))
                {
                    v4 = v22->field_d4;
                    v3 = v22->field_d0;
                    v23 = &v22->field_218->field_88;
                    v16 = v22->field_218->field_88;
                    v17 = *(float *)&v23[1];
                    v18 = *(float *)&v23[2];
                    v2 = &v12;
                    v24 = &a0->field_8->field_0->field_8;
                    v5 = v16 - a0->field_8->field_0->field_8;
                    v6 = v17 - *(float *)&v24[1];
                    v7 = v18 - *(float *)&v24[2];
                    sub_488860(&v8, &v5);
                    sub_489120(v2, &v8);
                    v25 = v4 + 180.0;
                    sub_48d430((float)v25);
                    v1 = (float)fabs(v25 - v14);
                    v26 = v3 + 180.0;
                    sub_48d430((float)v26);
                    if (20.0 > v1)
                    {
                        if (20.0 <= fabs(v26 - v12))
                            goto LABEL_583a07;
                        v16 = v12;
                        v17 = v14;
                        v18 = v15;
                        v27 = a0->field_8;
                        *(float *)&v27->field_c10 = v16;
                        *(float *)&v27->field_c14 = v17;
                        v27->field_c18 = v18;
                    }
                    else
                    {
LABEL_583a07:
                        v28 = &v22->field_88;
                        v29 = v22->field_88;
                        v16 = (float)v29;
                        v30 = *(float *)&v28->field_4;
                        v17 = (float)v30;
                        v31 = *(float *)&v28->field_8;
                        v18 = (float)v31;
                        v32 = a0->field_8;
LABEL_583a54:
                        v5 = (float)v29;
                        v6 = (float)v30;
                        v7 = (float)v31;
                        sub_48a170(&v8, v32, &v5);
                        *(float *)&v32->field_c10 = v9;
                        *(float *)&v32->field_c14 = v10;
                        v32->field_c18 = v11;
                    }
                }
                else
                {
                    v33 = &v22->field_88;
                    v29 = v22->field_88;
                    v16 = (float)v29;
                    v30 = *(float *)&v33->field_4;
                    v17 = (float)v30;
                    v31 = *(float *)&v33->field_8;
                    v18 = (float)v31;
                    v32 = a0->field_8;
                    goto LABEL_583a54;
                }
            }
        }
        v20 = a0->field_8;
        if (!v20->field_32c)
            v20 = sub_489930(v20);
    }
    return v20;
}

