// Touch__12CTriggerPushP11CBaseEntity @0x12e800 size=414
typedef struct st_52e800_2 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[208];
    unsigned int field_dc;
    unsigned int field_e0;
    char padding_e4[149];
    char field_179;
    char field_17a;
} st_52e800_2;

typedef struct st_52e800_0 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    float field_2c;
    float field_30;
    float field_34;
    char padding_38[208];
    float field_108;
    unsigned int field_10c;
    char padding_110[149];
    char field_1a5;
    char field_1a6;
} st_52e800_0;

typedef struct st_52e800_3 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[336];
    char field_15c;
    char padding_15d[87];
    unsigned int field_1b4;
} st_52e800_3;

typedef struct st_52e800_1 {
    char padding_0[68];
    float field_44;
    float field_48;
    float field_4c;
    char padding_50[336];
    char field_1a0;
    char padding_1a1[87];
    float field_1f8;
} st_52e800_1;

extern char _GLOBAL_OFFSET_TABLE_;

float Touch__12CTriggerPushP11CBaseEntity(st_52e800_1 **a0, st_52e800_0 **a1)
{
    st_52e800_0 *v9;  // ecx
    float v10;  // eax
    st_52e800_1 *v11;  // edx
    float v12;  // 128
    st_52e800_3 *v13;  // eax
    unsigned int *v14;  // eax
    st_52e800_1 *v15;  // eax
    float v16;  // 128
    st_52e800_3 *v17;  // edx
    st_52e800_2 *v18;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x38]
    float v4;  // [bp-0x34]
    float v5;  // [bp-0x30]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]

    v9 = *a1;
    v10 = v9->field_108;
    if (__float_as_int(v10) <= 1.7e-44)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * __float_as_int(v10)] - 938652)]));
    }
    else if (!v9->field_10c)
    {
        return v10;
    }
    else if (v9->field_10c != 4)
    {
        v11 = *a0;
        if (v11->field_1a0 & 1)
        {
            v12 = v11->field_1f8;
            v13 = &v11->field_44;
            v0 = v12 * v11->field_44;
            v1 = v12 * *(float *)&v13->field_4;
            v2 = v12 * *(float *)&v13->field_8;
            v14 = &v9->field_20;
            v6 = v0 + v9->field_20;
            v7 = v1 + *(float *)&v14[1];
            v8 = *(float *)&v14[2] + v2;
            v9->field_20 = v6;
            v9->field_24 = v7;
            v9->field_28 = v8;
            if (0.0 >= v9->field_28)
                return sub_48cc00(a0);
            v9->field_1a5 = v9->field_1a5 & 253;
            return sub_48cc00(a0);
        }
        else
        {
            v15 = *a0;
            v16 = v15->field_1f8;
            v17 = &v15->field_44;
            v0 = v16 * v15->field_44;
            v1 = v16 * *(float *)&v17->field_4;
            v2 = v16 * *(float *)&v17->field_8;
            if (v9->field_1a6 & 64)
            {
                v18 = &v9->field_2c;
                v3 = v0 + v9->field_2c;
                v4 = v1 + *(float *)&v18->field_4;
                v5 = v2 + *(float *)&v18->field_8;
                v0 = v3;
                v1 = v4;
                v2 = v5;
            }
            v9->field_2c = v0;
            v9->field_30 = v1;
            v9->field_34 = v2;
            v9->field_1a6 = v9->field_1a6 | 64;
            return v2;
        }
    }
    else
    {
        return v10;
    }
}

