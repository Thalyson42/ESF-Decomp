// Spawn__10CPathTrack @0xe6f20 size=107
typedef struct st_4e6f20_0 {
    char padding_0[268];
    unsigned int field_10c;
} st_4e6f20_0;

typedef struct st_4e6f20_1 {
    struct st_4e6f20_0 *field_0;
    char padding_4[104];
    unsigned int field_6c;
    unsigned int field_70;
} st_4e6f20_1;

unsigned int Spawn__10CPathTrack(st_4e6f20_1 *a0)
{
    unsigned int v6;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    a0->field_0->field_10c = 1;
    v3 = 8.0f;
    v4 = 8.0f;
    v5 = 8.0f;
    v0 = -8.0f;
    v1 = -8.0f;
    v2 = -8.0f;
    v6 = sub_48a0d0(a0->field_0, &v0, &v3);
    a0->field_6c = 0;
    a0->field_70 = 0;
    return v6;
}

