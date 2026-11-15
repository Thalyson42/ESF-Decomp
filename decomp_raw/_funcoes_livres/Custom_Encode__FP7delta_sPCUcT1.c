// Custom_Encode__FP7delta_sPCUcT1 @0xa2c80 size=430
typedef struct st_4a2c80_2 {
    char padding_0[92];
    float field_5c;
} st_4a2c80_2;

typedef struct st_4a2c80_0 {
    char padding_0[72];
    unsigned int field_48;
    char padding_4c[16];
    float field_5c;
} st_4a2c80_0;

typedef struct st_4a2c80_1 {
    unsigned int field_0;
} st_4a2c80_1;

extern unsigned int custom_entity_field_alias+32;
extern unsigned int custom_entity_field_alias+68;
extern unsigned int custom_entity_field_alias+104;
extern unsigned int custom_entity_field_alias+140;
extern unsigned int custom_entity_field_alias+176;
extern unsigned int custom_entity_field_alias+212;
extern unsigned int custom_entity_field_alias+248;
extern unsigned int custom_entity_field_alias+284;
extern unsigned int custom_entity_field_alias+320;
extern unsigned int initialized.1850;
extern st_4a2c80_1 *g_engfuncs.pfnSetGroupMask;

int Custom_Encode__FP7delta_sPCUcT1(int a0, st_4a2c80_2 *a1, st_4a2c80_0 *a2)
{
    int v5;  // eax
    unsigned int v0;  // [bp-0x18]
    int v1;  // [bp-0xc]
    int v2;  // [bp-0xc]
    unsigned short v3;  // [bp-0x8]
    unsigned short v4;  // [bp-0x6]

    if (!initialized.1850)
    {
        Custom_Entity_FieldInit(a0);
        initialized.1850 = 1;
    }
    v0 = a2->field_48 & 15;
    if (v0 > 1)
    {
        g_engfuncs.pfnSetGroupMask(a0, custom_entity_field_alias+32);
        g_engfuncs.pfnSetGroupMask(a0, custom_entity_field_alias+68);
        g_engfuncs.pfnSetGroupMask(a0, custom_entity_field_alias+104);
    }
    if (v0)
    {
        g_engfuncs.pfnSetGroupMask(a0, custom_entity_field_alias+140);
        g_engfuncs.pfnSetGroupMask(a0, custom_entity_field_alias+176);
        g_engfuncs.pfnSetGroupMask(a0, custom_entity_field_alias+212);
    }
    if (v0 - 1 > 1)
    {
        g_engfuncs.pfnSetGroupMask(a0, custom_entity_field_alias+248);
        g_engfuncs.pfnSetGroupMask(a0, custom_entity_field_alias+284);
    }
    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v1 = (int)a1->field_5c;
    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v2 = (int)a2->field_5c;
    v5 = v2;
    if (v1 == v5)
        v5 = g_engfuncs.pfnSetGroupMask(a0, custom_entity_field_alias+320);
    return v5;
}

