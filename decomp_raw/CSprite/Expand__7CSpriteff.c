// Expand__7CSpriteff @0xb3b20 size=91
typedef struct st_4b3b20_0 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[88];
    float field_160;
    char padding_164[148];
    float field_1f8;
} st_4b3b20_0;

typedef struct st_4b3b20_1 {
    struct st_4b3b20_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[80];
    unsigned int field_64;
} st_4b3b20_1;

typedef struct st_4b3b20_2 {
    float field_0;
} st_4b3b20_2;

extern char ExpandThink__7CSprite;
extern st_4b3b20_2 *gpGlobals;

unsigned int * Expand__7CSpriteff(st_4b3b20_1 *a0, float a1, float a2)
{
    st_4b3b20_0 *v0;  // eax

    a0->field_0->field_1f8 = a1;
    v0 = a0->field_0;
    v0->field_160 = a2;
    a0->field_c = _INSERT(v0, 0, 0) | 0xffff0000;
    a0->field_10 = &ExpandThink__7CSprite;
    *(float *)&a0->field_0->field_104 = *(float *)gpGlobals;
    *(float *)&a0->field_64 = *(float *)gpGlobals;
    return gpGlobals;
}

