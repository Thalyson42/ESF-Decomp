// UTIL_MonstersInSphere__FPP11CBaseEntityiRC6Vectorf @0x1319d0 size=306
typedef struct st_5319d0_2 {
    unsigned int field_0;
    char padding_4[120];
    unsigned int field_7c;
    char padding_80[8];
    float field_88;
    float field_8c;
    char padding_90[188];
    float field_14c;
    char padding_150[8];
    float field_158;
    char padding_15c[200];
    char field_224;
} st_5319d0_2;

typedef struct st_5319d0_1 {
    char padding_0[148];
    int field_94;
} st_5319d0_1;

typedef struct st_5319d0_0 {
    unsigned int field_0;
} st_5319d0_0;

extern st_5319d0_0 *g_6168d4;
extern st_5319d0_0 *g_6168e0;
extern st_5319d0_1 *gpGlobals;

int UTIL_MonstersInSphere__FPP11CBaseEntityiRC6Vectorf(unsigned int *a0, int a1, float *a2, float a3)
{
    st_5319d0_2 *iter;  // esi
    int idx;  // edi
    float v5;  // 128
    float v6;  // 128
    float v7;  // 120
    float v8;  // 128
    st_5319d0_2 *v9;  // eax
    unsigned int v10;  // eax
    int v0;  // [bp-0x1c]
    float v1;  // [bp-0x18]
    float v2;  // [bp-0x8]

    idx = 0;
    v1 = a3 * a3;
    if (!g_6168e0(1))
        return 0;
    for (v0 = 1; v0 < gpGlobals->field_94; iter = &iter[1].padding_90[111])
    {
        if (!iter->field_0 && iter->field_224 & 40)
        {
            v5 = *a2 - iter->field_88;
            v6 = v5 * v5;
            if (v6 <= v1 && !(v7 = a2[1] - iter->field_8c, v8 = v6 + v7 * v7, v8 > v1))
            {
                v2 = (float)(a2[2] - (iter->field_14c + iter->field_158) * 0.5);
                if (v8 + v2 * v2 <= v1)
                {
                    v9 = iter;
                    if (v9 || (v9 = g_6168d4(0), v9))
                        v10 = v9->field_7c;
                    else
                        v10 = 0;
                    if (v10 && (a0[idx] = v10, idx += 1, idx >= a1))
                        break;
                }
            }
        }
        v0 += 1;
    }
    return idx;
}

