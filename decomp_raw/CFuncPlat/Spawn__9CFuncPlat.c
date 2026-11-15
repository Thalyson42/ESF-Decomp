// Spawn__9CFuncPlat @0xe8d60 size=149
typedef struct st_4e8d60_3 {
    struct st_4e8d60_0 *field_0;
    char padding_4[24];
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[60];
    struct st_4e8d60_1 *field_60;
    char padding_64[28];
    unsigned int field_80;
} st_4e8d60_3;

typedef struct st_4e8d60_1 {
    char padding_0[12];
    struct st_4e8d60_2 *field_c;
} st_4e8d60_1;

typedef struct st_4e8d60_2 {
    unsigned int field_0;
} st_4e8d60_2;

typedef struct st_4e8d60_0 {
    char padding_0[460];
    unsigned int field_1cc;
} st_4e8d60_0;

extern char PlatUse__9CFuncPlatP11CBaseEntityT18USE_TYPEf;

unsigned int Spawn__9CFuncPlat(st_4e8d60_3 *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    CFuncPlat::Setup(a0);
    a0->field_60->field_c(a0);
    if (!a0->field_0->field_1cc)
    {
        v2 = UTIL_SetOrigin(a0->field_0, a0[1].padding_24);
        a0->field_80 = 1;
        return v2;
    }
    v0 = UTIL_SetOrigin(a0->field_0, &a0[1].padding_4[20]);
    a0->field_80 = 0;
    v1 = _INSERT(v0, 0, 0);
    a0->field_1c = v1 | 0xffff0000;
    a0->field_20 = &PlatUse__9CFuncPlatP11CBaseEntityT18USE_TYPEf;
    return v1 | 0xffff0000;
}

