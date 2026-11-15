// GetSwoopLifeTime__10CSwoopTask @0x14f2d0 size=690
typedef struct st_54f2d0_2 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
} st_54f2d0_2;

typedef struct st_54f2d0_1 {
    char padding_0[8];
    struct st_54f2d0_0 *field_8;
    struct st_54f2d0_2 *field_c;
} st_54f2d0_1;

typedef struct st_54f2d0_0 {
    char padding_0[1284];
    unsigned int field_504;
    char padding_508[1296];
    short field_a18;
} st_54f2d0_0;

typedef struct st_54f2d0_3 {
    float field_0;
} st_54f2d0_3;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_54f2d0_3 *gpGlobals;

double GetSwoopLifeTime__10CSwoopTask(st_54f2d0_1 *a0)
{
    float *v7;  // eax
    unsigned int *v8;  // edx
    float v0;  // [bp-0xcc]
    char v1;  // [bp-0x88]
    float v2;  // [bp-0x78]
    char v3;  // [bp-0x48]
    float v4;  // [bp-0x28]
    float v5;  // [bp-0x24]
    float v6;  // [bp-0x20]

    v0 = (float)((double)a0->field_8->field_a18 * 10.0);
    if (1500.0 < v0)
        v0 = 1500.0f;
    v7 = a0->field_c;
    v8 = v7 + 0x22;
    v4 = v7[0x22];
    v5 = *(float *)&v8[1];
    v6 = *(float *)&v8[2];
    UTIL_MakeVectors(v7 + 61);
    if (a0->field_8->field_504 > 5)
    {
        UTIL_TraceHull(&v4, &v3, 0, 1, a0->field_c, &v1);
        return (0.0 >= v2 ? 0.10000000149011612 : v0 * v2 / 1500.0 + v0 * v2 / 1500.0 + *(float *)gpGlobals);
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_8->field_504] - 804716)]));
}

