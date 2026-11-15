// SpinUp__13CFuncRotating @0x92390 size=604
typedef struct st_492390_2 {
    char padding_0[24];
    unsigned int field_18;
} st_492390_2;

typedef struct st_492390_1 {
    char padding_0[68];
    char field_44;
    char padding_45[23];
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[400];
    unsigned int field_1f8;
} st_492390_1;

typedef struct st_492390_0 {
    char padding_0[152];
    unsigned int field_98;
} st_492390_0;

extern char Rotate__13CFuncRotating;
extern st_492390_0 *gpGlobals;

int SpinUp__13CFuncRotating(float idx)
{
    st_492390_1 *v13;  // edx
    float v14;  // 128
    int v23;  // eax
    st_492390_1 *v24;  // edx
    unsigned int v25;  // 128
    st_492390_2 *v26;  // eax
    st_492390_2 *v15;  // eax
    unsigned int *v16;  // eax
    st_492390_1 *v17;  // edx
    int v18;  // edx
    int v19;  // eax
    int v20;  // edx
    int v21;  // eax
    int v22;  // edx
    int v0;  // [bp-0x7c]
    unsigned short v1;  // [bp-0x78]
    unsigned short v2;  // [bp-0x76]
    float v3;  // [bp-0x74]
    float v4;  // [bp-0x70]
    float v5;  // [bp-0x6c]
    float v6;  // [bp-0x54]
    float v7;  // [bp-0x50]
    float v8;  // [bp-0x4c]
    unsigned int v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x20]
    unsigned int v11;  // [bp-0x1c]

    *(float *)(*(int *)idx + 260) = (float)(0.1 + *(float *)(*(int *)idx + 0x100));
    v13 = *(int *)idx;
    v14 = *(float *)&v13->field_1f8 * *(float *)(*(unsigned int *)&idx + 100);
    v15 = &v13->field_44;
    v3 = v14 * *(float *)&v13->field_44;
    v4 = v14 * *(float *)&v15->padding_0[4];
    v5 = v14 * *(float *)&v15->padding_0[8];
    v16 = &v13->field_5c;
    v6 = v3 + *(float *)&v13->field_5c;
    v7 = v4 + *(float *)&v16[1];
    v8 = *(float *)&v16[2] + v5;
    *(float *)&v13->field_5c = v6;
    *(float *)&v13->field_60 = v7;
    *(float *)&v13->field_64 = v8;
    v17 = *(int *)idx;
    v9 = v17->field_5c;
    v10 = v17->field_60;
    v11 = v17->field_64;
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)*(float *)&v9;
    v18 = v0;
    if (v18 < 0)
        v18 = -v18;
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)(*(float *)(*(int *)idx + 0x44) * *(float *)(*(int *)idx + 504));
    v19 = v0;
    if (v19 < 0)
        v19 = -v19;
    if (v18 < v19)
        return sub_48c6a0(idx, 1);
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)*(float *)&v10;
    v20 = v0;
    if (v20 < 0)
        v20 = -v20;
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)(*(float *)(*(int *)idx + 72) * *(float *)(*(int *)idx + 504));
    v21 = v0;
    if (v21 < 0)
        v21 = -v21;
    if (v20 >= v21)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)*(float *)&v11;
        v22 = v0;
        if (v22 < 0)
            v22 = -v22;
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(*(float *)(*(int *)idx + 76) * *(float *)(*(int *)idx + 504));
        v23 = v0;
        if (v23 < 0)
            v23 = -v23;
        if (v22 >= v23)
        {
            v24 = *(int *)idx;
            v25 = *&v24->field_1f8;
            v26 = &v24->field_44;
            v3 = __int_as_float(v25) * *(float *)&v24->field_44;
            v4 = __int_as_float(v25) * *(float *)&v26->padding_0[4];
            v5 = __int_as_float(v25) * *(float *)&v26->padding_0[8];
            *(float *)&v24->field_5c = v3;
            *(float *)&v24->field_60 = v4;
            *(float *)&v24->field_64 = v5;
            *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(sub_489390(*(int *)(*(int *)idx + 520), 6, *(int *)(*(int *)idx + 500) + gpGlobals->field_98, *(float *)(*(unsigned int *)&idx + 108), *(float *)(*(unsigned int *)&idx + 104), 192, 100), 0, 0) | 0xffff0000;
            *(char **)(*(unsigned int *)&idx + 16) = &Rotate__13CFuncRotating;
            return sub_488570(idx);
        }
    }
    return sub_48c6a0(idx, 1);
}

