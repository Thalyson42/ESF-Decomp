// NextLevel__Fv @0x12e410 size=315
typedef struct st_52e410_2 {
    char padding_0[260];
    float field_104;
} st_52e410_2;

typedef struct st_52e410_3 {
    struct st_52e410_2 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[240];
    unsigned int field_104;
    unsigned short field_108;
} st_52e410_3;

typedef struct st_52e410_1 {
    float field_0;
    char padding_4[8];
    unsigned int field_c;
} st_52e410_1;

typedef struct st_52e410_0 {
    unsigned int field_0;
} st_52e410_0;

extern char ExecuteChangeLevel__12CChangeLevel;
extern unsigned int g_fGameOver;
extern st_52e410_0 *g_6167f8;
extern st_52e410_0 *g_6168cc;
extern st_52e410_0 *g_6168d8;
extern st_52e410_1 *gpGlobals;
extern int st_szNextMap;

unsigned int NextLevel__Fv(void)
{
    unsigned int v1;  // esi
    unsigned int v2;  // edi
    unsigned int v3;  // eax
    st_52e410_3 *v4;  // edi
    st_52e410_2 *v5;  // esi

    v1 = g_6167f8(0, "classname", "trigger_changelevel");
    v2 = 0;
    if (!v1 || !g_6168d8(v1))
        v2 = 1;
    if (v2)
    {
        v3 = g_6168cc("start");
        gpGlobals->field_c = v3;
        v4 = sub_48b830(0);
        v4->field_104 = 1918989427;
        v4->field_108 = 116;
    }
    else
    {
        v4 = sub_48b830((!v1 ? 0 : v1 + 128));
    }
    sub_48e110(&st_szNextMap, &v4->field_104);
    g_fGameOver = 1;
    v5 = v4->field_0;
    if (v5->field_104 < gpGlobals->field_0)
    {
        v4->field_c = 0xffff0000;
        v4->field_10 = &ExecuteChangeLevel__12CChangeLevel;
        v5->field_104 = (float)(0.1 + gpGlobals->field_0);
    }
    return 0xffff0000;
}

