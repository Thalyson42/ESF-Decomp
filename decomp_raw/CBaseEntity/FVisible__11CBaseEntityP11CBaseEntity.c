// FVisible__11CBaseEntityP11CBaseEntity @0xa6a30 size=293
typedef struct st_4a6a30_1 {
    char padding_0[208];
    struct st_4a6a30_2 *field_d0;
} st_4a6a30_1;

typedef struct st_4a6a30_2 {
    unsigned int field_0;
} st_4a6a30_2;

typedef struct st_4a6a30_0 {
    char padding_0[420];
    char field_1a4;
    char padding_1a5[27];
    unsigned int field_1c0;
} st_4a6a30_0;

typedef struct st_4a6a30_4 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[352];
    float field_174;
    float field_178;
    float field_17c;
    char padding_180[64];
    unsigned int field_1c0;
    char padding_1c4[68];
    int field_208;
} st_4a6a30_4;

typedef struct st_4a6a30_3 {
    struct st_4a6a30_0 *field_0;
    char padding_4[92];
    struct st_4a6a30_1 *field_60;
} st_4a6a30_3;

unsigned int FVisible__11CBaseEntityP11CBaseEntity(st_4a6a30_4 **a0, st_4a6a30_3 *a1)
{
    st_4a6a30_4 *v11;  // eax
    unsigned int *v12;  // edx
    float v0;  // [bp-0xa4]
    float v1;  // [bp-0xa0]
    float v2;  // [bp-0x9c]
    float v3;  // [bp-0x84]
    float v4;  // [bp-0x80]
    float v5;  // [bp-0x7c]
    float v6;  // [bp-0x64]
    float v7;  // [bp-0x60]
    float v8;  // [bp-0x5c]
    char v9;  // [bp-0x44]
    float v10;  // [bp-0x34]

    if (a1->field_0->field_1a4 < 0)
        return 0;
    if (*a0->field_1c0 == 3)
    {
LABEL_4a6a7f:
        if (a1->field_0->field_1c0)
        {
LABEL_4a6a8e:
            v11 = *a0;
            v12 = &v11->field_8;
            v0 = v11->field_8 + v11->field_174;
            v1 = *(float *)&v12[1] + v11->field_178;
            v2 = *(float *)&v12[2] + v11->field_17c;
            v6 = v0;
            v7 = v1;
            v8 = v2;
            a1->field_60->field_d0(&v0, a1);
            v3 = v0;
            v4 = v1;
            v5 = v2;
            UTIL_TraceLine(&v6, &v3, 1, 1, *a0->field_208, &v9);
            if (v10 == 1.0f)
                return 1;
        }
    }
    else if (a1->field_0->field_1c0 != 3)
    {
        if (*a0->field_1c0 != 3)
            goto LABEL_4a6a8e;
        goto LABEL_4a6a7f;
    }
    return 0;
}

