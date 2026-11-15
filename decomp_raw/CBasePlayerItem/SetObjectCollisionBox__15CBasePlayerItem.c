// SetObjectCollisionBox__15CBasePlayerItem @0x137e30 size=194
typedef struct st_537e30_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[176];
    unsigned int field_c4;
    unsigned int field_c8;
    unsigned int field_cc;
    unsigned int field_d0;
    unsigned int field_d4;
    unsigned int field_d8;
} st_537e30_0;

float SetObjectCollisionBox__15CBasePlayerItem(st_537e30_0 **a0)
{
    st_537e30_0 *v9;  // edx
    unsigned int *v10;  // eax
    st_537e30_0 *v11;  // edx
    unsigned int *v12;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x38]
    float v4;  // [bp-0x34]
    float v5;  // [bp-0x30]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]

    v9 = *a0;
    v0 = -24.0f;
    v1 = -24.0f;
    v2 = 0;
    v10 = &v9->field_8;
    v6 = v9->field_8 + v0;
    v7 = *(float *)&v10[1] + v1;
    v8 = *(float *)&v10[2] + v2;
    *(float *)&v9->field_c4 = v6;
    *(float *)&v9->field_c8 = v7;
    *(float *)&v9->field_cc = v8;
    v11 = *a0;
    v3 = 24.0f;
    v4 = 24.0f;
    v5 = 16.0f;
    v12 = &v11->field_8;
    v0 = v11->field_8 + v3;
    v1 = *(float *)&v12[1] + v4;
    v2 = *(float *)&v12[2] + v5;
    *(float *)&v11->field_d0 = v0;
    *(float *)&v11->field_d4 = v1;
    *(float *)&v11->field_d8 = v2;
    return v2;
}

