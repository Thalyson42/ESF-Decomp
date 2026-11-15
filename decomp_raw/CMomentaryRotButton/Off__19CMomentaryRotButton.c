// Off__19CMomentaryRotButton @0x985a0 size=164
typedef struct st_4985a0_1 {
    struct st_4985a0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[240];
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
} st_4985a0_1;

typedef struct st_4985a0_0 {
    char padding_0[92];
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[152];
    unsigned int field_100;
    float field_104;
    char padding_108[152];
    char field_1a0;
} st_4985a0_0;

extern unsigned int Return__19CMomentaryRotButton;
extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;

unsigned int Off__19CMomentaryRotButton(st_4985a0_1 *a0)
{
    st_4985a0_0 *v0;  // ecx
    st_4985a0_0 *v1;  // ecx
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    v0 = a0->field_0;
    v0->field_5c = g_vecZero;
    v0->field_60 = g_vecZero+4;
    v0->field_64 = g_vecZero+8;
    a0->field_104 = 0;
    v1 = a0->field_0;
    if (v1->field_1a0 & 16 && !(v2 = _INSERT(g_vecZero+8, 0, 0), 0.0 >= *(float *)&a0->field_10c))
    {
        v3 = _INSERT(_INSERT(g_vecZero+8, 0, 0), 0, 0);
        a0->field_c = v3 | 0xffff0000;
        a0->field_10 = &Return__19CMomentaryRotButton;
        v1->field_104 = (float)(0.1 + *(float *)&v1->field_100);
        a0->field_108 = 0xffffffff;
    }
    else
    {
        a0->field_c = 0;
        a0->field_10 = 0;
    }
    return v3 | 0xffff0000;
}

