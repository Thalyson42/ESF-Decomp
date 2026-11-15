// SpawnBodySlices__10CBodySliceP9entvars_sb @0xa3aa0 size=762
typedef struct st_4a3aa0_5 {
    char padding_0[124];
    struct st_4a3aa0_4 *field_7c;
} st_4a3aa0_5;

typedef struct st_4a3aa0_0 {
    char padding_0[64];
    struct st_4a3aa0_1 *field_40;
    char padding_44[92];
    struct st_4a3aa0_1 *field_a0;
} st_4a3aa0_0;

typedef struct st_4a3aa0_4 {
    unsigned int field_0;
    char padding_4[92];
    struct st_4a3aa0_0 *field_60;
    char padding_64[1792];
    struct st_4a3aa0_3 *field_764;
} st_4a3aa0_4;

typedef struct st_4a3aa0_7 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[168];
    float field_104;
    char padding_108[12];
    int field_114;
    char padding_118[16];
    unsigned int field_128;
    unsigned int field_12c;
    unsigned int field_130;
    char padding_134[100];
    struct st_4a3aa0_5 *field_198;
} st_4a3aa0_7;

typedef struct st_4a3aa0_1 {
    unsigned int field_0;
} st_4a3aa0_1;

typedef struct st_4a3aa0_10 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[60];
    unsigned int field_48;
    unsigned int field_4c;
    unsigned int field_50;
    char padding_54[280];
    unsigned int field_16c;
    unsigned int field_170;
    unsigned int field_174;
    char padding_178[136];
    struct st_4a3aa0_5 *field_200;
} st_4a3aa0_10;

typedef struct st_4a3aa0_6 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[60];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[280];
    float field_174;
    float field_178;
    float field_17c;
    char padding_180[136];
    struct st_4a3aa0_5 *field_208;
} st_4a3aa0_6;

typedef struct st_4a3aa0_8 {
    struct st_4a3aa0_7 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[660];
    unsigned int field_2a8;
    char padding_2ac[12];
    unsigned int field_2b8;
    unsigned int field_2bc;
    unsigned int field_2c0;
    unsigned int field_2c4;
    unsigned int field_2c8;
    unsigned int field_2cc;
    unsigned int field_2d0;
    unsigned int field_2d4;
    unsigned int field_2d8;
} st_4a3aa0_8;

typedef struct st_4a3aa0_2 {
    char padding_0[60];
    struct st_4a3aa0_1 *field_3c;
    char padding_40[8];
    struct st_4a3aa0_1 *field_48;
} st_4a3aa0_2;

typedef struct st_4a3aa0_3 {
    char padding_0[4];
    struct st_4a3aa0_2 *field_4;
} st_4a3aa0_3;

typedef struct st_4a3aa0_9 {
    float field_0;
    char padding_4[36];
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    unsigned int field_3c;
    float field_40;
    float field_44;
    float field_48;
} st_4a3aa0_9;

extern char FlyOffThink__10CBodySlice;
extern st_4a3aa0_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4a3aa0_9 *gpGlobals;

int SpawnBodySlices__10CBodySliceP9entvars_sb(st_4a3aa0_6 *a0, char a1)
{
    st_4a3aa0_5 *v5;  // eax
    st_4a3aa0_4 *v6;  // esi
    unsigned int v15;  // eax
    st_4a3aa0_7 *v17;  // edx
    unsigned int v18;  // edx
    st_4a3aa0_5 *v19;  // eax
    st_4a3aa0_4 *v20;  // edx
    int v7;  // eax
    int v8;  // eax
    st_4a3aa0_8 *v9;  // esi
    st_4a3aa0_10 *v11;  // eax
    float v12;  // eax
    unsigned int *v13;  // edx
    st_4a3aa0_7 *v14;  // edx
    int v0;  // [bp-0x2c]
    st_4a3aa0_4 *v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24], Other Possible Types: float
    unsigned int v3;  // [bp-0x20], Other Possible Types: float
    unsigned int v4;  // [bp-0x1c], Other Possible Types: float

    v5 = a0->field_208;
    if (a0->field_208 || (v5 = g_engfuncs.pfnPEntityOfEntOffset(0), v5))
        v6 = v5->field_7c;
    else
        v6 = NULL;
    v7 = v6->field_60->field_a0(v6);
    if (!v7)
        return v7;
    v1 = v6;
    v0 = 0;
    while (1)
    {
        v8 = v1->field_764->field_4->field_48(v1->field_764);
        if (v0 >= v8)
            break;
        v9 = GetClassPtr__H1Z10CBodySlice_PX01_PX01(0);
        CGib::Spawn(v9, UTIL_VarArgs("models/bodyparts/%s/slice.mdl", v1->field_764->field_4->field_3c(v1->field_764)));
        v9->field_0->field_114 = v0;
        v11 = &a0->field_8;
        v2 = a0->field_8 + a0->field_174;
        v3 = *(float *)&v11->field_4 + a0->field_178;
        v4 = *(float *)&v11->field_8 + a0->field_17c;
        UTIL_SetOrigin(v9->field_0, &v2);
        UTIL_MakeVectors(v1->field_0 + 116);
        if ((char)v0 & 1)
        {
            *(float *)&v9->field_2c4 = gpGlobals->field_40;
            *(float *)&v9->field_2c8 = gpGlobals->field_44;
            v12 = gpGlobals->field_48;
        }
        else
        {
            v13 = &gpGlobals->field_40;
            v2 = -gpGlobals->field_40;
            v3 = -*(float *)&v13[1];
            v4 = -*(float *)&v13[2];
            *(float *)&v9->field_2c4 = v2;
            *(float *)&v9->field_2c8 = v3;
            v12 = v4;
        }
        *(float *)&v9->field_2cc = v12;
        v9->field_2b8 = gpGlobals->field_28;
        v9->field_2bc = gpGlobals->field_2c;
        v9->field_2c0 = gpGlobals->field_30;
        v9->field_2d0 = gpGlobals->field_34;
        v9->field_2d4 = gpGlobals->field_38;
        v9->field_2d8 = gpGlobals->field_3c;
        v9->field_0->field_198 = a0->field_208;
        v14 = v9->field_0;
        v14->field_50 = a0->field_50;
        v14->field_54 = a0->field_54;
        v15 = a0->field_58;
        v14->field_58 = v15;
        if (a1)
        {
            v9->field_c = _INSERT(v15, 0, 0) | 0xffff0000;
            v9->field_10 = &FlyOffThink__10CBodySlice;
            v9->field_0->field_104 = (float)(gpGlobals->field_0 + 3.0);
            v17 = v9->field_0;
            v2 = 0;
            v3 = 0;
            v4 = 0;
            v17->field_20 = v2;
            v17->field_24 = v3;
            v17->field_28 = v4;
            *(float *)&v9->field_0->padding_118[4] = 9.999999974752427e-07f;
            v18 = CBaseAnimating::LookupSequence(v9, "shake");
            if (v18 == 0xffffffff)
                goto LABEL_4a3d29;
            v9->field_0->field_12c = 0;
            v9->field_0->field_128 = v18;
            v9->field_0->field_130 = 0;
            CBaseAnimating::ResetSequenceInfo(v9);
        }
        else
        {
            CBodySlice::FlyOffThink(v9);
        }
LABEL_4a3d29:
        v19 = a0->field_208;
        if (a0->field_208 || (v19 = g_engfuncs.pfnPEntityOfEntOffset(0), v19))
            v20 = v19->field_7c;
        else
            v20 = NULL;
        v9->field_2a8 = v20->field_60->field_40(v20);
        v0 += 1;
    }
    return v8;
}

