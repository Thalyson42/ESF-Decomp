// PM_NoClip @0x192980 size=206
typedef struct st_592980_0 {
    char padding_0[16];
    unsigned int field_10;
    char field_14;
    char padding_15[11];
    char field_20;
    char padding_21[23];
    char field_38;
    char padding_39[35];
    char field_5c;
    char padding_5d[283659];
    unsigned int field_45468;
    unsigned int field_4546c;
    unsigned int field_45470;
} st_592980_0;

typedef struct st_592980_1 {
    char padding_0[16];
    float field_10;
    char field_14;
    char padding_15[11];
    char field_20;
    char padding_21[23];
    char field_38;
    char padding_39[35];
    char field_5c;
    char padding_5d[283659];
    float field_45468;
    float field_4546c;
    float field_45470;
} st_592980_1;

extern st_592980_1 *pmove;

st_592980_0 * PM_NoClip(double a0, double a1)
{
    int idx;  // ecx
    float v0;  // [bp-0x2c]
    float v1;  // [bp-0x28]
    char v2;  // [bp-0x24]
    float v3;  // [bp-0x1c]

    v1 = pmove->field_45468;
    v0 = pmove->field_4546c;
    sub_489290(&pmove->field_14);
    sub_489290(&pmove->field_20);
    idx = 0;
    do
    {
        *(float *)&(&v2)[4 * idx] = v1 * *(float *)&(&pmove->field_14)[4 * idx] + v0 * *(float *)&(&pmove->field_20)[4 * idx];
        idx += 1;
    } while (idx <= 2);
    v3 += pmove->field_45470;
    sub_48c590(&pmove->field_38, pmove->field_10, &v2, &pmove->field_38);
    memset(&pmove->field_5c, 0, 12);
    return pmove;
}

