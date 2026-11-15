// FVisible__11CBaseEntityRC6Vector @0xa6b60 size=143
typedef struct st_4a6b60_1 {
    char padding_0[208];
    struct st_4a6b60_2 *field_d0;
} st_4a6b60_1;

typedef struct st_4a6b60_2 {
    unsigned int field_0;
} st_4a6b60_2;

typedef struct st_4a6b60_0 {
    char padding_0[520];
    int field_208;
} st_4a6b60_0;

typedef struct st_4a6b60_3 {
    struct st_4a6b60_0 *field_0;
    char padding_4[92];
    struct st_4a6b60_1 *field_60;
} st_4a6b60_3;

int FVisible__11CBaseEntityRC6Vector(st_4a6b60_3 *a0, int a1)
{
    char v0;  // [bp-0x84], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x80]
    unsigned int v2;  // [bp-0x7c]
    unsigned int v3;  // [bp-0x64]
    unsigned int v4;  // [bp-0x60]
    unsigned int v5;  // [bp-0x5c]
    char v6;  // [bp-0x44]
    float v7;  // [bp-0x34]

    a0->field_60->field_d0(&v0, a0);
    v3 = v0;
    v4 = v1;
    v5 = v2;
    UTIL_TraceLine(&v3, a1, 1, 1, a0->field_0->field_208, &v6);
    return 1.0 == v7;
}

