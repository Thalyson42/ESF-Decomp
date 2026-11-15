// GetNearestDBSpotIndex__11CBotManagerP11CBasePlayerf @0x16bf60 size=783
typedef struct st_56bf60_4 {
    char padding_0[124];
    struct st_56bf60_3 *field_7c;
} st_56bf60_4;

typedef struct st_56bf60_5 {
    char padding_0[12];
    struct st_56bf60_4 *field_c;
} st_56bf60_5;

typedef struct st_56bf60_2 {
    char padding_0[228];
    struct st_56bf60_0 *field_e4;
} st_56bf60_2;

typedef struct st_56bf60_0 {
    unsigned int field_0;
} st_56bf60_0;

typedef struct st_56bf60_6 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[408];
    unsigned short field_1a4;
} st_56bf60_6;

typedef struct st_56bf60_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[408];
    unsigned short field_1ac;
} st_56bf60_1;

typedef struct st_56bf60_3 {
    struct st_56bf60_1 *field_0;
    char padding_4[92];
    struct st_56bf60_2 *field_60;
} st_56bf60_3;

extern st_56bf60_0 *g_6168d4;
extern st_56bf60_0 *g_61698c;
extern unsigned int GatherSpotsForTeamGood[4];
extern char g_625c4c[4];
extern unsigned int GatherSpotsForTeamEvil[4];

unsigned int GetNearestDBSpotIndex__11CBotManagerP11CBasePlayerf(st_56bf60_5 *a0, unsigned int a1, float a2)
{
    st_56bf60_4 *v28;  // eax
    st_56bf60_3 *v29;  // eax
    float v38;  // 112
    double v39;  // mm7
    double v40;  // mm6
    unsigned int v41;  // esi
    unsigned int v42;  // eax
    unsigned int index;  // eax
    float v44;  // 112
    float v45;  // 112
    float v46;  // 112
    double v47;  // mm7
    st_56bf60_3 *v30;  // edi
    double v48;  // mm6
    st_56bf60_1 *v31;  // eax
    st_56bf60_6 *v32;  // edx
    unsigned int v33;  // esi
    unsigned int v34;  // eax
    unsigned int idx;  // eax
    float v36;  // 112
    float v37;  // 112
    int v0;  // [bp-0xd8]
    int v1;  // [bp-0xd4]
    unsigned int v2;  // [bp-0xcc]
    unsigned int v3;  // [bp-0xc8]
    unsigned int v4;  // [bp-0xc4]
    short v5;  // [bp-0xae]
    float v6;  // [bp-0xac]
    float v7;  // [bp-0xa8]
    float v8;  // [bp-0xa4]
    float v9;  // [bp-0xa0]
    float v10;  // [bp-0x9c]
    float v11;  // [bp-0x98]
    float v12;  // [bp-0x94]
    float v13;  // [bp-0x90]
    float v14;  // [bp-0x84]
    float v15;  // [bp-0x80]
    float v16;  // [bp-0x7c]
    float v17;  // [bp-0x6c]
    float v18;  // [bp-0x68]
    float v19;  // [bp-0x64]
    float v20;  // [bp-0x60]
    float v21;  // [bp-0x5c]
    float v22;  // [bp-0x44]
    float v23;  // [bp-0x40]
    float v24;  // [bp-0x3c]
    float v25;  // [bp-0x24]
    float v26;  // [bp-0x20]
    float v27;  // [bp-0x1c]

    if (!g_61698c(v2, v3, v4) && !(v28 = a0->field_c, !a0->field_c && !(v28 = g_6168d4(0), v28)))
        v29 = v28->field_7c;
    else
        v29 = NULL;
    v30 = v29;
    *(unsigned short *)&v1 = 0;
    *(unsigned short *)&v0 = 0;
    if (!(char)sub_489a70(v30, v0, v1))
        return 0xffffffff;
    v31 = v30->field_0;
    v32 = &v31->field_8;
    v25 = v31->field_8;
    v26 = *(float *)&v32->field_4;
    v27 = *(float *)&v32->field_8;
    v7 = 9999.900390625f;
    v5 = -0x1;
    if (!v31->field_1ac)
    {
        v33 = 0;
        do
        {
            v34 = (short)v33 * 16;
            if (!g_625c4c[v34])
            {
                v22 = v25;
                v23 = v26;
                v24 = v27;
                idx = v34 + (char *)&GatherSpotsForTeamGood[0];
                v19 = *(float *)idx;
                v20 = *(float *)(idx + 4);
                v21 = *(float *)(idx + 8);
                v36 = v19 - v22;
                v14 = v36;
                v37 = v20 - v23;
                v15 = v37;
                v38 = v21 - v24;
                v16 = v38;
                v39 = v36 * v36 + v37 * v37 + v38 * v38;
                v40 = sqrt(v39);
                if (isnan(v40))
                    sub_487dc0(*(unsigned int *)&v39);
                else
                    v39 = v40;
                v6 = (float)v39;
                if (v6 < v7 && v6 <= a2 && v30->field_60->field_e4(v30, &GatherSpotsForTeamGood[4 * (unsigned short)v33]))
                {
                    v7 = v6;
                    v5 = v33;
                }
            }
        } while ((*(unsigned short *)&v33 = (unsigned short)v33 + 1, (short)v33 <= 9));
    }
    else
    {
        v41 = 0;
        do
        {
            v42 = (short)v41 * 16;
            if (!g_625c4c[v42])
            {
                v8 = v25;
                v9 = v26;
                v10 = v27;
                index = v42 + (char *)&GatherSpotsForTeamEvil[0];
                v11 = *(float *)index;
                v12 = *(float *)(index + 4);
                v13 = *(float *)(index + 8);
                v44 = v11 - v8;
                v17 = v44;
                v45 = v12 - v9;
                v18 = v45;
                v46 = v13 - v10;
                v19 = v46;
                v47 = v44 * v44 + v45 * v45 + v46 * v46;
                v48 = sqrt(v47);
                if (isnan(v48))
                    sub_487dc0(*(unsigned int *)&v47);
                else
                    v47 = v48;
                v6 = (float)v47;
                if (v6 < v7 && v6 <= a2 && v30->field_60->field_e4(v30, &GatherSpotsForTeamEvil[4 * (unsigned short)v41]))
                {
                    v7 = v6;
                    v5 = v41;
                }
            }
        } while ((*(unsigned short *)&v41 = (unsigned short)v41 + 1, (short)v41 <= 9));
    }
    return v5;
}

