// SpriteInit__7CSpritePCcRC6Vector @0xb3970 size=95
typedef struct st_4b3970_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[164];
    unsigned int field_b8;
} st_4b3970_3;

typedef struct st_4b3970_1 {
    unsigned int field_0;
} st_4b3970_1;

typedef struct st_4b3970_2 {
    struct st_4b3970_3 *field_0;
    char padding_4[92];
    struct st_4b3970_0 *field_60;
} st_4b3970_2;

typedef struct st_4b3970_0 {
    char padding_0[8];
    struct st_4b3970_1 *field_8;
} st_4b3970_0;

typedef struct st_4b3970_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4b3970_4;

extern st_4b3970_4 *gpGlobals;

int SpriteInit__7CSpritePCcRC6Vector(st_4b3970_2 *a0, unsigned int a1, unsigned int *a2)
{
    unsigned int *v0;  // edx

    a0->field_0->field_b8 = a1 - gpGlobals->field_98;
    v0 = a0->field_0;
    v0[2] = *a2;
    v0[3] = a2[1];
    v0[4] = a2[2];
    return a0->field_60->field_8(a0);
}

