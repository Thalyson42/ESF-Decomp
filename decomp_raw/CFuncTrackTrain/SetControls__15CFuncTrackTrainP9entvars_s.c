// SetControls__15CFuncTrackTrainP9entvars_s @0xebe10 size=184
typedef struct st_4ebe10_0 {
    struct st_4ebe10_1 *field_0;
    char padding_4[120];
    unsigned int field_7c;
    unsigned int field_80;
    unsigned int field_84;
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
} st_4ebe10_0;

typedef struct st_4ebe10_1 {
    char padding_0[20];
    float field_14;
    float field_18;
    float field_1c;
} st_4ebe10_1;

float SetControls__15CFuncTrackTrainP9entvars_s(st_4ebe10_0 *a0, float *a1)
{
    unsigned int *v6;  // esi
    unsigned int *v7;  // edx
    unsigned int *v8;  // eax
    unsigned int *v9;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v6 = a1 + 2;
    v7 = &a0->field_0->field_14;
    v3 = a1[2] - a0->field_0->field_14;
    v4 = *(float *)&v6[1] - *(float *)&v7[1];
    v5 = *(float *)&v6[2] - *(float *)&v7[2];
    v8 = a1 + 55;
    v0 = a1[55] + v3;
    v1 = *(float *)&v8[1] + v4;
    v2 = *(float *)&v8[2] + v5;
    *(float *)&a0->field_7c = v0;
    *(float *)&a0->field_80 = v1;
    *(float *)&a0->field_84 = v2;
    v9 = a1 + 58;
    v0 = a1[58] + v3;
    v1 = *(float *)&v9[1] + v4;
    v2 = *(float *)&v9[2] + v5;
    *(float *)&a0->field_88 = v0;
    *(float *)&a0->field_8c = v1;
    *(float *)&a0->field_90 = v2;
    return v2;
}

