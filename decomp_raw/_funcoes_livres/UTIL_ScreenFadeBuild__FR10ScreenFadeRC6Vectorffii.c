// UTIL_ScreenFadeBuild__FR10ScreenFadeRC6Vectorffii @0x1322c0 size=204
typedef struct st_5322c0_0 {
    unsigned short field_0;
    unsigned short field_2;
    unsigned short field_4;
    char field_6;
    char field_7;
    char field_8;
    char field_9;
} st_5322c0_0;

int UTIL_ScreenFadeBuild__FR10ScreenFadeRC6Vectorffii(st_5322c0_0 *a0, float *a1, float a2, int a3, char a4, unsigned short a5)
{
    unsigned int v2;  // eax
    float v0;  // [bp-0x10]
    int v1;  // [bp-0xc]

    v0 = 4096.0f;
    a0->field_0 = FixedUnsigned16__Fff(a2, 4096.0f);
    a0->field_2 = FixedUnsigned16__Fff(a3, v0);
    __fnstcw();
    v1 = (int)*a1;
    a0->field_6 = v1;
    __fnstcw();
    v1 = (int)a1[1];
    a0->field_7 = v1;
    __fnstcw();
    v1 = (int)a1[2];
    a0->field_8 = v1;
    v2 = _INSERT(v1, 0, a4);
    a0->field_9 = a4;
    a0->field_4 = a5;
    return v2;
}

