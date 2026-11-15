// BuildRoute__12CBaseMonsterRC6VectoriP11CBaseEntity @0xd6150 size=374
typedef struct st_4d6150_0 {
    char padding_0[288];
    struct st_4d6150_1 *field_120;
    char padding_124[96];
    struct st_4d6150_1 *field_184;
} st_4d6150_0;

typedef struct st_4d6150_1 {
    unsigned int field_0;
} st_4d6150_1;

typedef struct st_4d6150_2 {
    unsigned int field_0;
    char padding_4[92];
    struct st_4d6150_0 *field_60;
    char padding_64[304];
    unsigned int field_194;
    unsigned int field_198;
    unsigned int field_19c;
    unsigned int field_1a0;
    unsigned int field_1a4;
    unsigned int field_1a8;
    unsigned int field_1ac;
    unsigned int field_1b0;
    char padding_1b4[96];
    unsigned int field_214;
    char padding_218[8];
    unsigned int field_220;
    unsigned int field_224;
    unsigned int field_228;
} st_4d6150_2;

unsigned int BuildRoute__12CBaseMonsterRC6VectoriP11CBaseEntity(st_4d6150_2 *a0, float *a1, int a2, int a3)
{
    unsigned int v7;  // eax
    char v0;  // [bp-0x48], Other Possible Types: unsigned int
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]
    char v4;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]

    CBaseMonster::RouteNew(a0);
    a0->field_214 = CBaseMonster::RouteClassify(a0, a2);
    *(float *)&a0->field_194 = *a1;
    *(float *)&a0->field_198 = a1[1];
    *(float *)&a0->field_19c = a1[2];
    a0->field_1a0 = a2 | 128;
    v7 = a0->field_60->field_120(a0, a0->field_0 + 8, a1, a3, &v0);
    if (v7 == 2)
        return 1;
    if (v7 != 1 && a0->field_60->field_184(a0, a0->field_0 + 8, a1, v0, a3, &v4))
    {
        a0->field_194 = v4;
        a0->field_198 = v5;
        a0->field_19c = v6;
        a0->field_1a0 = a2 | 8;
        *(float *)&a0->field_1a4 = *a1;
        *(float *)&a0->field_1a8 = a1[1];
        *(float *)&a0->field_1ac = a1[2];
        a0->field_1b0 = a2 | 128;
    }
    else
    {
        v1 = *a1;
        v2 = a1[1];
        v3 = a1[2];
        if (!CBaseMonster::FGetNodeRoute(a0, &v1))
            return 0;
        *(float *)&a0->field_220 = *a1;
        *(float *)&a0->field_224 = a1[1];
        *(float *)&a0->field_228 = a1[2];
    }
    CBaseMonster::RouteSimplify(a0, a3);
    return 1;
}

