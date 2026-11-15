// UTIL_ShowMessage__FPCcP11CBaseEntity @0x132cd0 size=126
typedef struct st_532cd0_1 {
    char padding_0[164];
    struct st_532cd0_2 *field_a4;
} st_532cd0_1;

typedef struct st_532cd0_2 {
    unsigned int field_0;
} st_532cd0_2;

typedef struct st_532cd0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_532cd0_0;

typedef struct st_532cd0_3 {
    struct st_532cd0_0 *field_0;
    char padding_4[92];
    struct st_532cd0_1 *field_60;
} st_532cd0_3;

extern unsigned int gmsgHudText;
extern st_532cd0_2 *g_616878;
extern st_532cd0_2 *g_61687c;
extern st_532cd0_2 *g_616898;

unsigned int UTIL_ShowMessage__FPCcP11CBaseEntity(unsigned int a0, st_532cd0_3 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (!a1)
        return v1;
    v0 = a1->field_60->field_a4(a1);
    if (!v0)
        return v0;
    g_616878(1, gmsgHudText, 0, a1->field_0->field_208);
    g_616898(a0);
    return g_61687c(a0);
}

