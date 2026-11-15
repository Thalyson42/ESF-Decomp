// Player_Encode__FP7delta_sPCUcT1 @0xa29f0 size=358
typedef struct st_4a29f0_1 {
    char padding_0[148];
    unsigned int field_94;
} st_4a29f0_1;

typedef struct st_4a29f0_0 {
    unsigned int field_0;
} st_4a29f0_0;

extern unsigned int g_5b8260;
extern unsigned int g_5b8284;
extern unsigned int g_5b82a8;
extern unsigned int initialized.1843;
extern st_4a29f0_0 *g_6169c8;
extern st_4a29f0_0 *g_6169d4;
extern st_4a29f0_0 *g_6169d8;

unsigned int Player_Encode__FP7delta_sPCUcT1(int a0, st_4a29f0_1 *a1, unsigned int *a2)
{
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]

    if (!initialized.1843)
    {
        sub_48c190(a0);
        initialized.1843 = 1;
    }
    v3 = g_6169c8(v0, v1, v2);
    if (a2[1] - 1 == v3)
    {
        g_6169d8(a0, g_5b8260);
        g_6169d8(a0, g_5b8284);
        g_6169d8(a0, g_5b82a8);
    }
    if (a2[22] == 12 && a2[37])
    {
        g_6169d8(a0, g_5b8260);
        g_6169d8(a0, g_5b8284);
        return g_6169d8(a0, g_5b82a8);
    }
    if (a2[37] == a1->field_94)
        return a2[37];
    g_6169d4(a0, g_5b8260);
    g_6169d4(a0, g_5b8284);
    return g_6169d4(a0, g_5b82a8);
}

