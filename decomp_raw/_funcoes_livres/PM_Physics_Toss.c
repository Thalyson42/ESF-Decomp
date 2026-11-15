// PM_Physics_Toss @0x192640 size=824
typedef struct st_592640_1 {
    float field_0;
} st_592640_1;

typedef struct st_592640_0 {
    char padding_0[16];
    float field_10;
    char padding_14[72];
    float field_5c;
    float field_60;
    float field_64;
    char padding_68[12];
    float field_74;
    float field_78;
    float field_7c;
    char padding_80[68];
    float field_c4;
    char padding_c8[20];
    unsigned int field_dc;
    unsigned int field_e0;
    char padding_e4[324620];
    struct st_592640_1 *field_4f4f0;
} st_592640_0;

extern float vec3_origin;
extern float vec3_origin+4;
extern float vec3_origin+8;
extern st_592640_0 *pmove;

float * PM_Physics_Toss(void)
{
    float *v17;  // eax
    int v18;  // 128
    int v0;  // [bp-0xf0]
    char *v1;  // [bp-0xec]
    char *v2;  // [bp-0xe8]
    int v3;  // [bp-0xcc]
    int v4;  // [bp-0xc8]
    int v5;  // [bp-0xc4]
    float v6;  // [bp-0xb4]
    float v7;  // [bp-0xb0]
    float v8;  // [bp-0xac]
    float v9;  // [bp-0x88]
    char v10;  // [bp-0x84]
    char v11;  // [bp-0x64]
    float v12;  // [bp-0x54]
    char v13;  // [bp-0x44]
    float v14;  // [bp-0x3c]
    unsigned int v15;  // [bp-0x34]

    PM_CheckWater(v3, v4, v5);
    if (0.0 < pmove->field_64)
        pmove->field_e0 = 0xffffffff;
    if (pmove->field_e0 != 0xffffffff && VectorCompare(&pmove->field_74, &vec3_origin))
    {
        v17 = VectorCompare(&pmove->field_5c, &vec3_origin);
        if (v17)
            return v17;
    }
    PM_CheckVelocity();
    if (pmove->field_dc != 5 && pmove->field_dc != 16 && pmove->field_dc != 9)
        PM_AddGravity();
    pmove->field_5c = pmove->field_5c + pmove->field_74;
    pmove->field_60 = pmove->field_60 + pmove->field_78;
    pmove->field_64 = pmove->field_64 + pmove->field_7c;
    PM_CheckVelocity();
    VectorScale(&pmove->field_5c, pmove->field_10, &v10);
    pmove->field_5c = pmove->field_5c - pmove->field_74;
    pmove->field_60 = pmove->field_60 - pmove->field_78;
    pmove->field_64 = pmove->field_64 - pmove->field_7c;
    v2 = &v10;
    v1 = &v11;
    PM_PushEntity(v1, v2);
    PM_CheckVelocity(v0, v1, v2);
    if (v11)
    {
        pmove->field_e0 = v15;
        pmove->field_5c = vec3_origin;
        pmove->field_60 = vec3_origin+4;
        pmove->field_64 = vec3_origin+8;
        return &vec3_origin;
    }
    else if (v12 == 1.0)
    {
        return PM_CheckWater();
    }
    else
    {
        if (pmove->field_dc == 10)
        {
            v9 = (float)(2.0 - pmove->field_c4);
            v18 = *(int *)&v9;
        }
        else
        {
            v18 = __double_as_longlong((pmove->field_dc == 16 ? 2.0 : 1.0));
        }
        PM_ClipVelocity(&pmove->field_5c, &v13, &pmove->field_5c, v18);
        if (0.7 >= v14)
            return PM_CheckWater();
        v6 = 0;
        v7 = 0;
        v8 = 0;
        if (*(float *)pmove->field_4f4f0 * pmove->field_10 > pmove->field_64)
        {
            pmove->field_e0 = v15;
            pmove->field_64 = 0;
        }
        if (__float_as_int(pmove->field_5c * pmove->field_5c) + __float_as_int(pmove->field_60 * pmove->field_60) + pmove->field_64 * pmove->field_64 < 900.0f || pmove->field_dc != 10 && pmove->field_dc != 16)
        {
            pmove->field_e0 = v15;
            pmove->field_5c = vec3_origin;
            pmove->field_60 = vec3_origin+4;
            pmove->field_64 = vec3_origin+8;
        }
        else
        {
            v9 = (float)((1.0 - v12) * pmove->field_10 * 0.9);
            VectorScale(&pmove->field_5c, v9, &v10);
            PM_PushEntity(&v11, &v10);
        }
        pmove->field_5c = pmove->field_5c - v6;
        pmove->field_60 = pmove->field_60 - v7;
        pmove->field_64 = pmove->field_64 - v8;
        return PM_CheckWater();
    }
}

