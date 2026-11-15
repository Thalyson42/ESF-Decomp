// _._13CKameTorpTask @0x151c80 size=139
typedef struct st_551c80_2 {
    char padding_0[8];
    struct st_551c80_0 *field_8;
    struct st_551c80_1 *field_c;
    char padding_10[4];
    unsigned int field_14;
} st_551c80_2;

typedef struct st_551c80_0 {
    char padding_0[2796];
    float field_aec;
    char field_af0;
} st_551c80_0;

typedef struct st_551c80_1 {
    char padding_0[513];
    char field_201;
} st_551c80_1;

typedef struct st_551c80_4 {
    float field_0;
} st_551c80_4;

typedef struct st_551c80_3 {
    unsigned int field_0;
} st_551c80_3;

extern char __vt_13CKameTorpTask;
extern st_551c80_3 *g_engfuncs.pfnRandomFloat;
extern st_551c80_4 *gpGlobals;

int _._13CKameTorpTask(double a0, st_551c80_2 *a1, int a2)
{
    a1->field_14 = &__vt_13CKameTorpTask;
    a1->field_c->field_201 = a1->field_c->field_201 | 8;
    a1->field_8->field_af0 = 0;
    g_engfuncs.pfnRandomFloat(22.0f, 42.0f);
    a1->field_8->field_aec = (float)(22.0 + *(float *)gpGlobals);
    return _._9CBaseTask(a1, a2);
}

