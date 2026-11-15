// PendulumUse__9CPendulumP11CBaseEntityT18USE_TYPEf @0x92fa0 size=298
typedef struct st_492fa0_2 {
    char padding_0[436];
    unsigned int field_1b4;
} st_492fa0_2;

typedef struct st_492fa0_1 {
    char padding_0[504];
    unsigned int field_1f8;
} st_492fa0_1;

typedef struct st_492fa0_0 {
    float field_0;
} st_492fa0_0;

extern char Stop__9CPendulum;
extern char Swing__9CPendulum;
extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_492fa0_0 *gpGlobals;

float PendulumUse__9CPendulumP11CBaseEntityT18USE_TYPEf(float idx)
{
    st_492fa0_1 *v4;  // edx
    unsigned int v5;  // 128
    unsigned int v14;  // 128
    st_492fa0_1 *v6;  // edx
    unsigned int v7;  // 128
    st_492fa0_2 *v8;  // eax
    st_492fa0_1 *v9;  // eax
    double v10;  // mm0
    st_492fa0_1 *v12;  // ecx
    unsigned int v13;  // eax
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    v4 = *(int *)idx;
    v5 = *&v4->field_1f8;
    if (__int_as_float(v5) == 0.0)
    {
        *(float *)(*(int *)idx + 260) = (float)(0.1 + *(float *)(*(int *)idx + 0x100));
        *(float *)(*(unsigned int *)&idx + 108) = *(float *)gpGlobals;
        v13 = _INSERT(gpGlobals, 0, 0);
        *(unsigned int *)(*(unsigned int *)&idx + 12) = v13 | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &Swing__9CPendulum;
        v14 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 116);
        *(unsigned int *)(*(unsigned int *)&idx + 120) = v14;
        return __int_as_float(v14);
    }
    else if (v4->padding_0[416] & 16)
    {
        CBaseToggle::AxisDelta(*(int *)&v4->padding_0[416], &v4->padding_0[80], *(unsigned int *)&idx + 0x88);
        v6 = *(int *)idx;
        v7 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 116);
        v8 = &v6->padding_0[0x44];
        v0 = __int_as_float(v7) * *(float *)&v6->padding_0[0x44];
        v1 = __int_as_float(v7) * *(float *)&v8->padding_0[4];
        v2 = __int_as_float(v7) * *(float *)&v8->padding_0[8];
        *(float *)&v6->padding_0[92] = v0;
        *(float *)&v6->padding_0[96] = v1;
        *(float *)&v6->padding_0[100] = v2;
        v9 = *(int *)idx;
        *(float *)&v9->padding_0[260] = (float)(v10 / *(float *)(*(unsigned int *)&idx + 116) + *(float *)&v9->padding_0[0x100]);
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v9, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &Stop__9CPendulum;
        return v2;
    }
    else
    {
        *(unsigned int *)(*(int *)idx + 504) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 12) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 16) = 0;
        v12 = *(int *)idx;
        *(unsigned int *)&v12->padding_0[92] = g_vecZero;
        *(unsigned int *)&v12->padding_0[96] = g_vecZero+4;
        *(unsigned int *)&v12->padding_0[100] = g_vecZero+8;
        return __int_as_float(v5);
    }
}

