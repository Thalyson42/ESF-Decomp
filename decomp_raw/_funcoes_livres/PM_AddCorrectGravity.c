// PM_AddCorrectGravity @0x18f080 size=149
typedef struct st_58f080_1 {
    float field_0;
} st_58f080_1;

typedef struct st_58f080_0 {
    char padding_0[16];
    float field_10;
    char padding_14[80];
    float field_64;
    char padding_68[20];
    float field_7c;
    char padding_80[64];
    float field_c0;
    char padding_c4[8];
    float field_cc;
    char padding_d0[324640];
    struct st_58f080_1 *field_4f4f0;
} st_58f080_0;

extern st_58f080_0 *pmove;

unsigned int PM_AddCorrectGravity(void)
{
    double v1;  // mm6
    unsigned int v2;  // eax

    if (pmove->field_cc != 0.0f)
        return v2;
    v1 = pmove->field_c0;
    if (v1 == 0.0)
        v1 = 1.0;
    pmove->field_64 = (float)(pmove->field_64 - v1 * *(float *)pmove->field_4f4f0 * 0.5 * pmove->field_10);
    pmove->field_64 = pmove->field_7c * pmove->field_10 + pmove->field_64;
    pmove->field_7c = 0;
    v2 = sub_489840();
    return v2;
}

