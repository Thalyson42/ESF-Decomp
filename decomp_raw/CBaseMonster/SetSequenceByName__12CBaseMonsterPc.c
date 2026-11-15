// SetSequenceByName__12CBaseMonsterPc @0xd5ab0 size=177
typedef struct st_4d5ab0_3 {
    struct st_4d5ab0_0 *field_0;
    char padding_4[92];
    struct st_4d5ab0_1 *field_60;
    char padding_64[24];
    unsigned int field_7c;
} st_4d5ab0_3;

typedef struct st_4d5ab0_0 {
    unsigned int field_0;
    char padding_4[292];
    int field_128;
    char padding_12c[4];
    unsigned int field_130;
} st_4d5ab0_0;

typedef struct st_4d5ab0_1 {
    char padding_0[392];
    struct st_4d5ab0_2 *field_188;
} st_4d5ab0_1;

typedef struct st_4d5ab0_2 {
    unsigned int field_0;
} st_4d5ab0_2;

typedef struct st_4d5ab0_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4d5ab0_4;

extern st_4d5ab0_2 *g_6168b4;
extern st_4d5ab0_4 *gpGlobals;

unsigned int * SetSequenceByName__12CBaseMonsterPc(st_4d5ab0_3 *a0, int a1)
{
    int v0;  // edx
    st_4d5ab0_0 *v1;  // eax

    v0 = sub_48afe0(a0, a1);
    if (v0 <= -0x1)
    {
        g_6168b4(2, "%s has no sequence named:%f\n", a0->field_0->field_0 + gpGlobals->field_98, a1);
        v1 = a0->field_0;
        v1->field_128 = 0;
        return v1;
    }
    if (a0->field_0->field_128 != v0 || !a0->field_7c)
        a0->field_0->field_130 = 0;
    a0->field_0->field_128 = v0;
    sub_488850(a0);
    return a0->field_60->field_188(a0);
}

