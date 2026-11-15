// SetAtkBehindAndBlocking__12CPlayerMelee @0x108740 size=297
typedef struct st_508740_1 {
    char padding_0[212];
    unsigned int field_d4;
    unsigned int field_d8;
    char padding_dc[72];
    struct st_508740_2 *field_124;
    char padding_128[4];
    struct st_508740_3 *field_12c;
    char padding_130[4];
    struct st_508740_0 *field_134;
    char padding_138[12];
    unsigned int field_144;
} st_508740_1;

typedef struct st_508740_0 {
    char padding_0[324];
    unsigned int field_144;
} st_508740_0;

typedef struct st_508740_3 {
    unsigned int field_0;
} st_508740_3;

typedef struct st_508740_2 {
    unsigned int field_0;
    char padding_4[808];
    unsigned int field_32c;
} st_508740_2;

extern st_508740_3 *g_616810;

unsigned int * SetAtkBehindAndBlocking__12CPlayerMelee(st_508740_1 *a0)
{
    double v13;  // mm5
    double v14;  // mm5
    double v15;  // mm5
    unsigned int *v16;  // eax
    unsigned int v0;  // [bp-0x7c]
    unsigned int v1;  // [bp-0x78]
    float v2;  // [bp-0x64]
    float v3;  // [bp-0x60]
    float v4;  // [bp-0x5c]
    char v5;  // [bp-0x44]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    char v9;  // [bp-0x24]
    float v10;  // [bp-0x24]
    float v11;  // [bp-0x20]
    float v12;  // [bp-0x1c]

    a0->field_d4 = 0;
    a0->field_d8 = 0;
    g_616810(*(int *)a0->field_12c + 116, &v9, 0, 0, v0, v1);
    g_616810(a0->field_124->field_0 + 116, &v5, 0, 0);
    v13 = -v6;
    v2 = (float)v13;
    v14 = -v7;
    v3 = (float)v14;
    v15 = -v8;
    v4 = (float)v15;
    if (__double_as_longlong(v13 * (double)v10) + __double_as_longlong(v14 * (double)v11) + v15 * v12 < -1.0)
    {
        a0->field_d8 = 1;
    }
    else
    {
        a0->field_134->field_144 = 0;
        a0->field_144 = 0;
        a0->field_d4 = sub_489e20(a0->field_134, a0->field_124);
        a0->field_134->field_144 = 1;
        a0->field_144 = 1;
    }
    v16 = &a0->field_124->field_0;
    v16[203] = 0;
    return v16;
}

