// ExplosionCreate__FRC6VectorT0P7edict_sii @0xba720 size=173
typedef struct st_4ba720_1 {
    char padding_0[8];
    struct st_4ba720_2 *field_8;
    char padding_c[4];
    struct st_4ba720_2 *field_10;
    char padding_14[164];
    struct st_4ba720_2 *field_b8;
} st_4ba720_1;

typedef struct st_4ba720_2 {
    unsigned int field_0;
} st_4ba720_2;

typedef struct st_4ba720_0 {
    char padding_0[416];
    char field_1a0;
} st_4ba720_0;

typedef struct st_4ba720_3 {
    struct st_4ba720_0 *field_0;
    char padding_4[92];
    struct st_4ba720_1 *field_60;
} st_4ba720_3;

int ExplosionCreate__FRC6VectorT0P7edict_sii(int a0, int a1, int a2, int a3, unsigned int a4)
{
    st_4ba720_3 *v7;  // edi
    int v0;  // [bp-0xbc]
    int v1;  // [bp-0xb8]
    int v2;  // [bp-0xb4]
    char v3;  // [bp-0xa4]
    char v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20]
    char *v6;  // [bp-0x1c]

    v7 = CBaseEntity::Create("env_explosion", a0, a1, a2, v0, v1, v2);
    sprintf@GLIBC_2.0(&v3, "%3d", a3);
    v5 = "iMagnitude";
    v6 = &v3;
    v7->field_60->field_10(v7, &v4);
    if (!a4)
        v7->field_0->field_1a0 = v7->field_0->field_1a0 | 1;
    v7->field_60->field_8(v7);
    return v7->field_60->field_b8(v7, 0, 0, 3, 0);
}

