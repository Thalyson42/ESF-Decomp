// Spawn__16CDragonBallPoint @0x9be20 size=96
typedef struct st_49be20_0 {
    char padding_0[8];
    char field_8;
    char padding_9[107];
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[140];
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
} st_49be20_0;

extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;

int Spawn__16CDragonBallPoint(st_49be20_0 **a0)
{
    st_49be20_0 *v0;  // ecx

    UTIL_SetOrigin(*a0, &*a0->field_8);
    *a0->field_10c = 0;
    *a0->field_118 = 128;
    v0 = *a0;
    v0->field_74 = g_vecZero;
    v0->field_78 = g_vecZero+4;
    v0->field_7c = g_vecZero+8;
    return g_vecZero+8;
}

