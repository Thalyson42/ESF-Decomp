// RopeTouch__9CPendulumP11CBaseEntity @0x934f0 size=156
typedef struct st_4934f0_3 {
    char padding_0[160];
    struct st_4934f0_4 *field_a0;
} st_4934f0_3;

typedef struct st_4934f0_0 {
    char padding_0[400];
    unsigned int field_190;
} st_4934f0_0;

typedef struct st_4934f0_2 {
    struct st_4934f0_0 *field_0;
} st_4934f0_2;

typedef struct st_4934f0_4 {
    unsigned int field_0;
} st_4934f0_4;

typedef struct st_4934f0_1 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    struct st_4934f0_2 *field_28;
    char padding_2c[220];
    unsigned int field_108;
    char padding_10c[252];
    unsigned int field_208;
} st_4934f0_1;

typedef struct st_4934f0_5 {
    struct st_4934f0_1 *field_0;
    char padding_4[92];
    struct st_4934f0_3 *field_60;
} st_4934f0_5;

extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern st_4934f0_2 *g_vecZero+8;
extern st_4934f0_4 *g_engfuncs.pfnAlertMessage;

st_4934f0_0 ** RopeTouch__9CPendulumP11CBaseEntity(st_4934f0_0 **a0, st_4934f0_5 *a1)
{
    st_4934f0_1 *v0;  // esi
    st_4934f0_0 **v1;  // eax

    v0 = a1->field_0;
    if (!a1->field_60->field_a0(a1))
    {
        v1 = g_engfuncs.pfnAlertMessage(1, "Not a client\n");
    }
    else
    {
        v1 = a0;
        if (v0->field_208 != *v1->field_190)
        {
            *v1->field_190 = a1->field_0->field_208;
            v0->field_20 = g_vecZero;
            v0->field_24 = g_vecZero+4;
            v1 = g_vecZero+8;
            v0->field_28 = g_vecZero+8;
            v0->field_108 = 0;
        }
    }
    return v1;
}

