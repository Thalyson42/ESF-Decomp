// PM_ViewEntity @0x18d3e0 size=237
typedef struct st_58d3e0_1 {
    unsigned int field_0;
} st_58d3e0_1;

typedef struct st_58d3e0_0 {
    char padding_0[56];
    float field_38;
    float field_3c;
    float field_40;
    char field_44;
    char padding_45[324923];
    struct st_58d3e0_1 *field_4f580;
} st_58d3e0_0;

extern st_58d3e0_0 *pmove;

unsigned int PM_ViewEntity(void)
{
    int idx;  // edx
    unsigned int v15;  // eax
    int v0;  // [bp-0x12c]
    int v1;  // [bp-0x128]
    int v2;  // [bp-0x124]
    float v3;  // [bp-0x118]
    char v4;  // [bp-0x104]
    int v5;  // [bp-0xd4]
    char v6;  // [bp-0xa4]
    float v7;  // [bp-0x84]
    float v8;  // [bp-0x80]
    float v9;  // [bp-0x7c]
    char v10;  // [bp-0x64]
    char v11;  // [bp-0x44]
    float v12;  // [bp-0x24]

    v3 = 256.0f;
    sub_4896c0(&pmove->field_44, &v12, &v11, &v10, v0, v1, v2);
    v7 = pmove->field_38;
    v8 = pmove->field_3c;
    v9 = pmove->field_40;
    idx = 0;
    do
    {
        *(float *)&(&v6)[4 * idx] = v3 * (&v12)[idx] + (&v7)[idx];
        idx += 1;
    } while (idx <= 2);
    v15 = pmove->field_4f580(&v4, &v7, &v6, 2, 0xffffffff);
    if (v5 <= 0)
        return v15;
    return sub_48d260(v5, 111, 0.30000001192092896f);
}

