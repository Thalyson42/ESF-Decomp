// TakeDamage__12CBaseMonsterP9entvars_sT1fi @0xa5810 size=1685
typedef struct st_4a5810_3 {
    char padding_0[124];
    struct st_4a5810_2 *field_7c;
} st_4a5810_3;

typedef struct st_4a5810_0 {
    char padding_0[204];
    struct st_4a5810_1 *field_cc;
} st_4a5810_0;

typedef struct st_4a5810_1 {
    unsigned int field_0;
} st_4a5810_1;

typedef struct st_4a5810_9 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[220];
    unsigned int field_e8;
    char padding_ec[84];
    unsigned int field_140;
    char padding_144[8];
    unsigned int field_14c;
    unsigned int field_150;
    char padding_154[24];
    struct st_4a5810_3 *field_16c;
    char padding_170[20];
    char field_184;
    char padding_185[51];
    unsigned int field_1b8;
} st_4a5810_9;

typedef struct st_4a5810_4 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[220];
    unsigned int field_108;
    char padding_10c[84];
    unsigned int field_160;
    char padding_164[8];
    unsigned int field_16c;
    unsigned int field_170;
    char padding_174[24];
    struct st_4a5810_3 *field_18c;
    char padding_190[20];
    char field_1a4;
    char padding_1a5[51];
    float field_1d8;
} st_4a5810_4;

typedef struct st_4a5810_5 {
    char padding_0[60];
    struct st_4a5810_1 *field_3c;
    char padding_40[76];
    struct st_4a5810_1 *field_8c;
    char padding_90[16];
    struct st_4a5810_1 *field_a0;
    char padding_a4[40];
    struct st_4a5810_1 *field_cc;
    char padding_d0[288];
    struct st_4a5810_1 *field_1f0;
} st_4a5810_5;

typedef struct st_4a5810_8 {
    char padding_0[268];
    unsigned int field_10c;
    char padding_110[148];
    char field_1a4;
    char padding_1a5[99];
    unsigned int field_208;
} st_4a5810_8;

typedef struct st_4a5810_7 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[500];
    struct st_4a5810_3 *field_208;
} st_4a5810_7;

typedef struct st_4a5810_6 {
    struct st_4a5810_4 *field_0;
    char padding_4[92];
    struct st_4a5810_5 *field_60;
    char padding_64[160];
    char field_104;
    char field_105;
    char padding_106[2];
    char field_108;
    char padding_109[119];
    unsigned int field_180;
    char padding_184[204];
    unsigned int field_250;
    unsigned int field_254;
    unsigned int field_258;
    char padding_25c[12];
    unsigned int field_268;
} st_4a5810_6;

typedef struct st_4a5810_2 {
    char padding_0[96];
    struct st_4a5810_0 *field_60;
} st_4a5810_2;

extern unsigned int g_vecAttackDir;
extern unsigned int g_vecAttackDir+4;
extern unsigned int g_vecAttackDir+8;
extern st_4a5810_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4a5810_1 *g_engfuncs.pfnEntOffsetOfPEntity;
extern unsigned int g_pevLastInflictor;

