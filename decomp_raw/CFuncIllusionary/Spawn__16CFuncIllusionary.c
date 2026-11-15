// Spawn__16CFuncIllusionary @0x915c0 size=127
typedef struct st_4915c0_0 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[92];
    unsigned int field_b8;
    char padding_bc[76];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[248];
    unsigned int field_208;
} st_4915c0_0;

typedef struct st_4915c0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4915c0_1;

typedef struct st_4915c0_2 {
    unsigned int field_0;
} st_4915c0_2;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;
extern st_4915c0_2 *g_6167c8;
extern st_4915c0_1 *gpGlobals;

int Spawn__16CFuncIllusionary(st_4915c0_0 **a0)
{
    unsigned int *v0;  // ecx

    v0 = *a0;
    v0[20] = g_vecZero;
    v0[21] = g_616790;
    v0[22] = g_616794;
    *a0->field_108 = 0;
    *a0->field_10c = 0;
    return g_6167c8(*a0->field_208, *a0->field_b8 + gpGlobals->field_98);
}

