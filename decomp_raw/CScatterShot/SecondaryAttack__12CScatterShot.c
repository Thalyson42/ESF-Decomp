// SecondaryAttack__12CScatterShot @0x1117e0 size=659
typedef struct st_5117e0_4 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_5117e0_4;

typedef struct st_5117e0_1 {
    char padding_0[260];
    unsigned int field_104;
} st_5117e0_1;

typedef struct st_5117e0_3 {
    struct st_5117e0_4 *field_0;
    char padding_4[680];
    unsigned int field_2ac;
    unsigned int field_2b0;
    char padding_2b4[80];
    unsigned int field_304;
    unsigned int field_308;
    unsigned int field_30c;
    char padding_310[4];
    unsigned int field_314;
} st_5117e0_3;

typedef struct st_5117e0_2 {
    struct st_5117e0_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[764];
    float field_310;
    unsigned int field_314;
} st_5117e0_2;

typedef struct st_5117e0_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_5117e0_0;

extern char ContractThink__18CScatterShotAttack;
extern st_5117e0_0 *gpGlobals;

double SecondaryAttack__12CScatterShot(float idx)
{
    unsigned int *v19;  // edx
    double v20;  // mm5
    double v29;  // mm7
    double v30;  // mm6
    st_5117e0_2 **v31;  // ecx
    st_5117e0_2 *v32;  // eax
    st_5117e0_2 *v33;  // esi
    double v35;  // mm0
    double v21;  // mm5
    unsigned int *v22;  // edi
    st_5117e0_3 **v23;  // ecx
    st_5117e0_3 *v24;  // edx
    unsigned int *v25;  // edx
    float v26;  // 112
    float v27;  // 112
    float v28;  // 112
    unsigned int v0;  // [bp-0xd8]
    float v1;  // [bp-0xc4]
    float v2;  // [bp-0xc0]
    float v3;  // [bp-0xbc]
    float v4;  // [bp-0xa4]
    float v5;  // [bp-0xa0]
    float v6;  // [bp-0x9c]
    char v7;  // [bp-0x84]
    float v8;  // [bp-0x70]
    float v9;  // [bp-0x6c]
    float v10;  // [bp-0x68]
    float v11;  // [bp-0x44]
    float v12;  // [bp-0x40]
    float v13;  // [bp-0x3c]
    char v14;  // [bp-0x24]
    float v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]

    CScatterShot::CleanUpShotList(idx);
    UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v14, *(int *)(*(unsigned int *)&idx + 128));
    v19 = &gpGlobals->field_28;
    v11 = gpGlobals->field_28;
    v12 = *(float *)&v19[1];
    v13 = *(float *)&v19[2];
    v20 = 8192.0 * v11;
    v1 = (float)v20;
    v21 = 8192.0 * v12;
    v2 = (float)v21;
    v3 = (float)(8192.0 * v13);
    v4 = (float)(v20 + v15);
    v5 = (float)(v21 + v16);
    v6 = v17 + v3;
    UTIL_TraceLine(&v14, &v4, 0, *(int *)(*(int *)idx + 408), &v7);
    v0 = 0;
    if ((int)v0 < *(int *)(*(unsigned int *)&idx + 228))
    {
        v22 = *(unsigned int *)&idx + 196;
        do
        {
            v23 = v0 * 4;
            v24 = *(int *)(v23 + v22);
            if (!v24->field_314)
            {
                if (!v24->field_2b0 && !v24->field_2ac)
                {
                    *(float *)&v24->field_304 = v8;
                    *(float *)&v24->field_308 = v9;
                    *(float *)&v24->field_30c = v10;
                    v25 = *(int *)*(int *)(v23 + v22) + 8;
                    v26 = *(float *)(*(int *)*(int *)(v23 + v22) + 8) - v8;
                    v1 = v26;
                    v27 = *(float *)&v25[1] - v9;
                    v2 = v27;
                    v28 = *(float *)&v25[2] - v10;
                    v3 = v28;
                    v29 = v26 * v26 + v27 * v27 + v28 * v28;
                    v30 = sqrt(v29);
                    if (isnan(v30))
                        sqrt(*(unsigned int *)&v29);
                    else
                        v29 = v30;
                    v31 = v0 * 4;
                    *(float *)(*(int *)(v31 + v22) + 784) = (float)v29;
                    *(unsigned int *)(*(int *)(v31 + v22) + 788) = 1;
                    v32 = *(int *)(v31 + v22);
                    *(float *)&v32->padding_14[660] = 1900.0f;
                    v33 = *(int *)(v31 + v22);
                    v33->field_c = _INSERT(v32, 0, 0) | 0xffff0000;
                    v33->field_10 = &ContractThink__18CScatterShotAttack;
                    *(float *)(*(int *)*(int *)(v31 + v22) + 260) = gpGlobals->field_0;
                }
                CScatterShot::FreeShot(idx, v22[v0]);
            }
        } while ((v0 += 1, (int)v0 < *(int *)(*(unsigned int *)&idx + 228)));
    }
    *(unsigned int *)(*(unsigned int *)&idx + 228) = 0;
    UTIL_WeaponTimeBase();
    *(float *)(*(unsigned int *)&idx + 160) = (float)(v35 + 0.3);
    return 0.3;
}

