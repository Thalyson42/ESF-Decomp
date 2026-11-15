// PrimaryAttack__17CCariedDragonBall @0xaed70 size=259
typedef struct st_4aed70_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4aed70_0;

extern st_4aed70_0 *gpGlobals;

unsigned int PrimaryAttack__17CCariedDragonBall(float idx)
{
    unsigned int *v8;  // edx
    unsigned int *v9;  // edx
    unsigned int v10;  // eax
    float v0;  // [bp-0x64]
    float v1;  // [bp-0x60]
    float v2;  // [bp-0x5c]
    char v3;  // [bp-0x44]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]

    v8 = *(int *)(*(unsigned int *)&idx + 128);
    if (!v8[472])
        return v10;
    if (*(float *)&v8[432] >= gpGlobals->field_0)
        return v10;
    CBasePlayer::SetAnimation(v8, 5);
    UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
    v9 = &gpGlobals->field_28;
    v4 = (float)(1000.0 * gpGlobals->field_28);
    v5 = (float)(1000.0 * *(float *)&v9[1]);
    v6 = (float)(1000.0 * *(float *)&v9[2]);
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v3, *(int *)(*(unsigned int *)&idx + 128));
    v0 = v4;
    v1 = v5;
    v2 = v6;
    CDragonBall::ThrowDragonBall(*(int *)*(int *)(*(unsigned int *)&idx + 128), &v3, &v0, *(int *)(*(int *)(*(unsigned int *)&idx + 128) + 1888));
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1888) = 0;
    v10 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 332))(idx);
    return v10;
}

