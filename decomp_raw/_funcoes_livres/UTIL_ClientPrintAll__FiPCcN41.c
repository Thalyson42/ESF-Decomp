// UTIL_ClientPrintAll__FiPCcN41 @0x1328b0 size=228
typedef struct st_5328b0_0 {
    unsigned int field_0;
} st_5328b0_0;

extern unsigned int gmsgTextMsg;
extern st_5328b0_0 *g_616878;
extern st_5328b0_0 *g_61687c;
extern st_5328b0_0 *g_616880;
extern st_5328b0_0 *g_616898;

int UTIL_ClientPrintAll__FiPCcN41(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_616878(2, gmsgTextMsg, 0, 0, v0, v1, v2);
    g_616880(a0);
    g_616898(a1);
    if (a2)
        g_616898(a2);
    if (a3)
        g_616898(a3);
    if (a4)
        g_616898(a4);
    if (a5)
        g_616898(a5);
    return g_61687c();
}

