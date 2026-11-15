// Use__9CBubblingP11CBaseEntityT18USE_TYPEf @0xaf470 size=147
typedef struct st_4af470_1 {
    unsigned int field_0;
    char padding_4[256];
    unsigned int field_104;
} st_4af470_1;

typedef struct st_4af470_0 {
    struct st_4af470_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[92];
    int field_70;
} st_4af470_0;

typedef struct st_4af470_2 {
    float field_0;
    char padding_4[256];
    unsigned int field_104;
} st_4af470_2;

extern unsigned int FizzThink__9CBubbling;
extern st_4af470_2 *gpGlobals;

unsigned int * Use__9CBubblingP11CBaseEntityT18USE_TYPEf(st_4af470_0 *a0, unsigned int a1, unsigned int a2, int a3)
{
    unsigned int v0;  // eax
    unsigned int *v2;  // eax

    v0 = CBaseEntity::ShouldToggle(a0, a3, a0->field_70);
    if (v0)
    {
        v0 = !a0->field_70;
        a0->field_70 = v0;
    }
    if (!a0->field_70)
    {
        a0->field_c = 0;
        a0->field_10 = 0;
        v2 = &a0->field_0->field_0;
        v2[65] = 0;
        return v2;
    }
    a0->field_c = _INSERT(v0, 0, 0) | 0xffff0000;
    a0->field_10 = &FizzThink__9CBubbling;
    *(float *)&a0->field_0->field_104 = (float)(0.1 + gpGlobals->field_0);
    return gpGlobals;
}

