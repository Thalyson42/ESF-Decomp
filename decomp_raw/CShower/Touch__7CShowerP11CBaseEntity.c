// Touch__7CShowerP11CBaseEntity @0xb9e00 size=150
typedef struct st_4b9e00_2 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[377];
    char field_185;
    char padding_186[82];
    unsigned int field_1d8;
} st_4b9e00_2;

typedef struct st_4b9e00_0 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[377];
    char field_1a5;
    char padding_1a6[82];
    unsigned int field_1f8;
} st_4b9e00_0;

int Touch__7CShowerP11CBaseEntity(st_4b9e00_0 **a0)
{
    st_4b9e00_0 *v3;  // edx
    st_4b9e00_2 *v4;  // eax
    double v5;  // mm7
    st_4b9e00_0 *v6;  // edx
    float v7;  // 128
    unsigned int v9;  // eax
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    v3 = *a0;
    if (v3->field_1a5 & 2)
    {
        v4 = &v3->field_20;
        v5 = 0.10000000149011612;
    }
    else
    {
        v3 = *a0;
        v4 = &*a0->field_20;
        v5 = 0.6000000238418579;
    }
    v0 = (float)(v5 * v3->field_20);
    v1 = (float)(v5 * *(float *)&v4->field_4);
    v2 = (float)(v5 * *(float *)&v4->field_8);
    v3->field_20 = v0;
    v3->field_24 = v1;
    v3->field_28 = v2;
    v6 = *a0;
    v7 = v6->field_20 * v6->field_20 + v6->field_24 * v6->field_24;
    v9 = _INSERT(_INSERT(v2, 0, 0), 1, (isnan(v7) ? 69 : v7 == 10.0 ? 64 : v7 < 10.0));
    if (v7 < 10.0f)
        v6->field_1f8 = 0;
    return v9;
}

