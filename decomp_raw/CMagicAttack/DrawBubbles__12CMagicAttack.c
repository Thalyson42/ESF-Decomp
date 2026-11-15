// DrawBubbles__12CMagicAttack @0xceb50 size=145
typedef struct st_4ceb50_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[404];
    unsigned int field_1c0;
} st_4ceb50_0;

st_4ceb50_0 ** DrawBubbles__12CMagicAttack(st_4ceb50_0 **a0)
{
    st_4ceb50_0 **v9;  // eax
    st_4ceb50_0 *v10;  // edx
    unsigned int *v11;  // eax
    double v12;  // mm5
    double v13;  // mm5
    unsigned int *v14;  // eax
    float v0;  // [bp-0x64]
    float v1;  // [bp-0x60]
    float v2;  // [bp-0x5c]
    float v3;  // [bp-0x44]
    float v4;  // [bp-0x40]
    float v5;  // [bp-0x3c]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]

    v9 = a0;
    v10 = *v9;
    if (v10->field_1c0 == 3)
    {
        v11 = &v10->field_20;
        v12 = 0.10000000149011612 * v10->field_20;
        v3 = (float)v12;
        v13 = 0.10000000149011612 * *(float *)&v11[1];
        v4 = (float)v13;
        v5 = (float)(0.10000000149011612 * *(float *)&v11[2]);
        v14 = &v10->field_8;
        v6 = (float)(v10->field_8 - v12);
        v7 = (float)(*(float *)&v14[1] - v13);
        v8 = *(float *)&v14[2] - v5;
        v0 = v10->field_8;
        v1 = *(float *)&v14[1];
        v2 = *(float *)&v14[2];
        v9 = UTIL_BubbleTrail(&v6, &v0, 4);
    }
    return v9;
}

