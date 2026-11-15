// SecondaryAttack__12CKameTorpedo @0xca930 size=730
typedef struct st_4ca930_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4ca930_0;

extern st_4ca930_0 *gpGlobals;

double SecondaryAttack__12CKameTorpedo(float idx)
{
    unsigned int *v31;  // edx
    double v32;  // mm5
    double v41;  // mm0
    double v42;  // mm0
    double v33;  // mm5
    unsigned int *v34;  // edx
    float v35;  // 112
    float v36;  // 112
    float v37;  // 112
    double v38;  // mm7
    double v39;  // mm6
    double v40;  // mm7
    int v0;  // [bp-0x110]
    int v1;  // [bp-0x10c]
    int v2;  // [bp-0x108]
    float v3;  // [bp-0xe8]
    float v4;  // [bp-0xe4]
    float v5;  // [bp-0xe0]
    float v6;  // [bp-0xdc]
    float v7;  // [bp-0xd8]
    float v8;  // [bp-0xc4]
    float v9;  // [bp-0xc0]
    float v10;  // [bp-0xbc]
    float v11;  // [bp-0xb8]
    float v12;  // [bp-0xb4]
    float v13;  // [bp-0xb0]
    float v14;  // [bp-0xac]
    float v15;  // [bp-0xa8]
    float v16;  // [bp-0xa4]
    float v17;  // [bp-0xa0]
    float v18;  // [bp-0x9c]
    char v19;  // [bp-0x84]
    float v20;  // [bp-0x70]
    float v21;  // [bp-0x6c]
    float v22;  // [bp-0x68]
    char v23;  // [bp-0x44]
    float v24;  // [bp-0x44]
    float v25;  // [bp-0x40]
    float v26;  // [bp-0x3c]
    float v27;  // [bp-0x24]
    float v28;  // [bp-0x20]
    float v29;  // [bp-0x1c]

    if (*(int *)(*(unsigned int *)&idx + 504))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 504) = 0;
        CKameTorpedo::UpdateTorpedoList(idx);
        if (*(int *)(*(unsigned int *)&idx + 500) > 0)
        {
            *(unsigned int *)(*(unsigned int *)&idx + 500) = *(int *)(*(unsigned int *)&idx + 500) - 1;
            CBasePlayer::SetAnimation(*(int *)(*(unsigned int *)&idx + 128), 6);
            UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
            v31 = &gpGlobals->field_28;
            v27 = gpGlobals->field_28;
            v28 = *(float *)&v31[1];
            v29 = *(float *)&v31[2];
            (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v23, *(int *)(*(unsigned int *)&idx + 128));
            v32 = 8192.0 * v27;
            v8 = (float)v32;
            v33 = 8192.0 * v28;
            v9 = (float)v33;
            v10 = (float)(8192.0 * v29);
            v16 = (float)(v32 + v24);
            v17 = (float)(v33 + v25);
            v18 = v26 + v10;
            UTIL_TraceLine(&v23, &v16, 0, *(int *)(*(int *)idx + 520), &v19);
            v34 = *(int *)*(int *)(*(int *)(*(unsigned int *)&idx + 500) * 4 + *(unsigned int *)&idx + 468) + 8;
            v35 = v20 - *(float *)(*(int *)*(int *)(*(int *)(*(unsigned int *)&idx + 500) * 4 + *(unsigned int *)&idx + 468) + 8);
            v8 = v35;
            v36 = v21 - *(float *)&v34[1];
            v9 = v36;
            v37 = v22 - *(float *)&v34[2];
            v10 = v37;
            v38 = v35 * v35 + v36 * v36 + v37 * v37;
            v39 = sqrt(v38);
            if (isnan(v39))
                sqrt(*(unsigned int *)&v38);
            else
                v38 = v39;
            v7 = (float)v38;
            if (v7 == 0.0f)
            {
                v14 = 0.0f;
                v15 = 0.0f;
                v16 = 1.0;
            }
            else
            {
                v40 = 1.0 / v7;
                v14 = (float)(v40 * v8);
                v15 = (float)(v40 * v9);
                v16 = (float)(v40 * v10);
            }
            v11 = (float)(1000.0 * v14);
            v12 = (float)(1000.0 * v15);
            v13 = (float)(1000.0 * v16);
            v8 = v11;
            v9 = v12;
            v10 = v13;
            v4 = v8;
            v5 = v9;
            v6 = v10;
            CKameTorpedoAttack::Fire(*(int *)(*(int *)(*(unsigned int *)&idx + 500) * 4 + *(unsigned int *)&idx + 468), &v4, 1);
        }
    }
    UTIL_WeaponTimeBase(v0, v1, v2);
    v3 = (float)(v41 + 0.2);
    v42 = v3;
    *(float *)(*(unsigned int *)&idx + 160) = (float)v42;
    *(float *)(*(unsigned int *)&idx + 156) = (float)v42;
    return 0.2;
}

