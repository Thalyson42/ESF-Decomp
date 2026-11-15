// CreateBlob__5CBlobP11CBasePlayerG6Vector @0xcb660 size=268
typedef struct st_4cb660_3 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[216];
    unsigned int field_104;
    char padding_108[144];
    unsigned int field_198;
} st_4cb660_3;

typedef struct st_4cb660_1 {
    unsigned int field_0;
} st_4cb660_1;

typedef struct st_4cb660_5 {
    char padding_0[520];
    unsigned int field_208;
} st_4cb660_5;

typedef struct st_4cb660_2 {
    struct st_4cb660_3 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_4cb660_0 *field_60;
    unsigned int field_64;
    unsigned int field_68;
} st_4cb660_2;

typedef struct st_4cb660_0 {
    char padding_0[8];
    struct st_4cb660_1 *field_8;
} st_4cb660_0;

typedef struct st_4cb660_4 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4cb660_4;

extern char BlobThink__5CBlob;
extern char BlobTouch__5CBlobP11CBaseEntity;
extern st_4cb660_4 *gpGlobals;

st_4cb660_2 * CreateBlob__5CBlobP11CBasePlayerG6Vector(st_4cb660_5 **a0, unsigned int *a1)
{
    st_4cb660_2 *v3;  // edi
    unsigned int *v4;  // edx
    unsigned int *v5;  // edx
    unsigned int *v6;  // eax
    unsigned int v8;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    v3 = GetClassPtr__H1Z5CBlob_PX01_PX01(0);
    v3->field_60->field_8(v3);
    v4 = &v3->field_0->field_0;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v4[8] = v0;
    v4[9] = v1;
    v4[10] = v2;
    v5 = &v3->field_0->field_0;
    v5[2] = *a1;
    v5[3] = a1[1];
    v5[4] = a1[2];
    v3->field_0->field_0 = -1 * gpGlobals->field_98 + 5902388;
    v3->field_64 = 50;
    *(float *)&v3->field_0[1].padding_2c[24] = 2.0f;
    v6 = &v3->field_0->field_0;
    v6[0x66] = *a0->field_208;
    v8 = _INSERT(v6, 0, 0) | 0xffff0000;
    v3->field_c = v8;
    v3->field_10 = &BlobThink__5CBlob;
    v3->field_14 = _INSERT(v8, 0, 0) | 0xffff0000;
    v3->field_18 = &BlobTouch__5CBlobP11CBaseEntity;
    *(float *)&v3->field_0->field_104 = gpGlobals->field_0;
    *(float *)&v3->field_68 = gpGlobals->field_0;
    UTIL_SetOrigin(v3->field_0, &v3->field_0->field_8);
    CBlob::CreateExplosion(v3);
    return v3;
}

