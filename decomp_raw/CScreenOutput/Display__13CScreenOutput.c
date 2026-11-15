// Display__13CScreenOutput @0x16ce30 size=600
typedef struct st_56ce30_3 {
    char padding_0[124];
    struct st_56ce30_4 *field_7c;
} st_56ce30_3;

typedef struct st_56ce30_4 {
    struct st_56ce30_2 *field_0;
} st_56ce30_4;

typedef struct st_56ce30_2 {
    char padding_0[520];
    unsigned int field_208;
} st_56ce30_2;

typedef struct st_56ce30_0 {
    char field_0;
    char padding_1[515];
    short field_204;
    short field_206;
    short field_208;
    short field_20a;
    short field_20c;
    short field_20e;
} st_56ce30_0;

typedef struct st_56ce30_1 {
    unsigned int field_0;
} st_56ce30_1;

extern int g_5aeddc;
extern st_56ce30_1 *g_616878;
extern st_56ce30_1 *g_61687c;
extern st_56ce30_1 *g_616880;
extern st_56ce30_1 *g_616888;
extern st_56ce30_1 *g_616898;
extern st_56ce30_1 *g_6168b4;
extern st_56ce30_1 *g_6168d4;
extern st_56ce30_1 *g_61698c;
extern st_56ce30_3 *g_62468c;

unsigned int Display__13CScreenOutput(st_56ce30_0 *a0)
{
    unsigned int v0;  // eax
    st_56ce30_3 *v1;  // eax
    st_56ce30_2 **v2;  // eax
    st_56ce30_3 *v3;  // eax
    st_56ce30_2 **v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax

    v0 = sub_488af0(a0, &g_5aeddc);
    if (!v0)
        return v0;
    if (!g_61698c())
    {
        if (!g_61698c() && !(v1 = g_62468c, !g_62468c && !(v1 = g_6168d4(0), v1)))
            v2 = v1->field_7c;
        else
            v2 = NULL;
        if (!v2)
            goto LABEL_56cead;
        if (!g_61698c() && !(v3 = g_62468c, !g_62468c && !(v3 = g_6168d4(0), v3)))
            v4 = v3->field_7c;
        else
            v4 = NULL;
        g_616878(1, 23, 0, *v4->field_208);
        g_616880(29);
        g_616880(a0->field_20e);
        g_616888(a0->field_204);
        g_616888(a0->field_206);
        g_616880(0);
        g_616880(a0->field_208);
        g_616880(a0->field_20a);
        g_616880(a0->field_20c);
        g_616880(1);
        g_616880(0);
        g_616880(0);
        g_616880(0xff);
        g_616880(1);
        g_616888(1);
        g_616888(1);
        g_616888(0x400);
        g_616898(a0);
        v5 = g_61687c(a0);
    }
    else
    {
LABEL_56cead:
        v5 = g_6168b4(1, a0);
    }
    v6 = _INSERT(v5, 0, 0);
    a0->field_0 = 0;
    return v6;
}

