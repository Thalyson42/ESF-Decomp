// TriggerDecal__6CDecalP11CBaseEntityT18USE_TYPEf @0x139640 size=481
typedef struct st_539640_2 {
    struct st_539640_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_539640_2;

typedef struct st_539640_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[240];
    float field_104;
    char padding_108[8];
    unsigned int field_110;
    char padding_114[244];
    int field_208;
} st_539640_1;

typedef struct st_539640_0 {
    float field_0;
} st_539640_0;

typedef struct st_539640_3 {
    unsigned int field_0;
} st_539640_3;

extern char SUB_Remove__11CBaseEntity;
extern st_539640_3 *g_616878;
extern st_539640_3 *g_61687c;
extern st_539640_3 *g_616880;
extern st_539640_3 *g_616888;
extern st_539640_3 *g_616894;
extern st_539640_3 *g_6168dc;
extern st_539640_0 *gpGlobals;

short TriggerDecal__6CDecalP11CBaseEntityT18USE_TYPEf(st_539640_2 *a0)
{
    st_539640_1 *v14;  // ecx
    unsigned int *v15;  // edx
    unsigned int v16;  // esi
    float v0;  // [bp-0xc4]
    float v1;  // [bp-0xc0]
    float v2;  // [bp-0xbc]
    float v3;  // [bp-0xa4]
    float v4;  // [bp-0xa0]
    float v5;  // [bp-0x9c]
    float v6;  // [bp-0x84]
    float v7;  // [bp-0x80]
    float v8;  // [bp-0x7c]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    char v12;  // [bp-0x44]
    unsigned int v13;  // [bp-0x14]

    v6 = 5.0f;
    v7 = 5.0f;
    v8 = 5.0f;
    v14 = a0->field_0;
    v15 = &v14->field_8;
    v9 = *(float *)&v14->field_8 + v6;
    v10 = *(float *)&v15[1] + v7;
    v11 = *(float *)&v15[2] + v8;
    v0 = 5.0f;
    v1 = 5.0f;
    v2 = 5.0f;
    v3 = *(float *)&v14->field_8 - v0;
    v4 = *(float *)&v15[1] - v1;
    v5 = *(float *)&v15[2] - v2;
    sub_487b80(&v3, &v9, 1, v14->field_208, &v12);
    g_616878(0, 23, 0, 0);
    g_616880(13);
    g_616894(*(float *)&a0->field_0->field_8);
    g_616894(*(float *)&a0->field_0->field_c);
    g_616894(*(float *)&a0->field_0->field_10);
    g_616888(a0->field_0->field_110);
    v16 = (short)g_6168dc(v13);
    g_616888(v16);
    if (v16)
        g_616888(*(int *)((!v13 ? 0 : v13 + 128) + 180));
    a0->field_c = _INSERT(g_61687c(), 0, 0) | 0xffff0000;
    a0->field_10 = &SUB_Remove__11CBaseEntity;
    a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    return (unsigned short)gpGlobals;
}

