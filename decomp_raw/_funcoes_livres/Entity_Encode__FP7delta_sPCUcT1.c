// Entity_Encode__FP7delta_sPCUcT1 @0xa2730 size=566
typedef struct st_4a2730_2 {
    char padding_0[148];
    unsigned int field_94;
} st_4a2730_2;

typedef struct st_4a2730_1 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[80];
    unsigned int field_58;
    char padding_5c[56];
    unsigned int field_94;
    char padding_98[100];
    float field_fc;
    float field_100;
} st_4a2730_1;

typedef struct st_4a2730_0 {
    unsigned int field_0;
} st_4a2730_0;

extern unsigned int g_5b8260;
extern unsigned int g_5b8284;
extern unsigned int g_5b82a8;
extern unsigned int g_5b82cc;
extern unsigned int g_5b82f0;
extern unsigned int g_5b8314;
extern unsigned int initialized.1836;
extern st_4a2730_0 *g_6169c8;
extern st_4a2730_0 *g_6169d4;
extern st_4a2730_0 *g_6169d8;

unsigned int Entity_Encode__FP7delta_sPCUcT1(int a0, st_4a2730_2 *a1, st_4a2730_1 *a2)
{
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]

    if (!initialized.1836)
    {
        sub_48acf0(a0);
        initialized.1836 = 1;
    }
    v3 = g_6169c8(v0, v1, v2);
    if (a2->field_4 - 1 == v3)
    {
        g_6169d8(a0, g_5b8260);
        g_6169d8(a0, g_5b8284);
        g_6169d8(a0, g_5b82a8);
    }
    if (a2->field_fc != 0.0f && a2->field_100 != 0.0f)
    {
        g_6169d8(a0, g_5b8260);
        g_6169d8(a0, g_5b8284);
        g_6169d8(a0, g_5b82a8);
        g_6169d8(a0, g_5b82cc);
        g_6169d8(a0, g_5b82f0);
        g_6169d8(a0, g_5b8314);
    }
    if (a2->field_58 == 12 && a2->field_94)
    {
        g_6169d8(a0, g_5b8260);
        g_6169d8(a0, g_5b8284);
        return g_6169d8(a0, g_5b82a8);
    }
    if (a2->field_94 == a1->field_94)
        return a2->field_94;
    g_6169d4(a0, g_5b8260);
    g_6169d4(a0, g_5b8284);
    return g_6169d4(a0, g_5b82a8);
}

