// Stop__10CGunTarget @0xee2b0 size=75
typedef struct st_4ee2b0_0 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[216];
    unsigned int field_104;
    char padding_108[100];
    unsigned int field_16c;
} st_4ee2b0_0;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;

unsigned int * Stop__10CGunTarget(st_4ee2b0_0 **a0)
{
    unsigned int *v0;  // ecx
    unsigned int *v1;  // eax

    v0 = *a0;
    v0[8] = g_vecZero;
    v0[9] = g_616790;
    v0[10] = g_616794;
    *a0->field_104 = 0;
    v1 = *a0;
    v1[91] = 0;
    return v1;
}

