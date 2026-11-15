// MoveExecute__12CBaseMonsterP11CBaseEntityRC6Vectorf @0xd7490 size=180
typedef struct st_4d7490_0 {
    char padding_0[312];
    unsigned int field_138;
    char padding_13c[204];
    int field_208;
} st_4d7490_0;

typedef struct st_4d7490_1 {
    struct st_4d7490_0 *field_0;
    char padding_4[108];
    unsigned int field_70;
    char padding_74[260];
    unsigned int field_178;
    char padding_17c[156];
    unsigned int field_218;
    char padding_21c[16];
    unsigned int field_22c;
} st_4d7490_1;

int MoveExecute__12CBaseMonsterP11CBaseEntityRC6Vectorf(st_4d7490_1 *a0, unsigned int a1, unsigned int a2, float a3)
{
    double v2;  // mm7
    double v3;  // mm6
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    float v0;  // [bp-0x1c]
    float v1;  // [bp-0x18]

    if (a0->field_178 != a0->field_22c)
        a0->field_178 = a0->field_22c;
    v2 = *(float *)&a0->field_70 * *(float *)&a0->field_0->field_138 * a3;
    v1 = (float)v2;
    v3 = v2;
    v5 = _INSERT(_INSERT(a0->field_0, 0, 0), 1, (isnan(v3) ? 69 : v3 == 0.001 ? 64 : v3 < 0.001));
    if (v3 <= 0.001)
        return v5;
    do
    {
    } while ((v0 = (float)(v2 > 16.0 ? 16.0 : v1), v2 = v1 - v0, v1 = (float)v2, v6 = _INSERT(UTIL_MoveToOrigin(a0->field_0->field_208, &(&a0->field_0)[4 * a0->field_218 + 101], v0, 0), 0, 0), v7 = _INSERT(_INSERT(UTIL_MoveToOrigin(a0->field_0->field_208, &(&a0->field_0)[4 * a0->field_218 + 101], v0, 0), 0, 0), 1, (isnan(v2) ? 69 : v2 == 0.001 ? 64 : v2 < 0.001)), v2 > 0.001));
    return v7;
}

