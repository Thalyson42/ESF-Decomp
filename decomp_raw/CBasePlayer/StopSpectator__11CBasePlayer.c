// StopSpectator__11CBasePlayer @0xf0e20 size=201
typedef struct st_4f0e20_0 {
    struct st_4f0e20_1 *field_0;
    char padding_4[1924];
    char field_788;
    char padding_789[423];
    char field_930;
} st_4f0e20_0;

typedef struct st_4f0e20_1 {
    char padding_0[520];
    unsigned int field_208;
    char padding_20c[56];
    unsigned int field_244;
    unsigned int field_248;
} st_4f0e20_1;

typedef struct st_4f0e20_2 {
    unsigned int field_0;
} st_4f0e20_2;

extern unsigned int gmsgSpectator;
extern st_4f0e20_2 *g_616878;
extern st_4f0e20_2 *g_61687c;
extern st_4f0e20_2 *g_616880;
extern st_4f0e20_2 *g_6168dc;

unsigned int * StopSpectator__11CBasePlayer(st_4f0e20_0 *a0)
{
    unsigned int *v0;  // eax
    unsigned int v1;  // eax
    unsigned int *v2;  // eax
    unsigned int *v3;  // eax

    v0 = a0->field_0;
    if (!v0[145] && !v0[146])
        return v0;
    g_616878(2, gmsgSpectator, 0, 0);
    v1 = g_6168dc(a0->field_0->field_208);
    g_616880(v1);
    g_616880(0);
    g_61687c();
    v2 = a0->field_0;
    v2[146] = 0;
    v2[145] = 0;
    v3 = sub_48d960(&a0->field_788, 0);
    a0->field_930 = a0->field_930 & 246;
    return v3;
}

