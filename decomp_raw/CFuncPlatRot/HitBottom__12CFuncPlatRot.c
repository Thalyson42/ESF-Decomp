// HitBottom__12CFuncPlatRot @0xe97f0 size=95
typedef struct st_4e97f0_0 {
    struct st_4e97f0_1 *field_0;
    char padding_4[276];
    unsigned int field_118;
    unsigned int field_11c;
    unsigned int field_120;
} st_4e97f0_0;

typedef struct st_4e97f0_1 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
} st_4e97f0_1;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;

unsigned int HitBottom__12CFuncPlatRot(st_4e97f0_0 *a0)
{
    unsigned int *v0;  // ecx
    unsigned int *v1;  // edx
    unsigned int v2;  // eax

    sub_48a050(a0);
    v0 = a0->field_0;
    v0[23] = g_vecZero;
    v0[24] = g_616790;
    v0[25] = g_616794;
    v1 = a0->field_0;
    v1[20] = a0->field_118;
    v1[21] = a0->field_11c;
    v2 = a0->field_120;
    v1[22] = v2;
    return v2;
}

