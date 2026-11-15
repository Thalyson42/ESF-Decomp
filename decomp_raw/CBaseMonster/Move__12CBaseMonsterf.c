// Move__12CBaseMonsterf @0xd6dc0 size=1682
typedef struct st_4d6dc0_7 {
    char padding_0[124];
    struct st_4d6dc0_6 *field_7c;
} st_4d6dc0_7;

typedef struct st_4d6dc0_5 {
    char padding_0[108];
    struct st_4d6dc0_2 *field_6c;
    char padding_70[48];
    struct st_4d6dc0_2 *field_a0;
} st_4d6dc0_5;

typedef struct st_4d6dc0_1 {
    char padding_0[248];
    struct st_4d6dc0_2 *field_f8;
    char padding_fc[36];
    struct st_4d6dc0_2 *field_120;
    char padding_124[4];
    struct st_4d6dc0_2 *field_128;
    struct st_4d6dc0_2 *field_12c;
    char padding_130[4];
    struct st_4d6dc0_2 *field_134;
    char padding_138[76];
    struct st_4d6dc0_2 *field_184;
} st_4d6dc0_1;

typedef struct st_4d6dc0_2 {
    unsigned int field_0;
} st_4d6dc0_2;

typedef struct st_4d6dc0_4 {
    char padding_0[520];
    unsigned int field_208;
} st_4d6dc0_4;

typedef struct st_4d6dc0_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[156];
    unsigned int field_b0;
    char padding_b4[340];
    int field_208;
} st_4d6dc0_0;

typedef struct st_4d6dc0_3 {
    struct st_4d6dc0_0 *field_0;
    char padding_4[92];
    struct st_4d6dc0_1 *field_60;
    char padding_64[12];
    float field_70;
    char padding_74[148];
    char field_108;
    char padding_109[7];
    char field_110;
    char padding_111[95];
    float field_170;
    char padding_174[160];
    unsigned int field_214;
    unsigned int field_218;
    unsigned int field_21c;
    char padding_220[40];
    char field_248;
} st_4d6dc0_3;

typedef struct st_4d6dc0_9 {
    char padding_0[96];
    unsigned int field_60;
} st_4d6dc0_9;

typedef struct st_4d6dc0_6 {
    struct st_4d6dc0_4 *field_0;
    char padding_4[92];
    struct st_4d6dc0_5 *field_60;
} st_4d6dc0_6;

typedef struct st_4d6dc0_8 {
    unsigned int field_0;
    char padding_4[112];
    struct st_4d6dc0_7 *field_74;
    char padding_78[32];
    unsigned int field_98;
} st_4d6dc0_8;

extern st_4d6dc0_2 *g_engfuncs.pfnAlertMessage;
extern st_4d6dc0_2 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4d6dc0_8 *gpGlobals;

