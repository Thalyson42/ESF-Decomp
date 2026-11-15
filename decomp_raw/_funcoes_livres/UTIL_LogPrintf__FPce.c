// UTIL_LogPrintf__FPce @0x135030 size=79
typedef struct st_535030_0 {
    unsigned int field_0;
} st_535030_0;

extern st_535030_0 *g_6168b4;
extern int string.1895;

int UTIL_LogPrintf__FPce(int a0)
{
    char v0;  // [bp+0x8]

    sub_488160(&string.1895, a0, &v0);
    return g_6168b4(5, "%s", &string.1895);
}

