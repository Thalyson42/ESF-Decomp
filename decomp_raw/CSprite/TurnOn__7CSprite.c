// TurnOn__7CSprite @0xb3ce0 size=142
typedef struct st_4b3ce0_0 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[16];
    unsigned int field_118;
    char padding_11c[20];
    unsigned int field_130;
    char padding_134[4];
    unsigned int field_138;
    char padding_13c[100];
    char field_1a0;
} st_4b3ce0_0;

typedef struct st_4b3ce0_1 {
    struct st_4b3ce0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[80];
    unsigned int field_64;
    unsigned int field_68;
} st_4b3ce0_1;

typedef struct st_4b3ce0_2 {
    float field_0;
} st_4b3ce0_2;

extern char AnimateThink__7CSprite;
extern st_4b3ce0_2 *gpGlobals;

st_4b3ce0_0 * TurnOn__7CSprite(st_4b3ce0_1 *a0)
{
    st_4b3ce0_0 *v0;  // eax
    st_4b3ce0_0 *v2;  // eax

    a0->field_0->field_118 = 0;
    if (*(float *)&a0->field_0->field_138 != 0.0f && 1.0 < *(float *)&a0->field_68 || (v0 = a0->field_0, v0->field_1a0 & 2))
    {
        a0->field_c = _INSERT(v0, 0, 0) | 0xffff0000;
        a0->field_10 = &AnimateThink__7CSprite;
        *(float *)&a0->field_0->field_104 = *(float *)gpGlobals;
        *(float *)&a0->field_64 = *(float *)gpGlobals;
    }
    v2 = a0->field_0;
    v2->field_130 = 0;
    return v2;
}

