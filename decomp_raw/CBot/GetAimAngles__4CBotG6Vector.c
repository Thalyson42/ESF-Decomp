// GetAimAngles__4CBotG6Vector @0x143980 size=103
typedef struct st_543980_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_543980_0;

int GetAimAngles__4CBotG6Vector(void)
{
    float *v7;  // edx
    unsigned int *v8;  // ecx
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    char v3;  // [bp-0x24]
    int v4;  // [bp+0x4]
    st_543980_0 **v5;  // [bp+0x8]
    float *v6;  // [bp+0xc]

    v7 = v6;
    v8 = &*v5->field_8;
    v0 = *v7 - *v5->field_8;
    v1 = v7[1] - *(float *)&v8[1];
    v2 = v7[2] - *(float *)&v8[2];
    sub_488860(&v3, &v0);
    sub_489120(v4, &v3);
    return v4;
}

