// ReactOnDanger__12CPowerUpTaskP13danger_info_s @0x1789d0 size=100
typedef struct st_5789d0_0 {
    char padding_0[24];
    short field_18;
} st_5789d0_0;

typedef struct st_5789d0_3 {
    struct st_5789d0_1 *field_0;
} st_5789d0_3;

typedef struct st_5789d0_1 {
    char padding_0[608];
    float field_260;
} st_5789d0_1;

typedef struct st_5789d0_2 {
    char padding_0[4];
    unsigned int field_4;
    struct st_5789d0_3 *field_8;
} st_5789d0_2;

char ReactOnDanger__12CPowerUpTaskP13danger_info_s(st_5789d0_2 *a0, st_5789d0_0 *a1)
{
    short v3;  // cx
    int v0;  // [bp-0x24]
    unsigned short v1;  // [bp-0x20]
    unsigned short v2;  // [bp-0x1e]

    if (a1->field_18 > 59)
    {
        v3 = 20;
        if (a1->field_18 <= 99)
            v3 = 100;
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)*(float *)(*(int *)a0->field_8 + 608);
        if (v0 >= v3)
        {
            a0->field_4 = 2;
            return 1;
        }
    }
    return 0;
}