unsigned int TakeDamage__12CBaseMonsterP9entvars_sT1fi(st_4a5810_6 *a0, st_4a5810_7 *a1, st_4a5810_8 *a2, float a3, int a4)
{
    double v31;  // mm7
    unsigned int v32;  // esi
    double v41;  // mm7
    double v42;  // mm6
    double v43;  // mm7
    unsigned int v44;  // esi
    st_4a5810_4 *v45;  // esi
    double v46;  // mm7
    double v47;  // mm5
    double v48;  // mm5
    st_4a5810_9 *v49;  // edx
    st_4a5810_5 *v50;  // eax
    st_4a5810_3 *v33;  // eax
    unsigned int v51;  // esi
    unsigned int *v52;  // esi
    unsigned int v53;  // eax
    double v54;  // mm5
    double v55;  // mm5
    unsigned int *v56;  // edx
    st_4a5810_2 *v34;  // ecx
    float v35;  // 112
    float v36;  // 112
    float v37;  // 112
    double v38;  // mm7
    double v39;  // mm6
    double v40;  // mm7
    unsigned int v0;  // [bp-0x10c]
    float v1;  // [bp-0xe8]
    unsigned int v2;  // [bp-0xe4], Other Possible Types: float
    unsigned int v3;  // [bp-0xe0], Other Possible Types: float
    unsigned int v4;  // [bp-0xdc], Other Possible Types: float
    float v5;  // [bp-0xd8]
    float v6;  // [bp-0xd4]
    float v7;  // [bp-0xd0]
    char v8;  // [bp-0xc4]
    float v9;  // [bp-0xc4]
    float v10;  // [bp-0xc0]
    float v11;  // [bp-0xbc]
    float v12;  // [bp-0xa4]
    float v13;  // [bp-0xa0]
    float v14;  // [bp-0x9c]
    float v15;  // [bp-0x84]
    char v16;  // [bp-0x84]
    float v17;  // [bp-0x80]
    float v18;  // [bp-0x7c]
    float v19;  // [bp-0x64]
    float v20;  // [bp-0x60]
    float v21;  // [bp-0x5c]
    float v22;  // [bp-0x44]
    float v23;  // [bp-0x40]
    float v24;  // [bp-0x3c]
    float v25;  // [bp-0x38]
    float v26;  // [bp-0x34]
    float v27;  // [bp-0x30]
    float v28;  // [bp-0x24]
    float v29;  // [bp-0x20]
    float v30;  // [bp-0x1c]

    if (*(float *)&a0->field_0->field_16c == 0.0f)
        return 0;
    if (!a0->field_60->field_8c(a0))
        return CBaseMonster::DeadTakeDamage(a0, a1, a2, a3, a4);
    if (!a0->field_0->field_170)
        a0->field_60->field_1f0(a0);
    v31 = a3;
    v1 = (float)v31;
    a0->field_268 = a0->field_268 | a4;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v28 = v22;
    v29 = v23;
    v30 = v24;
    v32 = 0;
    if (!a1 || !g_engfuncs.pfnEntOffsetOfPEntity(a1->field_208))
        v32 = 1;
    if (!v32)
    {
        v33 = a1->field_208;
        if (a1->field_208 || (v33 = g_engfuncs.pfnPEntityOfEntOffset(0), v33))
            v34 = v33->field_7c;
        else
            v34 = NULL;
        if (v34)
        {
            v34->field_60->field_cc(&v16, v34);
            v12 = 0;
            v13 = 0;
            v14 = 10.0f;
            v19 = v15 - v12;
            v20 = v17 - v13;
            v21 = v18 - v14;
            a0->field_60->field_cc(&v8, a0);
            v35 = v19 - v9;
            v25 = v35;
            v36 = v20 - v10;
            v26 = v36;
            v37 = v21 - v11;
            v27 = v37;
            v38 = v35 * v35 + v36 * v36 + v37 * v37;
            v39 = sqrt(v38);
            if (isnan(v39))
                sqrt(*(unsigned int *)&v38);
            else
                v38 = v39;
            v5 = (float)v38;
            if (v5 == 0.0f)
            {
                v22 = 0.0f;
                v23 = 0.0f;
                v24 = 1.0;
            }
            else
            {
                v40 = 1.0 / v5;
                v22 = (float)(v40 * v25);
                v23 = (float)(v40 * v26);
                v24 = (float)(v40 * v27);
            }
            v28 = v22;
            v29 = v23;
            v30 = v24;
            v41 = v28 * v28 + v29 * v29 + v30 * v30;
            v42 = sqrt(v41);
            if (isnan(v42))
                sqrt(*(unsigned int *)&v41);
            else
                v41 = v42;
            v5 = (float)v41;
            if (v5 == 0.0f)
            {
                v31 = 0.0;
                v25 = 0.0f;
                v26 = 0.0f;
                v27 = 1.0;
            }
            else
            {
                v43 = 1.0 / v5;
                v25 = (float)(v43 * v28);
                v31 = v43 * v30;
                v26 = (float)(v43 * v29);
                v27 = (float)v31;
            }
            *(float *)&g_vecAttackDir = v25;
            *(float *)&g_vecAttackDir+4 = v26;
            *(float *)&g_vecAttackDir+8 = v27;
            *(unsigned int *)&v28 = g_vecAttackDir;
            *(unsigned int *)&v29 = g_vecAttackDir+4;
            *(unsigned int *)&v30 = g_vecAttackDir+8;
        }
    }
    if (a0->field_60->field_a0(a0))
    {
        if (a1)
            a0->field_0->field_18c = a1->field_208;
        v31 = v1 + a0->field_0->field_1d8;
        a0->field_0->field_1d8 = (float)v31;
        if (!(a0->field_0->field_1a4 & 64))
            goto LABEL_4a5b73;
    }
    else
    {
LABEL_4a5b73:
        v44 = 0;
        if (!a1 || !g_engfuncs.pfnEntOffsetOfPEntity(a1->field_208))
            v44 = 1;
        if (!v44 && a0->field_0->field_108 == 3 && (!a2 || a2->field_10c != 1) && !(a4 & 0x4000000))
        {
            v45 = a0->field_0;
            CBaseMonster::DamageForce(a0, a3);
            v46 = -v31;
            v47 = v46 * v28;
            v5 = (float)v47;
            v48 = v46 * v29;
            v6 = (float)v48;
            v7 = (float)(v46 * v30);
            v49 = &a0->field_0->field_20;
            v2 = (float)(v47 + *(float *)&a0->field_0->field_20);
            v3 = (float)(v48 + *(float *)&v49->field_4);
            v4 = *(float *)&v49->field_8 + v7;
            *(float *)&v45->field_20 = v2;
            *(float *)&v45->field_24 = v3;
            *(float *)&v45->field_28 = v4;
        }
        *(float *)&a0->field_0->field_160 = *(float *)&a0->field_0->field_160 - v1;
        if (a0->field_180 == 6)
        {
            a0->field_105 = a0->field_105 | 1;
        }
        else if (0.0 >= *(float *)&a0->field_0->field_160)
        {
            g_pevLastInflictor = a1;
            if (*(char *)((void*)&a4 + 1) & 32)
            {
                v50 = a0->field_60;
                v0 = 2;
                goto LABEL_4a5cd0;
            }
            else if (*(char *)((void*)&a4 + 1) & 16)
            {
                v50 = a0->field_60;
                v0 = 1;
LABEL_4a5cd0:
                v50->field_3c(a0, a2);
            }
            else
            {
                a0->field_60->field_3c(a0, a2, 0);
            }
            g_pevLastInflictor = 0;
        }
        else
        {
            if (!(a0->field_0->field_1a4 & 32))
                return 1;
            v51 = 0;
            if (!a2 || !g_engfuncs.pfnEntOffsetOfPEntity(a2->field_208))
                v51 = 1;
            if (!v51 && a2->field_1a4 & 40)
            {
                if (a1)
                {
                    v52 = &a0->field_108;
                    if (EHANDLE::__opi(v52) && a1 != *(int *)EHANDLE::__rf(v52) && a0->field_104 & 16)
                        goto LABEL_4a5e32;
                    a0->field_250 = a1->field_8;
                    a0->field_254 = a1->field_c;
                    v53 = a1->field_10;
                }
                else
                {
                    v54 = 64.0 * *(float *)&g_vecAttackDir;
                    v5 = (float)v54;
                    v55 = 64.0 * *(float *)&g_vecAttackDir+4;
                    v6 = (float)v55;
                    v7 = (float)(64.0 * *(float *)&g_vecAttackDir+8);
                    v56 = &a0->field_0->field_8;
                    v2 = (float)(v54 + *(float *)&a0->field_0->field_8);
                    v3 = (float)(v55 + *(float *)&v56[1]);
                    v4 = *(float *)&v56[2] + v7;
                    *(float *)&a0->field_250 = v2;
                    *(float *)&a0->field_254 = v3;
                    v53 = *(unsigned int *)&v4;
                }
                a0->field_258 = v53;
LABEL_4a5e32:
                *(float *)&v2 = *(float *)&a0->field_250;
                *(float *)&v3 = *(float *)&a0->field_254;
                *(float *)&v4 = *(float *)&a0->field_258;
                CBaseMonster::MakeIdealYaw(a0, &v2);
                if (0.0 < a3)
                    a0->field_105 = a0->field_105 | 1;
                if (a3 >= 20.0f)
                    a0->field_105 = a0->field_105 | 2;
            }
            return 1;
        }
    }
    return 0;
}

