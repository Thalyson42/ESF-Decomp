// RemoveAllItems__11CBasePlayeri @0xf3ab0 size=124
typedef struct st_4f3ab0_1 {
    struct st_4f3ab0_0 *field_0;
    char padding_4[1880];
    unsigned int field_75c;
} st_4f3ab0_1;

typedef struct st_4f3ab0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4f3ab0_0;

typedef struct st_4f3ab0_2 {
    unsigned int field_0;
} st_4f3ab0_2;

extern unsigned int gmsgSensuBean;
extern st_4f3ab0_2 *g_616878;
extern st_4f3ab0_2 *g_61687c;
extern st_4f3ab0_2 *g_616880;

int RemoveAllItems__11CBasePlayeri(st_4f3ab0_1 *a0, int a1)
{
    sub_48cfe0(a0, a1);
    a0->field_75c = 0;
    g_616878(1, gmsgSensuBean, 0, a0->field_0->field_208);
    g_616880(0);
    return g_61687c(0);
}

