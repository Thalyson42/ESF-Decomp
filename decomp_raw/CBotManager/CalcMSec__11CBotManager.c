// CalcMSec__11CBotManager @0x13f1a0 size=153
typedef struct st_53f1a0_1 {
    char padding_0[3384];
    unsigned int field_d38;
    unsigned int field_d3c;
    float field_d40;
} st_53f1a0_1;

typedef struct st_53f1a0_0 {
    float field_0;
} st_53f1a0_0;

extern st_53f1a0_0 *gpGlobals;

unsigned int * CalcMSec__11CBotManager(st_53f1a0_1 *a0)
{
    double v3;  // mm7
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)((*(float *)gpGlobals - *(float *)&a0->field_d3c) * 1000.0);
    v3 = (double)v0;
    *(float *)&a0->field_d38 = (float)v3;
    if (255.0 < v3)
        *(float *)&a0->field_d38 = 255.0f;
    a0->field_d40 = (float)(*(float *)&a0->field_d38 / 1000.0);
    *(float *)&a0->field_d3c = *(float *)gpGlobals;
    return gpGlobals;
}

