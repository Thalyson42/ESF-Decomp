// DoSpark__FP9entvars_sRC6Vector @0x96f30 size=421
typedef struct st_496f30_0 {
    unsigned int field_0;
} st_496f30_0;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_496f30_0 *g_61692c;

int DoSpark__FP9entvars_sRC6Vector(double a0, double a1, float *a2, float *a3)
{
    unsigned int *v10;  // eax
    double v11;  // mm5
    double v12;  // mm5
    double v13;  // mm0
    float v0;  // [bp-0x60]
    int v1;  // [bp-0x5c]
    unsigned short v2;  // [bp-0x58]
    unsigned short v3;  // [bp-0x56]
    float v4;  // [bp-0x44]
    float v5;  // [bp-0x40]
    float v6;  // [bp-0x3c]
    float v7;  // [bp-0x24]
    float v8;  // [bp-0x20]
    float v9;  // [bp-0x1c]

    v10 = a2 + 61;
    v11 = 0.5 * a2[61];
    v4 = (float)v11;
    v12 = 0.5 * *(float *)&v10[1];
    v5 = (float)v12;
    v6 = (float)(0.5 * *(float *)&v10[2]);
    v7 = (float)(v11 + *a3);
    v8 = (float)(v12 + a3[1]);
    v9 = a3[2] + v6;
    sub_48a3b0(&v7);
    g_61692c(0.25f, 0.75f);
    v13 = a0 * 0.4;
    v0 = (float)v13;
    g_61692c(0, 0x3f800000);
    v3 = __fnstcw();
    v2 = v3 | 0xc00;
    v1 = (int)(v13 * 6.0);
    if ((unsigned int)v1 > 5)
        return v1;
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v1] - 1559228)]));
}

