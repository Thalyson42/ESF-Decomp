// UTIL_IsValidPlayer__FP11CBasePlayerbT1 @0x179b90 size=235
typedef struct st_579b90_1 {
    char padding_0[140];
    struct st_579b90_2 *field_8c;
    char padding_90[20];
    struct st_579b90_2 *field_a4;
} st_579b90_1;

typedef struct st_579b90_2 {
    unsigned int field_0;
} st_579b90_2;

typedef struct st_579b90_0 {
    char padding_0[420];
    char field_1a4;
    char field_1a5;
    char padding_1a6[42];
    unsigned int field_1d0;
} st_579b90_0;

typedef struct st_579b90_3 {
    struct st_579b90_0 *field_0;
    char padding_4[92];
    struct st_579b90_1 *field_60;
    char padding_64[708];
    unsigned int field_328;
} st_579b90_3;

typedef struct st_579b90_4 {
    char padding_0[152];
    unsigned int field_98;
} st_579b90_4;

extern int g_5b085c;
extern st_579b90_4 *gpGlobals;
extern char BotManager+3402;

char UTIL_IsValidPlayer__FP11CBasePlayerbT1(st_579b90_3 *a0, char a1, char a2)
{
    char v0;  // [bp-0x5]

    if (a0 && a0->field_0 && !(char)IsNull(a0))
    {
        if (a2 && BotManager+3402)
        {
            v0 = 0;
            if (!a0->field_60->field_a4(a0))
                v0 = (a0->field_0->field_1a5 & 32) != 0;
            if (v0)
                goto LABEL_579c0e;
        }
        else
        {
LABEL_579c0e:
            if (strcmp@GLIBC_2.0(a0->field_0->field_1d0 + gpGlobals->field_98, &g_5b085c) && (!a1 || a0->field_60->field_8c(a0) && !a0->field_328) && a0->field_0->field_1a4 & 8)
                return 1;
        }
    }
    return 0;
}

