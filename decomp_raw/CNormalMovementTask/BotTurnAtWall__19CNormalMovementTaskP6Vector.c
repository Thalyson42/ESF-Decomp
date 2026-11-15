// BotTurnAtWall__19CNormalMovementTaskP6Vector @0x172520 size=645
typedef struct st_572520_3 {
    char padding_0[8];
    struct st_572520_1 *field_8;
    struct st_572520_2 *field_c;
} st_572520_3;

typedef struct st_572520_2 {
    char padding_0[248];
    float field_f8;
} st_572520_2;

typedef struct st_572520_1 {
    char padding_0[3092];
    float field_c14;
} st_572520_1;

typedef struct st_572520_0 {
    char padding_0[3092];
    unsigned int field_c14;
} st_572520_0;

typedef struct st_572520_4 {
    unsigned int field_0;
} st_572520_4;

extern st_572520_4 *g_616928;
extern st_572520_4 *g_61692c;

st_572520_0 * BotTurnAtWall__19CNormalMovementTaskP6Vector(st_572520_3 *a0, int a1)
{
    double v12;  // mm7
    double v13;  // mm7
    int v14;  // eax
    double v15;  // mm7
    int v16;  // eax
    int v17;  // eax
    double v18;  // mm6
    int v19;  // eax
    double v20;  // mm5
    st_572520_1 *v21;  // eax
    float v0;  // [bp-0x58]
    float v1;  // [bp-0x54]
    float v2;  // [bp-0x50]
    int v3;  // [bp-0x4c]
    unsigned short v4;  // [bp-0x48]
    unsigned short v5;  // [bp-0x46]
    char v6;  // [bp-0x44], Other Possible Types: unsigned int
    float v7;  // [bp-0x40]
    unsigned int v8;  // [bp-0x3c]
    unsigned int v9;  // [bp-0x24]
    float v10;  // [bp-0x20]
    unsigned int v11;  // [bp-0x1c]

    sub_488860(&v6, a1);
    v9 = v6;
    v10 = v7;
    v11 = v8;
    v12 = a0->field_c->field_f8 + 180.0;
    v2 = (float)v12;
    if (v12 > 359.0)
        v2 = (float)(v12 - 360.0);
    v13 = v10 - 180.0;
    v10 = (float)v13;
    if (0.0 > v13)
        v10 = (float)(v13 + 360.0);
    v1 = (float)(v10 - 90.0);
    if ((int)g_616928(1, 100) <= 50)
    {
        g_61692c(5.0f, 20.0f);
        v1 = (float)(v1 - 5.0);
    }
    if (0.0 > v1)
        v1 = (float)(v1 + 360.0);
    v0 = (float)(v10 + 90.0);
    if ((int)g_616928(1, 100) <= 50)
    {
        g_61692c(5.0f, 20.0f);
        v0 = (float)(5.0 + v0);
    }
    if (v0 > 359.0f)
        v0 = (float)(v0 - 360.0);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)(v2 - v1);
    v14 = v3;
    if (v14 < 0)
        v14 = -v14;
    v3 = v14;
    v15 = (double)v3;
    if (v15 > 179.0)
    {
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        v3 = (int)(v15 - 360.0);
        v16 = v3;
        if (v16 < 0)
            v16 = -v16;
        v3 = v16;
        v15 = (double)v3;
    }
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)(v2 - v0);
    v17 = v3;
    if (v17 < 0)
        v17 = -v17;
    v3 = v17;
    v18 = (double)v3;
    if (v18 > 179.0)
    {
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        v3 = (int)(v18 - 360.0);
        v19 = v3;
        if (v19 < 0)
            v19 = -v19;
        v3 = v19;
        v18 = (double)v3;
    }
    v20 = v0;
    if (v15 > v18)
        v20 = v1;
    if (v20 > 180.0)
        v20 -= 360.0;
    sub_48d430((float)v20);
    v21 = a0->field_8;
    v21->field_c14 = (float)v20;
    return v21;
}

