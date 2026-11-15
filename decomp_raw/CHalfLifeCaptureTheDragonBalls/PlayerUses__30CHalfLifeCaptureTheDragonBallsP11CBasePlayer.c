// PlayerUses__30CHalfLifeCaptureTheDragonBallsP11CBasePlayer @0x9b180 size=505
typedef struct st_49b180_4 {
    char padding_0[140];
    struct st_49b180_5 *field_8c;
} st_49b180_4;

typedef struct st_49b180_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_49b180_0;

typedef struct st_49b180_2 {
    struct st_49b180_0 *field_0;
} st_49b180_2;

typedef struct st_49b180_5 {
    unsigned int field_0;
} st_49b180_5;

typedef struct st_49b180_3 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    unsigned int field_208;
} st_49b180_3;

typedef struct st_49b180_1 {
    char padding_0[620];
    unsigned int field_26c;
    char padding_270[4];
    unsigned int field_274;
    struct st_49b180_2 *field_278;
    char padding_27c[24];
    unsigned int field_294;
} st_49b180_1;

typedef struct st_49b180_6 {
    struct st_49b180_3 *field_0;
    char padding_4[92];
    struct st_49b180_4 *field_60;
    char padding_64[740];
    unsigned int field_348;
} st_49b180_6;

extern unsigned int gmsgVGUIMenu;
extern st_49b180_5 *g_engfuncs.pfnMessageBegin;
extern st_49b180_5 *g_engfuncs.pfnMessageEnd;
extern st_49b180_5 *g_engfuncs.pfnWriteByte;

unsigned int PlayerUses__30CHalfLifeCaptureTheDragonBallsP11CBasePlayer(st_49b180_1 *a0, st_49b180_6 *a1)
{
    int idx;  // edi
    unsigned int *v17;  // esi
    unsigned int index;  // edx
    float v19;  // 112
    float v20;  // 112
    float v21;  // 112
    double v22;  // mm7
    double v23;  // mm6
    st_49b180_0 **v24;  // ecx
    unsigned int *v25;  // edx
    unsigned int v0;  // [bp-0xac]
    float v1;  // [bp-0x84]
    float v2;  // [bp-0x80]
    unsigned int v3;  // [bp-0x7c]
    float v4;  // [bp-0x64]
    float v5;  // [bp-0x60]
    float v6;  // [bp-0x5c]
    float v7;  // [bp-0x44]
    float v8;  // [bp-0x40]
    unsigned int v9;  // [bp-0x3c]
    float v10;  // [bp-0x38]
    float v11;  // [bp-0x34]
    float v12;  // [bp-0x30]
    float v13;  // [bp-0x24]
    float v14;  // [bp-0x20]
    float v15;  // [bp-0x1c]

    if (!a0->field_274 || !a1->field_60->field_8c(a1) || !a0->field_26c)
        return 0;
    idx = 0;
    do
    {
        v17 = &a1->field_0->field_8;
        index = *(int *)(&a0->field_278)[idx] + 8;
        v19 = a1->field_0->field_8 - *(float *)(*(int *)(&a0->field_278)[idx] + 8);
        v13 = v19;
        v20 = *(float *)&v17[1] - *(float *)(index + 4);
        v14 = v20;
        v21 = *(float *)&v17[2] - *(float *)(index + 8);
        v15 = v21;
        v22 = v19 * v19 + v20 * v20 + v21 * v21;
        v23 = sqrt(v22);
        if (isnan(v23))
            sqrt(*(unsigned int *)&v22);
        else
            v22 = v23;
        v10 = (float)v22;
        if (v10 < 100.0f)
        {
            a1->field_348 = 1;
            g_engfuncs.pfnMessageBegin(1, gmsgVGUIMenu, 0, a1->field_0->field_208);
            v0 = 31;
            g_engfuncs.pfnWriteByte(v0);
            g_engfuncs.pfnMessageEnd(v0);
            if (a0->field_294)
                return 1;
            v24 = a0->field_278;
            v7 = a1->field_0->field_8 - *v24->field_8;
            v8 = a1->field_0->field_c - *v24->field_c;
            v9 = 0;
            v4 = 0;
            v5 = 0;
            v6 = 50.0f;
            v25 = &*v24->field_8;
            v10 = *v24->field_8 + v4;
            v11 = *(float *)&v25[1] + v5;
            v12 = *(float *)&v25[2] + v6;
            v1 = v7;
            v2 = v8;
            v3 = v9;
            a0->field_294 = CShenlong::CreateShenlong(&v10, &v1, &a0->field_278);
            return 1;
        }
        idx += 1;
    } while (idx <= 6);
    return 0;
}

