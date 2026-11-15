// SetupRotation__12CFuncPlatRot @0xe9640 size=284
typedef struct st_4e9640_0 {
    struct st_4e9640_1 *field_0;
    char padding_4[236];
    unsigned int field_f0;
    char padding_f4[24];
    unsigned int field_10c;
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
    unsigned int field_11c;
    unsigned int field_120;
} st_4e9640_0;

typedef struct st_4e9640_1 {
    char padding_0[68];
    unsigned int field_44;
    unsigned int field_48;
    unsigned int field_4c;
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[368];
    unsigned int field_1cc;
} st_4e9640_1;

extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;

float SetupRotation__12CFuncPlatRot(st_4e9640_0 *a0)
{
    unsigned int *v6;  // edx
    unsigned int v7;  // 128
    unsigned int *v8;  // eax
    unsigned int *v9;  // eax
    float v10;  // eax
    unsigned int *v11;  // edx
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    if (*(float *)&a0->field_f0 != 0.0f)
    {
        CBaseToggle::AxisDir(a0->field_0);
        v6 = a0->field_0;
        a0->field_118 = v6[20];
        a0->field_11c = v6[21];
        a0->field_120 = v6[22];
        v7 = *&a0->field_f0;
        v8 = v6 + 0x11;
        v0 = __int_as_float(v7) * *(float *)&v6[0x11];
        v1 = __int_as_float(v7) * *(float *)&v8[1];
        v2 = __int_as_float(v7) * *(float *)&v8[2];
        v9 = v6 + 20;
        v3 = v0 + *(float *)&v6[20];
        v4 = v1 + *(float *)&v9[1];
        v5 = *(float *)&v9[2] + v2;
        *(float *)&a0->field_10c = v3;
        *(float *)&a0->field_110 = v4;
        v10 = v5;
    }
    else
    {
        a0->field_118 = g_vecZero;
        a0->field_11c = g_vecZero+4;
        a0->field_120 = g_vecZero+8;
        a0->field_10c = g_vecZero;
        a0->field_110 = g_vecZero+4;
        v10 = *(float *)&g_vecZero+8;
    }
    *(float *)&a0->field_114 = v10;
    v11 = a0->field_0;
    if (v11[115])
    {
        v11[20] = a0->field_10c;
        v11[21] = a0->field_110;
        v10 = *(float *)&a0->field_114;
        *(float *)&v11[22] = v10;
    }
    return v10;
}

