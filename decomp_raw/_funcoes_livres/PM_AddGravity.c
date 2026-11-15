// PM_AddGravity @0x1924f0 size=105
typedef struct st_5924f0_1 {
    float field_0;
} st_5924f0_1;

typedef struct st_5924f0_0 {
    char padding_0[16];
    float field_10;
    char padding_14[80];
    float field_64;
    char padding_68[20];
    float field_7c;
    char padding_80[64];
    float field_c0;
    char padding_c4[324652];
    struct st_5924f0_1 *field_4f4f0;
} st_5924f0_0;

extern st_5924f0_0 *pmove;

int PM_AddGravity(void)
{
    double v2;  // mm7
    int v0;  // [bp-0x1c]

    v2 = pmove->field_c0;
    if (v2 == 0.0)
        v2 = 1.0;
    pmove->field_64 = (float)(pmove->field_64 - v2 * *(float *)pmove->field_4f4f0 * pmove->field_10);
    pmove->field_64 = pmove->field_7c * pmove->field_10 + pmove->field_64;
    pmove->field_7c = 0;
    return sub_489840(v0);
}

