// RampThink__15CAmbientGeneric @0x11aad0 size=1017
typedef struct st_51aad0_1 {
    struct st_51aad0_0 *field_0;
    char padding_4[96];
    unsigned int field_64;
    char padding_68[4];
    int field_6c;
    char padding_70[4];
    int field_74;
    int field_78;
    int field_7c;
    char padding_80[4];
    int field_84;
    int field_88;
    int field_8c;
    int field_90;
    unsigned int field_94;
    unsigned int field_98;
    char padding_9c[8];
    int field_a4;
    char padding_a8[8];
    int field_b0;
    int field_b4;
    char padding_b8[8];
    int field_c0;
    int field_c4;
    int field_c8;
} st_51aad0_1;

typedef struct st_51aad0_0 {
    char padding_0[8];
    char field_8;
    char padding_9[251];
    float field_104;
    char padding_108[204];
    unsigned int field_1d4;
    char padding_1d8[48];
    int field_208;
} st_51aad0_0;

typedef struct st_51aad0_2 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_51aad0_2;

typedef struct st_51aad0_3 {
    unsigned int field_0;
} st_51aad0_3;

extern st_51aad0_3 *g_616928;
extern st_51aad0_2 *gpGlobals;

unsigned int * RampThink__15CAmbientGeneric(st_51aad0_1 *a0)
{
    int v7;  // edi
    int v8;  // ecx
    int v9;  // ecx
    int v10;  // ecx
    int v11;  // eax
    int v12;  // edx
    int v13;  // eax
    int v14;  // eax
    int v15;  // eax
    int v16;  // edi
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    int v3;  // [bp-0x1c]
    int v4;  // [bp-0x1c]
    int v5;  // [bp-0x18]
    float v6;  // [bp-0xc]

    v5 = a0->field_0->field_1d4 + gpGlobals->field_98;
    v7 = a0->field_a4;
    v3 = a0->field_b4;
    v2 = 0;
    v1 = 0;
    if (!a0->field_74)
    {
        if (!a0->field_78 && !a0->field_84 && !a0->field_88 && !a0->field_8c)
            return a0->field_b4;
        if (!a0->field_74 && !a0->field_78)
            goto LABEL_51abd0;
    }
    v8 = a0->field_b0;
    if (a0->field_74 > 0)
    {
        a0->field_b0 = a0->field_b0 + a0->field_74;
    }
    else if (a0->field_78 > 0)
    {
        a0->field_b0 = a0->field_b0 - a0->field_78;
    }
    v7 = a0->field_b0 >> 8;
    if (v7 > a0->field_6c)
    {
        v7 = a0->field_6c;
        a0->field_74 = 0;
    }
    if (v7 < a0->padding_70)
    {
        a0->field_78 = 0;
    }
    else
    {
        if (v7 > 0xff)
            v7 = 0xff;
        if (v7 <= 0)
            v7 = 1;
        a0->field_a4 = v7;
        if (v8 >> 8 != v7)
            v1 |= 1;
        v2 |= 128;
LABEL_51abd0:
        if (a0->field_84 || a0->field_88)
        {
            v9 = a0->field_c0;
            if (a0->field_84 > 0)
            {
                a0->field_c0 = a0->field_c0 + a0->field_84;
            }
            else if (a0->field_88 > 0)
            {
                a0->field_c0 = a0->field_c0 - a0->field_88;
            }
            v3 = a0->field_c0 >> 8;
            if (v3 > a0->field_7c)
            {
                v3 = a0->field_7c;
                a0->field_84 = 0;
            }
            if (v3 < a0->padding_80)
            {
                a0->field_88 = 0;
            }
            else
            {
                if (v3 > 100)
                    v3 = 100;
                if (v3 <= 0)
                    v3 = 1;
                a0->field_b4 = v3;
                if (v9 >> 8 != v3)
                    v1 |= 1;
                v2 |= 64;
                goto LABEL_51aca6;
            }
        }
        else
        {
LABEL_51aca6:
            if (a0->field_8c)
            {
                if (a0->field_c4 > 0x6fffffff)
                    a0->field_c4 = 0;
                v10 = a0->field_90;
                v11 = a0->field_c4 + v10;
                a0->field_c4 = v11;
                v12 = v11 >> 8;
                if (v11 < 0)
                {
                    a0->field_c4 = 0;
                    v13 = v10;
                    if (v13 < 0)
                        v13 = -v13;
                    a0->field_90 = v13;
                    v12 = 0;
                }
                else if (v12 > 0xff)
                {
                    v12 = 0xff;
                    a0->field_c4 = 0xff00;
                    v14 = a0->field_90;
                    if (v14 < 0)
                        v14 = -v14;
                    a0->field_90 = -v14;
                }
                v15 = a0->field_8c;
                if (v15 == 2)
                {
LABEL_51ada0:
                    a0->field_c8 = v12;
                }
                else if (v15 <= 2)
                {
                    if (v15 != 1)
                        goto LABEL_51ada0;
                    if (v12 <= 127)
                        a0->field_c8 = 0xff;
                    else
                        a0->field_c8 = 0;
                }
                else
                {
                    if (v15 != 3)
                        goto LABEL_51ada0;
                    if (v12 == 0xff)
                        a0->field_c8 = g_616928(0, 0xff);
                }
                if (a0->field_94)
                {
                    v0 = a0->field_94 * (a0->field_c8 - 128);
                    v16 = v7 + v0 / 100;
                    if (v16 > 0xff)
                        v16 = 0xff;
                    if (v16 <= 0)
                        v16 = 1;
                    if (v7 != v16)
                        v1 |= 1;
                    v2 |= 128;
                    v7 = v16;
                }
                if (a0->field_98)
                {
                    v0 = a0->field_98 * (a0->field_c8 - 128);
                    v4 = v3 + v0 / 100;
                    if (v4 > 100)
                        v4 = 100;
                    if (v4 < 0)
                        v4 = 0;
                    if (v3 != v4)
                        v1 |= 1;
                    v2 |= 64;
                    v3 = v4;
                }
            }
            if (v2 && v1)
            {
                if (v7 == 100)
                    v7 = 101;
                v6 = (float)((double)v3 * 0.01);
                sub_4897b0(a0->field_0->field_208, &a0->field_0->field_8, v5, v6, *(float *)&a0->field_64, v2, v7);
            }
            a0->field_0->field_104 = (float)(0.2 + gpGlobals->field_0);
            return gpGlobals;
        }
    }
    return sub_4897b0(a0->field_0->field_208, &a0->field_0->field_8, v5, 0, 0, 32, 0);
}

