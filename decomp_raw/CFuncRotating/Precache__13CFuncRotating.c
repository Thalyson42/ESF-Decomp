// Precache__13CFuncRotating @0x91e70 size=513
typedef struct st_491e70_0 {
    char padding_0[92];
    float field_5c;
    float field_60;
    float field_64;
    char padding_68[152];
    unsigned int field_100;
    float field_104;
    char padding_108[204];
    unsigned int field_1d4;
    char padding_1d8[28];
    unsigned int field_1f4;
} st_491e70_0;

typedef struct st_491e70_1 {
    struct st_491e70_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[96];
    unsigned int field_74;
} st_491e70_1;

typedef struct st_491e70_2 {
    char padding_0[152];
    unsigned int field_98;
} st_491e70_2;

typedef struct st_491e70_3 {
    unsigned int field_0;
} st_491e70_3;

extern char SpinUp__13CFuncRotating;
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;
extern st_491e70_3 *g_6167c4;
extern st_491e70_3 *g_6168cc;
extern st_491e70_2 *gpGlobals;

unsigned int * Precache__13CFuncRotating(st_491e70_1 *a0)
{
    char *v3;  // edx
    unsigned int v4;  // ecx
    unsigned int *v13;  // ecx
    unsigned int v14;  // esi
    unsigned int v15;  // eax
    unsigned int v16;  // eax
    float v17;  // 128
    unsigned int v18;  // eax
    unsigned int v19;  // eax
    unsigned int v20;  // eax
    st_491e70_0 *v21;  // eax
    char *v5;  // edi
    char *v6;  // edi
    unsigned int *v7;  // eax
    unsigned int v8;  // ecx
    char *v9;  // edi
    char *v10;  // edi
    unsigned int v11;  // eax
    st_491e70_0 *v12;  // eax
    char *v0;  // [bp-0x4c]
    unsigned int v1;  // [bp-0x3c]
    char *v2;  // [bp-0x18]

    v3 = gpGlobals->field_98 + a0->field_0->field_1d4;
    v2 = v3;
    if (a0->field_0->field_1d4)
    {
        v4 = 0xffffffff;
        v5 = v3;
        do
        {
            v6 = v5;
        } while (v4 && (v4 -= 1, v5 = v6 + 1, *v6));
        if (v4 == 0xfffffffe)
            goto LABEL_491ee0;
        g_6167c4(v3);
        v0 = v2;
        v7 = g_6168cc;
    }
    else
    {
LABEL_491ee0:
        if (a0->field_74 <= 5)
        {
            goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_74] - 1579996)]));
        }
        else if (a0->field_0->field_1d4)
        {
            v8 = 0xffffffff;
            v9 = v2;
            do
            {
                v10 = v9;
            } while (v8 && (v8 -= 1, v9 = v10 + 1, *v10));
            if (v8 == 0xfffffffe)
                goto LABEL_491fc5;
            g_6167c4(v2);
            v0 = v2;
            v7 = g_6168cc;
        }
        else
        {
LABEL_491fc5:
            v1 = "common/null.wav";
            v7 = g_6168cc;
        }
    }
    v11 = v7(v2);
    a0->field_0->field_1f4 = v11;
    v12 = a0->field_0;
    v13 = &v12->field_5c;
    v14 = 0;
    v15 = _INSERT(v12, 0, 0);
    if (*(float *)&g_vecZero == v12->field_5c)
    {
        v16 = _INSERT(v15, 0, 0);
        if (*(float *)&g_616790 == *(float *)&v13[1])
        {
            v17 = *(float *)&v13[2];
            v18 = _INSERT(v16, 1, (isunordered(*(float *)&g_616794, v17) ? 69 : *(float *)&g_616794 == v17 ? 64 : *(float *)&g_616794 < v17));
            v19 = _INSERT(v18, 0, *(float *)&g_616794 == v17);
            v14 = *(float *)&g_616794 == v17;
        }
    }
    if (!v14)
    {
        v20 = _INSERT(v19, 0, 0);
        a0->field_c = v20 | 0xffff0000;
        a0->field_10 = &SpinUp__13CFuncRotating;
        v21 = a0->field_0;
        v21->field_104 = (float)(1.5 + *(float *)&v21->field_100);
    }
    return v21;
}

