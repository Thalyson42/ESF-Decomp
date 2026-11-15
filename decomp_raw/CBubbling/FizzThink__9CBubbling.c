// FizzThink__9CBubbling @0xaf890 size=237
typedef struct st_4af890_0 {
    char padding_0[260];
    float field_104;
    char padding_108[256];
    unsigned int field_208;
} st_4af890_0;

typedef struct st_4af890_1 {
    struct st_4af890_0 *field_0;
    char padding_4[96];
    unsigned int field_64;
    int field_68;
    short field_6c;
} st_4af890_1;

typedef struct st_4af890_3 {
    float field_0;
} st_4af890_3;

typedef struct st_4af890_2 {
    unsigned int field_0;
} st_4af890_2;

extern st_4af890_2 *g_616878;
extern st_4af890_2 *g_61687c;
extern st_4af890_2 *g_616880;
extern st_4af890_2 *g_616888;
extern st_4af890_2 *g_6168dc;
extern st_4af890_3 *gpGlobals;

unsigned int * FizzThink__9CBubbling(st_4af890_1 *a0)
{
    unsigned short v2;  // ax
    st_4af890_0 *v3;  // edx
    float *v4;  // eax
    double v5;  // mm7
    unsigned int v0;  // [bp-0x60]
    char v1;  // [bp-0x24]

    sub_48b610(&v1, a0->field_0);
    g_616878(5, 23, &v1, 0);
    g_616880(105);
    v2 = g_6168dc(a0->field_0->field_208);
    g_616888(v2);
    g_616888(a0->field_6c);
    v0 = a0->field_64;
    g_616880(v0);
    g_61687c(v0);
    if (a0->field_68 > 19)
    {
        v3 = a0->field_0;
        v4 = gpGlobals;
        v5 = 0.5 + *(float *)gpGlobals;
    }
    else
    {
        v3 = a0->field_0;
        v4 = gpGlobals;
        v5 = 2.5 + *(float *)gpGlobals - (double)a0->field_68 * 0.1;
    }
    v3->field_104 = (float)v5;
    return v4;
}

