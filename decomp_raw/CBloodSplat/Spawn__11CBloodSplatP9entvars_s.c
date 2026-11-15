// Spawn__11CBloodSplatP9entvars_s @0xfc000 size=185
typedef struct st_4fc000_2 {
    struct st_4fc000_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4fc000_2;

typedef struct st_4fc000_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[60];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[168];
    float field_104;
    char padding_108[144];
    unsigned int field_198;
} st_4fc000_1;

typedef struct st_4fc000_3 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[96];
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[392];
    unsigned int field_208;
} st_4fc000_3;

typedef struct st_4fc000_0 {
    float field_0;
} st_4fc000_0;

extern char Spray__11CBloodSplat;
extern st_4fc000_0 *gpGlobals;

unsigned int * Spawn__11CBloodSplatP9entvars_s(st_4fc000_2 *a0, st_4fc000_3 *a1)
{
    st_4fc000_1 *v6;  // edx
    unsigned int *v7;  // eax
    st_4fc000_1 *v8;  // edx
    st_4fc000_1 *v9;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v6 = a0->field_0;
    v0 = 0;
    v1 = 0;
    v2 = 32.0f;
    v7 = &a1->field_8;
    v3 = a1->field_8 + v0;
    v4 = *(float *)&v7[1] + v1;
    v5 = *(float *)&v7[2] + v2;
    *(float *)&v6->field_8 = v3;
    *(float *)&v6->field_c = v4;
    *(float *)&v6->field_10 = v5;
    v8 = a0->field_0;
    v8->field_50 = a1->field_74;
    v8->field_54 = a1->field_78;
    v8->field_58 = a1->field_7c;
    v9 = a0->field_0;
    v9->field_198 = a1->field_208;
    a0->field_c = _INSERT(v9, 0, 0) | 0xffff0000;
    a0->field_10 = &Spray__11CBloodSplat;
    a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    return gpGlobals;
}

