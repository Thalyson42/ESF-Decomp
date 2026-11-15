// GetDeathActivity__12CBaseMonster @0xa4850 size=746
typedef struct st_4a4850_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4a4850_0;

extern float g_vecAttackDir;
extern float g_vecAttackDir+4;
extern float g_vecAttackDir+8;
extern st_4a4850_0 *gpGlobals;

int GetDeathActivity__12CBaseMonster(float a0)
{
    int v14;  // esi
    double v15;  // mm5
    double v24;  // mm5
    double v16;  // mm5
    unsigned int *v17;  // edx
    unsigned int *v19;  // edx
    double v20;  // mm5
    double v21;  // mm5
    unsigned int *v22;  // edx
    double v23;  // mm5
    float v0;  // [bp-0x9c]
    unsigned int v1;  // [bp-0x98]
    char v2;  // [bp-0x84], Other Possible Types: float
    float v3;  // [bp-0x80]
    float v4;  // [bp-0x7c]
    float v5;  // [bp-0x78]
    float v6;  // [bp-0x74]
    float v7;  // [bp-0x70]
    float v8;  // [bp-0x64]
    float v9;  // [bp-0x60]
    float v10;  // [bp-0x5c]
    char v11;  // [bp-0x44]
    float v12;  // [bp-0x34]

    if (*(int *)(*(int *)a0 + 368))
        return *(int *)(*(unsigned int *)&a0 + 376);
    (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 0xcc))(&v2, a0);
    v8 = v2;
    v9 = v3;
    v10 = v4;
    v1 = 0;
    v14 = 36;
    UTIL_MakeVectors(*(int *)a0 + 80);
    v15 = -1.0 * g_vecAttackDir;
    v2 = (float)v15;
    v16 = -1.0 * g_vecAttackDir+4;
    v3 = (float)v16;
    v4 = (float)(-1.0 * g_vecAttackDir+8);
    v17 = &gpGlobals->field_28;
    v0 = (float)(v15 * gpGlobals->field_28 + v16 * *(float *)&v17[1] + *(float *)&v17[2] * v4);
    switch (*(int *)(*(unsigned int *)&a0 + 380))
    {
    case 1:
        v14 = 66;
        break;
    case 3:
        v14 = 0x44;
        break;
    case 0:
        v1 = 1;
        if (v0 <= 0.3)
            goto LABEL_4a4984;
LABEL_4a497d:
        v14 = 38;
        break;
    default:
        v1 = 1;
        if (v0 > 0.3)
            goto LABEL_4a497d;
LABEL_4a4984:
        if (v0 <= -0.3)
        {
            v14 = 37;
            break;
        }
    }
    if (CBaseAnimating::LookupActivity(a0, v14) == 0xffffffff)
    {
        if (v1)
        {
            v14 = 36;
        }
        else if (v0 > 0.3)
        {
            v14 = 38;
        }
        else if (v0 <= -0.3)
        {
            v14 = 37;
        }
    }
    if (CBaseAnimating::LookupActivity(a0, v14) == 0xffffffff)
        v14 = 36;
    if (v14 == 38)
    {
        v19 = &gpGlobals->field_28;
        v20 = 64.0 * gpGlobals->field_28;
        v5 = (float)v20;
        v21 = 64.0 * *(float *)&v19[1];
        v6 = (float)v21;
        v7 = (float)(64.0 * *(float *)&v19[2]);
        v2 = (float)(v20 + v8);
        v3 = (float)(v21 + v9);
        v4 = v10 + v7;
        UTIL_TraceHull(&v8, &v2, 0, 3, *(int *)(*(int *)a0 + 520), &v11);
        if (v12 != 1.0f)
            v14 = 36;
    }
    if (v14 == 37)
    {
        v22 = &gpGlobals->field_28;
        v23 = 64.0 * gpGlobals->field_28;
        v5 = (float)v23;
        v24 = 64.0 * *(float *)&v22[1];
        v6 = (float)v24;
        v7 = (float)(64.0 * *(float *)&v22[2]);
        v2 = (float)(v8 - v23);
        v3 = (float)(v9 - v24);
        v4 = v10 - v7;
        UTIL_TraceHull(&v8, &v2, 0, 3, *(int *)(*(int *)a0 + 520), &v11);
        if (v12 != 1.0f)
            v14 = 36;
    }
    return v14;
}

