// ShootAttack__12CKameTorpedo @0xca690 size=321
typedef struct st_4ca690_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4ca690_0;

extern st_4ca690_0 *gpGlobals;

unsigned int ShootAttack__12CKameTorpedo(double a0, float idx)
{
    unsigned int *v19;  // edx
    double v20;  // mm5
    double v21;  // mm5
    unsigned int v22;  // eax
    unsigned int v23;  // eax
    unsigned int v0;  // [bp-0x94]
    unsigned int v1;  // [bp-0x90]
    unsigned int v2;  // [bp-0x8c]
    unsigned int v3;  // [bp-0x88]
    float v4;  // [bp-0x84]
    unsigned short v5;  // [bp-0x6c]
    unsigned short v6;  // [bp-0x6a]
    int v7;  // [bp-0x68], Other Possible Types: unsigned int
    float v8;  // [bp-0x64]
    float v9;  // [bp-0x60]
    float v10;  // [bp-0x5c]
    char v11;  // [bp-0x44]
    float v12;  // [bp-0x44]
    float v13;  // [bp-0x40]
    float v14;  // [bp-0x3c]
    float v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]

    CBasePlayer::SetAnimation(*(int *)(*(unsigned int *)&idx + 128), 5);
    UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v11, *(int *)(*(unsigned int *)&idx + 128));
    v19 = &gpGlobals->field_28;
    v10 = (float)(20.0 * *(float *)&v19[2]);
    v20 = 20.0 * gpGlobals->field_28 + v12;
    v15 = (float)v20;
    v21 = 20.0 * *(float *)&v19[1] + v13;
    v16 = (float)v21;
    v17 = v14 + v10;
    v8 = (float)v20;
    v9 = (float)v21;
    v10 = v17;
    v4 = (float)((double)*(int *)(*(unsigned int *)&idx + 196) / 21.0);
    v3 = 5;
    v2 = *(short *)(*(unsigned int *)&idx + 496);
    v1 = *(short *)(*(unsigned int *)&idx + 494);
    v0 = *(short *)(*(unsigned int *)&idx + 492);
    CBasePlayerWeapon::GetPowerRatio(idx);
    v7 = *(int *)(*(unsigned int *)&idx + 196) * 3;
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v7 = (int)(a0 * (double)(int)v7);
    v22 = CKameTorpedoAttack::DropTorpedo(*(int *)*(int *)(*(unsigned int *)&idx + 128), &v8, v7);
    v23 = *(int *)(*(unsigned int *)&idx + 500);
    *(unsigned int *)(v23 * 4 + *(unsigned int *)&idx + 468) = v22;
    *(unsigned int *)(*(unsigned int *)&idx + 500) = *(int *)(*(unsigned int *)&idx + 500) + 1;
    return v23 * 4;
}

