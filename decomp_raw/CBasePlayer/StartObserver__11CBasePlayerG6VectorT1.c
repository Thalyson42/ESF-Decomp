// StartObserver__11CBasePlayerG6VectorT1 @0xf8080 size=195
typedef struct st_4f8080_1 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[24];
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[32];
    unsigned int field_a0;
    char padding_a4[100];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
    char padding_11c[80];
    unsigned int field_16c;
    char padding_170[4];
    unsigned int field_174;
    unsigned int field_178;
    unsigned int field_17c;
} st_4f8080_1;

typedef struct st_4f8080_0 {
    struct st_4f8080_1 *field_0;
    char padding_4[780];
    char field_310;
} st_4f8080_0;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;

int StartObserver__11CBasePlayerG6VectorT1(st_4f8080_0 *a0, int a1, unsigned int *a2)
{
    unsigned int *v0;  // ecx
    unsigned int *v1;  // edx
    unsigned int *v2;  // ecx

    a0->field_310 = a0->field_310 | 32;
    v0 = a0->field_0;
    v0[93] = g_vecZero;
    v0[94] = g_616790;
    v0[95] = g_616794;
    v1 = a0->field_0;
    v1[29] = *a2;
    v1[30] = a2[1];
    v1[31] = a2[2];
    v2 = &a0->field_0->field_74;
    v1[20] = a0->field_0->field_74;
    v1[21] = v2[1];
    v1[22] = v2[2];
    a0->field_0->field_a0 = 1;
    a0->field_0->field_10c = 0;
    a0->field_0->field_16c = 0;
    a0->field_0->field_108 = 0;
    a0->field_0->field_118 = 128;
    return sub_48db50(a0->field_0, a1);
}

