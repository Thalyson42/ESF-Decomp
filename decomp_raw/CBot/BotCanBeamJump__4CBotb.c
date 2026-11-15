// BotCanBeamJump__4CBotb @0x174ce0 size=348
typedef struct st_574ce0_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_574ce0_1;

typedef struct st_574ce0_0 {
    struct st_574ce0_1 *field_0;
    char padding_4[824];
    unsigned int field_33c;
    char padding_340[2020];
    unsigned int field_b24;
    unsigned int field_b28;
    unsigned int field_b2c;
    char padding_b30[224];
    unsigned int field_c10;
    unsigned int field_c14;
    unsigned int field_c18;
} st_574ce0_0;

extern float g_vecZero;
extern float g_616790;
extern unsigned int g_616794;

int BotCanBeamJump__4CBotb(st_574ce0_0 *a0, char a1)
{
    st_574ce0_0 *v17;  // esi
    st_574ce0_0 *v18;  // ecx
    unsigned int *v19;  // edx
    st_574ce0_0 *v20;  // eax
    unsigned int v21;  // ecx
    char v22;  // al
    float v23;  // 128
    unsigned int v24;  // eax
    float v0;  // [bp-0xe4]
    float v1;  // [bp-0xc4]
    float v2;  // [bp-0xc0]
    float v3;  // [bp-0xbc]
    char v4;  // [bp-0xa4], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0xa0]
    unsigned int v6;  // [bp-0x9c]
    float v7;  // [bp-0x84]
    float v8;  // [bp-0x80]
    float v9;  // [bp-0x7c]
    char v10;  // [bp-0x64]
    float v11;  // [bp-0x64]
    float v12;  // [bp-0x60]
    float v13;  // [bp-0x5c]
    unsigned int v14;  // [bp-0x24]
    unsigned int v15;  // [bp-0x20]
    unsigned int v16;  // [bp-0x1c]

    v17 = a0;
    v18 = NULL;
    if (!a1)
    {
        v19 = v17->field_0;
    }
    else if (v17->field_33c)
    {
        v18 = sub_489660(v17);
        if (!v18)
            return _INSERT(CONCAT(v22, 0), 0, 0);
        v19 = v18->field_0;
    }
    else
    {
        return _INSERT(CONCAT(v22, 0), 0, 0);
    }
    v14 = v19[2];
    v15 = v19[3];
    v16 = v19[4];
    v0 = 200.0f;
    v20 = v18;
    if (!v20)
        v20 = v17;
    sub_489d70(&v10, v20);
    v21 = 0;
    v22 = 0;
    if (g_vecZero == v11)
    {
        v22 = 0;
        if (g_616790 == v12)
        {
            v23 = v13;
            v22 = *(float *)&g_616794 == v23;
            v21 = *(float *)&g_616794 == v23;
        }
    }
    if (!v21)
    {
        *(float *)&v17->field_b24 = v11;
        *(float *)&v17->field_b28 = v12;
        *(float *)&v17->field_b2c = v13;
        v7 = v11;
        v8 = v12;
        v9 = v13;
        v1 = v7;
        v2 = v8;
        v3 = v9;
        sub_48a170(&v4, v17, &v1);
        v17->field_c10 = v4;
        v17->field_c14 = v5;
        v17->field_c18 = v6;
        return v24;
    }
    return _INSERT(CONCAT(v22, 0), 0, 0);
}

