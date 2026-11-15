// PM_WallJumpPush @0x18f1e0 size=139
typedef struct st_58f1e0_0 {
    char padding_0[100];
    unsigned int field_64;
    char padding_68[96];
    char field_c8;
    char padding_c9[283565];
    char field_45476;
} st_58f1e0_0;

typedef struct st_58f1e0_1 {
    char padding_0[100];
    float field_64;
    char padding_68[96];
    char field_c8;
    char padding_c9[283565];
    char field_45476;
} st_58f1e0_1;

extern st_58f1e0_1 *pmove;

st_58f1e0_0 * PM_WallJumpPush(double a0)
{
    double v2;  // mm7
    double v3;  // mm7
    double v4;  // mm6
    int i;  // ecx
    int v0;  // [bp-0x1c]

    sub_48cd40(v0);
    v3 = v2 + 600.0;
    v4 = v3 + v3;
    if (1400.0 < v4)
        v4 = 1400.0;
    i = 0;
    do
    {
        *(float *)&pmove->padding_0[92 + 4 * i] = (float)(v3 * *(float *)&pmove->padding_c9[375 + 4 * i]);
        i += 1;
    } while (i <= 2);
    pmove->field_64 = (float)v4;
    if (pmove->field_45476 & 2)
    {
        pmove->field_45476 = pmove->field_45476 & 253;
        pmove->field_c8 = pmove->field_c8 | 2;
    }
    return pmove;
}

