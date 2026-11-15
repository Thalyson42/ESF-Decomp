// ReactOnDanger__14CRecoverHPTaskP13danger_info_s @0x178c00 size=144
typedef struct st_578c00_3 {
    char padding_0[8];
    struct st_578c00_4 *field_8;
    struct st_578c00_2 *field_c;
} st_578c00_3;

typedef struct st_578c00_0 {
    char padding_0[24];
    short field_18;
} st_578c00_0;

typedef struct st_578c00_4 {
    struct st_578c00_1 *field_0;
} st_578c00_4;

typedef struct st_578c00_2 {
    char padding_0[480];
    float field_1e0;
} st_578c00_2;

typedef struct st_578c00_1 {
    char padding_0[608];
    float field_260;
} st_578c00_1;

char ReactOnDanger__14CRecoverHPTaskP13danger_info_s(st_578c00_3 *a0, st_578c00_0 *a1)
{
    unsigned int v4;  // esi
    unsigned int v0;  // [bp-0x28]
    int v1;  // [bp-0x24]
    unsigned short v2;  // [bp-0x20]
    unsigned short v3;  // [bp-0x1e]

    v4 = 120;
    if (a1->field_18 > 59)
    {
        v4 = 0;
        if (a1->field_18 <= 99)
            v4 = 30;
    }
    v3 = __fnstcw();
    v2 = v3 | 0xc00;
    v1 = (int)*(float *)(*(int *)a0->field_8 + 608);
    v0 = v4 + v1 / 1000 * 100 - 100;
    return (double)(int)v0 <= a0->field_c->field_1e0;
}

