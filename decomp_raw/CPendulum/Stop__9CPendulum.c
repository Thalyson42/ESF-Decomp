// Stop__9CPendulum @0x930d0 size=104
typedef struct st_4930d0_0 {
    struct st_4930d0_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[116];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
} st_4930d0_0;

typedef struct st_4930d0_1 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[400];
    unsigned int field_1f8;
} st_4930d0_1;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;

int Stop__9CPendulum(st_4930d0_0 *a0)
{
    unsigned int *v0;  // ecx
    unsigned int *v1;  // ecx

    v0 = a0->field_0;
    v0[20] = a0->field_88;
    v0[21] = a0->field_8c;
    v0[22] = a0->field_90;
    a0->field_0->field_1f8 = 0;
    a0->field_c = 0;
    a0->field_10 = 0;
    v1 = a0->field_0;
    v1[23] = g_vecZero;
    v1[24] = g_616790;
    v1[25] = g_616794;
    return g_616794;
}

