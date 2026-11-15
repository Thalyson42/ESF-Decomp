// UTIL_ScreenFadeWrite__FRC10ScreenFadeP11CBaseEntity @0x132390 size=252
typedef struct st_532390_1 {
    char padding_0[164];
    struct st_532390_2 *field_a4;
} st_532390_1;

typedef struct st_532390_2 {
    unsigned int field_0;
} st_532390_2;

typedef struct st_532390_0 {
    char padding_0[520];
    unsigned int field_208;
} st_532390_0;

typedef struct st_532390_3 {
    struct st_532390_0 *field_0;
    char padding_4[92];
    struct st_532390_1 *field_60;
} st_532390_3;

typedef struct st_532390_4 {
    unsigned short field_0;
    unsigned short field_2;
    short field_4;
    char field_6;
    char field_7;
    char field_8;
    char field_9;
} st_532390_4;

extern unsigned int gmsgFade;
extern st_532390_2 *g_616878;
extern st_532390_2 *g_61687c;
extern st_532390_2 *g_616880;
extern st_532390_2 *g_616888;

unsigned int UTIL_ScreenFadeWrite__FRC10ScreenFadeP11CBaseEntity(st_532390_4 *a0, st_532390_3 *a1)
{
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0x2c]

    if (!a1)
        return v2;
    v1 = a1->field_60->field_a4(a1);
    if (!v1)
        return v1;
    g_616878(1, gmsgFade, 0, a1->field_0->field_208);
    g_616888(a0->field_0);
    g_616888(a0->field_2);
    g_616888(a0->field_4);
    g_616880(a0->field_6);
    g_616880(a0->field_7);
    g_616880(a0->field_8);
    v0 = a0->field_9;
    g_616880(v0);
    return g_61687c(v0);
}

