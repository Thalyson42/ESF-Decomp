// Entity_FieldInit__FP7delta_s @0xa2660 size=202
typedef struct st_4a2660_0 {
    unsigned int field_0;
} st_4a2660_0;

extern unsigned int g_5b8260;
extern char g_5b8264;
extern unsigned int g_5b8284;
extern char g_5b8288;
extern unsigned int g_5b82a8;
extern char g_5b82ac;
extern unsigned int g_5b82cc;
extern char g_5b82d0;
extern unsigned int g_5b82f0;
extern char g_5b82f4;
extern unsigned int g_5b8314;
extern st_4a2660_0 *g_6169d0;

int Entity_FieldInit__FP7delta_s(unsigned int a0)
{
    g_5b8260 = g_6169d0(a0, "origin[0]");
    g_5b8284 = g_6169d0(a0, &g_5b8264);
    g_5b82a8 = g_6169d0(a0, &g_5b8288);
    g_5b82cc = g_6169d0(a0, &g_5b82ac);
    g_5b82f0 = g_6169d0(a0, &g_5b82d0);
    g_5b8314 = g_6169d0(a0, &g_5b82f4);
    return g_5b8314;
}