double Move__12CBaseMonsterf(st_4d6dc0_3 *a0, float a1)
{
    unsigned int *v29;  // eax
    unsigned int *v30;  // ecx
    float v39;  // 112
    float v40;  // 112
    double v41;  // mm7
    double v42;  // mm6
    unsigned int *v43;  // eax
    st_4d6dc0_9 *v44;  // eax
    unsigned int *v45;  // edx
    st_4d6dc0_7 *v46;  // eax
    st_4d6dc0_6 *v47;  // esi
    double v48;  // 128
    float v31;  // 112
    double v50;  // mm7
    double v51;  // mm7
    float v32;  // 112
    float v33;  // 112
    double v34;  // mm7
    double v35;  // mm6
    double v36;  // mm7
    unsigned int *v37;  // eax
    unsigned int *v38;  // ecx
    int v0;  // [bp-0xcc]
    float v1;  // [bp-0xc8]
    float v2;  // [bp-0xc4]
    float v3;  // [bp-0xc0]
    int v4;  // [bp-0xac]
    unsigned short v5;  // [bp-0xa8]
    unsigned short v6;  // [bp-0xa6]
    float v7;  // [bp-0xa4]
    float v8;  // [bp-0xa0]
    unsigned int v9;  // [bp-0xa0]
    float v10;  // [bp-0x9c]
    unsigned int v11;  // [bp-0x9c]
    float v12;  // [bp-0x98]
    float v13;  // [bp-0x94]
    float v14;  // [bp-0x90]
    unsigned int v15;  // [bp-0x8c]
    unsigned int v16;  // [bp-0x88]
    float v17;  // [bp-0x84], Other Possible Types: unsigned int
    float v18;  // [bp-0x80]
    float v19;  // [bp-0x7c]
    float v20;  // [bp-0x64]
    float v21;  // [bp-0x60]
    float v22;  // [bp-0x5c]
    char v23;  // [bp-0x44], Other Possible Types: unsigned int
    unsigned int v24;  // [bp-0x40]
    unsigned int v25;  // [bp-0x3c]
    float v26;  // [bp-0x24]
    float v27;  // [bp-0x20]
    float v28;  // [bp-0x1c]

    if (CBaseMonster::FRouteClear(a0) && (!a0->field_214 || !CBaseMonster::FRefreshRoute(a0)))
    {
        g_engfuncs.pfnAlertMessage(2, "Tried to move with no route!\n");
        CBaseMonster::SetConditions(a0, 0x40000000);
        return 0.0;
    }
    if (a0->field_170 > *(float *)&gpGlobals->field_0)
        return a0->field_170;
    v0 = 0;
    v29 = &(&a0->field_0)[4 * a0->field_218 + 101];
    v30 = &a0->field_0->field_8;
    v31 = *(float *)v29 - *(float *)&a0->field_0->field_8;
    v17 = v31;
    v32 = *(float *)&v29[1] - *(float *)&v30[1];
    v18 = v32;
    v33 = *(float *)&v29[2] - *(float *)&v30[2];
    v19 = v33;
    v34 = v31 * v31 + v32 * v32 + v33 * v33;
    v35 = sqrt(v34);
    if (isnan(v35))
        sqrt(*(unsigned int *)&v34);
    else
        v34 = v35;
    v12 = (float)v34;
    if (v12 == 0.0f)
    {
        v20 = 0.0f;
        v21 = 0.0f;
        v22 = 1.0;
    }
    else
    {
        v36 = 1.0 / v12;
        v20 = (float)(v36 * v17);
        v21 = (float)(v36 * v18);
        v22 = (float)(v36 * v19);
    }
    v26 = v20;
    v27 = v21;
    v28 = v22;
    v37 = &(&a0->field_0)[4 * a0->field_218 + 101];
    v38 = &a0->field_0->field_8;
    v39 = *(float *)v37 - *(float *)&a0->field_0->field_8;
    v7 = v39;
    v40 = *(float *)&v37[1] - *(float *)&v38[1];
    v8 = v40;
    v10 = *(float *)&v37[2] - *(float *)&v38[2];
    v41 = v39 * v39 + v40 * v40;
    v42 = sqrt(v41);
    if (isnan(v42))
        sqrt(*(unsigned int *)&v41);
    else
        v41 = v42;
    v2 = (float)v41;
    v43 = &(&a0->field_0)[4 * a0->field_218 + 101];
    v7 = *(float *)v43;
    *(float *)&v9 = *(float *)&v43[1];
    *(float *)&v11 = *(float *)&v43[2];
    CBaseMonster::MakeIdealYaw(a0, &v7);
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v4 = (int)*(float *)&a0->field_0->field_b0;
    a0->field_60->field_f8(a0, v4);
    v1 = v2;
    if (v2 >= 200.0f)
        v1 = 200.0f;
    if ((*(int *)&a0->padding_174[44 + 16 * a0->field_218] & 0xfffffe7f) == 2)
    {
        v44 = &a0->field_108;
    }
    else
    {
        if ((*(int *)&a0->padding_174[44 + 16 * a0->field_218] & 0xfffffe7f) != 1)
            goto LABEL_4d7092;
        v44 = &a0->field_110;
    }
    v0 = EHANDLE::__opP11CBaseEntity(v44);
LABEL_4d7092:
    v3 = 0;
    v12 = v1 * v26;
    v13 = v1 * v27;
    v14 = v1 * v28;
    v45 = &a0->field_0->field_8;
    v7 = *(float *)&a0->field_0->field_8 + v12;
    v8 = *(float *)&v45[1] + v13;
    v10 = *(float *)&v45[2] + v14;
    if (a0->field_60->field_120(a0, v45, &v7, v0, &v3) != 2)
    {
        a0->field_60->field_134(a0);
        v46 = gpGlobals->field_74;
        if (gpGlobals->field_74 || (v46 = g_engfuncs.pfnPEntityOfEntOffset(0), v46))
            v47 = v46->field_7c;
        else
            v47 = NULL;
        if (v47 && !(DispatchBlocked(a0->field_0->field_208, v47->field_0->field_208), 0.0 >= *(float *)&a0->field_21c || !v47->field_60->field_6c(v47) || v47->field_60->field_a0(v47) || *(float *)&gpGlobals->field_0 - a0->field_170 <= 3.0f))
        {
            if (v3 < a0->field_70)
            {
                v48 = *(float *)&gpGlobals->field_0 + *(float *)&a0->field_21c;
                *(double *)&a0->field_170 = v48;
                return v48;
            }
        }
        else
        {
            if (a0->field_60->field_184(a0, &a0->field_0->field_8, &(&a0->field_0)[4 * a0->field_218 + 101], v3, v0, &v23))
            {
                v15 = v23;
                v16 = v24;
                v17 = v25;
                CBaseMonster::InsertWaypoint(a0, &v15, 8);
                CBaseMonster::RouteSimplify(a0, v0);
            }
            else
            {
                a0->field_60->field_134(a0);
                if (0.0 < *(float *)&a0->field_21c && !(a0->field_248 & 32))
                {
                    CBaseMonster::FRefreshRoute(a0);
                    if (CBaseMonster::FRouteClear(a0))
                    {
                        CBaseMonster::SetConditions(a0, 0x40000000);
                        return 0.0;
                    }
                    if (*(float *)&gpGlobals->field_0 - a0->field_170 < 0.2)
                        a0->field_248 = a0->field_248 | 32;
                    v50 = 0.1 + *(float *)&gpGlobals->field_0;
                    a0->field_170 = (float)v50;
                    return v50;
                }
                CBaseMonster::SetConditions(a0, 0x40000000);
                g_engfuncs.pfnAlertMessage(2, "%s Failed to move (%d)!\n", a0->field_0->field_0 + gpGlobals->field_98, (a0->field_248 & 32) != 0);
                return 0.0;
            }
        }
    }
    if (a0->field_60->field_12c(a0, v2))
        CBaseMonster::AdvanceRoute(a0, v2);
    if (a0->field_170 > *(float *)&gpGlobals->field_0)
    {
        a0->field_60->field_134(a0);
        return a0->field_170;
    }
    v51 = a1 * a0->field_70;
    if (v51 > v1)
    {
        v51 = v1 / a0->field_70;
        a1 = (float)v51;
    }
    a0->field_60->field_128(a0, v0, &v26, a1);
    if (a0->field_214)
        return v51;
    a0->field_60->field_134(a0);
    CBaseMonster::RouteClear(a0);
    return v51;
}

