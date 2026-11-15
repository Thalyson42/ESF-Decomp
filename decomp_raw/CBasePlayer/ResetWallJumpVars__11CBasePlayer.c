// ResetWallJumpVars__11CBasePlayer @0xf6fb0 size=206
typedef struct st_4f6fb0_0 {
    struct st_4f6fb0_1 *field_0;
    char padding_4[888];
    unsigned int field_37c;
    char padding_380[32];
    unsigned int field_3a0;
    char padding_3a4[40];
    unsigned int field_3cc;
    unsigned int field_3d0;
    unsigned int field_3d4;
    char padding_3d8[300];
    char field_504;
    char padding_505[451];
    unsigned int field_6c8;
    char padding_6cc[136];
    unsigned int field_754;
} st_4f6fb0_0;

typedef struct st_4f6fb0_1 {
    char padding_0[588];
    unsigned int field_24c;
    char padding_250[56];
    unsigned int field_288;
    unsigned int field_28c;
    unsigned int field_290;
} st_4f6fb0_1;

int ResetWallJumpVars__11CBasePlayer(st_4f6fb0_0 *a0)
{
    unsigned int *v3;  // edx
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    v0 = 0;
    v1 = 0;
    v2 = 0;
    a0->field_3cc = v0;
    a0->field_3d0 = v1;
    a0->field_3d4 = v2;
    a0->field_3a0 = 0;
    a0->field_6c8 = 0;
    a0->field_37c = 0;
    a0->field_754 = 0x3f800000;
    a0->field_0->field_24c = 0;
    v3 = a0->field_0;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v3[162] = v0;
    v3[163] = v1;
    v3[164] = v2;
    sub_489d40(&a0->field_504);
    return sub_48c610(&a0->field_504);
}

