// Spawn__17CInfoIntermission @0xfeab0 size=120
typedef struct st_4feab0_1 {
    char padding_0[8];
    char field_8;
    char padding_9[107];
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[132];
    float field_104;
    char padding_108[4];
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
} st_4feab0_1;

typedef struct st_4feab0_0 {
    float field_0;
} st_4feab0_0;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;
extern st_4feab0_0 *gpGlobals;

unsigned int * Spawn__17CInfoIntermission(st_4feab0_1 **a0)
{
    st_4feab0_1 *v0;  // ecx

    sub_48db50(*a0, &*a0->field_8);
    *a0->field_10c = 0;
    *a0->field_118 = 128;
    v0 = *a0;
    v0->field_74 = g_vecZero;
    v0->field_78 = g_616790;
    v0->field_7c = g_616794;
    *a0->field_104 = (float)(*(float *)gpGlobals + 2.0);
    return gpGlobals;
}

