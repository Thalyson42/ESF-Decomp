// UTIL_EntitiesInBox__FPP11CBaseEntityiRC6VectorT2i @0x131880 size=334
typedef struct st_531880_2 {
    unsigned int field_0;
    char padding_4[120];
    unsigned int field_7c;
    char padding_80[196];
    float field_144;
    float field_148;
    float field_14c;
    float field_150;
    float field_154;
    float field_158;
    char padding_15c[200];
    unsigned int field_224;
} st_531880_2;

typedef struct st_531880_1 {
    char padding_0[148];
    int field_94;
} st_531880_1;

typedef struct st_531880_0 {
    unsigned int field_0;
} st_531880_0;

extern st_531880_0 *g_6168d4;
extern st_531880_0 *g_6168e0;
extern st_531880_1 *gpGlobals;

int UTIL_EntitiesInBox__FPP11CBaseEntityiRC6VectorT2i(unsigned int *a0, int a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
    st_531880_2 *i;  // esi
    int idx;  // edi
    st_531880_2 *v3;  // eax
    unsigned int v4;  // eax
    int v0;  // [bp-0x8]

    idx = 0;
    if (!g_6168e0(1))
        return 0;
    for (v0 = 1; v0 < gpGlobals->field_94; i = &i[1].padding_80[124])
    {
        if (!i->field_0 && (!a4 || a4 & i->field_224) && *(float *)a2 <= i->field_150 && *(float *)&a2[1] <= i->field_154 && *(float *)&a2[2] <= i->field_158 && *(float *)a3 >= i->field_144 && *(float *)&a3[1] >= i->field_148 && *(float *)&a3[2] >= i->field_14c)
        {
            v3 = i;
            if (v3 || (v3 = g_6168d4(0), v3))
                v4 = v3->field_7c;
            else
                v4 = 0;
            if (v4 && (a0[idx] = v4, idx += 1, idx >= a1))
                break;
        }
        v0 += 1;
    }
    return idx;
}

