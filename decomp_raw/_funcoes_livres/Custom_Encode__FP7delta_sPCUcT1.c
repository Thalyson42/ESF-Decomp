// Custom_Encode__FP7delta_sPCUcT1 @0xa2c80 size=430
typedef struct st_4a2c80_2 {
    char padding_0[92];
    float field_5c;
} st_4a2c80_2;

typedef struct st_4a2c80_0 {
    char padding_0[72];
    unsigned int field_48;
    char padding_4c[16];
    float field_5c;
} st_4a2c80_0;

typedef struct st_4a2c80_1 {
    unsigned int field_0;
} st_4a2c80_1;

extern unsigned int g_5b83c0;
extern unsigned int g_5b83e4;
extern unsigned int g_5b8408;
extern unsigned int g_5b842c;
extern unsigned int g_5b8450;
extern unsigned int g_5b8474;
extern unsigned int g_5b8498;
extern unsigned int g_5b84bc;
extern unsigned int g_5b84e0;
extern unsigned int initialized.1850;
extern st_4a2c80_1 *g_6169d8;

int Custom_Encode__FP7delta_sPCUcT1(int a0, st_4a2c80_2 *a1, st_4a2c80_0 *a2)
{
    int v5;  // eax
    unsigned int v0;  // [bp-0x18]
    int v1;  // [bp-0xc]
    int v2;  // [bp-0xc]
    unsigned short v3;  // [bp-0x8]
    unsigned short v4;  // [bp-0x6]

    if (!initialized.1850)
    {
        sub_4880f0(a0);
        initialized.1850 = 1;
    }
    v0 = a2->field_48 & 15;
    if (v0 > 1)
    {
        g_6169d8(a0, g_5b83c0);
        g_6169d8(a0, g_5b83e4);
        g_6169d8(a0, g_5b8408);
    }
    if (v0)
    {
        g_6169d8(a0, g_5b842c);
        g_6169d8(a0, g_5b8450);
        g_6169d8(a0, g_5b8474);
    }
    if (v0 - 1 > 1)
    {
        g_6169d8(a0, g_5b8498);
        g_6169d8(a0, g_5b84bc);
    }
    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v1 = (int)a1->field_5c;
    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v2 = (int)a2->field_5c;
    v5 = v2;
    if (v1 == v5)
        v5 = g_6169d8(a0, g_5b84e0);
    return v5;
}

