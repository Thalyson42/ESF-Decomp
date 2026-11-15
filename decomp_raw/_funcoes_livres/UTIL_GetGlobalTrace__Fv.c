// UTIL_GetGlobalTrace__Fv @0x132f00 size=339
typedef struct st_532f00_0 {
    char padding_0[76];
    float field_4c;
    float field_50;
    float field_54;
    unsigned int field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    unsigned int field_68;
    unsigned int field_6c;
    float field_70;
    unsigned int field_74;
    float field_78;
    float field_7c;
    unsigned int field_80;
} st_532f00_0;

extern st_532f00_0 *gpGlobals;

unsigned int * UTIL_GetGlobalTrace__Fv(void)
{
    unsigned int *v21;  // edi
    unsigned int *v22;  // eax
    unsigned int *v23;  // eax
    int v0;  // [bp-0x58]
    int v1;  // [bp-0x54]
    int v2;  // [bp-0x50]
    int v3;  // [bp-0x4c]
    unsigned short v4;  // [bp-0x48]
    unsigned short v5;  // [bp-0x46]
    int v6;  // [bp-0x44]
    int v7;  // [bp-0x40]
    int v8;  // [bp-0x3c]
    int v9;  // [bp-0x38]
    float v10;  // [bp-0x34]
    unsigned int v11;  // [bp-0x30]
    unsigned int v12;  // [bp-0x2c]
    unsigned int v13;  // [bp-0x28]
    float v14;  // [bp-0x24]
    unsigned int v15;  // [bp-0x20]
    unsigned int v16;  // [bp-0x1c]
    unsigned int v17;  // [bp-0x18]
    unsigned int v18;  // [bp-0x14]
    unsigned int v19;  // [bp-0x10]
    unsigned int *v20;  // [bp+0x4]

    v21 = v20;
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v2 = (int)gpGlobals->field_4c;
    v6 = v2;
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v1 = (int)gpGlobals->field_50;
    v7 = v1;
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v0 = (int)gpGlobals->field_78;
    v8 = v0;
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)gpGlobals->field_7c;
    v9 = v3;
    v10 = gpGlobals->field_54;
    v14 = gpGlobals->field_70;
    v18 = gpGlobals->field_74;
    v11 = gpGlobals->field_58;
    v12 = gpGlobals->field_5c;
    v13 = gpGlobals->field_60;
    v15 = gpGlobals->field_64;
    v16 = gpGlobals->field_68;
    v17 = gpGlobals->field_6c;
    v19 = gpGlobals->field_80;
    *v21 = v2;
    v21[1] = v1;
    v21[2] = v0;
    v21[3] = v3;
    *(float *)&v21[4] = v10;
    v22 = v21 + 5;
    v21[5] = v11;
    v22[1] = v12;
    v22[2] = v13;
    *(float *)&v21[8] = v14;
    v23 = v21 + 9;
    v21[9] = v15;
    v23[1] = v16;
    v23[2] = v17;
    v21[12] = v18;
    v21[13] = v19;
    return v21;
}

