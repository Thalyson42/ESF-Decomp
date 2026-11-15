// RotatingUse__13CFuncRotatingP11CBaseEntityT18USE_TYPEf @0x92810 size=501
typedef struct st_492810_2 {
    char padding_0[24];
    unsigned int field_18;
} st_492810_2;

typedef struct st_492810_1 {
    char padding_0[68];
    char field_44;
    char padding_45[23];
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[400];
    unsigned int field_1f8;
} st_492810_1;

typedef struct st_492810_0 {
    char padding_0[152];
    unsigned int field_98;
} st_492810_0;

extern char SpinUp__13CFuncRotating;
extern char SpinDown__13CFuncRotating;
extern char Rotate__13CFuncRotating;
extern float g_vecZero;
extern float g_vecZero+4;
extern float g_vecZero+8;
extern st_492810_0 *gpGlobals;

int RotatingUse__13CFuncRotatingP11CBaseEntityT18USE_TYPEf(float idx)
{
    st_492810_1 *v5;  // edx
    unsigned int v6;  // edi
    st_492810_1 *v15;  // edx
    unsigned int v16;  // 128
    st_492810_2 *v17;  // eax
    float v7;  // 128
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    unsigned int *v11;  // ecx
    unsigned int v12;  // edi
    st_492810_1 *v14;  // eax
    unsigned int *v0;  // [bp-0x38]
    float v1;  // [bp-0x34]
    float v2;  // [bp-0x30]
    float v3;  // [bp-0x2c]

    v5 = *(int *)idx;
    if (v5->padding_68[312] & 16)
    {
        v0 = &v5->field_5c;
        v6 = 0;
        if (g_vecZero == *(float *)&v5->field_5c && g_vecZero+4 == *(float *)&v0[1])
        {
            v7 = *(float *)&v0[2];
            v8 = _INSERT(v0, 1, (isunordered(g_vecZero+8, v7) ? 69 : g_vecZero+8 == v7 ? 64 : g_vecZero+8 < v7));
            v9 = _INSERT(v8, 0, g_vecZero+8 == v7);
            v6 = g_vecZero+8 == v7;
        }
        if (!v6)
            goto LABEL_492937;
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v9, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &SpinUp__13CFuncRotating;
        EMIT_SOUND_DYN(*(int *)(*(int *)idx + 520), 6, *(int *)(*(int *)idx + 500) + gpGlobals->field_98, 0.009999999776482582f, *(float *)(*(unsigned int *)&idx + 104), 0, 30);
    }
    else
    {
        v11 = *(int *)idx + 92;
        v12 = 0;
        if (g_vecZero == *(float *)(*(int *)idx + 92) && g_vecZero+4 == *(float *)&v11[1])
            v12 = g_vecZero+8 == *(float *)&v11[2];
        if (v12)
        {
            EMIT_SOUND_DYN(*(int *)(*(int *)idx + 520), 6, *(int *)(*(int *)idx + 500) + gpGlobals->field_98, *(float *)(*(unsigned int *)&idx + 108), *(float *)(*(unsigned int *)&idx + 104), 0, 100);
            v15 = *(int *)idx;
            v16 = *&v15->field_1f8;
            v17 = &v15->field_44;
            v1 = __int_as_float(v16) * *(float *)&v15->field_44;
            v2 = __int_as_float(v16) * *(float *)&v17->padding_0[4];
            v3 = __int_as_float(v16) * *(float *)&v17->padding_0[8];
            *(float *)&v15->field_5c = v1;
            *(float *)&v15->field_60 = v2;
            *(float *)&v15->field_64 = v3;
            *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v3, 0, 0) | 0xffff0000;
            *(char **)(*(unsigned int *)&idx + 16) = &Rotate__13CFuncRotating;
            return CFuncRotating::Rotate(idx);
        }
LABEL_492937:
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v9, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &SpinDown__13CFuncRotating;
    }
    v14 = *(int *)idx;
    *(float *)&v14->padding_68[156] = (float)(0.1 + *(float *)&v14->padding_68[152]);
    return v14;
}

