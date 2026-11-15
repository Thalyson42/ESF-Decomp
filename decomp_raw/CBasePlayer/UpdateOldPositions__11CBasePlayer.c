// UpdateOldPositions__11CBasePlayer @0xf7800 size=329
typedef struct st_4f7800_1 {
    struct st_4f7800_2 *field_0;
    char padding_4[1728];
    unsigned int field_6c4;
    unsigned int field_6c8;
    unsigned int field_6cc;
    unsigned int field_6d0;
    unsigned int field_6d4;
    unsigned int field_6d8;
    unsigned int field_6dc;
    unsigned int field_6e0;
    char padding_6e4[64];
    float field_724;
} st_4f7800_1;

typedef struct st_4f7800_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_4f7800_2;

typedef struct st_4f7800_0 {
    float field_0;
} st_4f7800_0;

extern st_4f7800_0 *gpGlobals;

float UpdateOldPositions__11CBasePlayer(st_4f7800_1 *a0)
{
    unsigned int *v10;  // edx
    float v11;  // 112
    float v12;  // 112
    float v13;  // 112
    double v14;  // mm7
    double v15;  // mm6
    unsigned int v16;  // ecx
    st_4f7800_1 *v17;  // eax
    unsigned int v18;  // 4169
    float v19;  // 128
    float v0;  // [bp-0x88]
    float v1;  // [bp-0x74]
    float v2;  // [bp-0x70]
    float v3;  // [bp-0x6c]
    unsigned int v4;  // [bp-0x54]
    unsigned int v5;  // [bp-0x50]
    unsigned int v6;  // [bp-0x4c]
    unsigned int v7;  // [bp-0x34]
    unsigned int v8;  // [bp-0x30]
    unsigned int v9;  // [bp-0x2c]

    a0->field_724 = (float)(0.2 + *(float *)gpGlobals);
    v10 = &a0->field_0->field_8;
    *(float *)&v7 = *(float *)&a0->field_0->field_8;
    *(float *)&v8 = *(float *)&v10[1];
    *(float *)&v9 = *(float *)&v10[2];
    *(float *)&v4 = *(float *)&a0->field_6d4;
    *(float *)&v5 = *(float *)&a0->field_6d8;
    *(float *)&v6 = *(float *)&a0->field_6dc;
    v11 = *(float *)&v7 - *(float *)&v4;
    v1 = v11;
    v12 = *(float *)&v8 - *(float *)&v5;
    v2 = v12;
    v13 = *(float *)&v9 - *(float *)&v6;
    v3 = v13;
    v14 = v11 * v11 + v12 * v12 + v13 * v13;
    v15 = sqrt(v14);
    if (isnan(v15))
        sqrt(*(unsigned int *)&v14);
    else
        v14 = v15;
    v0 = (float)v14;
    if (v0 <= 200.0f)
        return v0;
    v16 = 4;
    do
    {
        v17 = &(&a0->field_0)[4 * (unsigned short)v16];
        v17->field_6d4 = v17->field_6c4;
        v17->field_6d8 = v17->field_6c8;
        v17->field_6dc = v17->field_6cc;
        v17->field_6e0 = v17->field_6d0;
        *(unsigned short *)&v16 = (unsigned short)v16 - 1;
        v18 = _ccall(14, 14, (unsigned short)v16, 0, 0);
    } while (!(v18 & 1));
    a0->field_6d4 = v7;
    a0->field_6d8 = v8;
    a0->field_6dc = v9;
    v19 = *(float *)gpGlobals;
    *(float *)&a0->field_6e0 = v19;
    return v19;
}

