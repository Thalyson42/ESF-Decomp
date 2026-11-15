// Spawn__11CAfterImage @0xef900 size=146
typedef struct st_4ef900_0 {
    unsigned int field_0;
    char padding_4[256];
    float field_104;
    char padding_108[64];
    unsigned int field_148;
    char padding_14c[16];
    unsigned int field_15c;
} st_4ef900_0;

typedef struct st_4ef900_1 {
    struct st_4ef900_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[72];
    unsigned int field_64;
} st_4ef900_1;

typedef struct st_4ef900_2 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4ef900_2;

extern char FadeOutThink__11CAfterImage;
extern st_4ef900_2 *gpGlobals;

unsigned int * Spawn__11CAfterImage(st_4ef900_1 *a0)
{
    unsigned int v0;  // eax
    st_4ef900_0 *v2;  // eax

    a0->field_0->field_15c = 21;
    a0->field_0->field_148 = 2;
    *(float *)&a0->field_0->padding_14c[0] = 255.0f;
    v0 = -1 * gpGlobals->field_98 + 0x5a5100;
    a0->field_0->field_0 = v0;
    *(float *)&a0->field_64 = gpGlobals->field_0;
    a0->field_c = _INSERT(v0, 0, 0) | 0xffff0000;
    a0->field_10 = &FadeOutThink__11CAfterImage;
    a0->field_14 = 0;
    a0->field_18 = 0;
    v2 = a0->field_0;
    v2->field_104 = (float)(0.1 + gpGlobals->field_0);
    return v2;
}

