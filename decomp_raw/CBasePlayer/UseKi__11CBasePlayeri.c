// UseKi__11CBasePlayeri @0xf5880 size=134
typedef struct st_4f5880_4 {
    struct st_4f5880_0 *field_0;
    char padding_4[1888];
    struct st_4f5880_3 *field_764;
} st_4f5880_4;

typedef struct st_4f5880_2 {
    unsigned int field_0;
} st_4f5880_2;

typedef struct st_4f5880_0 {
    char padding_0[608];
    float field_260;
} st_4f5880_0;

typedef struct st_4f5880_1 {
    char padding_0[64];
    struct st_4f5880_2 *field_40;
} st_4f5880_1;

typedef struct st_4f5880_3 {
    char padding_0[4];
    struct st_4f5880_1 *field_4;
} st_4f5880_3;

unsigned int UseKi__11CBasePlayeri(double a0, st_4f5880_4 *a1, int a2)
{
    st_4f5880_0 *v3;  // edx
    double v4;  // mm0
    unsigned short v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0xa]
    int v2;  // [bp-0x8]

    a1->field_764->field_4->field_40(a1->field_764);
    v2 = a2;
    v1 = __fnstcw();
    v0 = v1 | 0xc00;
    v2 = (int)(a0 * (double)v2);
    v3 = a1->field_0;
    v4 = (double)v2;
    if (v4 > v3->field_260)
        return 0;
    v3->field_260 = (float)(v3->field_260 - v4);
    return 1;
}

