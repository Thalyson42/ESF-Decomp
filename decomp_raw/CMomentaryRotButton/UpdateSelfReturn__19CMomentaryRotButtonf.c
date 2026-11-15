// UpdateSelfReturn__19CMomentaryRotButtonf @0x986d0 size=204
typedef struct st_4986d0_0 {
    char padding_0[68];
    float field_44;
    float field_48;
    float field_4c;
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[152];
    float field_100;
} st_4986d0_0;

typedef struct st_4986d0_1 {
    struct st_4986d0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[248];
    float field_10c;
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
} st_4986d0_1;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;

unsigned int * UpdateSelfReturn__19CMomentaryRotButtonf(st_4986d0_1 *a0, float a1)
{
    st_4986d0_0 *v3;  // ecx
    st_4986d0_0 *v4;  // edx
    st_4986d0_0 *v5;  // eax
    st_4986d0_0 *v6;  // edx
    double v7;  // mm7
    unsigned int *v8;  // eax
    st_4986d0_0 *v9;  // eax
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    if (0.0 < a1)
    {
        v6 = a0->field_0;
        v7 = -a0->field_10c;
        v8 = &v6->field_44;
        v0 = (float)(v7 * v6->field_44);
        v1 = (float)(v7 * *(float *)&v8[1]);
        v2 = (float)(v7 * *(float *)&v8[2]);
        *(float *)&v6->field_5c = v0;
        *(float *)&v6->field_60 = v1;
        *(float *)&v6->field_64 = v2;
        v9 = a0->field_0;
        *(float *)&v9[1].padding_0[0] = (float)(0.1 + v9->field_100);
        return v9;
    }
    v3 = a0->field_0;
    v3->field_5c = g_vecZero;
    v3->field_60 = g_616790;
    v3->field_64 = g_616794;
    v4 = a0->field_0;
    v4->field_50 = a0->field_110;
    v4->field_54 = a0->field_114;
    v4->field_58 = a0->field_118;
    v5 = a0->field_0;
    *(float *)&v5[1].padding_0[0] = -1.0f;
    a0->field_c = 0;
    a0->field_10 = 0;
    return v5;
}

