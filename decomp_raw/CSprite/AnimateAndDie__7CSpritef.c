// AnimateAndDie__7CSpritef @0xb6ff0 size=88
typedef struct st_4b6ff0_0 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[48];
    float field_138;
    char padding_13c[168];
    unsigned int field_1e4;
} st_4b6ff0_0;

typedef struct st_4b6ff0_1 {
    struct st_4b6ff0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[84];
    unsigned int field_68;
} st_4b6ff0_1;

typedef struct st_4b6ff0_2 {
    float field_0;
} st_4b6ff0_2;

extern char AnimateUntilDead__7CSprite;
extern st_4b6ff0_2 *gpGlobals;

short AnimateAndDie__7CSpritef(st_4b6ff0_1 *a0, float a1)
{
    st_4b6ff0_0 *v1;  // eax

    a0->field_c = _INSERT(0, 0, 0) | 0xffff0000;
    a0->field_10 = &AnimateUntilDead__7CSprite;
    a0->field_0->field_138 = a1;
    *(float *)&a0->field_0->field_1e4 = *(float *)&a0->field_68 / a1 + *(float *)gpGlobals;
    v1 = a0->field_0;
    *(float *)&v1->field_104 = *(float *)gpGlobals;
    return (unsigned short)v1;
}

