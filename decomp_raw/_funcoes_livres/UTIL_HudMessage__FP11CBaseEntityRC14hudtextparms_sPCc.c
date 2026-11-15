// UTIL_HudMessage__FP11CBaseEntityRC14hudtextparms_sPCc @0x132590 size=700
typedef struct st_532590_1 {
    char padding_0[164];
    struct st_532590_2 *field_a4;
} st_532590_1;

typedef struct st_532590_4 {
    float field_0;
    float field_4;
    unsigned int field_8;
    char field_c;
    char field_d;
    char field_e;
    char field_f;
    char field_10;
    char field_11;
    char field_12;
    char field_13;
    float field_14;
    float field_18;
    float field_1c;
    float field_20;
    unsigned int field_24;
} st_532590_4;

typedef struct st_532590_2 {
    unsigned int field_0;
} st_532590_2;

typedef struct st_532590_0 {
    char padding_0[520];
    unsigned int field_208;
} st_532590_0;

typedef struct st_532590_3 {
    struct st_532590_0 *field_0;
    char padding_4[92];
    struct st_532590_1 *field_60;
} st_532590_3;

extern st_532590_2 *g_engfuncs.pfnMessageBegin;
extern st_532590_2 *g_engfuncs.pfnMessageEnd;
extern st_532590_2 *g_engfuncs.pfnWriteByte;
extern st_532590_2 *g_engfuncs.pfnWriteShort;
extern st_532590_2 *g_engfuncs.pfnWriteString;

unsigned int UTIL_HudMessage__FP11CBaseEntityRC14hudtextparms_sPCc(st_532590_3 *a0, st_532590_4 *a1, char *a2)
{
    unsigned int v3;  // eax
    unsigned short v4;  // ax
    unsigned int v13;  // eax
    unsigned short v5;  // ax
    unsigned short v6;  // ax
    unsigned short v7;  // ax
    unsigned short v8;  // ax
    unsigned short v9;  // ax
    unsigned int v10;  // ecx
    char *v11;  // edi
    char *v12;  // edi
    float v0;  // [bp-0x208]
    char v1;  // [bp-0x204]
    char v2;  // [bp-0x5]

    if (!a0)
        return v13;
    v3 = a0->field_60->field_a4(a0);
    if (!v3)
        return v3;
    g_engfuncs.pfnMessageBegin(1, 23, 0, a0->field_0->field_208);
    g_engfuncs.pfnWriteByte(29);
    g_engfuncs.pfnWriteByte(a1->field_24 & 0xff);
    v4 = FixedSigned16__Fff(a1->field_0, 0x46000000);
    g_engfuncs.pfnWriteShort(v4);
    v5 = FixedSigned16__Fff(a1->field_4, 0x46000000);
    g_engfuncs.pfnWriteShort(v5);
    g_engfuncs.pfnWriteByte(a1->field_8);
    g_engfuncs.pfnWriteByte(a1->field_c);
    g_engfuncs.pfnWriteByte(a1->field_d);
    g_engfuncs.pfnWriteByte(a1->field_e);
    g_engfuncs.pfnWriteByte(a1->field_f);
    g_engfuncs.pfnWriteByte(a1->field_10);
    g_engfuncs.pfnWriteByte(a1->field_11);
    g_engfuncs.pfnWriteByte(a1->field_12);
    g_engfuncs.pfnWriteByte(a1->field_13);
    v0 = 256.0f;
    v6 = FixedUnsigned16__Fff(a1->field_14, 256.0f);
    g_engfuncs.pfnWriteShort(v6);
    v7 = FixedUnsigned16__Fff(a1->field_18, v0);
    g_engfuncs.pfnWriteShort(v7);
    v8 = FixedUnsigned16__Fff(a1->field_1c, v0);
    g_engfuncs.pfnWriteShort(v8);
    if (a1->field_8 == 2)
    {
        v9 = FixedUnsigned16__Fff(a1->field_20, v0);
        g_engfuncs.pfnWriteShort(v9);
    }
    v10 = 0xffffffff;
    v11 = a2;
    do
    {
        v12 = v11;
    } while (v10 && (v10 -= 1, v11 = v12 + 1, *v12));
    if (~v10 - 1 <= 0x1ff)
    {
        g_engfuncs.pfnWriteString(a2);
    }
    else
    {
        strncpy@GLIBC_2.0(&v1, a2, 0x1ff);
        v2 = 0;
        g_engfuncs.pfnWriteString(&v1);
    }
    return g_engfuncs.pfnMessageEnd();
}

