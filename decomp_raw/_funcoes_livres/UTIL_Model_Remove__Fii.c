// UTIL_Model_Remove__Fii @0x134900 size=132
typedef struct st_534900_0 {
    unsigned int field_0;
} st_534900_0;

extern unsigned int gmsgManipModel;
extern st_534900_0 *g_616878;
extern st_534900_0 *g_61687c;
extern st_534900_0 *g_616880;
extern st_534900_0 *g_616888;

int UTIL_Model_Remove__Fii(unsigned int a0, int a1)
{
    int v0;  // edi

    v0 = a1;
    if (v0 <= 10)
    {
        v0 = 11;
    }
    else if (v0 > 16)
    {
        v0 = 16;
    }
    g_616878(2, gmsgManipModel, 0, 0);
    g_616880(v0);
    g_616888(a0);
    return g_61687c();
}

