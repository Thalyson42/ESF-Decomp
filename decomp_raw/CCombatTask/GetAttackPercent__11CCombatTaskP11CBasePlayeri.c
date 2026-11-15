// GetAttackPercent__11CCombatTaskP11CBasePlayeri @0x14d140 size=922
typedef struct st_54d140_5 {
    char padding_0[136];
    unsigned int field_88;
} st_54d140_5;

typedef struct st_54d140_0 {
    char padding_0[12];
    short field_c;
} st_54d140_0;

typedef struct st_54d140_2 {
    char padding_0[2];
    short field_2;
    short field_4;
    short field_6;
    short field_8;
    short field_a;
    short field_c;
    short field_e;
    short field_10;
    short field_12;
} st_54d140_2;

typedef struct st_54d140_6 {
    struct st_54d140_4 *field_0;
    char padding_4[816];
    unsigned int field_334;
    unsigned int field_338;
    char padding_33c[64];
    unsigned int field_37c;
    char padding_380[100];
    unsigned int field_3e4;
    char padding_3e8[744];
    unsigned short field_6d0;
    char padding_6d2[662];
    struct st_54d140_5 *field_968;
} st_54d140_6;

typedef struct st_54d140_1 {
    char padding_0[2556];
    char field_9fc;
    char padding_9fd[7];
    struct st_54d140_2 *field_a04;
    char padding_a08[412];
    short field_ba4;
    char padding_ba6[2];
    struct st_54d140_0 *field_ba8;
} st_54d140_1;

typedef struct st_54d140_4 {
    char padding_0[528];
    float field_210;
} st_54d140_4;

typedef struct st_54d140_3 {
    char padding_0[8];
    struct st_54d140_1 *field_8;
} st_54d140_3;

extern char _GLOBAL_OFFSET_TABLE_;
extern char BotManager+3399;

unsigned int GetAttackPercent__11CCombatTaskP11CBasePlayeri(st_54d140_3 *a0, st_54d140_6 *a1, unsigned int a2)
{
    st_54d140_1 *v11;  // edx
    unsigned int v12;  // 4105
    double v13;  // mm7
    float v0;  // [bp-0x3c]
    float v1;  // [bp-0x38]
    float v2;  // [bp-0x34]
    float v3;  // [bp-0x30]
    float v4;  // [bp-0x2c]
    float v5;  // [bp-0x28]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    int v8;  // [bp-0x1c]
    unsigned short v9;  // [bp-0x16]
    unsigned short v10;  // [bp-0x6]

    if (!BotManager+3399)
    {
LABEL_54d4b5:
        return 0;
    }
    v11 = a0->field_8;
    v7 = (float)v11->field_a04->field_4;
    v6 = (float)v11->field_a04->field_6;
    v5 = (float)v11->field_a04->field_8;
    v4 = (float)v11->field_a04->field_e;
    v3 = (float)v11->field_a04->field_2;
    v2 = (float)v11->field_a04->field_a;
    v1 = (float)v11->field_a04->field_c;
    v0 = (float)v11->field_a04->field_10;
    if (a1->field_334 || a1->field_338)
    {
        if (a0->field_8->field_9fc <= 4)
        {
            goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_8->field_9fc] - 813244)]));
        }
        else
        {
            v12 = _ccall(14, 14, a1->field_6d0, 0, 0);
            if (!(v12 & 1) && a1->field_968 && a1->field_968->field_88 - 4 <= 20)
                goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a1->field_968->field_88] - 813084)]));
        }
    }
    else
    {
        if (a1->field_37c && a1->field_3e4 - 3 <= 1)
        {
            v3 = (float)(1.75 * v3);
            v1 = (float)(1.75 * v1);
        }
        else if (a1->field_0->field_210 == 0.0)
        {
            v3 = (float)(v3 * 1.25);
            v1 = (float)(1.25 * v1);
        }
    }
    if (a2 - 1 <= 1)
        return 0;
    if (a2 == 3 || a2 == 30 || a2 == 21)
    {
        v13 = v3;
    }
    else if (a2 == 4 || a2 == 18)
    {
        v13 = v7;
    }
    else if (a2 == 22 || a2 == 16)
    {
        v13 = v6;
    }
    else if (a2 - 5 <= 1 || a2 == 15 || a2 == 23)
    {
        v13 = v5;
    }
    else if (a2 == 7 || a2 == 10)
    {
        v13 = v2;
    }
    else if (a2 == 9 || a2 == 14 || a2 == 20)
    {
        v13 = v1;
    }
    else if (a2 - 11 <= 2 || a2 == 0x11 || a2 == 19 || a2 == 24 || a2 == 33)
    {
        v13 = v4;
    }
    else if (a2 == 32)
    {
        v13 = v0;
    }
    else
    {
        if (a2 == 128)
        {
            if (a0->field_8->field_ba4 > 0)
                return a0->field_8->field_ba8->field_c;
        }
        else
        {
            if (a2 == 8)
                return a0->field_8->field_a04->field_12;
        }
        goto LABEL_54d4b5;
    }
    v10 = __fnstcw();
    v9 = v10 | 0xc00;
    v8 = (int)v13;
    return (short)v8;
}

