// Use__9CFuncWallP11CBaseEntityT18USE_TYPEf @0x91040 size=102
typedef struct st_491040_1 {
    char padding_0[304];
    unsigned int field_130;
} st_491040_1;

typedef struct st_491040_0 {
    char padding_0[304];
    float field_130;
} st_491040_0;

st_491040_1 * Use__9CFuncWallP11CBaseEntityT18USE_TYPEf(st_491040_0 **a0, unsigned int a1, unsigned int a2, int a3)
{
    st_491040_1 *v3;  // eax
    st_491040_0 *v4;  // eax
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)*a0->field_130;
    v3 = sub_48ab90(a0, a3, v0);
    if (!v3)
        return v3;
    v4 = *a0;
    v4->field_130 = (float)(1.0 - v4->field_130);
    return v4;
}

