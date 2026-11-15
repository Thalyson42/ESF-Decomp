// FollowerUse__12CTalkMonsterP11CBaseEntityT18USE_TYPEf @0x127430 size=235
typedef struct st_527430_4 {
    char padding_0[160];
    struct st_527430_2 *field_a0;
} st_527430_4;

typedef struct st_527430_2 {
    unsigned int field_0;
} st_527430_2;

typedef struct st_527430_0 {
    char padding_0[417];
    char field_1a1;
} st_527430_0;

typedef struct st_527430_1 {
    char padding_0[500];
    struct st_527430_2 *field_1f4;
    struct st_527430_2 *field_1f8;
} st_527430_1;

typedef struct st_527430_3 {
    struct st_527430_0 *field_0;
    char padding_4[92];
    struct st_527430_1 *field_60;
    char padding_64[484];
    char field_248;
    char padding_249[95];
    char field_2a8;
    char padding_2a9[83];
    float field_2fc;
} st_527430_3;

typedef struct st_527430_5 {
    char padding_0[96];
    struct st_527430_4 *field_60;
} st_527430_5;

extern st_527430_2 *g_6168b4;
extern st_527430_2 *gpGlobals;

unsigned int FollowerUse__12CTalkMonsterP11CBaseEntityT18USE_TYPEf(st_527430_3 *a0, unsigned int a1, st_527430_5 *a2)
{
    unsigned int v0;  // eax

    if (a0->field_2fc > *(float *)gpGlobals)
    {
        return v0;
    }
    else if (!a2)
    {
        return v0;
    }
    else if (!a2->field_60->field_a0(a2))
    {
        return v0;
    }
    else if (a0->field_0->field_1a1 & 1)
    {
        v0 = a0->field_60->field_1f8(a0);
        return v0;
    }
    else if (sub_488df0(a0))
    {
        sub_48b200(a0, a2, 1);
        if (!(a0->field_248 & 1))
        {
            sub_48aae0(a0, a2);
            a0->field_2a8 = a0->field_2a8 | 8;
            return v0;
        }
        g_6168b4(1, "I'm not following you, you evil person!\n");
        return v0;
    }
    else
    {
        a0->field_60->field_1f4(a0, 1);
        return v0;
    }
}

