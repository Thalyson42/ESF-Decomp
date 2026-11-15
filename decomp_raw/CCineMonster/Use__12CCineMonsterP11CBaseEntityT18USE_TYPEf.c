// Use__12CCineMonsterP11CBaseEntityT18USE_TYPEf @0x114ba0 size=145
typedef struct st_514ba0_1 {
    unsigned int field_0;
} st_514ba0_1;

typedef struct st_514ba0_0 {
    char padding_0[76];
    struct st_514ba0_1 *field_4c;
} st_514ba0_0;

typedef struct st_514ba0_2 {
    char padding_0[96];
    struct st_514ba0_0 *field_60;
} st_514ba0_2;

typedef struct st_514ba0_3 {
    float field_0;
    char padding_4[668];
    unsigned int field_2a0;
} st_514ba0_3;

extern char CineThink__12CCineMonster;
extern st_514ba0_3 *gpGlobals;

unsigned int * Use__12CCineMonsterP11CBaseEntityT18USE_TYPEf(float idx)
{
    st_514ba0_2 *v1;  // edx
    unsigned int *v2;  // eax

    v1 = sub_488810(*(unsigned int *)&idx + 272);
    v2 = NULL;
    if (v1)
        v2 = v1->field_60->field_4c(v1);
    if (!v2)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 12) = 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &CineThink__12CCineMonster;
        v2 = gpGlobals;
        *(float *)(*(int *)idx + 260) = gpGlobals->field_0;
    }
    else if (v2[168])
    {
        v2 = gpGlobals;
        *(float *)(*(unsigned int *)&idx + 712) = (float)(0.05 + gpGlobals->field_0);
    }
    return v2;
}

