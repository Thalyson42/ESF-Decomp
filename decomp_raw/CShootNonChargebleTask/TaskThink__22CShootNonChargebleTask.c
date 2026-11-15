// TaskThink__22CShootNonChargebleTask @0x14d4e0 size=409
typedef struct st_54d4e0_3 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_54d4e0_3;

typedef struct st_54d4e0_4 {
    char padding_0[4];
    unsigned int field_4;
    struct st_54d4e0_0 *field_8;
    struct st_54d4e0_2 *field_c;
    struct st_54d4e0_5 *field_10;
} st_54d4e0_4;

typedef struct st_54d4e0_0 {
    struct st_54d4e0_1 *field_0;
    char padding_4[2876];
    float field_b40;
    char padding_b44[52];
    float field_b78;
    unsigned int field_b7c;
} st_54d4e0_0;

typedef struct st_54d4e0_5 {
    struct st_54d4e0_3 *field_0;
} st_54d4e0_5;

typedef struct st_54d4e0_2 {
    char padding_0[512];
    unsigned int field_200;
} st_54d4e0_2;

typedef struct st_54d4e0_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[588];
    float field_260;
} st_54d4e0_1;

typedef struct st_54d4e0_6 {
    unsigned int field_0;
} st_54d4e0_6;

extern st_54d4e0_6 *gpGlobals;

int TaskThink__22CShootNonChargebleTask(st_54d4e0_4 *a0)
{
    unsigned int v11;  // eax
    unsigned int *v12;  // edx
    unsigned int *v13;  // edx
    float v14;  // 112
    float v15;  // 112
    float v16;  // 112
    float v17;  // 128
    char v0;  // [bp-0x76]
    char v1;  // [bp-0x75]
    int v2;  // [bp-0x74]
    unsigned short v3;  // [bp-0x70]
    unsigned short v4;  // [bp-0x6e]
    float v5;  // [bp-0x54]
    float v6;  // [bp-0x50]
    float v7;  // [bp-0x4c]
    float v8;  // [bp-0x34]
    float v9;  // [bp-0x30]
    float v10;  // [bp-0x2c]

    if (!a0->field_10)
    {
        v11 = _INSERT(gpGlobals, 0, 0);
        if (*(float *)gpGlobals - 2.0 <= a0->field_8->field_b40)
        {
            sub_48d7b0(a0->field_8);
            return v11;
        }
        a0->field_4 = 2;
        return v11;
    }
    else
    {
        sub_48bfd0(a0->field_8);
        v12 = *(int *)a0->field_10 + 8;
        v8 = *(float *)(*(int *)a0->field_10 + 8);
        v9 = *(float *)&v12[1];
        v10 = *(float *)&v12[2];
        v13 = &a0->field_8->field_0->field_8;
        v14 = v8 - a0->field_8->field_0->field_8;
        v5 = v14;
        v15 = v9 - *(float *)&v13[1];
        v6 = v15;
        v16 = v10 - *(float *)&v13[2];
        v7 = v16;
        v17 = v14 * v14 + v15 * v15 + v16 * v16;
        if (isnan(sqrt(v17)))
            sub_487dc0((unsigned int)(v17 >> 0));
        v1 = 1;
        v0 = 0;
        if (a0->field_8->field_b78 <= *(float *)gpGlobals)
            v0 = 1;
        v4 = __fnstcw();
        v3 = v4 | 0xc00;
        v2 = (int)a0->field_8->field_0->field_260;
        if (v2 > 14)
        {
            if (!(char)sub_48bf70(a0->field_8, a0->field_10))
                v1 = 0;
            if (!v0)
            {
                if (!v1)
                    return v11;
                a0->field_c->field_200 = a0->field_c->field_200 | a0->field_8->field_b7c;
                return v11;
            }
        }
        sub_48bf00(a0->field_8);
        a0->field_4 = 2;
        return v11;
    }
}

