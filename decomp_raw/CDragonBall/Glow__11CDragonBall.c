// Glow__11CDragonBall @0xae3c0 size=142
typedef struct st_4ae3c0_0 {
    char padding_0[336];
    float field_150;
    float field_154;
    unsigned int field_158;
    unsigned int field_15c;
    char padding_160[168];
    int field_208;
} st_4ae3c0_0;

typedef struct st_4ae3c0_1 {
    struct st_4ae3c0_0 *field_0;
    char padding_4[104];
    unsigned int field_6c;
} st_4ae3c0_1;

unsigned int Glow__11CDragonBall(st_4ae3c0_1 *a0)
{
    st_4ae3c0_0 *v3;  // edx
    unsigned int v4;  // eax
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    a0->field_0->field_15c = 19;
    v3 = a0->field_0;
    v0 = 255.0f;
    v1 = 255.0f;
    v2 = 0;
    v3->field_150 = v0;
    v3->field_154 = v1;
    v4 = v2;
    v3->field_158 = v4;
    if (a0->field_6c == 1)
        v4 = EMIT_SOUND_DYN(a0->field_0->field_208, 4, "weapons/db_glowing.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return v4;
}

