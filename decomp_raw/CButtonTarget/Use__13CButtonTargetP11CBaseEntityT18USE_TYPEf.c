// Use__13CButtonTargetP11CBaseEntityT18USE_TYPEf @0x98e40 size=164
typedef struct st_498e40_0 {
    char padding_0[304];
    float field_130;
} st_498e40_0;

unsigned int Use__13CButtonTargetP11CBaseEntityT18USE_TYPEf(st_498e40_0 **a0, int a1, unsigned int a2, int a3)
{
    unsigned int v3;  // eax
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)*a0->field_130;
    v3 = sub_48ab90(a0, a3, v0);
    if (!v3)
        return v3;
    *a0->field_130 = (float)(1.0 - *a0->field_130);
    return (0.0 == *a0->field_130 ? sub_48df80(a0, a1, 0, 0) : sub_48df80(a0, a1, 1, 0.0f));
}

