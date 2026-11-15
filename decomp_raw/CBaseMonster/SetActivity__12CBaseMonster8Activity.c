// SetActivity__12CBaseMonster8Activity @0xd59e0 size=208
typedef struct st_4d59e0_0 {
    unsigned int field_0;
    char padding_4[292];
    int field_128;
    char padding_12c[4];
    unsigned int field_130;
} st_4d59e0_0;

typedef struct st_4d59e0_3 {
    struct st_4d59e0_0 *field_0;
    char padding_4[92];
    struct st_4d59e0_1 *field_60;
    char padding_64[24];
    unsigned int field_7c;
    char padding_80[244];
    int field_174;
    int field_178;
} st_4d59e0_3;

typedef struct st_4d59e0_1 {
    char padding_0[392];
    struct st_4d59e0_2 *field_188;
} st_4d59e0_1;

typedef struct st_4d59e0_2 {
    unsigned int field_0;
} st_4d59e0_2;

typedef struct st_4d59e0_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4d59e0_4;

extern st_4d59e0_2 *g_6168b4;
extern st_4d59e0_4 *gpGlobals;

unsigned int * SetActivity__12CBaseMonster8Activity(st_4d59e0_3 *a0, int a1)
{
    int v0;  // edx
    unsigned int *v1;  // eax

    v0 = sub_488bc0(a0, a1);
    if (v0 > -0x1)
    {
        if ((a0->field_0->field_128 != v0 || !a0->field_7c) && ((unsigned int)(a0->field_174 - 3) > 1 || (unsigned int)(a1 - 3) > 1))
            a0->field_0->field_130 = 0;
        a0->field_0->field_128 = v0;
        sub_488850(a0);
        v1 = a0->field_60->field_188(a0);
    }
    else
    {
        g_6168b4(2, "%s has no sequence for act:%d\n", a0->field_0->field_0 + gpGlobals->field_98, a1);
        v1 = &a0->field_0->field_0;
        v1[74] = 0;
    }
    a0->field_174 = a1;
    a0->field_178 = a1;
    return v1;
}

