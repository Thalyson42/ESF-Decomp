// PM_CatagorizePosition @0x1913f0 size=314
typedef struct st_5913f0_2 {
    char padding_0[112];
    unsigned int field_70;
    char padding_74[16];
    unsigned int field_84;
    unsigned int field_88;
    char padding_8c[324760];
    struct st_5913f0_1 *field_4f524;
} st_5913f0_2;

typedef struct st_5913f0_1 {
    unsigned int field_0;
} st_5913f0_1;

typedef struct st_5913f0_0 {
    char padding_0[56];
    float field_38;
    float field_3c;
    float field_40;
    char padding_44[24];
    char field_5c;
    char padding_5d[111];
    unsigned int field_cc;
    char padding_d0[16];
    int field_e0;
    int field_e4;
    char padding_e8[324760];
    struct st_5913f0_1 *field_4f580;
} st_5913f0_0;

extern st_5913f0_0 *pmove;

int PM_CatagorizePosition(void)
{
    unsigned int v15;  // eax
    unsigned int *iter;  // edi
    unsigned int *i;  // esi
    unsigned int v18;  // ecx
    char v0;  // [bp-0x100]
    st_5913f0_2 *v1;  // [bp-0xbc]
    int v2;  // [bp-0xac]
    int v3;  // [bp-0xa8]
    int v4;  // [bp-0xa4]
    char v5;  // [bp-0x84]
    float v6;  // [bp-0x70]
    float v7;  // [bp-0x6c]
    float v8;  // [bp-0x68]
    float v9;  // [bp-0x5c]
    int v10;  // [bp-0x54]
    float v11;  // [bp-0x24]
    float v12;  // [bp-0x20]
    float v13;  // [bp-0x1c]

    sub_488fe0(v2, v3, v4);
    v11 = pmove->field_38;
    v12 = pmove->field_3c;
    v13 = (float)(pmove->field_40 - 2.0);
    v15 = _INSERT(pmove, 0, 0);
    if (180.0f < *(float *)&pmove->padding_5d[7])
    {
        pmove->field_e0 = -0x1;
        return v15;
    }
    pmove->field_4f580(&v5, &pmove->field_38, &v11, 0, 0xffffffff);
    if (0.7 > v9)
        pmove->field_e0 = -0x1;
    else
        pmove->field_e0 = v10;
    if (pmove->field_e0 != -0x1)
    {
        pmove->field_cc = 0;
        if (pmove->field_e4 <= 1 && !(unsigned int)(v5 >> 32) && !(unsigned int)v5)
        {
            pmove->field_38 = v6;
            pmove->field_3c = v7;
            pmove->field_40 = v8;
        }
    }
    if (v10 <= 0)
        return v15;
    v1 = &pmove->field_5c;
    iter = &v0;
    i = &v5;
    for (v18 = 0x11; v18; i += 1)
    {
        v18 -= 1;
        *iter = *i;
        iter += 1;
    }
    sub_48caf0();
    return v15;
}

