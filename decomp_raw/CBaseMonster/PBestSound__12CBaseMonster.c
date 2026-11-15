// PBestSound__12CBaseMonster @0xd42b0 size=348
typedef struct st_4d42b0_0 {
    float field_0;
    float field_4;
    float field_8;
    char padding_c[16];
    unsigned int field_1c;
} st_4d42b0_0;

typedef struct st_4d42b0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4d42b0_1;

typedef struct st_4d42b0_2 {
    unsigned int field_0;
} st_4d42b0_2;

extern st_4d42b0_2 *g_6168b4;
extern st_4d42b0_1 *gpGlobals;

unsigned int PBestSound__12CBaseMonster(float a0)
{
    unsigned int v12;  // edi
    st_4d42b0_0 *v13;  // esi
    float v14;  // 112
    float v15;  // 112
    float v16;  // 112
    double v17;  // mm7
    double v18;  // mm6
    char *v0;  // [bp-0x70]
    float v1;  // [bp-0x6c]
    int v2;  // [bp-0x68]
    float v3;  // [bp-0x58]
    float v5;  // [bp-0x44]
    float v6;  // [bp-0x40]
    float v7;  // [bp-0x3c]
    float v8;  // [bp-0x24]
    float v9;  // [bp-0x20]
    float v10;  // [bp-0x1c]

    v2 = -0x1;
    v1 = 8192.0f;
    v12 = *(int *)(*(unsigned int *)&a0 + 560);
    if (*(int *)(*(unsigned int *)&a0 + 560) == 0xffffffff)
    {
        g_6168b4(2, "ERROR! monster %s has no audible sounds!\n", *(int *)*(int *)a0 + gpGlobals->field_98);
        return 0;
    }
    v0 = &v5;
    do
    {
        v13 = sub_488470(v12);
        if (v13 && sub_4884a0(v13))
        {
            (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 212))(v0, a0);
            v14 = v13->field_0 - v5;
            v8 = v14;
            v15 = v13->field_4 - v6;
            v9 = v15;
            v16 = v13->field_8 - v7;
            v10 = v16;
            v17 = v14 * v14 + v15 * v15 + v16 * v16;
            v18 = sqrt(v17);
            if (isnan(v18))
                sub_487dc0(*(unsigned int *)&v17);
            else
                v17 = v18;
            v3 = (float)v17;
            if (v3 < v1)
            {
                v2 = v12;
                v1 = v3;
            }
        }
    } while ((v12 = v13->field_1c, v13->field_1c != 0xffffffff));
    return (v2 < 0 ? 0 : sub_488470(v2));
}

