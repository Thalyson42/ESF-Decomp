// EmitDamage__12CPlayerMelee @0x103c20 size=1397
typedef struct st_503c20_2 {
    struct st_503c20_3 *field_0;
    char padding_4[840];
    unsigned int field_34c;
    char padding_350[1004];
    unsigned int field_73c;
} st_503c20_2;

typedef struct st_503c20_1 {
    char padding_0[2408];
    unsigned int field_968;
} st_503c20_1;

typedef struct st_503c20_4 {
    char padding_0[268];
    unsigned int field_10c;
} st_503c20_4;

typedef struct st_503c20_3 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[220];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[12];
    unsigned int field_11c;
} st_503c20_3;

typedef struct st_503c20_6 {
    char padding_0[60];
    unsigned int field_3c;
    unsigned int field_40;
    unsigned int field_44;
    unsigned int field_48;
    char padding_4c[4];
    unsigned int field_50;
    unsigned int field_54;
    char padding_58[768];
    unsigned int field_358;
} st_503c20_6;

typedef struct st_503c20_5 {
    char padding_0[20];
    struct st_503c20_1 *field_14;
    struct st_503c20_2 *field_18;
    char padding_1c[4];
    struct st_503c20_4 *field_20;
    char padding_24[12];
    unsigned int field_30;
    char padding_34[56];
    struct st_503c20_6 *field_6c;
} st_503c20_5;

typedef struct st_503c20_0 {
    float field_0;
} st_503c20_0;

extern st_503c20_0 *gpGlobals;

double EmitDamage__12CPlayerMelee(float idx)
{
    double v26;  // mm7
    double v27;  // mm7
    double v36;  // mm5
    double v37;  // mm6
    unsigned int index;  // edx
    double v39;  // mm6
    st_503c20_2 *v40;  // edx
    st_503c20_2 *v41;  // edx
    st_503c20_2 *v42;  // edx
    unsigned int *v43;  // edx
    st_503c20_2 *v44;  // edx
    unsigned int *v29;  // eax
    st_503c20_5 *v30;  // esi
    double v31;  // mm6
    double v32;  // mm5
    double v33;  // mm6
    double v34;  // mm6
    double v35;  // mm6
    int v0;  // [bp-0xb8]
    unsigned int v1;  // [bp-0xa8]
    int v2;  // [bp-0xa4], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0x84]
    st_503c20_4 *v4;  // [bp-0x80]
    st_503c20_2 *v5;  // [bp-0x7c]
    float v6;  // [bp-0x74]
    unsigned int v7;  // [bp-0x70]
    unsigned int v8;  // [bp-0x6c]
    float v9;  // [bp-0x6c]
    unsigned int v10;  // [bp-0x68]
    float v11;  // [bp-0x68]
    unsigned int v12;  // [bp-0x64]
    float v13;  // [bp-0x64]
    float v14;  // [bp-0x60]
    float v15;  // [bp-0x4c]
    float v16;  // [bp-0x48]
    float v17;  // [bp-0x44]
    float v18;  // [bp-0x40]
    float v19;  // [bp-0x2c]
    float v20;  // [bp-0x28]
    float v21;  // [bp-0x24]
    int v22;  // [bp-0xc]
    unsigned short v23;  // [bp-0x8]
    unsigned short v24;  // [bp-0x6]

    if (*(int *)(*(int *)(*(unsigned int *)&idx + 380) + 0x44))
        return v27;
    v7 = 0;
    if (!*(int *)(*(int *)(*(unsigned int *)&idx + 380) + 64))
    {
        if (!CPlayerMelee::CanUseTrunksSword(idx, *(int *)(*(unsigned int *)&idx + 296)))
        {
            if (*(int *)(*(int *)(*(unsigned int *)&idx + 380) + 84) == 2 || *(int *)(*(int *)(*(unsigned int *)&idx + 380) + 60))
            {
                CPlayerMelee::GetDamage(idx);
                CPlayerMelee::GetPowerRatio(idx, *(int *)(*(unsigned int *)&idx + 296));
                v6 = (float)(v26 * (float)v26);
                if (1.0 > v6)
                    v6 = 1.0f;
                (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 296) + 96) + 52))(*(int *)(*(unsigned int *)&idx + 296), *(int *)*(int *)(*(unsigned int *)&idx + 292), *(int *)*(int *)(*(unsigned int *)&idx + 292), v6, 0x2000000);
                if (*(int *)(*(int *)(*(unsigned int *)&idx + 380) + 60) && *(int *)(*(int *)(*(unsigned int *)&idx + 380) + 84) == 1)
                {
                    CPlayerMelee::MeleeText(idx, 11, 0);
                    CPlayerMelee::MeleeText(*(int *)(*(unsigned int *)&idx + 304), 11, 0);
                }
                v27 = v6;
                v24 = __fnstcw();
                v23 = v24 | 0xc00;
                v22 = (int)v27;
                v2 = v22;
                v1 = 3;
            }
            else
            {
                v2 = 0;
                v1 = 10;
            }
            CPlayerMelee::MeleeText(idx);
            CPlayerMelee::EmitExeSound(idx, CPlayerMelee::GetSoundEdict(idx));
        }
        else
        {
            v7 = 1;
        }
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 380) + 64) = 1;
    }
    if (!(*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 296) + 96) + 140))(*(int *)(*(unsigned int *)&idx + 296)))
        return v27;
    v29 = *(int *)(*(unsigned int *)&idx + 380);
    if (v29[214])
        return v27;
    if (v29[21] != 2 && !v29[15])
        return v27;
    if (*(int *)(*(int *)(*(unsigned int *)&idx + 380) + 80) != 2)
        return v27;
    v5 = *(int *)(*(unsigned int *)&idx + 296);
    v4 = *(int *)(*(unsigned int *)&idx + 304);
    v3 = *(int *)(*(unsigned int *)&idx + 320);
    v30 = *(unsigned int *)&idx + 272;
    v31 = *(float *)(*(unsigned int *)&idx + 272) * *(float *)(*(unsigned int *)&idx + 272) + *(float *)(*(unsigned int *)&idx + 276) * *(float *)(*(unsigned int *)&idx + 276) + *(float *)(*(unsigned int *)&idx + 280) * *(float *)(*(unsigned int *)&idx + 280);
    v32 = sqrt(v31);
    if (isnan(v32))
        sqrt(*(unsigned int *)&v31);
    else
        v31 = v32;
    v18 = (float)v31;
    if (v18 == 0.0f)
    {
        v19 = 0.0f;
        v20 = 0.0f;
        v21 = 1.0;
    }
    else
    {
        v33 = 1.0 / v18;
        v19 = (float)(v33 * *(float *)&v30->padding_0[0]);
        v20 = (float)(v33 * *(float *)&v30->padding_0[4]);
        v21 = (float)(v33 * *(float *)&v30->padding_0[8]);
    }
    if (v3)
    {
        v15 = -v19;
        v16 = -v20;
        v17 = -v21;
        v19 = v15;
        v20 = v16;
        v21 = v17;
    }
    if (*(char *)(*(int *)(*(unsigned int *)&idx + 380) + 32) & 8)
    {
        v15 = 0;
        v16 = 0;
        v17 = 1.0;
    }
    else if (*(char *)(*(int *)(*(unsigned int *)&idx + 380) + 32) & 16)
    {
        v34 = -1.0;
        v15 = 0;
        v16 = 0;
        goto LABEL_503f98;
    }
    else
    {
        if (!*(int *)(*(int *)(*(unsigned int *)&idx + 380) + 72))
            goto LABEL_503fad;
        v21 = 0;
        v35 = v19 * v19 + v20 * v20 + 0.0;
        v36 = sqrt(v35);
        if (isnan(v36))
            sqrt(*(unsigned int *)&v35);
        else
            v35 = v36;
        v14 = (float)v35;
        if (v14 == 0.0f)
        {
            v15 = 0.0f;
            v16 = 0.0f;
            v17 = 1.0;
        }
        else
        {
            v37 = 1.0 / v14;
            v15 = (float)(v37 * v19);
            v34 = v37 * v21;
            v16 = (float)(v37 * v20);
LABEL_503f98:
            v17 = (float)v34;
        }
    }
    v19 = v15;
    v20 = v16;
    v21 = v17;
