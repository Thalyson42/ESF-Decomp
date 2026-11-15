// UTIL_Model_MeleeStruggle__Fii @0x134bc0 size=123
typedef struct st_534bc0_0 {
    unsigned int field_0;
} st_534bc0_0;

extern unsigned int gmsgManipModel;
extern st_534bc0_0 *g_616878;
extern st_534bc0_0 *g_61687c;
extern st_534bc0_0 *g_616880;
extern st_534bc0_0 *g_616888;

int UTIL_Model_MeleeStruggle__Fii(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_616878(2, gmsgManipModel, 0, 0, v0, v1, v2);
    g_616880(5);
    g_616888(a0);
    g_616888(a1);
    return g_61687c(a1);
}