LABEL_503fad:
    if (*(int *)(*(int *)(*(unsigned int *)&idx + 292) + 2408))
    {
        index = *(int *)(*(int *)(*(unsigned int *)&idx + 292) + 2408);
        v39 = 1.0 + *(float *)gpGlobals;
        *(float *)(index + 160) = (float)v39;
        *(float *)(index + 156) = (float)v39;
    }
    *(unsigned int *)(*(unsigned int *)&idx + 252) = 1;
    CPlayerMelee::StopMelee(idx, 0);
    *(unsigned int *)(*(unsigned int *)&idx + 252) = 0;
    if (v7)
    {
        v40 = v5;
        v40->field_34c = 0;
        v40->field_73c = 0;
        v4->field_10c = 0;
        (*(int *)(*(int *)&v40->padding_4[92] + 52))(v5, *(int *)*(int *)(*(unsigned int *)&idx + 292), *(int *)*(int *)(*(unsigned int *)&idx + 292), 999.0f, 0x2001000);
        if (!(*(int *)(*(int *)&v5->padding_4[92] + 140))(v5))
        {
            v0 = 4;
            EMIT_SOUND_DYN(*(int *)&v5->field_0[1].padding_2c[188], v0, "weapons/swordkill.wav", 0x3f800000, 0.800000011920929f, 0, 100);
            CPlayerMelee::MeleeText(idx, 4, 0);
            v41 = v5;
            v41->field_0->field_10c = 0;
            *(unsigned short *)&v0 = 0;
            CBodySlice::SpawnBodySlices(v41->field_0, v0);
            v42 = v5;
            v42->field_0->padding_110[8] = v42->field_0->padding_110[8] | 128;
            v43 = v42->field_0;
            v8 = 0;
            v10 = 0;
            v12 = 0;
            v43[8] = v8;
            v43[9] = v10;
            v43[10] = v12;
            v44 = v5;
            v44->field_0->field_108 = 5;
            v44->field_0->field_11c = 0;
            return v27;
        }
    }
    v9 = v19;
    v11 = v20;
    v13 = v21;
    CPlayerMelee::StartToss(v4, *(int *)(*(unsigned int *)&idx + 292), 1, &v9, 1200.0f, 600.0f, 275.0f, 1.5f);
    return v27;
}

